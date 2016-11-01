//********************************************************************
// 文件     : Obj_MainPlayer_Combat.cs
// 文件路径  : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\Obj\Obj_MainPlayer_Combat.cs
// 描述     : 
// 作者     : fanzhipeng
// 创建时间  : 2015-6-12   10:28:11
//
// 修改历史 : 
//********************************************************************
using System.Collections.Generic;
using Games.ImpactModle;
using Games.SkillModle;
using GCGame.Table;
using Module.Log;
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using System;
using Games.GlobeDefine;
using Games.SwordsMan;
using GCGame;

namespace Games.LogicObj
{
    public partial class Obj_MainPlayer : Obj_OtherPlayer
    {
        //PK 模式 重载 Obj_OtherPlayer 的属性
        public override int PkModle
        {
            get { return GameManager.gameManager.PlayerDataPool.PkModle; }
            set { GameManager.gameManager.PlayerDataPool.PkModle = value; }
        }
        //隐身级别  重载 Obj 的属性

        public override int StealthLev
        {
            get { return GameManager.gameManager.PlayerDataPool.StealthLev; }
            set { GameManager.gameManager.PlayerDataPool.StealthLev = value; }
        }
        //是否可以进行合法反击
        public bool IsCanPKLegal
        {
            get { return GameManager.gameManager.PlayerDataPool.IsCanPKLegal; }
            set { GameManager.gameManager.PlayerDataPool.IsCanPKLegal = value; }
        }
        //主角身上的技能信息
        public OwnSkillData[] OwnSkillInfo
        {
            get { return GameManager.gameManager.PlayerDataPool.OwnSkillInfo; }
            set { GameManager.gameManager.PlayerDataPool.OwnSkillInfo = value; }
        }

        //冲撞技能的单独Cd时间（特殊处理）
        public int CrashSkillCDTime
        {
            get { return GameManager.gameManager.PlayerDataPool.CrashSkillCDTime; }
            set { GameManager.gameManager.PlayerDataPool.CrashSkillCDTime = value; }
        }

        //技能公共CD时间
        public int SkillPublicTime
        {
            get { return GameManager.gameManager.PlayerDataPool.SkillPublicTime; }
            set { GameManager.gameManager.PlayerDataPool.SkillPublicTime = value; }
        }
        //客户端 要用到BUFF信息
        //private List<ClientImpactInfo> m_ClientImpactInfo = new List<ClientImpactInfo>();
        public List<ClientImpactInfo> ClientImpactInfo
        {
            get { return GameManager.gameManager.PlayerDataPool.ClientImpactInfo; }
            set { GameManager.gameManager.PlayerDataPool.ClientImpactInfo = value; }
        }
        //主角是否处于战斗状态
        private bool m_bInCombat = false;
        public bool InCombat
        {
            get { return m_bInCombat; }
            set { m_bInCombat = value; }
        }
        //脱战时间
        private float m_fLastLeaveCombatTime = 0.0f;
        public float LastLeaveCombatTime
        {
            get { return m_fLastLeaveCombatTime; }
            set { m_fLastLeaveCombatTime = value; }
        }
        private int m_nCurPressSkillId = -1;//当前按下的技能ID
        public int CurPressSkillId
        {
            get { return m_nCurPressSkillId; }
            set { m_nCurPressSkillId = value; }
        }

        private int m_nHitPoint = 0;
        public int HitPoint
        {
            get { return m_nHitPoint; }
            set { m_nHitPoint = value; }
        }

        private float m_fLastHitPointTime = 0;//上次连击点 更新时间
        public float LastHitPointTime
        {
            get { return m_fLastHitPointTime; }
            set { m_fLastHitPointTime = value; }
        }

        private float m_fLastClickAttackBtTime = 0;//上次点击普攻按钮的时间 
        public float LastClickAttackBtTime
        {
            get { return m_fLastClickAttackBtTime; }
            set { m_fLastClickAttackBtTime = value; }
        }

        public int GetSkillIndexById(int nSkillId)
        {
            for (int nIndex = 0; nIndex < OwnSkillInfo.Length; nIndex++)
            {
                if (OwnSkillInfo[nIndex].SkillId == nSkillId)
                {
                    return nIndex;
                }
            }
            return -1;
        }
        public bool IsHaveSkill(int nSkillId)
        {
            if (nSkillId == -1)
            {
                return false;
            }
            for (int i = 0; i < OwnSkillInfo.Length; i++)
            {
                if (OwnSkillInfo[i].SkillId == nSkillId)
                {
                    return true;
                }
            }
            return false;
        }
        public bool IsHaveSkill(int nSkillId, ref int nSkillIndex)
        {
            nSkillIndex = -1;
            if (nSkillId == -1)
            {
                return false;
            }
            for (int i = 0; i < OwnSkillInfo.Length; i++)
            {
                if (OwnSkillInfo[i].SkillId == nSkillId)
                {
                    nSkillIndex = i;
                    return true;
                }
            }
            return false;
        }
        public bool IsStudySkill(int nSkillExId)
        {
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillExId, 0);
              if (null == _skillEx)
              {
                  return false;
              }
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            if (null == _skillBase)
                return false;

            int nSkillBaseId = _skillBase.Id;

            int preSkillId = -1;

            //如果是普攻并且有前置技能，看前置技能是否学会
            if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
            {
                preSkillId = GetPreSkillId(nSkillExId);
                Tab_SkillEx _preSkillEx = TableManager.GetSkillExByID(preSkillId, 0);
                if (null != _preSkillEx)
                {
                    Tab_SkillBase _preSkillBase = TableManager.GetSkillBaseByID(_preSkillEx.BaseId, 0);
                    if (null != _preSkillBase)
                    {
                        nSkillBaseId = _preSkillBase.Id;
                    }
                }
            }

            for (int i = 0; i < OwnSkillInfo.Length; i++)
            {
                if (OwnSkillInfo[i].IsValid())
                {
                    Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(OwnSkillInfo[i].SkillId, 0);
                    if (_SkillEx != null && _SkillEx.BaseId == nSkillBaseId)
                    {
                        return true;
                    }
                }
            }

