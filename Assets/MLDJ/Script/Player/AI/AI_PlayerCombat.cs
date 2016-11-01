/********************************************************************************
 *	文件名：	AI_PlayCombat.cs
 *	全路径：	\Script\Player\AI\AI_PlayCombat.cs
 *	创建时间：2013-12-4
 *
 *	功能说明：主角战斗AI
 *	修改记录：
*********************************************************************************/

using System.Collections.Generic;
using Games.SkillModle;
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Games.LogicObj;
using GCGame.Table;
using Module.Log;
namespace Games.AI_Logic
{
    class AI_PlayerCombat : AI_BaseCombat
    {
        public AI_PlayerCombat()
        {
            for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
            {
                m_canSeleSkill[i] = new OwnSkillData();
                m_canSeleSkill[i].CleanUp();
            }
        }
        Obj_MainPlayer m_player = null;

        public override bool IsPlayerCombatAI()
        {
            return true;
        }

        //缓存玩家当前正在使用的技能ID，用于挂机连续技判定
        public int CurUseSkillId
        {
            get
            {
                return m_nCurUseSkillId;
            }
            set
            {
                m_nCurUseSkillId = value;
                CurUseSkillStartTime = (int)(Time.time * 1000);
            }
        }
        private int m_nCurUseSkillId =-1;

        //缓存玩家当前正在使用的技能的开始时间，用于挂机连续技判定
        private int CurUseSkillStartTime
        {
            get
            {
                return m_nCurUseSkillStartTime;
            }
            set
            {
                m_nCurUseSkillStartTime = value;
            }
        }
        private int m_nCurUseSkillStartTime = (int)(Time.time * 1000);

        //挂机自动战斗时玩家是否主动移动
        public bool IsPlayerControlMove
        {
            get
            {
                return m_bIsPlayerControlMove;
            }
            set
            {
                m_bIsPlayerControlMove = value;
            }
        }
        private bool m_bIsPlayerControlMove = false;

