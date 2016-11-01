/********************************************************************************
 *	文件名：	Obj_Character_Light.cs
 *	全路径：	\Script\Obj\Obj_Character_Light.cs
 *	创建人：	李嘉
 *	创建时间：2014-10-27
 *
 *	功能说明：游戏逻辑Obj_Character类的轻功技能部分
 *	          注意，这个轻功是玩家主动触发的类似技能，和之前的轻功点完全两套逻辑，不要混淆
 *	修改记录：
*********************************************************************************/

using Module.Log;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Scene;
using Games.GlobeDefine;

namespace Games.LogicObj
{
    public partial class Obj_Character : Obj
    {
        private bool m_bIsLightState;       //是否为轻功状态
        public bool IsLightState
        {
            get { return m_bIsLightState; }
            set { m_bIsLightState = value;} 
        }

        //private bool m_bIsLightSecondStepState;     //是否激活轻功二段状态
        //private bool m_bIsLightSecondStepActived;    //是否已经激活过二段状态

        private float m_fLightStartTime;                //技能开始时间
        private float m_fLightLastTime;                 //技能持续时间

        private BattleSoulMaker m_battleSoul = null;    //残影特效组件
        public BattleSoulMaker BattleSoul
        {
            get { return m_battleSoul; }
            set { m_battleSoul = value; }
        }

        private float m_fTotalLightHightRefix = 0.0f;
        private float m_fLightWantHight = 0f; // 轻功使用中预计的最高点高度(因为现在是正弦曲线,如果起跳点和落点距离很近的话,最好不要太高)

        private bool m_bTeleMoveInLight = false;            //在轻功状态下强制进行移动，用以处理庆功过程中被击退或者拉走的情况
        private Vector3 m_vecLightTelePos = Vector3.zero;   //在轻功状态下强制进行移动的目标点
        //public bool IsLightCanUseSencondStep()      //是否可以激活二段跳
        //{
        //    if (!m_bIsLightState)
        //    {
        //        return false;
        //    }
        //    else if (m_bIsLightSecondStepState && !m_bIsLightSecondStepActived)
        //    {
        //        //在轻功状态，二段跳已经进入，并且没有出发过二段跳，则返回true
        //        return true; 
        //    }

        //    return false;
        //}

        private Vector3 m_LightSkillTargetPos = Vector3.zero;
        public Vector3 LightSkillTargetPos
        {
            get { return m_LightSkillTargetPos; }
            set { m_LightSkillTargetPos = value; } 
        }
        
        //开始使用轻功技能
        public void PlayLightSkill(Vector3 dstPos, int nStep)
        {
            //首先判断是否为二段跳
            //if (IsLightState && m_bIsLightSecondStepState)
            //{
            //    m_bIsLightSecondStepActived = true;
            //}

            //暂时只支持一段跳
            if (nStep != 1)
                return;
                 
            //判断场景内是否可以使用轻功
            Tab_SceneClass sceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
            if (null != sceneClass && sceneClass.IsCanUseLight != 1)
                return;

            Tab_LightSkill lightSkill = TableManager.GetLightSkillByID(nStep, 0);
            if (null == lightSkill)
                return;
                        
            //设置开始时间和持续时间
            m_fLightStartTime = Time.time;
            //将目标点的Y进行赋值，由于不考虑落差，所以先按照当前点的y值进行计算
            if (null != ObjTransform)
            {
                Vector3 targetPos = new Vector3(dstPos.x, ActiveScene.GetTerrainPosition(dstPos).y, dstPos.z);
                
                if (BaseAttr.MoveSpeed > 0)
                {
                    Vector2 vecSrc = new Vector2(ObjTransform.position.x, ObjTransform.position.z);
                    Vector2 vecDst = new Vector2(dstPos.x, dstPos.z);
                    m_fLightLastTime = Vector2.Distance(vecSrc, vecDst) / BaseAttr.MoveSpeed;
                    
                    if (BaseAttr.MoveSpeed > 5.0f)
                    { // 如果客户端因为乘骑,加速等,速度大于5,则按5的速度计算轻功所需时间
                        m_fLightLastTime = Vector2.Distance(vecSrc, vecDst) / 5.0f; // 轻功一律按照5的速度算
                    }
                    m_fLightWantHight = 0.1f + (Vector2.Distance(vecSrc, vecDst) / 3f); // 计算轻功最高的高度,防止距离短但是飞的高
                    if (m_fLightWantHight < 0.1f)
                        m_fLightWantHight = 0.1f;
                    if (m_fLightWantHight > 3)
                        m_fLightWantHight = 3;
                }

                m_fMoveSpeed = BaseAttr.MoveSpeed;

                if (m_fLightLastTime <= 0 || m_fLightLastTime > 5.0f)
                    m_fLightLastTime = 5.0f;        //否则给默认值5秒,和服务器的最长时间相同

                StartLightSkillMove(lightSkill.AnimId, targetPos);

                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER && null != SkillBarLogic.Instance())
                {
                    //SkillBarLogic.Instance().BeginLightCD();
                }
            }
        }

