/********************************************************************************
 *	文件名：	Obj_Character_Action.cs
 *	全路径：	\Script\Obj\Obj_Character_Action.cs
 *	创建人：	李嘉
 *	创建时间：2013-12-3
 *
 *	功能说明：游戏逻辑Obj_Character类的移动相关部分
 *	修改记录：
 *	李嘉 2014-02-19 将原来的obj基类上移作为有动作行为的obj_character，下层添加基类obj
*********************************************************************************/

using System.Security.Permissions;
using Games.SkillModle;
using GCGame;
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Games.Events;
using Games.Animation_Modle;
using GCGame.Table;
using Module.Log;
namespace Games.LogicObj
{
    public partial class Obj_Character : Obj
    {

        #region Obj移动相关
        //obj的移动速度,无NavAgent时使用
        public float m_fMoveSpeed = 5.0f;

        //是否在移动中
        private bool m_bIsMoving;
        public bool IsMoving
        {
            get { return m_bIsMoving; }
            set { m_bIsMoving = value; }
        }

        private bool m_bIsTracing = false;//是否在追踪
        public bool IsTracing
        {
            get { return m_bIsTracing; }
            set { m_bIsTracing = value; }
        }

        //移动的目标点
        private Vector3 m_vecTargetPos;
        public Vector3 VecTargetPos
        {
            get { return m_vecTargetPos; }
            set
            {
                m_vecTargetPos = value;
                m_bIsMoving = true;
            }
        }

        //寻路代理
        private NavMeshAgent m_NavAgent = null;
        public UnityEngine.NavMeshAgent NavAgent
        {
            get { return m_NavAgent; }
            set { m_NavAgent = value; }
        }

        //初始化寻路代理
        public void InitNavAgent()
        {
            //为了确保玩家身上一定挂有NavMeshAgent，先删除对起引用
            NavAgent = null;

            if (NavAgent == null)
            {
                NavAgent = gameObject.GetComponent<NavMeshAgent>();

                //如果玩家没有NavMeshAgent，主动给其绑定
                if (NavAgent == null)
                {
                    NavAgent = gameObject.AddComponent<NavMeshAgent>();
                }
            }

            //初始化自动寻路
            if (null != NavAgent && 0 != gameObject.transform.localScale.x)
            {
                NavAgent.enabled = true;
                //设置成0，否则gameobject之间会互相碰撞
                NavAgent.speed = BaseAttr.MoveSpeed;
                NavAgent.radius = 0.0f;
                NavAgent.height = 2.0f / gameObject.transform.localScale.x;
                NavAgent.acceleration = 10000.0f;
                NavAgent.angularSpeed = 30000.0f;
                NavAgent.autoRepath = false;
                NavAgent.autoBraking = true;
            }
        }

        /// <summary>
        /// 是否可以通过导航找到路径
        /// </summary>
        /// <param name="targetVector3"></param>
        /// <returns></returns>
        public bool IsMoveNavAgent(Vector3 targetVector3)
        {
            if (NavAgent == null) return false;

            return NavAgent.CalculatePath(targetVector3, NavAgent.path);
        }

        private bool m_bIsMoveToNoFaceTo = false; //调用moveto时 是否禁用了朝向旋转
        public bool IsMoveToNoFaceTo
        {
            get { return m_bIsMoveToNoFaceTo; }
            set { m_bIsMoveToNoFaceTo = value; }
        }

        private UniformAcceleratedMotion m_AcceleratedMotion = null; //UniformAcceleratedMotion组件
        public UniformAcceleratedMotion AcceleratedMotion
        {
            get { return m_AcceleratedMotion; }
            set { m_AcceleratedMotion = value; }
        }

        //是否允许移动过程中根据目标点调整方向
        private bool m_EnableMovingRotation = true;
        public void EnableMovingRotation(bool bEnable)
        {
            if (null != NavAgent)
            {
                if (bEnable)
                {
                    NavAgent.angularSpeed = 30000.0f;
                }
                else
                {
                    NavAgent.angularSpeed = 0.0f;
                }
            }

            m_EnableMovingRotation = bEnable;
        }

        //保存路径
        //private PathNodeCollection m_MovePathList = new PathNodeCollection();


        private GameObject m_MoveTarget = null;

        public GameObject MoveTarget
        {
            get { return m_MoveTarget; }
            set
            {
                if (value != m_MoveTarget)
                {
                    m_MoveTarget = value;
                    if (null != m_MoveTarget)
                    {
                        m_moveTargetTrans = m_MoveTarget.transform;
                    }
                    else
                    {
                        m_moveTargetTrans = null;
                    }
                }
            }
        }
        //停止距离
        private float m_fStopRange;
        public float StopRange
        {
            get { return m_fStopRange; }
            set { m_fStopRange = value; }
        }

        //移动结束后触发的事件
        protected GameEvent m_MoveOverEvent;
        public GameEvent MoveOverEvent
        {
            get { return m_MoveOverEvent; }
            set { m_MoveOverEvent = value; }
        }