        //挂机自动战斗时玩家主动使用技能ID
        public int PlayerUseSkillId
        {
            get
            {
                return m_nPlayerUseSkillId;
            }
            set
            {
                if (m_player.CheckBeforUseSkill(value, false))
                {
                    m_nPlayerUseSkillId = value;
                }
            }
        }
        private int m_nPlayerUseSkillId = -1;
        private int m_nNormalSkillInterval = 500;//如果使用的是普通攻击，0.X s后可以再次释放。否则普攻的第二段，第三段可能无法触发。//这个时间应该>=前摇  &&  <=后摇。
        //时间太短可能造成挂机时无法行走
        void Start()
        {
            //装载AI到AIController，进行统一管理
            LoadAI();
            m_player =gameObject.GetComponent<Obj_MainPlayer>();
            if (m_player)
            {
              //如果已经设定了自动挂机 则开启自动挂机
                if (m_player.IsOpenAutoCombat)
                {
                    if (m_player.Controller)
                    {
                        //先中断处理
                        m_player.BreakAutoCombatState();
                        m_player.Controller.EnterCombat();
                    }
                   
                }
            }
        }
        private OwnSkillData[] m_canSeleSkill = new OwnSkillData[(int)SKILLDEFINE.MAX_SKILLNUM];
        protected float m_fLastUseEndTime = 0.0f;
        //激活AI
        public override void OnActive()
        {
            base.OnActive();
            UpdateAI();
        }
        public override void UpdateAI()
        {
            base.UpdateAI();
            if (m_player == null || m_player.Controller == null)
            {
                return;
            }
            if (m_player.IsDie())
            {
                return;
            }
            if (m_player.Controller.CombatFlag == false)
            {
                return;
            }
            if (m_player.AutoComabat == false )
            {
                return;
            }
            //轻功状态下 不挂机
            if (m_player.QingGongState)
            {
                return ;
            }
            if (m_player.AcceleratedMotion != null && m_player.AcceleratedMotion.Going == true)
            {
                return ;
            }
            //剧情播放中不挂机
            if (m_player.IsInModelStory)
            {
                return ;
            }
            // 跟随不挂机
            if (false == m_player.IsTeamLeader() && m_player.IsInTeamFollow)
            {
                return;
            }
			if (Cutscene.CutsceneManager.Instance.IsPlayingMovieStory) {
				return;
			}
            //阻塞状态不挂机
            if (Cutscene.CutsceneManager.Instance.BlockAutoBattle)
            {
                return;
            }
            //自动交接任务的寻路过程中不挂机
            if (null != GameManager.gameManager.AutoSearch &&
                true == GameManager.gameManager.AutoSearch.IsAutoSearching)
            {
                return;
            }
            //modify 普通攻击：可以连续按。在技能结束前可以再次释放不能直接return。
            if (m_player.SkillCore.IsUsingSkill)
            {
                bool shouldReturn = true;
                if ((Time.time*1000 - CurUseSkillStartTime)>= m_nNormalSkillInterval)
                {
                    if (IsNormalSkill(CurUseSkillId))
                    {
                        shouldReturn = false;
                    }
                }
                if (shouldReturn)
                {
                    return;
                }
            }
            
            #region UnUsed
           /* if (m_player.SkillCore.IsUsingSkill)
            {
               
                return;
                if (m_player.SkillCore.UsingSkillBaseInfo != null && m_player.SkillCore.UsingSkillExInfo !=null)
                {
                    //正在使用祝融掌 则检测下当前目标是否还存在 不存在则重新选取目标
                    //if (m_player.SkillCore.UsingSkillBaseInfo.Id ==(int)SKILLBASEID.ZLZ)
                    //{
                    //    if (m_player.SelectTarget ==null || m_player.SelectTarget.IsDie())
                    //    {
                    //        Obj_Character _NewAttackCharacter = SeleCanAttackTar(m_player.SkillCore.UsingSkillExInfo.Radius);
                    //        if (_NewAttackCharacter != null)
                    //        {
                    //            //设置新的选中目标
                    //            m_player.OnSelectTarget(_NewAttackCharacter.gameObject,false);
                    //            m_player.MoveTo(_NewAttackCharacter.transform.position, _NewAttackCharacter.gameObject,1.0f);
                    //        }
                    //    } 
                    //}
                    
                    //连续技特殊判定：
                    //1、判定玩家是否主动打断；
                    //2、不判定是否释放完成，一直尝试是否可释放；
                    if (IsPlayerBreakRepeatSkill())
                    {
                        ClearPlayerBreakRepeatSkill();
                        return;
                    }
                    //非连续技则等待一帧
                    if (!IsUsingRepeatSkillWithNext())
                    {
                        return;
                    }
                }
            }
            else
            {
                if (m_fLastUseEndTime <=0.1f)
                {
                    m_fLastUseEndTime = Time.time;
                }
            }*/
            #endregion
            //留个缓冲时间
            //if (Time.time -m_fLastUseEndTime <0.5f)
            //{
            //    return;
            //}
            //有轻功点了出现了 向轻功点移动
            if (m_player.AutoMovetoQGPointId !=-1)
            {
                //打断挂机状态
                m_player.BreakAutoCombatState();
                /*if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)
                {
                    //燕子坞轻功点移动
                    m_player.AutoFightFlyInYanZiWu();
                }*/
                m_player.AutoMovetoQGPointId = -1;
                return;
            }
            m_fLastUseEndTime = 0.0f;
            int skillId = SeleSkill();
            if (skillId == -1)
            {
                return;
            }
            Tab_SkillEx skillExInfo = TableManager.GetSkillExByID(skillId, 0);
            if (skillExInfo == null)
            {
                return;
            }
            Tab_SkillBase skillBaseInfo = TableManager.GetSkillBaseByID(skillExInfo.BaseId, 0);
            if (skillBaseInfo ==null)
            {
                return;
            }

            Obj_Character CanAttackCharacter = null;
            //如果当前选中的目标是敌对的了 则不需要再次选取目标
            if (m_player.SelectTarget != null && m_player.SelectTarget.IsDie() == false)
            {

                if (Reputation.IsEnemy(m_player.SelectTarget) ||
                    Reputation.IsNeutral(m_player.SelectTarget))
                {
                    CanAttackCharacter = m_player.SelectTarget;
                }
            }
            
            float skillRadius = skillExInfo.Radius;

            if (CanAttackCharacter == null ||
               (CanAttackCharacter != null && IsDisStartPointTooFar(skillRadius, CanAttackCharacter.Position))
                )
            {
                CanAttackCharacter = SeleCanAttackTar(skillRadius);
            }
            //是否有攻击目标 没有攻击目标就不要自动放技能了
            if (CanAttackCharacter == null)
            {
                /*
                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU)
                {
                    Vector3 pos = new Vector3(18, m_player.gameObject.transform.position.y, 16);
                    m_player.MoveTo(pos, null, 0.0f);

                }
                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU)
                {
                    Vector3 pos = new Vector3(20, m_player.gameObject.transform.position.y, 21);
                    m_player.MoveTo(pos, null, 0.0f);
                }

                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)
                {
                    m_player.AutoFightInYanziwu();
                }
                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FOURVILLAIN)
                {
                    Singleton<ObjManager>.Instance.MainPlayer.AutoFightInFourVillain();
                }
                */
                if( GameManager.gameManager.ActiveScene != null && GameManager.gameManager.ActiveScene.IsStoryCopyScene() ) {
                    if (Singleton<ObjManager>.GetInstance().MainPlayer != null) {
                        if (Singleton<ObjManager>.GetInstance().MainPlayer.AutoComabat) {
                            float x = 0.0f, y = 0.0f, z = 0.0f;
                            if( GameManager.gameManager.ActiveScene.GetGuideDestination( ref x, ref z ) ) {
                                y = GameManager.gameManager.ActiveScene.GetTerrainHeight(new Vector3(x, 0.0f, z));
                                Singleton<ObjManager>.GetInstance().MainPlayer.MoveTo(new Vector3(x, y, z), null, 0.0f);
                            }
                        }
                    }
                }
                return;
            }
            //如果在野外场景攻击其它玩家return;
            if( CanAttackCharacter.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ) {
                if( GameManager.gameManager.ActiveScene.IsWildeScene() ) {
                    return;
                }
            }
            //设置为选中目标
            m_player.OnSelectTarget(CanAttackCharacter.gameObject, false);
            //距离不过 先跑过去
            float dis = Vector3.Distance(m_player.Position, CanAttackCharacter.Position);
            float diffDistance = dis - skillRadius;
            m_player.CurUseSkillId = skillId;
            //需要向目标移动 则想目标移动
            if (diffDistance > 0 && skillBaseInfo.IsMoveToTarInAutoCombat ==1)
            {
                //move
                if (m_player.IsMoving == false && m_player.IsCanOperate_Move())
                {
                    m_player.MoveTo(CanAttackCharacter.Position, CanAttackCharacter.gameObject, skillRadius - 1.0f);
                    return;
                }
            }
           m_player.UseSkillOpt(skillId,null);
        }