        //开始进行轻功移动
        private void StartLightSkillMove(int nAnimID, Vector3 vecTargetPos)
        {
            IsLightState = true;
            m_fTotalLightHightRefix = 0.0f;
            //首先屏蔽掉NavMesh和胶囊碰撞
            if (null != NavAgent && NavAgent.enabled)
            {
                NavAgent.enabled = false;
            }

            //面向目标点
            FaceTo(vecTargetPos);

            //皆为直线运动，所以直接底层MoveTo即可
            MoveTo(vecTargetPos, null, 0.0f);

            if (null != AnimLogic)
            {
                AnimLogic.Stop();
                AnimLogic.Play(nAnimID);
            }

            if (null != ObjEffectController)
            {
                ObjEffectController.PlayEffect(GlobeVar.LIGHT_SKILL_EFFECT);
            }

            m_LightSkillTargetPos = vecTargetPos;

            //开启拖尾特效
            //ShowLightShadowEffect(true);
			

            //主角的话播放音效
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                if (null != GameManager.gameManager.SoundManager)
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffect(149);
                }

				//打开拖尾特效
                if (null != ObjEffectController)
                {
                    ObjEffectController.PlayEffect(GlobeVar.LIGHT_SKILL_TAIL);
                }
            }
        }

        public void EndLightSkillMove()
        {
            if (false == m_bIsLightState || m_LightSkillTargetPos == Vector3.zero)
                return; // 不能重复进入停止轻功
            //一旦进入End，则没有机会触发二段跳，重置所有标记位
            m_bIsLightState = false;
            m_fMoveSpeed = 5.0f;
            //m_bIsLightSecondStepState = false;
            //m_bIsLightSecondStepActived = false;

            StopMove();
            if (AnimLogic!=null && AnimLogic.CurAnimData != null &&
                AnimLogic.CurAnimData.AnimID != (int)CharacterDefine.CharacterAnimId.LIGHTSKILLEND) // TT 10240,修复落地动画播放不完全bug [12/16/2014 yuxiaoxi]
            {
                AnimLogic.Stop();
            }
           

            //有可能在空中，所以要恢复一下
            if (ObjTransform != null)
            {
                if (Mathf.Abs(ObjTransform.position.y - ActiveScene.GetTerrainPosition(ObjTransform.position).y) > 1.0f )
                {
                    Vector3 pos = new Vector3(ObjTransform.position.x, ActiveScene.GetTerrainPosition(ObjTransform.position).y, ObjTransform.position.z);
                    ObjTransform.position = pos;
                }

                try
                { // 尝试找一下跟目标点是否有路径,如果异常,就是发生了人在非行走区域,这时候,我要把人强制拽到目标点
                    NavMeshHit hit;
                    bool bhit = NavMesh.SamplePosition(ObjTransform.position, out hit, 1f, 1);
                    if (bhit == false)
                    { // 经检查,玩家落点不在navmesh上,则射线发射出去到目标点找一个点,如果能找到,则使用找到的点,如果找不到,则直接目标点
                        bhit = NavMesh.SamplePosition(ObjTransform.position, out hit, 5f, 1);
                        if (bhit == false)
                        { // 5m检测没有找到,直接放到最终点,虽然可能闪,但是没问题
                            ObjTransform.position = new Vector3(
                                m_LightSkillTargetPos.x,
                                ActiveScene.GetTerrainPosition(m_LightSkillTargetPos).y,
                                m_LightSkillTargetPos.z
                                );
                        }
                        else
                        { // 找到了
                            ObjTransform.position = hit.position;
                        }
                    }
                }
                catch (System.Exception ex)
                {
                    LogModule.ErrorLog("EndLightSkillMove System.Exception ex " + ex.ToString());
                }
                finally
                {
                    LogModule.ErrorLog("!!!!!!!EndLightSkillMove finally!!!!!!!!");
                }
            }


            // begin 注意:m_LightSkillTargetPos是目标点,但是不是轻功的最终结束点,因为如果中途被减速,这个店并没有修正,所以下面一段代码不能执行 [12/27/2014 yuxiaoxi]
            //if (Vector3.Distance(ObjTransform.position, m_LightSkillTargetPos) >= 3.0f &&
            //    m_LightSkillTargetPos != Vector3.zero)
            //{ // 如果结束后的玩家坐标点和目标点差距太大,则直接拽到目标点
            //    ObjTransform.position = new Vector3(
            //        m_LightSkillTargetPos.x,
            //        ActiveScene.GetTerrainPosition(m_LightSkillTargetPos).y,
            //        m_LightSkillTargetPos.z
            //        ); // 既然结束了,强制设到目标点会有什么问题?
            //}
            // end [12/27/2014 yuxiaoxi]

            //恢复寻路和胶囊碰撞
            if (NavAgent)
            {
                NavAgent.enabled = true;
            }

            m_LightSkillTargetPos = Vector3.zero;

            //开启拖尾特效
			//ShowLightShadowEffect(false);

            //主角的话停止播放音效
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                if (null != GameManager.gameManager.SoundManager)
                {
                    GameManager.gameManager.SoundManager.StopSoundEffect(149);
                }

                //关闭拖尾特效
                if (null != ObjEffectController)
                {
                    ObjEffectController.StopEffect(GlobeVar.LIGHT_SKILL_TAIL);
                }
            }

            if (null != ObjEffectController)
            {
                ObjEffectController.StopEffect(GlobeVar.LIGHT_SKILL_EFFECT);
            }
        }

        protected void UpdateLightSkill()
        {
            if (false == m_bIsLightState || m_LightSkillTargetPos == Vector3.zero)
                return;
            if (ObjTransform == null)
                return; // 判空

            m_fMoveSpeed = BaseAttr.MoveSpeed;

            //如果在轻功过程中产生强制移动行为，则进行强制移动的Update，忽略轻功本身的路径
            if (m_bTeleMoveInLight)
            {
                if (Vector3.Distance(m_vecLightTelePos, ObjTransform.position) <= 1.0f)
                {
                    EndLightSkillMove();
                    m_bTeleMoveInLight = false; // 被击退情况结束了,置回来
                }

                return;
            }

            //轻功结束
            //if (Vector3.Distance(m_LightSkillTargetPos, ObjTransform.position) <= 2.0f)
            if (Vector2.Distance(
                new Vector2(m_LightSkillTargetPos.x, m_LightSkillTargetPos.z),
                new Vector2(ObjTransform.position.x, ObjTransform.position.z)
                ) <= 0.5f)
            {
                EndLightSkillMove();
            }
            
            //进行高度修正,目前的轨迹是一条正弦曲线
            if (m_fLightLastTime > 0.0f)
            {
                float timeElps = Time.time - m_fLightStartTime;
                if (timeElps <= m_fLightLastTime)
                {
                    //float fAngle = (timeElps / m_fLightLastTime) * 3.1415f;
                    //float fHeightRefix = Mathf.Cos(fAngle) * 0.1f;

                    ////由于现在地表高度为精确高度，所以发现到达地面的时候则停止轻功
                    //if (fHeightRefix < 0.0f && ObjTransform.position.y < ActiveScene.GetTerrainPosition(ObjTransform.position).y)
                    //{
                    //    EndLightSkillMove();
                    //}

                    ////if (ObjTransform.position.y + fHeightRefix < 8.0f)
                    ////限制高度
                    //if (m_fTotalLightHightRefix >=3.0f && fHeightRefix>0)
                    //{
                    //    fHeightRefix = 0.0f;
                    //}
                    //else if (m_fTotalLightHightRefix < 1.0f && fHeightRefix < 0)
                    //{
                    //    fHeightRefix = 0.0f;
                    //}
                    //m_fTotalLightHightRefix += fHeightRefix;

                    //ObjTransform.position = new Vector3(ObjTransform.position.x, ObjTransform.position.y + fHeightRefix, ObjTransform.position.z);

                    if (m_fLightLastTime == 0)
                        m_fLightLastTime = 0.1f; // 判除零
                    float fAngle = (timeElps / m_fLightLastTime) * 3.1415f;
                    float fHeightRefix = Mathf.Sin(fAngle) * m_fLightWantHight; // 最高距离是3米

                    float old_offsety = m_fTotalLightHightRefix;
                    m_fTotalLightHightRefix = fHeightRefix;

                    float new_y = ObjTransform.position.y - old_offsety + m_fTotalLightHightRefix; // 当前位置,减去上次位置,加上这次位置
                    if (new_y < ActiveScene.GetTerrainPosition(ObjTransform.position).y)
                    { // 如果算出来的位置小于地形高度,则是地形高度
                        new_y = ActiveScene.GetTerrainPosition(ObjTransform.position).y;
                    }

                    ObjTransform.position = new Vector3(
                        ObjTransform.position.x,
                        new_y, 
                        ObjTransform.position.z);
                }
                else
                {
                    EndLightSkillMove();
                }
                float fBeforeTime = 0.35f;
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER || ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    Obj_OtherPlayer _Player = this as Obj_OtherPlayer;
                    if (_Player)
                    {
                        switch (_Player.Profession)
                        {
                            case  (int)CharacterDefine.PROFESSION.SHAOLIN:
                                fBeforeTime = 0.35f;
                                break;
                            case (int)CharacterDefine.PROFESSION.TIANSHAN:
                                fBeforeTime = 0.35f;
                                break;
                            case (int)CharacterDefine.PROFESSION.XIAOYAO:
                                fBeforeTime = 0.35f;
                                break;
                            case (int)CharacterDefine.PROFESSION.DALI:
                                fBeforeTime = 0.35f;
                                break;
                        }
                    }
                }

                if (AnimLogic != null && AnimLogic.CurAnimData != null)
                { // 判空
                    if (AnimLogic.CurAnimData.AnimID != (int)CharacterDefine.CharacterAnimId.LIGHTSKILLEND)
                    {
                        if (m_fLightLastTime - timeElps <= fBeforeTime || Vector3.Distance(m_LightSkillTargetPos, ObjTransform.position) <= 1.75f)
                        {
                            AnimLogic.Stop();
                            AnimLogic.Play((int)CharacterDefine.CharacterAnimId.LIGHTSKILLEND);
                        }
                    }
                }
            }
            
            //暂时屏蔽二段跳
            //如果在轻功状态并且二段跳还未被激活，则判断是否可以进行二段跳跃
            //if (!m_bIsLightSecondStepState && !m_bIsLightSecondStepActived)
            //{
            //    //激活二段跳（只能激活一次）
            //    if (Vector3.Distance(m_LightSkillTargetPos, ObjTransform.position) <= 5.0f)
            //    {
            //        m_bIsLightSecondStepState = true;
            //        m_bIsLightSecondStepActived = false;
            //    }
            //}
        }

        public void BeginTeleMoveInLight(Vector3 targetPos)
        {
            //非轻功状态下不处理
            if (!m_bIsLightState)
                return;

            //设置移动
            m_bTeleMoveInLight = true;
            m_vecLightTelePos = targetPos;

            FaceTo(m_vecLightTelePos);

            //向目标点移动
            MoveTo(m_vecLightTelePos, null, 0);
        }
    }
}