        //防卡住措施
        private Vector3 m_LastPosition = new Vector3(0, 0, 0);
        private float m_LastPositionTime = 0.0f;

        void ResetMoveOverEvent()
        {
            m_MoveOverEvent.Reset();
        }

        //移动对外接口
        //设置好了目标点和停止距离之后会自动在Update中移动
        public void BeforeMoveTo(bool bIsAutoSearch)
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                //寻路过程中 打断主角的自动战斗状态
                //  Singleton<ObjManager>.GetInstance().MainPlayer.BreakAutoCombatState();

                //如果不是自动寻路，而AutoSearchAgent还在工作的话，则清理自动寻路状态
                if (false == bIsAutoSearch &&
                    null != GameManager.gameManager.AutoSearch &&
                    true == GameManager.gameManager.AutoSearch.IsAutoSearching)
                {
                    GameManager.gameManager.AutoSearch.Stop();
                }
                else if (bIsAutoSearch) //如果是自动寻路 
                {
                    //打断自动挂机状态
                    Singleton<ObjManager>.GetInstance().MainPlayer.BreakAutoCombatState();
                }
            }
            //打断 移动可以打断的技能
            if (m_SkillCore != null)
            {
                if (m_SkillCore.UsingSkillBaseInfo != null &&
                    m_SkillCore.UsingSkillBaseInfo.IsMoveBreak == 1)
                {
                    m_SkillCore.BreakCurSkill();
                }
            }
            if (AnimLogic != null && AnimLogic.CurAnimData != null)
            {
                if (AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.Hit)
                {
                    m_AnimLogic.Stop();
                }
                else if (m_SkillCore != null && m_SkillCore.UsingSkillBaseInfo == null && AnimLogic.CurAnimData.AnimID != GlobeVar.INVALID_ID)
                {
                    int nAnimationId = m_SkillCore.UsingSkillStartAni;
                    while (nAnimationId != GlobeVar.INVALID_ID)
                    {
                        if (nAnimationId == AnimLogic.CurAnimData.AnimID)
                        {
                            m_AnimLogic.Stop();
                            break;
                        }

                        Tab_Animation tabAnimation = TableManager.GetAnimationByID(nAnimationId, 0);
                        if (tabAnimation == null)
                        {
                            break;
                        }

                        nAnimationId = tabAnimation.NextAnimId;
                    }
                }                
            }
        }

        public virtual void MoveTo(Vector3 targetPos, GameObject targetObj = null, float fStopRange = 2.0f, bool bIsAutoSearch = false)
        {
            m_fStopRange = fStopRange;
            //设定寻路目标
            if (null != targetObj)
            {
                MoveTarget = targetObj;
                m_vecTargetPos = targetObj.transform.position;
            }
            else
            {
                MoveTarget = null;
                m_vecTargetPos = targetPos;
            }

            //移动前的操作
            BeforeMoveTo(bIsAutoSearch);

            //如果已经足够近了，就不执行移动
            float fDis = Vector3.Distance(this.Position, m_vecTargetPos);
            float fDiffDis = fDis - fStopRange;

            if (fDiffDis <= 0)
            {
                StopMove();
                ResetMoveOverEvent();
                return;
            }

            //如果存在NavAgent，则由NavAgent进行移动
            if (null != NavAgent && NavAgent.enabled == true)
            {
                NavAgent.stoppingDistance = fStopRange;
                NavAgent.destination = m_vecTargetPos;
                if (IsMoveToNoFaceTo)
                {
                    EnableMovingRotation(false);
                }
            }
            m_bIsMoving = true;
        }

        public void StopMove()
        {
            if (null != NavAgent && NavAgent.enabled == true)
            {
                NavAgent.Stop();
                //如果在moveto时 禁用了旋转 移动结束后 重新置为打开
                if (IsMoveToNoFaceTo)
                {
                    EnableMovingRotation(true);
                    IsMoveToNoFaceTo = false;
                }
            }

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
//                Obj_MainPlayer MainPlayer = this as Obj_MainPlayer;
                //if (MainPlayer.Thirdcontroller != null && MainPlayer.Thirdcontroller.IsMoving)
                //{
                //    CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_WALK;
                //}
                //else
                //{
                    CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
                //}
                //取消地面移动特效
                if (null != GameManager.gameManager.ActiveScene)
                {
                    GameManager.gameManager.ActiveScene.DeactiveMovingCircle();
                }


            }
            else
            {
#if UNITY_ANDROID
                if (ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
#endif
                CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;

#if UNITY_ANDROID
                }
#endif
            }

            //正常结束处理
			bool isPlayerSound = m_bIsMoving;
            m_bIsMoving = false;
            m_bIsTracing = false;
            float fDis = Vector3.Distance(this.Position, m_vecTargetPos);
            if (m_fStopRange - fDis >= 0)
            {
                OnMoveOver();
            }

            //   MoveTarget = null;
            ResetMoveOverEvent();

            //重置移动卡住校验
            m_LastPosition = Vector3.zero;
            m_LastPositionTime = 0;

			Obj_MainPlayer MainPlayer1 = this as Obj_MainPlayer;
			if( MainPlayer1 != null)
			{
				if(isPlayerSound)
				{
					MainPlayer1.PlayerStopMountSound();
					MainPlayer1.PlayerMountStopMoveSound();
				}
			}
        }

        //朝向屏幕
        public void FaceToScreen()
        {
            gameObject.transform.Rotate(new Vector3(0, 145, 0));
        }

        //NPC面向某一点
        public void FaceTo(Vector3 facePos)
        {
            if (!m_EnableMovingRotation)
            {
                return;
            }

            //facePos.y = 0;
            Vector3 lookRot = facePos - m_ObjTransform.position;
            lookRot.y = 0;
            if (lookRot == Vector3.zero)
            {
                return;
            }

            if (null != m_SkillCore && m_SkillCore.IsUsingCrashSkill())
            {
                m_ObjTransform.rotation = Quaternion.LookRotation(lookRot);
                return;
            }
            if (m_SkillCore == null || m_SkillCore.IsUsingSkill == false)//正在使用技能的时候不转向
            {
                m_ObjTransform.rotation = Quaternion.LookRotation(lookRot);
            }
        }

        //Obj向自己的目标点移动
        Transform m_moveTargetTrans = null;

        protected void UpdateTargetMove()
        {
#if UNITY_ANDROID
            OtherPlayerMove();
#else
            //轻功状态特殊处理
            if (IsLightState &&
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER &&
                IsDie() == false)
            {
                if (null != MoveTarget && null != m_moveTargetTrans)
                {
                    m_vecTargetPos = m_moveTargetTrans.localPosition;
                }

                MoveToPosition(m_vecTargetPos, m_fStopRange);
            }
            else if (m_bIsMoving && IsDie() == false)
            {
                CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_WALK;

                if (null != MoveTarget && null != m_moveTargetTrans)
                {
                    m_vecTargetPos = m_moveTargetTrans.localPosition;
                }

                MoveToPosition(m_vecTargetPos, m_fStopRange);
            }
#endif
        }

        /// <summary>
        /// 冲撞移动函数
        /// </summary>
        public void CrashMove()
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                Obj_MainPlayer _mainPlayer = this as Obj_MainPlayer;

                if (null == _mainPlayer)
                {
                    return;
                }

                if (!_mainPlayer.IsHitPoint && null != _mainPlayer.SkillCore && _mainPlayer.SkillCore.IsUsingCrashSkill())
                {
                    //如果已经在移动不处理
                    if (_mainPlayer.IsMoving)
                        return;

                    if (_mainPlayer.SkillCore.LastUseSkillTime < 0)
                        return;


                    Vector3 vecDir = new Vector3(0, 0, 0);
                    float fDir = Utils.DirClientToServer(Rotation);
                    fDir = Utils.NormaliseDirection(fDir);
                    vecDir.x = Mathf.Cos(fDir);
                    vecDir.z = Mathf.Sin(fDir);
                    vecDir = vecDir.normalized;

                    Vector3 movement = vecDir * BaseAttr.MoveSpeed;
                    movement *= Time.deltaTime;
                    if (_mainPlayer.SkillCore.UsingSkillExInfo.SkillContinueTime / 1000.0f - (Time.time - _mainPlayer.SkillCore.LastUseSkillTime) < 0)
                    {
                        return;
                    }
                    Vector3 tarPosition = _mainPlayer.ObjTransform.localPosition + movement * 10;

                    MoveTo(tarPosition,null,0.0f);
                }
            }
        }

        //移动结束后的操作
        protected virtual void OnMoveOver()
        {
        }
        public bool IsInObstacles() //是否卡死在阻挡里
        {
            //获得当前坐标
            if (m_ObjTransform == null)
            {
                return false;
            }
            Vector3 vecPos = m_ObjTransform.position;
            if (BaseAttr.MoveSpeed > 0 &&
                m_LastPositionTime > 0 &&
                Vector3.Distance(m_LastPosition, vecPos) <= 0.2f && //移动距离过短
                Vector3.Distance(m_LastPosition, vecPos) <= BaseAttr.MoveSpeed * (Time.time - m_LastPositionTime) - 0.2f //照当前的移动速度去移动未达到应该的距离
                )
            {
                return true;
            }
            return false;
        }
        //防卡死校验间隔
        static float s_MovingCheckInterval = 0.5f;
        //临时解决 记录上次距离移动目标的距离

        protected void MoveToPosition(Vector3 targetPos, float fStopRange)
        {
            //获得当前坐标
            Vector3 vecPos = m_ObjTransform.position;

            //由于移动其实是在2D平面进行距离判定，所以直接将y置0即可
            float fDistance = Vector2.Distance(new Vector2(vecPos.x, vecPos.z), new Vector2(targetPos.x, targetPos.z));

            //阻挡卡怪问题 上次移动校验和本次移动坐标相同 停止移动
            if (Time.time - m_LastPositionTime > s_MovingCheckInterval)
            {
                //发现两次校验间隔移动距离过小，则停止移动
                if (IsInObstacles())
                {
                    //如果是其他玩家 NPC 则将挪到目标点
                    if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                        ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                    {
                        m_ObjTransform.position = targetPos;
                    }
                    StopMove();
                    return;
                }
                m_LastPositionTime = Time.time;
                m_LastPosition = vecPos;
            }

#if UNITY_ANDROID

            if (ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
#endif
            //判断是否停止移动
            if (fDistance - fStopRange <= 0)
            {
                StopMove();
                return;
            }

            //如果距离小于移动距离则移动到目标点
            if (fDistance - m_fMoveSpeed * Time.deltaTime <= 0)
            {
                m_ObjTransform.position = targetPos;
                StopMove();
                return;
            }

#if UNITY_ANDROID
            }
#endif

            //如果没有使用NavAgent进行移动，则游戏内部逻辑控制移动
            if (null == NavAgent || NavAgent.enabled == false)
            {
                Vector3 vecMovDirction = targetPos - vecPos;
                vecMovDirction = vecMovDirction.normalized;
                vecMovDirction *= m_fMoveSpeed;
                vecMovDirction *= Time.deltaTime;

                Vector3 pos = vecPos + vecMovDirction;
                m_ObjTransform.position = pos;

                //更新朝向
                FaceTo(pos);
            }
        }

        private int m_Tag = 0;
        private void OtherPlayerMove()
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                if (m_bIsMoving && IsDie() == false)
                {
                    if (null != MoveTarget && null != m_moveTargetTrans)
                    {
                        m_vecTargetPos = m_moveTargetTrans.localPosition;
                    }

                    m_Tag = 0;
                    if (!OtherPlayerIsMove(m_vecTargetPos, m_fStopRange))
                    {
                        return;
                    }

                    CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_WALK;
                    MoveToPosition(m_vecTargetPos, m_fStopRange);
                }
                else
                {
                    if (m_Tag <= 0)
                    {
                        CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
                        m_Tag++;
                    }
                }
            }
            else
            {
                if (m_bIsMoving && IsDie() == false)
                {
                    CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_WALK;

                    if (null != MoveTarget && null != m_moveTargetTrans)
                    {
                        m_vecTargetPos = m_moveTargetTrans.localPosition;
                    }

                    MoveToPosition(m_vecTargetPos, m_fStopRange);
                }
            }
        }

        private bool OtherPlayerIsMove(Vector3 targetPos, float fStopRange)
        {
            //获得当前坐标
            Vector3 vecPos = m_ObjTransform.position;

            //由于移动其实是在2D平面进行距离判定，所以直接将y置0即可
            float fDistance = Vector2.Distance(new Vector2(vecPos.x, vecPos.z), new Vector2(targetPos.x, targetPos.z));

            //判断是否停止移动
            if (fDistance - fStopRange <= 0)
            {
                StopMove();
                return false;
            }

            return true;
        }

        #endregion

        #region Obj动作相关

        //眩晕状态
        private bool m_bInDizzy = false;
        public bool InDizzy
        {
            get { return m_bInDizzy; }
            set { m_bInDizzy = value; }
        }

        private Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE m_CurObjAnimState;
        //!!注意 访问 m_CurObjAnimState 时 请使用属性CurObjAnimState访问
        public Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE CurObjAnimState
        {
            get { return m_CurObjAnimState; }
            set
            {
                OnSwithObjAnimState(value);
            }
        }
        //Obj动作文件路径,涉及到在运行中是否需要动态加载动作
        private string m_AnimationFilePath = "";
        public string AnimationFilePath
        {
            get { return m_AnimationFilePath; }
            set { m_AnimationFilePath = value; }
        }

        public float walkMaxAnimationSpeed = 0.75f;

        protected Animation m_Objanimation; //!!!使用前记得判空
        public UnityEngine.Animation Objanimation//!!!使用前记得判空
        {
            get { return m_Objanimation; }

        }

        protected AnimationLogic m_AnimLogic = null;
        public AnimationLogic AnimLogic
        {
            get { return m_AnimLogic; }
            set { m_AnimLogic = value; }
        }

        //初始化动作接口，目前是硬代码，之后会根据配表之类的实现
        public void InitAnimation(string strChildName = "Model")
        {
            if (null == m_AnimLogic)
            {
                return;
            }

            //首先保存该ObjAction的路径
            m_AnimLogic.AnimResFilePath = m_AnimationFilePath;

            //由于目前Obj采用的都是Root作为根节点，而独立挂Model节点，所以动作组件采取搜索子节点方式
            Transform modelTransform = gameObject.transform.FindChild(strChildName);
            if (modelTransform)
            {
                m_Objanimation = modelTransform.gameObject.GetComponent<Animation>();
            }

            if (m_Objanimation)
            {
                m_AnimLogic.InitState(m_Objanimation.gameObject);
            }
            else
            {
                LogModule.DebugLog("The character you would like to control doesn't have animations. Moving her might look weird.");
            }
        }

        protected void UpdateAnimation()
        {
            if (m_AnimLogic == null)
            {
                return;
            }
            if (m_Objanimation == null)
            {
                return;
            }
            m_AnimLogic.AnimationUpdate();

            //添加监控通过


            //没做其他动作了 切换回待机动作
            if (m_Objanimation.isPlaying == false &&
                IsDie() == false)
            {
				if( AnimLogic.CurAnimData != null)
				{
					if(AnimLogic.CurAnimData.AnimID != (int)CharacterDefine.CharacterAnimId.JiaDie)
					{
						CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
					}
				}
            }
        }

        private float m_fLastPlayHitSoundTime = 0; //上次玩家受击音效播放的时间
           private float m_fLastPlayDamageSoundTime = 0; //上次玩家受伤害音效播放的时间
        public void OnSwithObjAnimState(Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE ObjState,bool playEffectImmediately = true)
        {
            if (IsDie() &&
                ObjState != Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_DEATH && //死亡状态
                ObjState != Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_CORPSE && //尸体状态
                ObjState != Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_ATTACKFLY) //死亡击飞状态
            {
                return;
            }
            m_CurObjAnimState = ObjState; //!!此处勿修改
            if (m_Objanimation != null)
            {
                switch (CurObjAnimState)
                {
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR:
                        ProcessIdleAnimState(playEffectImmediately);

                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_WALK:
                        ProcessWalkAnimState();
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_DEATH:
                        ProcessDeathAnimState();
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HIT:
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYSHAOLIN:
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYTIANSHAN:
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYDALI:
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYXIAOYAO:
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYGAIBANG:
                        ProcessHitAnimState();
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_ATTACKDOWN:
                        m_AnimLogic.Stop();
                        m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Knockback_01));
                        //受击特效
                        PlayEffect(8);
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_ATTACKFLY:
                        AnimLogic.Stop();
                        AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Knockback_02);
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_JUMP:
                        {
                            AnimLogic.Stop();
                            AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Jump01);
                        }
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_JUMP_END:
                        {
                            AnimLogic.Stop();
                            AnimLogic.Play((int)CharacterDefine.CharacterAnimId.JumpEnd_Stand);
                        }
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_FASTRUN_LEFT:
                        {
                            AnimLogic.Stop();
                            AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Fastrun_Left);
                        }
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_FASTRUN_RIGHT:
                        {
                            AnimLogic.Stop();
                            AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Fastrun_Right);
                        }
                        break;
                    case Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_CORPSE:
                        {
							ProcessDeathAnimStateEx();
                           // AnimLogic.Stop();
                           // AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Dead);
                        }
                        break;
                    default:
                        break;
                }
            }
        }
        //待机状态处理
        void ProcessIdleAnimState(bool playEffectImmediately = true)
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                // 玩家装备了坐骑
                Obj_MainPlayer MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (MainPlayer.IsDie() == false && MainPlayer.GetEquipMountID() > 0 && MainPlayer.MountObj)
                {
                    m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Stand);
                    MainPlayer.MountObj.PlayMountPlayerAnima(CharacterDefine.MountAction.STAND, MainPlayer);
                }
                else
                {
                    if (MainPlayer.InDizzy)
                    {
                        m_AnimLogic.Stop();
                        m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.DizzyId);
                        return;
                    }

                    if (MainPlayer.InCombat)
                    {
                        m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.AttackStand);
                    }
                    else
                    {
                        m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Stand);
                    }
                }
            }
            else
            {
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    Obj_OtherPlayer OtherPlayer = this as Obj_OtherPlayer;
                    if (OtherPlayer && OtherPlayer.IsDie() == false && OtherPlayer.MountID > 0 && OtherPlayer.MountObj)
                    {
                        m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Stand);
                        OtherPlayer.MountObj.PlayMountPlayerAnima(CharacterDefine.MountAction.STAND, OtherPlayer);
                    }
                    else
                    {
                        if (OtherPlayer.InDizzy)
                        {
                            m_AnimLogic.Stop();
                            m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.DizzyId);
                            return;
                        }
                        m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Stand));
                    }
                       
                }
                else
                {
                    if (this.InDizzy)
                    {
                        m_AnimLogic.Stop();
                        m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.DizzyId);
                        return;
                    }
                    //如果是其他Obj，就需要根据DataID区分是否为战斗型的NPC
                    //非战斗NPC默认播放Stand动作
                    //战斗NPC播放AttackStand动作
                    Tab_RoleBaseAttr roleBaseTab = TableManager.GetRoleBaseAttrByID(BaseAttr.RoleBaseID, 0);
                    if (null != roleBaseTab && roleBaseTab.CombatNPC > 0)
                    {
                        //是战斗NPC，播放AttackStand
                        if (playEffectImmediately)
                        {
                            m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.AttackStand));                            
                        }
                    }
                    else
                    {
                        m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Stand));
                    }
                }
            }
            if (ObjEffectController != null)
            {
                ObjEffectController.OnIdle();
            }
        }

        //战斗状态
        void ProcessCombatAnimState()
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                // 玩家装备了坐骑
                Obj_MainPlayer MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (MainPlayer.IsDie() == false && MainPlayer.GetEquipMountID() > 0 && MainPlayer.MountObj)
                {
                    m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.AttackStand);
                    MainPlayer.MountObj.PlayMountPlayerAnima(CharacterDefine.MountAction.STAND, MainPlayer);
                }
                else
                    m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.AttackStand));
            }
        }
        //行走状态处理
        void ProcessWalkAnimState()
        {
            //移动时 还在播受击动作或者击倒动作 则停止播放
            if (AnimLogic != null &&
                AnimLogic.CurAnimData != null)
            {
                if (AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.Hit ||
                    AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.Knockback_01)
                {
                    m_AnimLogic.Stop();
                }
                if (IsLightState == false && AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.LIGHTSKILLEND)
                {
                    m_AnimLogic.Stop();
                }
            }
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                // 玩家装备了坐骑
                Obj_MainPlayer MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (MainPlayer.IsDie() == false && MainPlayer.GetEquipMountID() > 0 && MainPlayer.MountObj)
                {
                    m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Walk);
                    CharacterDefine.MountAction nMountPlayerAniID = CharacterDefine.MountAction.RUN;
                    if (MainPlayer.GetEquipMountID() == GlobeVar.MOUNT_TIANLONG_ID)
                    {
                        nMountPlayerAniID = CharacterDefine.MountAction.STAND;
                    }
                    MainPlayer.MountObj.PlayMountPlayerAnima(nMountPlayerAniID, MainPlayer);
                }
                else
                    m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Walk));
            }
            else
            {
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    Obj_OtherPlayer OtherPlayer = this.GetComponent<Obj_OtherPlayer>();
                    if (OtherPlayer && OtherPlayer.IsDie() == false && OtherPlayer.MountID > 0 && OtherPlayer.MountObj)
                    {
                        m_AnimLogic.Play((int)CharacterDefine.CharacterAnimId.Walk);
                        CharacterDefine.MountAction nMountPlayerAniID = CharacterDefine.MountAction.RUN;
                        if (OtherPlayer.MountID == GlobeVar.MOUNT_TIANLONG_ID)
                        {
                            nMountPlayerAniID = CharacterDefine.MountAction.STAND;
                        }
                        OtherPlayer.MountObj.PlayMountPlayerAnima(nMountPlayerAniID, OtherPlayer);
                    }
                    else
                        m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Walk));
                }
                else
                    m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Walk));
            }
            if (ObjEffectController != null)
            {
                ObjEffectController.OnMove();
            }
        }

        //有衰减的音效播放，目前用在NPC的受击、死亡音效上
        public void PlaySoundAtPos(Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE ObjType, int nSoundID, Vector3 playingPos)
        {
            if (GameManager.gameManager.SoundManager == null)
            {
                return;
            }

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(nSoundID);
            }
            else
            {
                if (Singleton<ObjManager>.Instance.MainPlayer != null)
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffectAtPos2(nSoundID, playingPos, Singleton<ObjManager>.Instance.MainPlayer.Position);
                }
                else
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffect(nSoundID);
                }
            }
        }

        //行走状态处理
        void ProcessDeathAnimState()
        {
            if (AnimLogic != null && m_Objanimation != null)
            {
                //是否在播放动作
                if (m_Objanimation.isPlaying && AnimLogic.CurAnimData != null)
                {
                    //击飞是不播死亡动画
                    if (AnimLogic.CurAnimData.AnimID != (int)CharacterDefine.CharacterAnimId.Knockback_01 &&
                        AnimLogic.CurAnimData.AnimID != (int)CharacterDefine.CharacterAnimId.Knockback_02)
                    {
                        m_AnimLogic.Stop();
                        m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Die));
                    }
                }
                else
                {
                    m_AnimLogic.Stop();
                    m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Die));
                }
            }
            Tab_RoleBaseAttr roleBaseAttr = TableManager.GetRoleBaseAttrByID(BaseAttr.RoleBaseID, 0);
            if (roleBaseAttr != null)
            {
                Tab_CharModel charModel = TableManager.GetCharModelByID(roleBaseAttr.CharModelID, 0);
                if (charModel != null)
                {
                    int nDeadSoundCount = charModel.getDeadSoundCount();
                    int nRandNum = Random.Range(0, nDeadSoundCount - 1);
                    if (charModel.GetDeadSoundbyIndex(nRandNum) >= 0)
                    {
                        PlaySoundAtPos(ObjType, charModel.GetDeadSoundbyIndex(nRandNum), Position);
                    }
                }
            }
        }

		public void ProcessDeathAnimStateEx()
		{
			if (AnimLogic != null && m_Objanimation != null)
			{
				//是否在播放动作
				if (m_Objanimation.isPlaying && AnimLogic.CurAnimData != null)
				{
					//击飞是不播死亡动画
					if (AnimLogic.CurAnimData.AnimID != (int)CharacterDefine.CharacterAnimId.Knockback_01 &&
					    AnimLogic.CurAnimData.AnimID != (int)CharacterDefine.CharacterAnimId.Knockback_02)
					{
						if( m_AnimLogic.isPlaying())
							return ;

						m_AnimLogic.Stop(); 
						m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Die),null,true);
					}
				}
				else
				{
					if( m_AnimLogic.isPlaying())
						return ;
					m_AnimLogic.Stop();
					m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Die),null,true);
				}
			}
		
		}
        //受击状态处理
        void ProcessHitAnimState()
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
            {
                if (AnimLogic != null && AnimLogic.CurAnimData != null)
                {
                    if (AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.Hit)
                    {
                        m_AnimLogic.Stop();
                    }

                    if (m_Objanimation != null && m_Objanimation.isPlaying && AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.Attack)
                    {
                        return;
                    }

                }

                if (null != m_AnimLogic)
                    m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.Hit));
            }
            else if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW)
            {
                bool isPlay = true;
                Obj_OtherPlayer _otherPlayer = null;
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                {
                    _otherPlayer = this as Obj_OtherPlayer;
                }
                if (_otherPlayer == null)
                {
                    if (null != m_AnimLogic)
                        isPlay = m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.PlayerHit));
                }
                else if (_otherPlayer != null && _otherPlayer.MountID == -1) //骑马就不要播受击动作了
                {
                    if (null != m_AnimLogic)
                        isPlay = m_AnimLogic.Play((int)(CharacterDefine.CharacterAnimId.PlayerHit));
                }
                //玩家播放受击音效
                if (isPlay)
                {
                    if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                        ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                        ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
                    {

                        //受击音效不要太频繁 加个时间间隔
                        if (_otherPlayer != null && Time.time - m_fLastPlayHitSoundTime >= 2)
                        {
                            m_fLastPlayHitSoundTime = Time.time;
                            if (_otherPlayer.Profession == (int)CharacterDefine.PROFESSION.SHAOLIN)
                            {
                                PlaySoundAtPos(ObjType, 5, Position);  //attack1_shaolin
                            }
                            else if (_otherPlayer.Profession == (int)CharacterDefine.PROFESSION.TIANSHAN)
                            {
                                PlaySoundAtPos(ObjType, 177, Position);  //attack1_tianshan
                            }
                            else if (_otherPlayer.Profession == (int)CharacterDefine.PROFESSION.DALI)
                            {
                                PlaySoundAtPos(ObjType, 1, Position);  //attack1_dali
                            }
                            else if (_otherPlayer.Profession == (int)CharacterDefine.PROFESSION.XIAOYAO)
                            {
                                PlaySoundAtPos(ObjType, 7, Position);  //attack1_xiaoyao
                            }
                            else if (_otherPlayer.Profession == (int)CharacterDefine.PROFESSION.GAIBANG)
                            {
                                PlaySoundAtPos(ObjType, 168, Position);  //attack1_gaibang
                            }
                        }
                        //受伤害音效不要太频繁 加个时间间隔
                        //应策划需求，重新放开接口，by lizhe ~~
                        //    if (_otherPlayer != null && Time.time - m_fLastPlayDamageSoundTime >= 1.5f)
                        //{
                        //        m_fLastPlayDamageSoundTime = Time.time;
                        //    PlaySoundAtPos(ObjType, 10, Position);  //common_hurt
                        //}
                    }
                }
            }
            //击中效果跟技能音效分离的处理
            //音量随机
            //float volumeFactor = Random.Range(0.5f, 1.0f);

            //受击特效 主角自己不播放
            if (ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                PlayEffect(8);
            }
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                //受击打断
                if (CollectItemSliderLogic.Instance())
                {
                    UIManager.CloseUI(UIInfo.CollectItemSlider);
                }
            }
        }
        //击飞
        private float m_fAttackFlySpeed = 0.0f;
        private float m_fAttackFlyTime = 0.0f;
        private float m_fAttackFlyMaxHight = 0.0f;
        private float m_fAttckFlyBeginTime = 0.0f;
        private Vector3 m_VecAttcakFlySrc = new Vector3(0, 0, 0);
        private Vector3 m_VecAttcakFlyDst = new Vector3(0, 0, 0);
        private bool m_bIsCanAttckFly = false;
        public void AttackFly(int nDis, int nHight, float fTime)
        {
            if (m_bIsCanAttckFly)
            {
                return;
            }
            if (fTime <= 0)
            {
                return;
            }
            m_fAttackFlySpeed = nDis / fTime; //速度
            m_fAttackFlyTime = fTime;
            m_fAttackFlyMaxHight = nHight;
            Vector3 vecDirect = new Vector3(0, 0, 0);
            float fDir = Utils.DirClientToServer(Rotation);
            fDir = Utils.NormaliseDirection(fDir);
            vecDirect.x = 0 - Mathf.Cos(fDir);
            vecDirect.z = 0 - Mathf.Sin(fDir);
            vecDirect = vecDirect.normalized;//移动方向
            m_VecAttcakFlySrc = m_ObjTransform.position;//起始点
            m_VecAttcakFlyDst = m_ObjTransform.position + vecDirect * m_fAttackFlySpeed * m_fAttackFlyTime; //目的点
            //忽略阻挡前进
//            if (null != NavAgent && NavAgent.enabled)
//            {
//                NavAgent.enabled = false;
//            }
            m_fAttckFlyBeginTime = Time.time;
            m_bIsCanAttckFly = true;
            PlayEffect(121); //击飞特效
        }

        public void UpdateAttckFly()
        {
            if (m_bIsCanAttckFly == false)
            {
                return;
            }
            //计算从轻功开始到结束的流逝时间
            float fElapseTime = Time.time - m_fAttckFlyBeginTime;
            //到达目的地 结束
            if (Vector3.Distance(m_ObjTransform.position, m_VecAttcakFlyDst) < 0.4f || fElapseTime > m_fAttackFlyTime)
            {
                m_ObjTransform.position = m_VecAttcakFlyDst;
                m_bIsCanAttckFly = false;
                return;
            }
            //更新运动轨迹
            Vector3 fMoveDirection = (m_VecAttcakFlyDst - m_VecAttcakFlySrc).normalized;
            //当前点
            Vector3 curPos = m_VecAttcakFlySrc + fMoveDirection * m_fAttackFlySpeed * fElapseTime;
            //击飞动作 本身带有高度变化 这里就不再做Y轴的位移了 美术说会有卡顿的感觉
            //if (m_fAttackFlyMaxHight > 0 && m_fAttackFlyTime > 0)
            //{
            //    //获得当前时间在总行程中的路径比例
            //    float fRate = fElapseTime/m_fAttackFlyTime;

            //    float fHeightRefix = 0.0f;
            //    //抛物线分前半段和后半段，分别处于上升和下降
            //    if (fRate < 0.5f)
            //    {
            //        fHeightRefix = m_fAttackFlyMaxHight*(fRate/0.5f);
            //    }
            //    else
            //    {
            //        fHeightRefix = m_fAttackFlyMaxHight * ((1 - fRate) / 0.5f);
            //    }
            //    //修正当前的位置                
            //    curPos.y = curPos.y + fHeightRefix;
            //    if (curPos.y < m_VecAttcakFlySrc.y)
            //    {
            //        curPos =m_VecAttcakFlyDst;
            //    }

            //}
            m_ObjTransform.position = curPos;
        }

        virtual public void OnAnimationFinish(int animationID)
        {
            Tab_Animation animInfo = TableManager.GetAnimationByID(animationID, 0);
            if (IsDie())
            {
                return;
            }
            if (animInfo == null)
            {
                return;
            }
            if (m_AnimLogic == null)
            {
                return;
            }

            if (animInfo.NextAnimId != -1)
            {
                //       m_AnimLogic.Stop();
                m_AnimLogic.Play(animInfo.NextAnimId);
            }

        }

        virtual public void OnAnimationStop(int aninationID)
        {
            // did nothing

        }

        /// <summary>
        /// 飞行起始动作的持续时间
        /// </summary>
        /// <param name="nStartAniId">
        /// 起始动作ID
        /// </param>
        /// <returns> 当前动作需要持续的时间 单位为（秒）</returns>
        virtual public float GetCurFlyStartAnimTime(int nStartAniId)
        {
            Tab_Animation newAnimation = m_AnimLogic.GetAnimInfoById(nStartAniId);

            if (newAnimation == null)
            {
                return 0;
            }

            Tab_Animation nextAnimation = m_AnimLogic.GetAnimInfoById(newAnimation.LoopOverAnimId);

            if (null == newAnimation)
            {
                return 0;
            }

            if (nextAnimation.AinmName.Length <= 0)
            {
                return 0;
            }
            //检查脚本
            if (m_AnimLogic.AnimResFilePath.Length <= 0)
            {
                return 0;
            }

            string fullPath = string.Format("{0}/{1}", m_AnimLogic.AnimResFilePath, nextAnimation.AinmName);

            AnimationClip nextClip = ResourceManager.LoadResource(fullPath) as AnimationClip;

            if (null == nextClip || _FlyStateData.IsNotNull() == false)
            {
                return 0;
            }

            //加载资源比较耗时，加个时间精确判断
            float nRemainTime = _FlyStateData.fRemainTime - (Time.time - _FlyStateData.fInitTime);

            if (nRemainTime > -1)
                _FlyStateData.SetRemainTime(nRemainTime);

            float curClipTime = _FlyStateData.fRemainTime - nextClip.length / nextAnimation.SPEED;

            return curClipTime < 0 ? 0 : curClipTime;
        }
        #endregion
    }
}