        bool IsDisStartPointTooFar(float fSkillRadius,Vector3 targetObjPos) //是否距离挂机的定点太远了
        {
            if (GameManager.gameManager.ActiveScene.IsWildeScene()) //野外才做定点设置
            {
                float fDisTarget = Vector3.Distance(m_player.Position, targetObjPos);
                if (fDisTarget >fSkillRadius)
                {
                    Vector3 fMoveDirection = (m_player.Position - targetObjPos).normalized;
                    Vector3 movePosVector3 = m_player.Position + fMoveDirection*(fDisTarget-fSkillRadius+1);
                    float fDisStartPoint = Vector3.Distance(m_player.Position,movePosVector3); //需要移动到的点的坐标
                    if (fDisStartPoint >6) //新的坐标距离设置点太远 不让移动
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        public Obj_Character SeleCanAttackTar(float fSkillRadius)
        {
            //8码范围内 有可攻击的目标 
            Dictionary<string, Obj> targets = Singleton<ObjManager>.GetInstance().ObjPools;
            
            float fMinDis = 8.0f;
            if (GameManager.gameManager.ActiveScene.IsCopyScene())                
            {
                fMinDis = 100.0f;
            }
            Obj_Character selCharacter = null;
            foreach (Obj targetObj in targets.Values)
            {
                if (targetObj != null )
                {
                    Obj_Character targeObjCharacter= targetObj as Obj_Character;
                    if (targeObjCharacter == null )
                    {
                        continue;
                    }
                    if (targeObjCharacter.IsDie())
                    {
                        continue;
                    }
                    if (Reputation.IsEnemy(targeObjCharacter) ==false &&
                        Reputation.IsNeutral(targeObjCharacter) ==false)
                    {
                        continue;
                    }
                    float distance = Vector3.Distance(m_player.Position, targeObjCharacter.Position);
                    //选择最近的一个目标
                    if (distance < fMinDis && IsDisStartPointTooFar(fSkillRadius,targeObjCharacter.Position) ==false)
                    {
                        fMinDis = distance;
                        selCharacter = targeObjCharacter;
                    }
                }
            }
            return selCharacter;
        }

        /// <summary>
        /// modified by mawenbin
        /// 1、按照配置的释放优先级（SkillBase.txt文件的PriorityAutoFight列）选取技能
        /// 2、如果正在释放连续技，则必须等待后段判定，也就是连续技后续技能优先级最高
        /// 3、普攻优先级最低，并忽略普攻连续技
        /// </summary>
        /// <returns></returns>
        private int SeleSkill()
        {
            int nSelectSkillId = -1;
            //正在使用连续技
            if (IsUsingRepeatSkillWithNext())
            {
                //连续技禁止使用时间满足（前摇时间）
                if (CheckTimeUsingNextContinueSkill())
                {
                    //连续技的后续技能可使用时间超时（后摇时间）
                    if (CheckNextSkillEffectTimeOver())
                    {
                        nSelectSkillId = -1;
                        CurUseSkillId = -1;
                    }
                    else
                    {
                        nSelectSkillId = GetNextContinueSkillId();
                        //正在使用的连续技为普攻
                        if (IsNormalSkill(nSelectSkillId))
                        {
                            //存在优先级高于普攻的可释放技能，则放弃普攻连续技
                            int nPrioritySkillId = SeleSkillByPriority();
                            if (GetChangeStateNormalSkillID() != nPrioritySkillId)
                            {
                                nSelectSkillId = nPrioritySkillId;
                            }
                            //无法释放普攻连续技，比如变身消失则无法继续释放变身普攻连续技
                            else if (!m_player.CheckBeforUseSkill(nSelectSkillId))
                            {
                                nSelectSkillId = nPrioritySkillId;
                            }
                        }
                        else
                        {
                            //连续技后续技能不可以使用
                            if (!m_player.CheckBeforUseSkill(nSelectSkillId, false))
                            {
                                nSelectSkillId = SeleSkillByPriority();
                            }
                        }
                    }
                }
                //连续技禁止使用时间不满足，继续等待
                else
                {
                    nSelectSkillId = - 1;
                }
            }
            //未使用连续技，则根据优先级选取技能
            else
            {
                nSelectSkillId = SeleSkillByPriority();
            }
            //Tab_SkillEx tabSkillExTemp = TableManager.GetSkillExByID(nSelectSkillId, 0);
            //int iBaseId = 0;
            //if (null != tabSkillExTemp)
            //{
            //    iBaseId = tabSkillExTemp.BaseId;
            //}
            //LogModule.ErrorLog("auto fight select skillID:" + nSelectSkillId.ToString() + ", baseID:" + iBaseId.ToString());
            return nSelectSkillId;
        }

        private int SeleSkillByPriority()
        {
            int nSelectSkillId = GetChangeStateNormalSkillID();
            int nMaxPriority = -1;
            for (int ii = 0; ii < m_player.OwnSkillInfo.Length; ++ii)
            {
                int nCurrSkillId = m_player.OwnSkillInfo[ii].SkillId;
                Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(nCurrSkillId, 0);
                if (null != tabSkillEx)
                {
                    Tab_SkillBase tabSkillBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
                    if (null != tabSkillBase)
                    {
                        if (1 == m_player.IsAutoSelSkillID(ii) || (-1 == m_player.IsAutoSelSkillID(ii) && 0 < tabSkillBase.PriorityAutoFight))
                        {
                            if (m_player.CheckBeforUseSkill(nCurrSkillId, false)
                                && CheckXpSkill(tabSkillBase)
                                )
                            {
                                int nCurrPriority = tabSkillBase.PriorityAutoFight;
                                if (nCurrPriority > nMaxPriority)
                                {
                                    nSelectSkillId = nCurrSkillId;
                                    nMaxPriority = nCurrPriority;
                                }
                            }
                        }
                    }
                }
            }
            return nSelectSkillId;
        }

        private bool CheckXpSkill(Tab_SkillBase tabSkillBase)
        {
            //玩家已经点击过了变身按钮 tween正在进行
            if ((tabSkillBase.SkillClass & (int)SKILLCLASS.XP) != 0)
            {
                if (SkillBarLogic.Instance() != null)
                {
                    if (SkillBarLogic.Instance().m_isXpBtnOpen)
                    {
                        return false;
                    }
                }
            }
            return true;
        }

        //判定技能是否为普攻
        private bool IsNormalSkill(int nSkillId)
        {
            Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(nSkillId, 0);
            if (null != tabSkillEx)
            {
                Tab_SkillBase tabSkillBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
                if (null != tabSkillBase)
                {
                    return 0 != (tabSkillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT);
                }
            }
            return false;
        }

        //获取当前变身状态下的普攻连续技的首段技能ID
        private int GetChangeStateNormalSkillID()
        {
            int nCurrentChangeState = m_player.GetCurrentChangeState();
            for (int ii = 0; ii < m_player.OwnSkillInfo.Length; ++ii)
            {
                int nCurrSkillId = m_player.OwnSkillInfo[ii].SkillId;
                if (IsNormalSkill(nCurrSkillId))
                {
                    Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(nCurrSkillId, 0);
                    if (null != tabSkillEx)
                    {
                        Tab_SkillBase tabSkillBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
                        if (null != tabSkillBase)
                        {
                            if (tabSkillBase.GetChangeModebyIndex(nCurrentChangeState) >= 0)
                            {
                                return nCurrSkillId;
                            }
                        }
                    }
                }
            }
            return m_player.OwnSkillInfo[0].SkillId;
        }

        //获取连续技的首段技能ID
        private int GetRepeatSkillFirstID(int nSkillId)
        {
            Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(nSkillId, 0);
            if (null != tabSkillEx)
            {
                Tab_SkillBase tabSkillBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
                if (null != tabSkillBase)
                {
                    if (0 < tabSkillEx.NextContinueSkillId)
                    {
                        if (tabSkillBase.FirstIndex < m_player.OwnSkillInfo.Length)
                        {
                            return m_player.OwnSkillInfo[tabSkillBase.FirstIndex].SkillId;
                        }
                    }
                }
            }
            return -1;
        }

        //获取连续技的后续技能ID
        private int GetNextContinueSkillId()
        {
            Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(CurUseSkillId, 0);
            if (null != tabSkillEx)
            {
                Tab_SkillBase tabSkillBase = TableManager.GetSkillBaseByID(tabSkillEx.BaseId, 0);
                if (null != tabSkillBase)
                {
                    if (-1 != tabSkillEx.NextContinueSkillId && tabSkillEx.NextContinueSkillId != GetRepeatSkillFirstID(CurUseSkillId))
                    {
                        return tabSkillEx.NextContinueSkillId;
                    }
                }
            }
            return -1;
        }

        //是否正在使用连续技的前段技能，并且有后续技能
        private bool IsUsingRepeatSkillWithNext()
        {
            return GetNextContinueSkillId() > 0;
        }

        //是否度过连续技的后续技能不可使用时间（前摇时间）
        private bool CheckTimeUsingNextContinueSkill()
        {
            if (IsUsingRepeatSkillWithNext())
            {
                Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(CurUseSkillId, 0);
                if (null != tabSkillEx)
                {
//                    float x = Time.time * 1000 - CurUseSkillStartTime;
                    return Time.time * 1000 > (CurUseSkillStartTime + tabSkillEx.NextSkillDisabledTime);
                }
            }
            return false;
        }

        //是否度过连续技的后续技能可使用时间（后摇时间）
        private bool CheckNextSkillEffectTimeOver()
        {
            if (IsUsingRepeatSkillWithNext())
            {
                Tab_SkillEx tabSkillEx = TableManager.GetSkillExByID(CurUseSkillId, 0);
                if (null != tabSkillEx)
                {
//                    float y = Time.time * 1000 - CurUseSkillStartTime;
                    return Time.time * 1000 > (CurUseSkillStartTime + tabSkillEx.NextSkillEffectTime);
                }
            }
            return false;
        }

        //挂机自动战斗时，玩家是否主动打断连续技
        //1、移动打断
        //2、主动使用其它技能
        private bool IsPlayerBreakRepeatSkill()
        {
            if (IsPlayerControlMove)
            {
                return true;
            }

            if (IsUsingRepeatSkillWithNext())
            {
                if (-1 != PlayerUseSkillId && GetRepeatSkillFirstID(CurUseSkillId) != PlayerUseSkillId)
                {
                    return true;
                }
            }

            return false;
        }

        //清空挂机自动战斗时，玩家主动打断连续技的操作
        //1、重置移动打断为false
        //2、清空主动使用其它技能为-1
        private void ClearPlayerBreakRepeatSkill()
        {
            if (IsPlayerControlMove)
            {
                IsPlayerControlMove = false;
            }
            PlayerUseSkillId = -1;
        }
    }
}