            return false;
        }

        /// <summary>
        /// 获取技能的前置技能（有的技能需要依赖前置技能学会才会学会。）
        /// </summary>
        /// <param name="nSkillId"></param>
        /// <returns></returns>
        public int GetPreSkillId(int nSkillId)
        {
            int preSkillId = -1;
            for (int nIndex = 1; nIndex <= TableManager.GetSkillActive().Count; nIndex++)
            {
                Tab_SkillActive _skillActiveInfo = TableManager.GetSkillActiveByID(nIndex, 0);
                if (_skillActiveInfo != null && this.Profession == _skillActiveInfo.Profession)
                {
                    if (_skillActiveInfo.SkillId == nSkillId && _skillActiveInfo.PreSkillId != -1)
                    {
                        preSkillId = _skillActiveInfo.PreSkillId;
                        break;
                    }
                }
            }
            return preSkillId;
        }
        public bool IsStudySkill(int nSkillBaseId, ref int nSkillInex)
        {
            nSkillInex = -1;
            for (int i = 0; i < OwnSkillInfo.Length; i++)
            {
                if (OwnSkillInfo[i].IsValid())
                {
                    Tab_SkillEx _SkillEx = TableManager.GetSkillExByID(OwnSkillInfo[i].SkillId, 0);
                    if (_SkillEx != null && _SkillEx.BaseId == nSkillBaseId)
                    {
                        nSkillInex = i;
                        return true;
                    }
                }
            }
            return false;
        }
        public int HaveSkillNum()
        {
            int num = 0;
            for (int i = 0; i < OwnSkillInfo.Length; i++)
            {
                if (OwnSkillInfo[i].SkillId != -1)
                {
                    num++;
                }
            }
            return num;
        }
        public int NeedSkillBarNum() //需要开放的技能栏数
        {
            int num = 0;

            //！！！！下面注释请不要删除（可能扩展会使用）

            //             Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            // 
            //             for (int i = 0; i < OwnSkillInfo.Length; i++)
            //             {
            //                 if (OwnSkillInfo[i].SkillId != -1)
            //                 {
            //                     Tab_SkillEx _skillEx = TableManager.GetSkillExByID(OwnSkillInfo[i].SkillId, 0);
            //                     if (_skillEx!=null)
            //                     {
            //                         Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            //                         //不是普攻 不是XP 不是被动技能,不是连续技能的子技能
            //                         if (_skillBase !=null)
            //                         {
            //                                 if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) == 0 &&
            //                                         (_skillBase.SkillClass & (int)SKILLCLASS.XP) == 0 &&
            //                                          (_skillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) == 0 &&
            // 								    (_skillBase.GetChangeModebyIndex(_mainPlayer.CurChangeState) >= 0) &&
            //                                     (_skillBase.FirstIndex == i))
            //                                 {
            //                                     num++;
            //                                 }
            //                            
            //                         }
            //                     }
            //                 }
            //             }

            //当前版本固定开启4个位置。
            num = 4;
            return num;
        }
        //初始化主角身上的技能信息
        public void InitSkillInfo()
        {

            UpdateSkillInfo();
        }
        //更新技能CD
        void UpdateSkillCDTime()
        {
            //更新冷却时间
            if (SkillPublicTime > 0) //技能公共CD
            {
                SkillPublicTime -= (int)(Time.fixedDeltaTime * 1000);
                if (SkillPublicTime < 0)
                {
                    SkillPublicTime = 0;
                }
            }
            for (int i = 0; i < OwnSkillInfo.Length; i++)
            {
                if (OwnSkillInfo[i].CDTime > 0)
                {
                    OwnSkillInfo[i].CDTime -= (int)(Time.fixedDeltaTime * 1000);
                    if (OwnSkillInfo[i].CDTime < 0)
                    {
                        OwnSkillInfo[i].CDTime = 0;
                    }
                }
            }

            //冲撞技能的CD单独处理
            if (CrashSkillCDTime > 0)
            {
                CrashSkillCDTime -= (int)(Time.fixedDeltaTime * 1000);
                if (CrashSkillCDTime < 0)
                {
                    CrashSkillCDTime = 0;
                }
            }
        }
#region 
      //为了在穿越场景后校对CD时间 By:Young
        static private float m_DisableTime = 0f;
        public void OnEnable()
        {
          if (!m_DisableTime.Equals(0f)) {
            float delteTime = Time.realtimeSinceStartup - m_DisableTime;
            if (SkillPublicTime > 0){
              SkillPublicTime -= (int)(delteTime * 1000);
              if (SkillPublicTime < 0) {
                SkillPublicTime = 0;
              }
            }
            for (int i = 0; i < OwnSkillInfo.Length; i++) {
              if (OwnSkillInfo[i].CDTime > 0) {
                OwnSkillInfo[i].CDTime -= (int)(delteTime * 1000);
                if (OwnSkillInfo[i].CDTime < 0) {
                  OwnSkillInfo[i].CDTime = 0;
                }
              }
            }
            if (CrashSkillCDTime > 0) {
              CrashSkillCDTime -= (int)(delteTime * 1000);
              if (CrashSkillCDTime < 0) {
                CrashSkillCDTime = 0;
              }
            }
          }
        }
        public void OnDisable()
        {
          m_DisableTime = Time.realtimeSinceStartup;
        }
#endregion
        public void UpdateSkillInfo()
        {
            //更新技能栏图标
            if (SkillBarLogic.Instance() != null)
            {
                SkillBarLogic.Instance().CleanUpSkillBarInfo();
                SkillBarLogic.Instance().UpdateSkillBarInfo();
            }
            for (int nIndex = 0; nIndex < OwnSkillInfo.Length; nIndex++)
            {
                //挂机时技能使用优先级
                if (OwnSkillInfo[nIndex].SkillId != -1)
                {
                    Tab_SkillEx SkillExinfo = TableManager.GetSkillExByID(OwnSkillInfo[nIndex].SkillId, 0);
                    if (SkillExinfo != null)
                    {
                        Tab_SkillBase SkillBase = TableManager.GetSkillBaseByID(SkillExinfo.BaseId, 0);
                        if (SkillBase != null)
                        {

                            OwnSkillInfo[nIndex].PriorityAutoCombat = SkillBase.PriorityAutoFight;
                        }
                    }
                }
            }
        }
        public void StudySkillOpt(int nSkillId, int nSkillIndex, int nAttachSkillId = -1, int nAttachSkillIndex = -1)
        {
            if (nSkillId == -1)
            {
                return;
            }
            if (nSkillIndex >= 0 && nSkillIndex < OwnSkillInfo.Length)
            {
                Tab_SkillEx SkillExinfo = TableManager.GetSkillExByID(nSkillId, 0);
                if (SkillExinfo == null)
                {
                    LogModule.DebugLog("SkillExinfo is Null: " + nSkillId);
                    return;
                }
                Tab_SkillBase SkillBase = TableManager.GetSkillBaseByID(SkillExinfo.BaseId, 0);
                if (SkillBase == null)
                {
                    LogModule.DebugLog("SkillBase is Null: " + nSkillId);
                    return;
                }
                //设置图标
                OwnSkillInfo[nSkillIndex].SkillId = nSkillId;
                //设置冷却时间
                OwnSkillInfo[nSkillIndex].CDTime = 0;
                //挂机时使用的优先级
                OwnSkillInfo[nSkillIndex].PriorityAutoCombat = SkillBase.PriorityAutoFight;

				if(IsCanAddAutoSkill(nSkillId))
				{
					SetAutoSelSkillID(nSkillIndex);
					ServerAutoInfo();
				}
				else
				{
					DelAutoSelSkillID(nSkillIndex);
					ServerAutoInfo();
				}

                Tab_SkillEx attachSkillEx = null;
                Tab_SkillBase attachSkillBase = null;
                //附带技能也放进入
                if (nAttachSkillId != -1)
                {
                    if (nAttachSkillIndex >= 0 && nAttachSkillIndex < OwnSkillInfo.Length)
                    {
                        attachSkillEx = TableManager.GetSkillExByID(nAttachSkillId, 0);
                        if (attachSkillEx != null)
                        {
                            attachSkillBase = TableManager.GetSkillBaseByID(attachSkillEx.BaseId, 0);
                            if (attachSkillBase != null)
                            {
                                OwnSkillInfo[nAttachSkillIndex].SkillId = nAttachSkillId;
                                OwnSkillInfo[nAttachSkillIndex].CDTime = 0;
                                OwnSkillInfo[nAttachSkillIndex].PriorityAutoCombat = attachSkillBase.PriorityAutoFight;

								if(IsCanAddAutoSkill(nAttachSkillId))
								{
									SetAutoSelSkillID(nAttachSkillIndex);
									ServerAutoInfo();
								}
								else
								{
									DelAutoSelSkillID(nAttachSkillIndex);
									ServerAutoInfo();
								}
                            }
                        }
                    }
                }
                //更新技能栏图标
                if (SkillBarLogic.Instance() != null)
                {
                    int nSkillBarIndex = -1;
                    //不是普攻和XP技 被动技 设置技能栏位置
                    if ((SkillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) == 0 &&
                        (SkillBase.SkillClass & (int)SKILLCLASS.XP) == 0 &&
                        (SkillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) == 0 &&
                        (SkillBase.FirstIndex == nSkillIndex))
                    {

                        if ((SkillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE) != 0)
                        {
                            if (Utils.IsPvESkill(SkillBase))
                            {
                                if (PlayerPreferenceData.PVESkillIdCurUsing == -1)
                                {

                                    PlayerPreferenceData.PVESkillIdCurUsing = Utils.GetSkillIndexBySkillId(SkillExinfo.SkillExID);
                                }
                            }
                            else if (Utils.IsPvPSkill(SkillBase))
                            {
                                if (PlayerPreferenceData.PVPSkillIdCurUsing == -1)
                                {
                                    PlayerPreferenceData.PVPSkillIdCurUsing = Utils.GetSkillIndexBySkillId(SkillExinfo.SkillExID);
                                }
                            }
                            nSkillBarIndex = GlobeVar.CHANGEMODE_SKILLPOSITION;
                        }
                        else
                        {
                            for (int _skillBarIndex = 0; _skillBarIndex < (int)SKILLBAR.MAXSKILLBARNUM; _skillBarIndex++)
                            {
                                //找到空位了
                                if (SkillBarLogic.Instance().MySkillBarInfo[_skillBarIndex].SkillIndex == -1)
                                {
                                    SkillBarLogic.Instance().MySkillBarInfo[_skillBarIndex].SkillIndex = nSkillIndex;

                                    nSkillBarIndex = _skillBarIndex;

                                    break;
                                }
                            }
                            //保存配置
                            UserConfigData.AddSkillBarSetInfo(GUID.ToString(), SkillBarLogic.Instance().MySkillBarInfo);

                           
                        }
                        if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
                        {
                            SkillBarLogic.Instance().UpdateSkillBarInfo();
                        }
                        else //新手场景不引导技能
                        {
                            //                                     if (_skillBarIndex == 3)
                            //                                     {
                            //                                         GameManager.gameManager.PlayerDataPool.ForthSkillFlag = true;
                            //                                     }

                            if (nSkillBarIndex >= 0 && nSkillBarIndex < (int)SKILLBAR.MAXSKILLBARNUM)
                            {
                                NewItemGetLogic.InitItemInfo(SkillBase.Icon,
                            SkillBarLogic.Instance().MySkillBarInfo[nSkillBarIndex].buttonInfo,
                            NewItemGetLogic.NEWITEMTYPE.TYPE_SKILL,
                            nSkillId);
                            }
                            
                        }
                    }
                    else if ((SkillBase.SkillClass & (int)SKILLCLASS.XP) != 0) //XP教学
                    {
                        //附带技能都统一放置在3号位置上，学习时候并不放置，只是在变身的时候才放置
                        int attachSkillIndex = -1;
                        if (attachSkillBase != null)
                        {
                            attachSkillIndex = 3;
                        }
                       
                        //新手场景不引导新技能
                        if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
                        {
                            int nXpIndex = Utils.GetXpSKillIndex(nSkillId);
                            GameObject xpBtn = GetXpBtnByXPIndex(nXpIndex);
                            if (null == xpBtn)
                            {
                                LogModule.ErrorLog("-----------------------------------------------------Can not find xpBtn!----------------------------------------------------");
                                return;
                            }
                            NewItemGetLogic.InitItemInfo(SkillBase.Icon,
                                        xpBtn,
                                        NewItemGetLogic.NEWITEMTYPE.TYPE_SKILL,
                                           nSkillId, (attachSkillIndex >= 0 && attachSkillIndex < (int)SKILLBAR.MAXSKILLBARNUM) ? SkillBarLogic.Instance().MySkillBarInfo[attachSkillIndex].buttonInfo : null);
                            // 如果是1变变身 显示变身技能按钮
                            if (nXpIndex == 1)
                            {
                                if (SkillBarLogic.Instance() != null)
                                {
                                    SkillBarLogic.Instance().UpdateTransformBtnShow(true);
                                }
                            }
                        }
                        else
                        {
                           SkillBarLogic.Instance().UpdateSkillBarInfo();
                        }
                    }
                }
            }
        }

        private GameObject GetXpBtnByXPIndex(int nXpIndex)
        {
            GameObject xpBtn = null;

            if (null == SkillBarLogic.Instance())
            {
                return xpBtn;
            }

            switch (nXpIndex)
            {
                case 1:
                    xpBtn = SkillBarLogic.Instance().m_SkillXP1Bt;
                    break;
                case 2:
                    xpBtn = SkillBarLogic.Instance().m_SkillXP2Bt;
                    break;
                case 3:
                    xpBtn = SkillBarLogic.Instance().m_SkillXP3Bt;
                    break;
            }
            return xpBtn;
        }
        /// <summary>
        /// modified by mawenbin
        /// bSendNoticMsg 是否显示屏幕提示信息
        /// </summary>
        public bool CheckBeforUseSkill(int nSkillId, bool bSendNoticMsg = true)
        {
            if (m_SkillCore == null)
            {
                return false;
            }
            if (IsDie())
            {
                return false;
            }
            //轻功中不能使用技能
            if (QingGongState)
            {
                return false;
            }

            if (AcceleratedMotion != null && AcceleratedMotion.Going == true)
            {
                return false;
            }

            if (m_bIsInModelStory)
            {
                return false;
            }

            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
            if (_skillEx == null)
            {
                return false;
            }
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            if (_skillBase == null)
            {
                return false;
            }

            int nSkillIndex = GetSkillIndexById(nSkillId);
            if (nSkillIndex >= 0 && nSkillIndex < OwnSkillInfo.Length)
            {
                //增加 技能公共CD
                if (OwnSkillInfo[nSkillIndex].CDTime > 0)
                {
                    //技能正在冷却中 请稍后使用
                    //   SendNoticMsg("#{1245}");
                    return false;
                }

                if (_skillBase.HasPublicCd == 1 && SkillPublicTime > 0)
                {
                    return false;
                }
            }

            //检测消耗类型
            SKILLDELANDGAINTYPE nNeedType_1 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(0);
            int nNeedValue1 = _skillEx.GetDelNumbyIndex(0);
            if (CheckForUseSkillNeed(nNeedType_1, nNeedValue1, bSendNoticMsg) == false)
            {
                return false;
            }
            SKILLDELANDGAINTYPE nNeedType_2 = (SKILLDELANDGAINTYPE)_skillEx.GetDelTypebyIndex(1);
            int nNeedValue2 = _skillEx.GetDelNumbyIndex(1);
            if (CheckForUseSkillNeed(nNeedType_2, nNeedValue2, bSendNoticMsg) == false)
            {
                return false;
            }
            //变身状态的限制
            if (_skillBase.GetChangeModebyIndex(GetCurrentChangeState()) < 0)
            {
                if (bSendNoticMsg)
                {                
                    SendNoticMsg(false,"#{10727}");
                }
                return false;
            }
            return true;
        }

        public bool IsSkillNeedSelectTar(Tab_SkillBase _skillBase, Tab_SkillEx _skillEx)
        {
            if (_skillBase == null || _skillEx == null)
            {
                return false;
            }
            //目标类型为自己 则不选择目标 
            if ((_skillBase.TargetType & (int)CharacterDefine.TARGETTYPE.SELF) != 0)
            {
                return false;
            }
            //表里配置不选择目标的非单攻技能 则不选择目标
            if (_skillBase.SelLogic != (int)SKILLSELLOGIC.SELLOGIC_SINGLE &&
                _skillBase.IsAutoSelectTar != 1)
            {
                return false;
            }
            return true;
        }
        //释放技能接口
        public void UseSkillOpt(int nSkillId, GameObject skillBtn)
        {
            if (CheckBeforUseSkill(nSkillId) == false)
            {
                return;
            }
            Obj_Character TargetObjChar = null;
            if (m_selectTarget != null && m_selectTarget.ServerID != ServerID)// 当前有选择目标且不是自己 就不重新选择了
            {
                TargetObjChar = m_selectTarget;

#if UNITY_ANDROID && !UNITY_EDITOR

                if (!m_selectTarget.gameObject.activeSelf)
                {
                    TargetObjChar = null;
                }
#endif
            }
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
            if (_skillEx == null)
            {
                return;
            }
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            if (_skillBase == null)
            {
                return;
            }
            //需要重新选择目标
            if (TargetObjChar == null || TargetObjChar.IsDie())
            {
                if (IsSkillNeedSelectTar(_skillBase, _skillEx))
                {
                    TargetObjChar = SelectSkillTarget(nSkillId);
                    if (TargetObjChar != null)
                    {
                        OnSelectTarget(TargetObjChar.gameObject, false);
                    }
                    else
                    {
                        OnSelectTarget(null, false);
                    }
                }
            }

            //新修改，无法自动选择NPC并且移动过去，只可能发起攻击

            CurUseSkillId = nSkillId;
            OnEnterCombat(TargetObjChar);

        }

        public Obj_Character SelectSkillTarget(int nSkillId)
        {
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
            if (_skillEx == null)
            {
                return null;
            }
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            if (_skillBase == null)
            {
                return null;
            }
            if (IsSkillNeedSelectTar(_skillBase, _skillEx) == false)
            {
                return null;
            }

            //会在一次遍历中分别记录前后最近目标，前方有目标则优先选择前方，否则选择后方最近目标
            Obj_Character frontTargetObjChar = null;
            Obj_Character backTargetObjChar = null;
            float frontMinDistance = 8.0f;
            float backMinDistance = 8.0f;
            //if (Profession == (int)CharacterDefine.PROFESSION.XIAOYAO ||
            //   Profession == (int)CharacterDefine.PROFESSION.DALI)
            //{
            //    frontMinDistance = 8.0f;
            //    backMinDistance = 8.0f;
            //}
            //else
            //{
            //    frontMinDistance = 4.0f;
            //    backMinDistance = 4.0f;
            //}

            Dictionary<string, Obj> targets = Singleton<ObjManager>.GetInstance().ObjPools;
            foreach (Obj targetObj in targets.Values)
            {
                if (targetObj != null)
                {

#if UNITY_ANDROID && !UNITY_EDITOR
                    if (!targetObj.gameObject.activeSelf)
                    {
                        continue;
                    }
#endif

                    Obj_Character targeObjChar = targetObj.gameObject.GetComponent<Obj_Character>();
                    if (targeObjChar == null || targeObjChar.IsDie())
                    {
                        continue;
                    }
                    //自己排除在外
                    if (targeObjChar.ServerID == ServerID)
                    {
                        continue;
                    }
                    //伙伴为不可选中目标
                    if (targeObjChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW)
                    {
                        continue;
                    }
                    //不符合技能选择类型的排除
                    CharacterDefine.REPUTATION_TYPE nType = Reputation.GetObjReputionType(targeObjChar);
                    //技能针对敌对目标 过滤掉非敌对的目标
                    if ((_skillBase.TargetType & (int)CharacterDefine.TARGETTYPE.ENEMY) != 0 &&
                         nType != CharacterDefine.REPUTATION_TYPE.REPUTATION_NEUTRAL &&
                         nType != CharacterDefine.REPUTATION_TYPE.REPUTATION_HOSTILE
                        )
                    {
                        continue;
                    }
                    //技能 针对为友好目标 过滤掉非友好目标
                    if ((_skillBase.TargetType & (int)CharacterDefine.TARGETTYPE.FRIEND) != 0)
                    {
                        if (nType != (int)CharacterDefine.REPUTATION_TYPE.REPUTATION_FRIEND)
                        {
                            continue;
                        }
                        //可以对话的NPC 不是技能目标
                        if (targeObjChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                        {
                            Tab_RoleBaseAttr _roleBase = TableManager.GetRoleBaseAttrByID(targeObjChar.BaseAttr.RoleBaseID, 0);
                            if (_roleBase == null || _roleBase.DialogID != -1)
                            {
                                continue;
                            }
                        }
                    }

                    //分别取得前方和后方的最近Obj
                    float distance = Vector3.Distance(Position, targeObjChar.Position);
                    if (IsInFront(targeObjChar))
                    {
                        if (distance < frontMinDistance)
                        {
                            frontMinDistance = distance;
                            frontTargetObjChar = targeObjChar;
                        }
                    }
                    else
                    {
                        if (distance < backMinDistance)
                        {
                            backMinDistance = distance;
                            backTargetObjChar = targeObjChar;
                        }
                    }
                }
            }

            //如果前方有目标则返回前方目标，否则才返回身后目标
            if (null != frontTargetObjChar)
            {
                return frontTargetObjChar;
            }

            return backTargetObjChar;
        }

        //切换当前怪物
        private Obj_Character SwitchMonsterTarget()
        {
            Obj_Character frontTargetObjChar = null;
            Obj_Character backTargetObjChar = null;
            float frontMinDistance = 8.0f;
            float backMinDistance = 8.0f;
            //if (Profession == (int)CharacterDefine.PROFESSION.XIAOYAO ||
            //  Profession == (int)CharacterDefine.PROFESSION.DALI)
            //{
            //    frontMinDistance = 8.0f;
            //    backMinDistance = 8.0f;
            //}
            //else
            //{
            //    frontMinDistance = 4.0f;
            //    backMinDistance = 4.0f;
            //}
            //记录当前选择目标的ServerID
            int curSelecTargetServerID = GlobeVar.INVALID_ID;
            if (null != m_selectTarget)
            {
                curSelecTargetServerID = m_selectTarget.ServerID;
            }

            Dictionary<string, Obj> targets = Singleton<ObjManager>.GetInstance().ObjPools;
            foreach (Obj targetObj in targets.Values)
            {
                if (null == targetObj)
                {
                    continue;
                }

                if (targetObj.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                {
                    continue;
                }

                //自己排除在外
                if (targetObj.ServerID == ServerID)
                {
                    continue;
                }

                //已经选择的目标是不会被切换的
                if (curSelecTargetServerID != GlobeVar.INVALID_ID && targetObj.ServerID == curSelecTargetServerID)
                {
                    continue;
                }

                Obj_NPC targeObjChar = targetObj.gameObject.GetComponent<Obj_NPC>();
                if (targeObjChar == null || targeObjChar.IsDie())
                {
                    continue;
                }

                CharacterDefine.REPUTATION_TYPE nType = Reputation.GetObjReputionType(targeObjChar);
                if (nType != CharacterDefine.REPUTATION_TYPE.REPUTATION_HOSTILE &&
                    nType != CharacterDefine.REPUTATION_TYPE.REPUTATION_NEUTRAL)
                {
                    continue;
                }

                //分别取得前方和后方的最近Obj
                float distance = Vector3.Distance(Position, targeObjChar.Position);
                if (IsInFront(targeObjChar))
                {
                    if (distance < frontMinDistance)
                    {
                        frontMinDistance = distance;
                        frontTargetObjChar = targeObjChar;
                    }
                }
                else
                {
                    if (distance < backMinDistance)
                    {
                        backMinDistance = distance;
                        backTargetObjChar = targeObjChar;
                    }
                }
            }

            //如果前方有目标则返回前方目标，否则才返回身后目标
            if (null != frontTargetObjChar)
            {
                return frontTargetObjChar;
            }

            return backTargetObjChar;
        }

        //切换当前玩家目标
        private Obj_Character SwitchPlayerTarget()
        {
            Obj_Character frontTargetObjChar = null;
            Obj_Character backTargetObjChar = null;
            Obj_Character currentTargetObjChar = null;
            float frontMinDistance = 10.0f;
            float backMinDistance = 10.0f;

            //记录当前选择目标的ServerID
            int curSelecTargetServerID = GlobeVar.INVALID_ID;
            if (null != m_selectTarget)
            {
                curSelecTargetServerID = m_selectTarget.ServerID;
            }

            Dictionary<string, Obj> targets = Singleton<ObjManager>.GetInstance().ObjPools;
            foreach (Obj targetObj in targets.Values)
            {
                if (null == targetObj)
                {
                    continue;
                }

                if (targetObj.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    continue;
                }

                //自己排除在外
                if (targetObj.ServerID == ServerID)
                {
                    continue;
                }

                //已经选择的目标是不会被切换的
                //策划最新决定：如果当前的目标是附近的唯一玩家则依然选择该玩家
                if (curSelecTargetServerID != GlobeVar.INVALID_ID && targetObj.ServerID == curSelecTargetServerID)
                {
                    Obj_OtherPlayer currPlayer = targetObj as Obj_OtherPlayer;
                    if (currPlayer == null || currPlayer.IsDie())
                    {
                        continue;
                    }
                    currentTargetObjChar = currPlayer;
                    continue;
                }

                Obj_OtherPlayer targetOtherPlayer = targetObj as Obj_OtherPlayer;
                if (targetOtherPlayer == null || targetOtherPlayer.IsDie())
                {
                    continue;
                }
                //需求改为玩家和平模式下，先找周围杀戮模式的玩家，不管在不在反击列表
                CharacterDefine.REPUTATION_TYPE nType = Reputation.GetObjReputionType(targetOtherPlayer,false);
                if (nType != CharacterDefine.REPUTATION_TYPE.REPUTATION_HOSTILE)
                {
                    continue;
                }

                //分别取得前方和后方的最近Obj
                float distance = Vector3.Distance(Position, targetOtherPlayer.Position);
                if (IsInFront(targetOtherPlayer))
                {
                    if (distance < frontMinDistance)
                    {
                        frontMinDistance = distance;
                        frontTargetObjChar = targetOtherPlayer;
                    }
                }
                else
                {
                    if (distance < backMinDistance)
                    {
                        backMinDistance = distance;
                        backTargetObjChar = targetOtherPlayer;
                    }
                }
            }

            //如果前方有目标则返回前方目标，否则才返回身后目标
            if (null != frontTargetObjChar)
            {
                return frontTargetObjChar;
            }

            if (null != backTargetObjChar)
            {
                return backTargetObjChar;
            }
            return currentTargetObjChar;
        }

        public void SwitchTarget()
        {
            Obj_Character obj = null;
            //PK模式下，先选择敌对列表中的敌人，然后选择敌对玩家，最后是怪物
            //处于反击状态时，选择目标规则与进入杀戮模式相同
            if (PkModle == (int)CharacterDefine.PKMODLE.KILL ||
                IsCanPKLegal ||
                BaseAttr.Force == (int)Games.GlobeDefine.GameDefine_Globe.FORCETYPE.PVP1 || //PVP 势力
                BaseAttr.Force == (int)Games.GlobeDefine.GameDefine_Globe.FORCETYPE.PVP2 //PVP 势力
                )
            {
                obj = SwitchPlayerTarget();
                if (null == obj)
                {
                    obj = SwitchMonsterTarget();
                }
            }
            else
            {
                //非PK模式下，先选择敌对列表中的敌人
                //根据最新指示，玩家在和平状态下，会优先切换开启杀戮模式的红名玩家
                obj = SwitchPlayerTarget();
                if (null == obj)
                {
                    obj = SwitchMonsterTarget();
                }       
            }

            //未选中则选择怪物
            if (null != obj)
            {
                m_selectTarget = null;
                OnSelectTarget(obj.gameObject);
            }
        }

        public override void OnEnterCombat(Obj_Character Target)
        {
            //无技能 默认使用普攻
            if (CurUseSkillId == -1 || CheckBeforUseSkill(CurUseSkillId) == false)
            {
                CurUseSkillId = OwnSkillInfo[0].SkillId;
            }
            Tab_SkillEx skillExInfo = TableManager.GetSkillExByID(CurUseSkillId, 0);
            if (skillExInfo == null)
            {
                return;
            }
            Tab_SkillBase skillBaseInfo = TableManager.GetSkillBaseByID(skillExInfo.BaseId, 0);
            if (skillBaseInfo == null)
            {
                return;
            }
            //如果开打的时候 当前选择的目标是友好的目标则重新选择一个可以攻击的目标
            if (Target && Reputation.GetObjReputionType(Target) == CharacterDefine.REPUTATION_TYPE.REPUTATION_FRIEND)
            {
                if ((Target.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC || Target.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                    && (skillBaseInfo.TargetType & (int)CharacterDefine.TARGETTYPE.SELF) == 0
                    && (skillBaseInfo.TargetType & (int)CharacterDefine.TARGETTYPE.FRIEND) == 0
                    )
                {
                    Target = SelectSkillTarget(CurUseSkillId);
                    if (Target)
                    {
                        OnSelectTarget(Target.gameObject);
                    }
                }
            }
            //单攻和普攻需要目标
            if (skillBaseInfo.SelLogic == (int)SKILLSELLOGIC.SELLOGIC_SINGLE ||
                (skillBaseInfo.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
            {
                if (Target == null)
                {                    
                    SendNoticMsg(true,"#{1391}");
                    return;
                }

            }

            int nTargetID = -1;
            //向选中目标移动  没在移动状态 能移动 且需要向目标移动则移动
            if (Target != null && IsSkillNeedSelectTar(skillBaseInfo, skillExInfo))
            {
                float skillRadius = skillExInfo.Radius;
                float dis = Vector3.Distance(Position, Target.Position);
                if (Target.BaseAttr.MoveSpeed <= 0 &&
                    IsOpenAutoCombat &&
                    AutoComabat &&
                    dis > skillRadius ) //挂机状态下 对于那些不能移动目标 跑到目标点再放技能 防止出现因为服务器跟客户端位置的偏差 导致技能打不到的情况
                {
                    if (IsMoving == false && IsCanOperate_Move())
                    {
                        MoveTo(Target.Position, Target.gameObject, skillRadius - 0.5f);
                    }
                    return;
                }
                else
                {
                    float diffDistance = dis - skillRadius;
                    if (diffDistance > 0)
                    {
                        //move
                        if (IsMoving == false && IsCanOperate_Move())
                        {
                            MoveTo(Target.Position, Target.gameObject, skillRadius - 2.3f);
                        }
                        return;
                    }
                }
                nTargetID = Target.ServerID;
            }

            ActiveSkill(CurUseSkillId, nTargetID);
            CurUseSkillId = -1;
            base.OnEnterCombat(Target);
        }
        public void ActiveSkill(int nSkillId, int targetId)
        {
            if (m_SkillCore == null)
            {
                return;
            }
            Tab_SkillEx SkillExinfo = TableManager.GetSkillExByID(nSkillId, 0);
            if (SkillExinfo == null)
            {
                LogModule.DebugLog("SkillExinfo is Null: " + nSkillId);
                return;
            }
            int BaseSkillId = SkillExinfo.BaseId;
            Tab_SkillBase SkillBaseinfo = TableManager.GetSkillBaseByID(BaseSkillId, 0);
            if (SkillBaseinfo == null)
            {
                LogModule.DebugLog("SkillBaseInfo is Null" + BaseSkillId);
                return;
            }
            if (UseSkillCheck(targetId, SkillExinfo, SkillBaseinfo))
            {
                /*Tab_Animation animationTab = TableManager.GetAnimationByID(SkillExinfo.SatrtMotionId,0);
                if (animationTab == null)
                {
                    LogModule.DebugLog("animationTab is Null" + SkillExinfo.SatrtMotionId);
                }

                else
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffect(animationTab.SoundID);
                }  */
              
                //发送技能使用包
                CG_SKILL_USE usekill = (CG_SKILL_USE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SKILL_USE);
                usekill.SetSkillId(nSkillId);
                usekill.SetTargetId(targetId);
                usekill.SendPacket();
               

            }
        }
        //CD检测  消耗检测（血 蓝）
        //目标是否可以攻击(距离判断)
        //
        public bool UseSkillCheck(int targetId, Tab_SkillEx SkillExinfo, Tab_SkillBase SkillBaseinfo)
        {
            Obj_Character Target = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(targetId);
            if (IsDie())
            {
                return false;
            }

            //轻功状态无法使用技能
            if (IsLightState)
            {
                SendNoticMsg(true, "#{4583}");
                return false;
            }

            //正在使用技能 且技能无法被打断 则无法使用
            if (null != m_SkillCore && m_SkillCore.IsUsingSkill)
            {
                if (m_SkillCore.UsingSkillBaseInfo != null && m_SkillCore.UsingSkillExInfo != null)
                {
                    //                     //正在使用的技能 无法被打断 则不允许使用
                    //                     if (m_SkillCore.UsingSkillBaseInfo.IsSkillBreak != 1)
                    //                     {
                    //                         return false;
                    //                     }
                    //                     正在使用连续技 则不允许再次使用连续技
                    //                                         if ((m_SkillCore.UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0 &&
                    //                                             (SkillBaseinfo.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
                    //                                         {
                    //                                             return false;
                    //                                         }
                }
            }
            //CD 时间
            //检测目标合法性 群攻可以无目标释放
            if (SkillBaseinfo.SelLogic == (int)SKILLSELLOGIC.SELLOGIC_SINGLE ||
                (SkillBaseinfo.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
            {
                if (Target == null)
                {
                    return false;
                }

                if (Target.IsDie())
                {
                    //  _mainPlayer.SendNoticMsg("#{1391}");
                    return false;
                }
            }
            //CD 时间检测 增加公共CD判断
            int nSkillIndex = GetSkillIndexById(SkillExinfo.SkillExID);
            if (nSkillIndex >= 0 && nSkillIndex < OwnSkillInfo.Length)
            {
                if (OwnSkillInfo[nSkillIndex].CDTime > 0)
                {
                    //   SendNoticMsg("#{1245}");
                    return false;
                }

                if (SkillBaseinfo.HasPublicCd == 1 && SkillPublicTime > 0)
                {
                    return false;
                }
            }
            //检测消耗类型
            SKILLDELANDGAINTYPE nNeedType_1 = (SKILLDELANDGAINTYPE)SkillExinfo.GetDelTypebyIndex(0);
            int nNeedValue1 = SkillExinfo.GetDelNumbyIndex(0);
            if (CheckForUseSkillNeed(nNeedType_1, nNeedValue1) == false)
            {
                return false;
            }
            SKILLDELANDGAINTYPE nNeedType_2 = (SKILLDELANDGAINTYPE)SkillExinfo.GetDelTypebyIndex(1);
            int nNeedValue2 = SkillExinfo.GetDelNumbyIndex(1);
            if (CheckForUseSkillNeed(nNeedType_2, nNeedValue2) == false)
            {
                return false;
            }
            return true;
        }
        /// <summary>
        /// modified by mawenbin
        /// bSendNoticMsg 是否显示屏幕提示信息
        /// </summary>
        protected bool CheckForUseSkillNeed(SKILLDELANDGAINTYPE nType, int nNeedValue, bool bSendNoticMsg = true)
        {
            switch (nType)
            {
                case SKILLDELANDGAINTYPE.HPTYPE_VALUE://HP的数值
                    if (BaseAttr.HP - nNeedValue <= 0)
                    {
                        if (bSendNoticMsg)
                        {
                            SendNoticMsg(false, "#{1247}");
                        }
                        return false;
                    }
                    break;
                case SKILLDELANDGAINTYPE.HPTYPE_RATE://HP的百分比

                    if (BaseAttr.HP - BaseAttr.MaxHP * nNeedValue / 100.0f <= 0)
                    {
                        if (bSendNoticMsg)
                        {
                            SendNoticMsg(false, "#{1247}");
                        }
                        return false;
                    }
                    break;
                case SKILLDELANDGAINTYPE.MPTYPE_VALUE://MP数值
                    if (BaseAttr.MP - nNeedValue < 0)
                    {
                        if (bSendNoticMsg)
                        {
                            SendNoticMsg(false, "#{1248}");
                        }
                        return false;
                    }
                    break;
                case SKILLDELANDGAINTYPE.MPTYPE_RATE: //MP百分比

                    if (BaseAttr.MP - BaseAttr.MaxMP * nNeedValue / 100.0f < 0)
                    {
                        if (bSendNoticMsg)
                        {
                            SendNoticMsg(false, "#{1248}");
                        }
                        return false;
                    }
                    break;
                case SKILLDELANDGAINTYPE.XPTYPE_VALUE: //XP数值
                    if (BaseAttr.XP - nNeedValue < 0)
                    {
                        if (bSendNoticMsg)
                        {
                            SendNoticMsg(false, "#{1244}");
                        }
                        return false;
                    }
                    break;
                case SKILLDELANDGAINTYPE.XPTYPE_RATE: //XP百分比
                    if (BaseAttr.XP - BaseAttr.MaxXP * nNeedValue / 100.0f < 0)
                    {
                        if (bSendNoticMsg)
                        {
                            SendNoticMsg(false, "#{1244}");
                        }
                        return false;
                    }
                    break;
                default:
                    return true;
            }
            return true;
        }
        public void ChangeHit(int nIncHitCount, bool isCritical)
        {
            m_nHitPoint = m_nHitPoint + nIncHitCount;
            if (m_fLastHitPointTime > 0 && Time.time - m_fLastHitPointTime > 5.0f) //5s清零
            {
                m_nHitPoint = 0;
            }
            m_fLastHitPointTime = Time.time;
            if (PlayerHitsLogic.Instance() != null)
            {
                PlayerHitsLogic.Instance().AddPlayerHits(m_nHitPoint, isCritical);
            }
        }

        public bool IsHaveNoMoveBuff() //是否拥有不能移动的BUFF
        {
            for (int i = 0; i < ClientImpactInfo.Count; i++)
            {
                if (ClientImpactInfo[i].ImpactLogicId == 8 ||
                    ClientImpactInfo[i].ImpactLogicId == 11 ||
                    ClientImpactInfo[i].ImpactLogicId == 12 ||
                    ClientImpactInfo[i].ImpactLogicId == 18 ||
                    ClientImpactInfo[i].ImpactLogicId == 30 ||
                    ClientImpactInfo[i].ImpactLogicId == 31
                    )
                {
                    return true;
                }
            }
            return false;
        }

        public bool IsHaveStealthBuff() //是否拥有隐身BUFF
        {
            for (int i = 0; i < ClientImpactInfo.Count; i++)
            {
                if (ClientImpactInfo[i].ImpactLogicId == 17)
                {
                    return true;
                }
            }
            return false;
        }

        public int GetTotalStudySkillCombatValue() //获取所有已学会技能的战斗力总值
        {
            int nTotalValue = 0;
            for (int i = 0; i < OwnSkillInfo.Length; i++)
            {
                if (OwnSkillInfo[i].IsValid())
                {
                    Tab_SkillEx _skillEx = TableManager.GetSkillExByID(OwnSkillInfo[i].SkillId, 0);
                    if (_skillEx != null)
                    {
                        nTotalValue += _skillEx.CombatValue;
                    }
                }
            }
            return nTotalValue;
        }
        void UpdateClientImpactInfo()
        {
            //             for (int i = 0; i < ClientImpactInfo.Count; i++)
            //             {
            //                 //!!!这里是为了防止出现丢包的情况 客户端的BUFF信息没清除的保险措施 做1s的延迟
            //                 if (ClientImpactInfo[i].IsForever ==false)
            //                 {
            //                     ClientImpactInfo[i].RemainTime -= Time.deltaTime;
            //                     if (ClientImpactInfo[i].RemainTime <= -1.0f)
            //                     {
            //                         ClientImpactInfo[i].CleanUp();
            //                     }
            //                 }
            //             }
        }
        public int GetTotalSwordsManCombat()
        {
            int totalCombatValue = 0;
            SwordsManContainer SwordsManEquipPack = GameManager.gameManager.PlayerDataPool.SwordsManEquipPack;
            if (SwordsManEquipPack != null)
            {
                totalCombatValue = SwordsManEquipPack.GetAllSwordsManCombatValue();
            }
            return totalCombatValue;
        }

        /// <summary>
        /// 骑乘冲锋技能的检测
        /// </summary>
        /// <returns></returns>
        public bool CheckCanUseCrashSkill()
        {
            //没有骑乘
            if (-1 == MountID)
                return false;

            if (IsDie())
                return false;

            //暂时先写这么多吧。只是为了更严谨，其实也可仅仅依赖是否有骑乘就可以了（如，特殊场景，副本？被控制等等）。
            return true;
        }
    }
}