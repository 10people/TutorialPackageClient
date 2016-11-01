using UnityEngine;
using System.Collections;
using Module.Log;
using System.Collections.Generic;
using GCGame.Table;
using Games.GlobeDefine;

namespace Games.UserCommonData
{
    enum USER_COMMONDATA
    {
        CD_COPYSCENE_QUITTIME               = 3,
        CD_COPYSCENE_NUMBER3                = 5,
        CD_COPYSCENE_NUMBER4                = 6,
        CD_CONSIGNSALE                      = 7,
        CD_COPYSCENE_CANGJINGGE_TIER        = 9,
        CD_COPYSCENE_CANGJINGGE_SWEEP       = 10,
        CD_STAMINA_BUYNUM                   = 13,
        CD_RESTAURANT_FINISHFOOD_NUM        = 14,
        CD_DAILYLUCKYDRAW_CDTIME            = 15,
        CD_NOTICE_DATA                      = 16,
        CD_ORIGINAL_NUMBER                  = 17,
        CD_CJG_SWEEP_CD                     = 18,
		CD_SNS_REWARD_NUMBER				= 19,
        CD_SHARE_NANGUA_CODE_REWARD_COUNT   = 32,
        CD_VIPCP_JXZ                        = 34,
        
        CD_VIPCP_YZW                        = 36,
        CD_VIPCP_ZLQJ                       = 37,
        CD_VIPCP_YWGM                       = 38,
        CD_VIPCP_NHCJ                       = 39,
        CD_VIPCP_SSS                        = 40,

        CD_WISHINGWELL_TOTAL                = 48,
        CD_WISHINGWELL_FETCH                = 49,
        CD_WISHINGWELL_RIGHT                = 51,
        CD_PAOSHANG_GOTTEN_NUM              = 52,

        CD_VIPCP_MONEYTREE                  = 56,
        CD_COSTREBATE_VALUE                 = 59,
       // CD_VIPTEAM_YZW                      = 60,
       // CD_VIPTEAM_ZLQJ                     = 61,
        CD_VIP_TEAM_SCENE_0                 = 60,
        CD_VIP_TEAM_SCENE_1                 = 61,
        CD_VIP_TEAM_SCENE_2                 = 62,
        CD_COPYSCENE_SWEEP_CD               = 63,

		CD_GIVEROSE_NUMBER                  = 65,
		CD_RECEIVEROSE_NUMBER               = 66,

        CD_HONGBAO_SCORE                    = 71,
        CD_PAOSHANG_FUHUOTIMES              = 74,

        CD_SPECICALTIME_PAYREBATE_VALUE     = 77,
        CD_JUYIYITANG_GETAWARD              = 81,
        CD_GUILDMISSION_DAILYDATA           = 82,
        CD_TRAINING_LEVEL                   = 86,
        CD_TRAINING_EXP                     = 87,
        CD_TRAINING_CHOICEDATA1             = 88,
        CD_TRAINING_CHOICEDATA2             = 89,
        CD_TRAINING_CHOICEDATA3             = 90,

        CD_NEWSERVERACTIVITY                = 91,
        CD_COPYSCENE_MULTIPLECANGJINGGE_TIER = 92,
        CD_CANGJINGGE_EXTRAREWARD_TIER = 93,
        CD_MULTIPLECANGJINGGE_EXTRAREWARD_TIER  = 94,
        CD_JUQINGFUBEN_LEVEL                    = 95,
        CD_VIP_AWARD_COMMONDATA                 = 96,
        CD_VIP_STORY_COPYSCENE                  = 98,
        CD_MAX_NUM_DATA = 128, // 存储边界 上面添加
    }       

    enum USER_COMMONFLAG
    {
        CF_GUILDACTIVITY_FLAG = 2,                  // 帮会日常活动标记
        CF_FELLOWFUNCTION_OPENFLAG = 10,            // 伙伴开启
        CF_BELLEFUNCTION_OPENFLAG = 11,             // 美人开启
        CF_ACTIVITYFUNCTION_OPENFLAG = 12,          // 活动开启
        CF_STRENGTHENFUNCTION_OPENFLAG = 13,        // 强化开启
        CF_RESTAURANTFUNCTION_OPENFLAG = 14,        // 酒楼开启
        CF_GUILDFUNCTION_OPENFLAG = 15,             // 帮会功能开启标记
        CF_XIAKEFUNCTION_OPENFLAG = 16,             // 侠客功能开启标记
        CF_MISSION_DAILYMISSION_FLAG = 19,          //每日任务 完成标记
        CF_ACTIVITY_SINGLEDAY_FLAG = 22,          //光棍节活动标记
        CF_ACTIVITY_THANKSGIVINGDAYFLAG = 23,     //感恩节活动标记
        CF_ACTIVITY_THANKSMISSIONERYDAYFLAG = 24,//感恩节活动任务标记
        CF_ACTIVITY_SINGLEDAYMISSION_FLAG = 25,   //光棍节活动任务标记
        CF_ACTIVITY_HALLOWEEN_FLAG = 27,   //万圣节活动任务标记
        CF_CYFANS_AWARD_FLAG = 28,      //畅游老玩家反馈
        CF_ISOPENKILLNPCEXP = 29,                // 是否提示杀怪经验
        CF_SNS_DAILY_REWARD = 30,                   //SNS每日奖励
        CF_REFUSE_ADD_FRIEND = 34,                  //拒绝被添加好友
        CF_SIGNIN_EVERYDAY_FALG = 38,               //每日签到
        CF_JICHE_THESECONDDAY_OPENFLAG = 52,             // 第二天领取功能显示
		CF_DISABLE_DUEL = 54,					// 拒绝切磋
        CF_COMBO_FIRSTUSED = 60,        //第一次使用连续技标记
		CF_AUTO_ADD_ITEM_WHITE = 62,
		CF_AUTO_ADD_ITEM_GREEN = 63,
		CF_AUTO_ADD_ITEM_BLUE = 64,
		CF_AUTO_ADD_ITEM_PURPLE = 65,
		CF_AUTO_ADD_ITEM_GREY = 66,
        CF_GET_GUILD_WEEKREWARD = 67,
        CF_AUTOENHANCE_OPENFLAG = 68,            //自动强化装备
        CF_GEMHOLE_OPENFLAG1 = 70,            //宝石镶嵌孔位开启40级
        CF_GEMHOLE_OPENFLAG2 = 71,            //宝石镶嵌孔位开启70级
        CF_GEMHOLE_OPENFLAG3 = 72,            //宝石镶嵌孔位开启90级
		CF_GUAJI_FLAG = 73,								// 挂机
        CF_CANGJINGGE_FIRST_TIER = 74,          //玩家是否进入过藏经阁第一层
        CF_CANGJINGGE_SECOND_TIER = 75,          //玩家是否进入过藏经阁第二层
        CF_OPEN_DRILY_MISSION       = 76,				// 每日任务
        CF_OPEN_DRILY_MISSION_NEW_GUID  = 77 ,	// 每日任务 新手引导
        CF_OPEN_FLYWING = 78 ,						// 翅膀解锁
		CF_HUANGHUN_NEW_GUID = 79,			// 黄昏要塞
		CF_JIXIYANJIU_NEW_GUID = 80,			// 机械研究所
		CF_LEINABAO_NEW_GUID = 81,				// l雷纳包 
		CF_BINGDONGDIXIA_NEW_GUID			= 82,		// 冰冻地下
		CF_FEIQIDUSHI_NEW_GUID = 83,			// 废弃都市
		CF_PVP_NEW_GUID				= 84,			// pvp 
        CF_MAX_NUM_FLAG = 160,  // 存储边界 上面添加
    }

    public class UserCommonData
    {
        public const int MAX_CHAR_COMMON_DATA_NUM = 128;
        public const int MAX_CHAR_COMMON_FLAG_NUM = 5;
        public const int MAX_COPY_DAY_NUMBER_NUM = 16;

        private int[] m_CommonData;
        private int[] m_CommonFlag;
        struct CopySceneDayNumber
        {
            public int m_nDayCount;
            public int m_ndayTeamCount;
            public int m_nTotalCount1;
            public int m_nTotalCount2;
            public int m_nTotalCount3;
            public int m_nTeamTotalCount1;
            public int m_nTeamTotalCount2;
            public int m_nTeamTotalCount3;
            public int m_nMultiple;
            public int m_nResetCount;
            public int m_nResetTeamCount;
            public int m_nExtraDayCount;
            public int m_nExtradayTeamCount;
        };
        private Dictionary<int, CopySceneDayNumber> m_CopySceneDayNumber;
        struct CopySceneNumberEx
        {
            public int m_nBuybackDayCount;
            public int m_nBuybackDayTeamCount;
        }
        private Dictionary<int, CopySceneNumberEx> m_CopySceneNumberEx;

        struct CopySceneActivityOnOff
        {
            public bool m_bSolo;
            public bool m_bTeam;
        }
        private Dictionary<int, CopySceneActivityOnOff> m_IsCSActivity;
        public UserCommonData()
        {
            m_CommonData = new int[MAX_CHAR_COMMON_DATA_NUM];
            m_CommonFlag = new int[MAX_CHAR_COMMON_FLAG_NUM];
            m_CopySceneDayNumber = new Dictionary<int, CopySceneDayNumber>();
            m_CopySceneNumberEx = new Dictionary<int, CopySceneNumberEx>();
            m_IsCSActivity = new Dictionary<int, CopySceneActivityOnOff>();
        }
        public void ClearData()
        {
            if (m_CommonData != null)
            {
                for (int i = 0; i < MAX_CHAR_COMMON_DATA_NUM; i++)
                {
                    m_CommonData[i] = 0;
                }
            }
            if (m_CommonFlag != null)
            {
                for (int i = 0; i < MAX_CHAR_COMMON_FLAG_NUM; i++)
                {
                    m_CommonFlag[i] = 0;
                }
            }
            if (m_CopySceneDayNumber != null)
            {
                m_CopySceneDayNumber.Clear();
            }
            if (m_CopySceneNumberEx != null)
            {
                m_CopySceneNumberEx.Clear();
            }
            if (m_IsCSActivity != null)
            {
                m_IsCSActivity.Clear();
            }
        }

        void SetCommonData(int nIndex, int nValue)
        {
            if (nIndex < 0 || nIndex >= MAX_CHAR_COMMON_DATA_NUM)
            {
                LogModule.DebugLog("SetCommonData: Index out of Range!!!");
                return;
            }
            int nData = m_CommonData[nIndex];
            m_CommonData[nIndex] = nValue;
            
            // 特殊添加 其他 更改 加在 OnCommonDataChange()中
            if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_SWEEP)
            {
                if (ActivityController.Instance() != null)
                {
                    ActivityController.Instance().UpdateTabTips();
                }
                if (FunctionButtonLogic.Instance())
                {
                    FunctionButtonLogic.Instance().UpdateActionButtonTip();
                }
                if (CangJingGeWindow.Instance() != null)
                {
                    CangJingGeWindow.Instance().UpdateInfo();
                    if (nData < nValue)//开始扫荡
                    {
                        CangJingGeWindow.Instance().StartSweep();
                    }
                }
            }
            // 更新 操作
            OnCommonDataChange(nIndex, nValue);
        }

        public int GetCommonData(int nIndex)
        {
            if (nIndex < 0 || nIndex >= MAX_CHAR_COMMON_DATA_NUM)
            {
                LogModule.DebugLog("GetCommonData: Index out of Range!!!");
                return -1;
            }

            return m_CommonData[nIndex];
        }

        void OnCommonDataChange(int nIndex, int nValue)
        {
            if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_QUITTIME)
            {
                if (FunctionButtonLogic.Instance() != null)
                {
                    FunctionButtonLogic.Instance().ExitTime = nValue;
                }
            }
            else if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_CJG_SWEEP_CD)
            {
                GameManager.gameManager.PlayerDataPool.CJGSweepCDTime = nValue;
                if (DungeonWindow.Instance() != null)
                {
                    DungeonWindow.Instance().UpdateTabInfo();
                }
            }
            else if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_SWEEP_CD)
            {
                GameManager.gameManager.PlayerDataPool.CopyeSceneSweepCDTime = nValue;              
            }
            else if ( nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_JXZ
                   || nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_YZW
                   || nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_ZLQJ
                   || nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_YWGM
                   || nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_NHCJ
                   || nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_SSS)
            {
                if (DungeonWindow.Instance() != null)
                {
                    DungeonWindow.Instance().UpdateTabInfo();
                }
            }
            else if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_SHARE_NANGUA_CODE_REWARD_COUNT)
            {
               if (ShareRootWindow.Instance() != null)
               {
                   ShareRootWindow.Instance().UpdateRewardCount();
               }
            }
            else if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_WISHINGWELL_TOTAL
                  || nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_WISHINGWELL_FETCH)
            {
                if( ChargeActivityLogic_XY.Instance() != null )
                {
                    ChargeActivityLogic_XY.Instance().UpdateData();
                }
            }
            else if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_MONEYTREE)
            {
                if (MoneyTreeLogic.Instance() != null)
                {
                    MoneyTreeLogic.Instance().UpdateVipTip();
                }
            }
            else if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_PAOSHANG_GOTTEN_NUM)
            {
                if (MenuBarLogic.Instance() != null)
                {
                    MenuBarLogic.Instance().UpdateGuildAndMasterReserveMember();
                }
                if (PlayerFrameLogic.Instance() != null)
                {
                    PlayerFrameLogic.Instance().UpdateRemainNum();
                }
//                if (GuildWindow.Instance() != null)
//                {
//                    GuildWindow.Instance().UpdatePaoShangTip();
//                }
//                if (GuildPaoShang.Instance() != null)
//                {
//                    GuildPaoShang.Instance().UpdateMemTimesOneDay();
//                }
            }
//            else if (nIndex == (int)Games.UserCommonData.USER_COMMONDATA.CD_HONGBAO_SCORE)
//            {
//                if (MakeHongBaoWindow.Instance() != null )
//                {
//                    MakeHongBaoWindow.Instance().Score = nValue;
//                }
//            }
            else if (nIndex == (int)USER_COMMONDATA.CD_GUILDMISSION_DAILYDATA)
            {
//                if (GuildMission.Instance() != null)
//                {
//                    GuildMission.Instance().MisionData = nValue;
//                }
            }
//			else if (nIndex == (int)USER_COMMONDATA.CD_GIVEROSE_NUMBER 
//			         || nIndex == (int)USER_COMMONDATA.CD_RECEIVEROSE_NUMBER )
//			{
//				if (LoverFlowerWindow.Instance() != null)
//				{
//					LoverFlowerWindow.Instance().UpdateRankNumber();
//				}
//			}
            else if (nIndex == (int)USER_COMMONDATA.CD_JUYIYITANG_GETAWARD)
            {
                if (JuYiYiTangWindow.Instance() != null)
                {
                    JuYiYiTangWindow.Instance().Init();
                }
            }
            else if (nIndex == (int)USER_COMMONDATA.CD_TRAINING_LEVEL ||
                nIndex == (int)USER_COMMONDATA.CD_TRAINING_CHOICEDATA1 ||
                nIndex == (int)USER_COMMONDATA.CD_TRAINING_CHOICEDATA2 ||
                nIndex == (int)USER_COMMONDATA.CD_TRAINING_CHOICEDATA3)
            {
                if (TrainingLogic.Instance() != null)
                {
                    TrainingLogic.Instance().HandleUpdateTrainingLevel();
                }
            }
            else if (nIndex == (int)USER_COMMONDATA.CD_TRAINING_EXP)
            {
                if (TrainingLogic.Instance() != null)
                {
                    TrainingLogic.Instance().HandleUpdateTrainingExp();
                }
            }
            //else if (nIndex == (int)USER_COMMONDATA.CD_NEWSERVERACTIVITY)
            //{                
            //    if (NewFunctionLogic.Instance() != null)
            //    {
            //        NewFunctionLogic.Instance().ShowNewServerActivity();
            //    }
            //}
        }

        void SetCommonFlag(int nBits, bool bFlag)
        {
            if (nBits < 0 || nBits >= MAX_CHAR_COMMON_FLAG_NUM*8*sizeof(int))
            {
                LogModule.DebugLog("SetCommonFlag: Index out of Range!!!");
                return;
            }

            int nIndex = nBits / (sizeof(int) * 8);
            if (nIndex >= 0 && nIndex < MAX_CHAR_COMMON_FLAG_NUM)
            {
                //int nOldBits = nBits;
                nBits = nBits % (sizeof(int) * 8);// 0-31
                if (nBits >= 0 && nBits <= 31)
                {
                    int nDataValue = m_CommonFlag[nIndex];
                    if (bFlag != false)
                    {
                        nDataValue |= (1 << nBits);
                    }
                    else
                    {
                        nDataValue &= ~(1 << nBits);
                    }

                    m_CommonFlag[nIndex] = nDataValue;
                }

                // 更新后操作
                OnCommonFlagChange(nBits);
            }

        }

        public bool GetCommondFlag(int nBits)
        {
            if (nBits < 0 || nBits >= sizeof(int)*MAX_CHAR_COMMON_FLAG_NUM*8)
            {
                LogModule.DebugLog("GetCommondFlag: Index out of Range!!!");
                return false;
            }
            int nIndex = nBits / (sizeof(int) * 8);
            if (nIndex >=0 && nIndex < MAX_CHAR_COMMON_FLAG_NUM)
            {
                nBits = nBits % (sizeof(int) * 8);
                if (nBits >= 0 && nBits <= 31)
                {
                    int nDataValue = m_CommonFlag[nIndex];
                    uint nRet = (uint)(nDataValue & (1 << nBits));
                    return ((nRet > 0) ? true : false);
                }
            }
            return false;
        }

        void OnCommonFlagChange(int nBit)
        {
            if (nBit == (int)USER_COMMONFLAG.CF_GUILDACTIVITY_FLAG)
            {
                // 更新界面
                if (FunctionButtonLogic.Instance())
                {
                    FunctionButtonLogic.Instance().UpdateActionButtonTip();
                }

                if (ActivityController.Instance())
                {
                    ActivityController.Instance().UpdateGuildActivityWindow();
                }
            }
            else if (nBit == (int)USER_COMMONFLAG.CF_GET_GUILD_WEEKREWARD)
            {
                if (GuildActivityLogic.Instance() != null)
                {
                    GuildActivityLogic.Instance().UpdateGetRewardBtn();
                }
            }
        }

        public void AskSetCommonFlag(int nBits, bool bFlag)
        {
            int nFlag = (bFlag == true ? 1 : 0);
            CG_ASK_SETCOMMONFLAG askPacket = (CG_ASK_SETCOMMONFLAG)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_SETCOMMONFLAG);
            askPacket.SetNBits(nBits);
            askPacket.SetNFlag(nFlag);
            askPacket.SendPacket();
        }
        void SetCopySceneNumber(int nSceneClassID, CopySceneDayNumber copyInfo/*  int nDayCount, int nDayTeamCount, int nTotalCount1, int nTotalCount2, int nTotalCount3, int nTeamTotalCount1, int nTeamTotalCount2, int nTeamTotalCount3, int nMultiple*/)
        {
            CopySceneDayNumber info;
            info = copyInfo;
//             info.m_nDayCount = copyInfo.nDayCount;
//             info.m_ndayTeamCount = nDayTeamCount;
//             info.m_nTotalCount1 = nTotalCount1;
//             info.m_nTotalCount2 = nTotalCount2;
//             info.m_nTotalCount3 = nTotalCount3;
//             info.m_nTeamTotalCount1 = nTeamTotalCount1;
//             info.m_nTeamTotalCount2 = nTeamTotalCount2;
//             info.m_nTeamTotalCount3 = nTeamTotalCount3;
//             info.m_nMultiple = nMultiple;
            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                info.m_nExtraDayCount = m_CopySceneDayNumber[nSceneClassID].m_nExtraDayCount;
                info.m_nExtradayTeamCount = m_CopySceneDayNumber[nSceneClassID].m_nExtradayTeamCount;  
                m_CopySceneDayNumber[nSceneClassID] = info;   
            }
            else
            {
                m_CopySceneDayNumber.Add(nSceneClassID, info);
            }
            if (DungeonWindow.Instance() != null)
            {
                DungeonWindow.Instance().UpdateCopySceneInfo(nSceneClassID); 
            }
            if (nSceneClassID == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI && CangJingGeWindow.Instance() != null)
            {
                CangJingGeWindow.Instance().UpdateInfo();
            }
            if (ActivityController.Instance() != null )
            {
                ActivityController.Instance().UpdateTabTips();
            }
            if (FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateActionButtonTip();
            }
            
        }
        void SetCopySceneMultiple(int nSceneClassID,int nMultiple)
        {
           
            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                CopySceneDayNumber info;
                info.m_nDayCount = m_CopySceneDayNumber[nSceneClassID].m_nDayCount;
                info.m_ndayTeamCount =m_CopySceneDayNumber[nSceneClassID].m_ndayTeamCount;
                info.m_nTotalCount1 = m_CopySceneDayNumber[nSceneClassID].m_nTotalCount1;
                info.m_nTotalCount2 = m_CopySceneDayNumber[nSceneClassID].m_nTotalCount2;
                info.m_nTotalCount3 = m_CopySceneDayNumber[nSceneClassID].m_nTotalCount3;
                info.m_nTeamTotalCount1 = m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount1;
                info.m_nTeamTotalCount2 = m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount2;
                info.m_nTeamTotalCount3 = m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount3;
                info.m_nResetCount = m_CopySceneDayNumber[nSceneClassID].m_nResetCount;
                info.m_nResetTeamCount = m_CopySceneDayNumber[nSceneClassID].m_nResetTeamCount;
                info.m_nMultiple = nMultiple;
                info.m_nExtraDayCount = m_CopySceneDayNumber[nSceneClassID].m_nExtraDayCount;
                info.m_nExtradayTeamCount = m_CopySceneDayNumber[nSceneClassID].m_nExtradayTeamCount;
                m_CopySceneDayNumber[nSceneClassID] = info;
            }
            else
            {
                CopySceneDayNumber info;
                info.m_nDayCount = 0;
                info.m_ndayTeamCount = 0;
                info.m_nTotalCount1 = 0;
                info.m_nTotalCount2 = 0;
                info.m_nTotalCount3 = 0;
                info.m_nTeamTotalCount1 = 0;
                info.m_nTeamTotalCount2 = 0;
                info.m_nTeamTotalCount3 = 0;
                info.m_nResetCount = 0;
                info.m_nResetTeamCount = 0;
                info.m_nExtraDayCount = 0;
                info.m_nExtradayTeamCount = 0;
                info.m_nMultiple = nMultiple;
                m_CopySceneDayNumber.Add(nSceneClassID, info);
            }
            if (DungeonWindow.Instance() != null)
            {
                DungeonWindow.Instance().UpdateCopySceneInfo(nSceneClassID);
            }
            if (ActivityController.Instance() != null)
            {
                ActivityController.Instance().UpdateTabTips();
            }
            if (FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateActionButtonTip();
            }

        }
        void SetCopySceneExtra(int nSceneClassID, int nExtraDayCount, int nExtradayTeamCount)
        {
           
            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                CopySceneDayNumber info;
                info.m_nDayCount = m_CopySceneDayNumber[nSceneClassID].m_nDayCount;
                info.m_ndayTeamCount =m_CopySceneDayNumber[nSceneClassID].m_ndayTeamCount;
                info.m_nTotalCount1 = m_CopySceneDayNumber[nSceneClassID].m_nTotalCount1;
                info.m_nTotalCount2 = m_CopySceneDayNumber[nSceneClassID].m_nTotalCount2;
                info.m_nTotalCount3 = m_CopySceneDayNumber[nSceneClassID].m_nTotalCount3;
                info.m_nTeamTotalCount1 = m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount1;
                info.m_nTeamTotalCount2 = m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount2;
                info.m_nTeamTotalCount3 = m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount3;
                info.m_nResetCount = m_CopySceneDayNumber[nSceneClassID].m_nResetCount;
                info.m_nResetTeamCount = m_CopySceneDayNumber[nSceneClassID].m_nResetTeamCount;
                info.m_nMultiple = m_CopySceneDayNumber[nSceneClassID].m_nMultiple;
                info.m_nExtraDayCount = nExtraDayCount;
                info.m_nExtradayTeamCount = nExtradayTeamCount;
                m_CopySceneDayNumber[nSceneClassID] = info;
            }
            else
            {
                CopySceneDayNumber info;
                info.m_nDayCount = 0;
                info.m_ndayTeamCount = 0;
                info.m_nTotalCount1 = 0;
                info.m_nTotalCount2 = 0;
                info.m_nTotalCount3 = 0;
                info.m_nTeamTotalCount1 = 0;
                info.m_nTeamTotalCount2 = 0;
                info.m_nTeamTotalCount3 = 0;
                info.m_nResetCount = 0;
                info.m_nResetTeamCount = 0;
                info.m_nExtraDayCount = nExtraDayCount;
                info.m_nExtradayTeamCount = nExtradayTeamCount;
                info.m_nMultiple = 0;
                m_CopySceneDayNumber.Add(nSceneClassID, info);
            }
            if (DungeonWindow.Instance() != null)
            {
                DungeonWindow.Instance().UpdateCopySceneInfo(nSceneClassID);
            }
            if (ActivityController.Instance() != null)
            {
                ActivityController.Instance().UpdateTabTips(false);
            }
            if (FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateActionButtonTip();
            }

        }
        public int GetCopySceneNumber(int nSceneClassID, int nSingle)   //当天次数
        {

            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                if (nSingle == 1)
                {
                    return m_CopySceneDayNumber[nSceneClassID].m_nDayCount;
                }
                else
                {
                    return m_CopySceneDayNumber[nSceneClassID].m_ndayTeamCount;
                }               
            }
            return 0;
        }
        public int GetCopySceneTotalNumber(int nSceneClassID, int nDiffcult, int nSingle)   //总次数
        {
            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                if (nSingle == 1)
                {
                    if (nDiffcult == 1)
                    {
                        return m_CopySceneDayNumber[nSceneClassID].m_nTotalCount1;
                    }
                    else if (nDiffcult == 2)
                    {
                        return m_CopySceneDayNumber[nSceneClassID].m_nTotalCount2;
                    }
                    else if ( nDiffcult == 3)
                    {
                        return m_CopySceneDayNumber[nSceneClassID].m_nTotalCount3;
                    }
                   
                }
                else
                {
                    if (nDiffcult == 1)
                    {
                        return m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount1;
                    }
                    else if (nDiffcult == 2)
                    {
                        return m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount2;
                    }
                    else if (nDiffcult == 3)
                    {
                        return m_CopySceneDayNumber[nSceneClassID].m_nTeamTotalCount3;
                    }
                }
            }
            return 0;
        }
        public int GetCopySceneMultiple(int nSceneClassID)   
        {

            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                return m_CopySceneDayNumber[nSceneClassID].m_nMultiple;
            }
            return 1;
        }
        public int GetCopySceneReset(int nSceneClassID,int nSingle)
        {
            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                if ( nSingle == 1)
                {
                    return m_CopySceneDayNumber[nSceneClassID].m_nResetCount;
                }
                else
                {
                    return m_CopySceneDayNumber[nSceneClassID].m_nResetTeamCount;
                }               
            }
            return 0;
        }
        public int GetCopySceneExtraNumber(int nSceneClassID, int nSingle)   //当天次数
        {

            if (m_CopySceneDayNumber.ContainsKey(nSceneClassID))
            {
                if (nSingle == 1)
                {
                    return m_CopySceneDayNumber[nSceneClassID].m_nExtraDayCount;
                }
                else
                {
                    return m_CopySceneDayNumber[nSceneClassID].m_nExtradayTeamCount;
                }
            }
            return 0;
        }
        void SetCopySceneNumberEx(int nSceneClassID, CopySceneNumberEx copyInfo/*  int nDayCount, int nDayTeamCount, int nTotalCount1, int nTotalCount2, int nTotalCount3, int nTeamTotalCount1, int nTeamTotalCount2, int nTeamTotalCount3, int nMultiple*/)
        {
            //m_CopySceneNumberEx
//            CopySceneNumberEx info;
            if (m_CopySceneNumberEx.ContainsKey(nSceneClassID))
            {
                m_CopySceneNumberEx[nSceneClassID] = copyInfo;
            }
            else
            {
                m_CopySceneNumberEx.Add(nSceneClassID, copyInfo);
            }
            if (DungeonWindow.Instance() != null)
            {
                DungeonWindow.Instance().UpdateCopySceneInfo(nSceneClassID);
            }
            if (ActivityController.Instance() != null)
            {
                ActivityController.Instance().UpdateTabTips(false);
            }
            if (FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateActionButtonTip();
            }
            if (RebuyWindow.Instance())
            {
                RebuyWindow.Instance().UpdateData();
            }
        }
        public int GetCopySceneNumberEx(int nSceneClassID, bool bSingle)   //当天次数
        {

            if (m_CopySceneNumberEx.ContainsKey(nSceneClassID))
            {
                if (bSingle)
                {
                    return m_CopySceneNumberEx[nSceneClassID].m_nBuybackDayCount;
                }
                else
                {
                    return m_CopySceneNumberEx[nSceneClassID].m_nBuybackDayTeamCount;
                }
            }
            return 0;
        }
        void SetIsCSActivity(int nSceneClassID, CopySceneActivityOnOff copyInfo)
        {
            if (m_IsCSActivity.ContainsKey(nSceneClassID))
            {
                m_IsCSActivity[nSceneClassID] = copyInfo;
            }
            else
            {
                m_IsCSActivity.Add(nSceneClassID, copyInfo);
            }
        }
        public bool GetIsCSActivity(int nSceneClassID, bool bSingle)   //当天次数
        {

            if (m_IsCSActivity.ContainsKey(nSceneClassID))
            {
                if (bSingle)
                {
                    return m_IsCSActivity[nSceneClassID].m_bSolo;
                }
                else
                {
                    return m_IsCSActivity[nSceneClassID].m_bTeam;
                }
            }
            return false;
        }
        public void HandlePacket(GC_SYNC_COMMONDATA packet)
        {
            for (int i = 0; i < packet.nIndexCount; i++ )
            {
                SetCommonData(packet.GetNIndex(i), packet.GetNValue(i));

                if( packet.GetNIndex(i) == (int)Games.UserCommonData.USER_COMMONDATA.CD_VIP_AWARD_COMMONDATA ) 
				{
                    Messenger.Broadcast(MessengerConst.OnUserVIPDataLogicInfo);
                }

				if( packet.GetNIndex(i) == (int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_TIER ||
				   packet.GetNIndex(i) == (int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_MULTIPLECANGJINGGE_TIER ||
				   packet.GetNIndex(i) == (int)Games.UserCommonData.USER_COMMONDATA.CD_CANGJINGGE_EXTRAREWARD_TIER ||
				   packet.GetNIndex(i) == (int)Games.UserCommonData.USER_COMMONDATA.CD_MULTIPLECANGJINGGE_EXTRAREWARD_TIER
				   ) 
				{
					Messenger.Broadcast(MessengerConst.OnUpdateCangjinggeAward);
				}
            }
        }

        public void HandlePacket(GC_SYNC_COMMONFLAG packet)
        {
            for (int i = 0; i < packet.nIndexCount; i++)
            {
                m_CommonFlag[i] = packet.GetNValue(i);
            }
        }

        public void HandlePacket(GC_ASK_COMMONFLAG_RET packet)
        {
            bool bFlag = (packet.NFlag == 1? true:false);
            SetCommonFlag(packet.NBits, bFlag);

			if (packet.NBits == (int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_WHITE) 
			{
				PlayerPreferenceData.PickUpItemWhite = packet.NFlag ;
			}

			else if (packet.NBits == (int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_GREEN) 
			{
				PlayerPreferenceData.PickUpItemGreen = packet.NFlag ;
			}

			else if (packet.NBits == (int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_BLUE) 
			{
				PlayerPreferenceData.PickUpItemBlue = packet.NFlag ;
			}

			else if (packet.NBits == (int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_PURPLE) 
			{
				PlayerPreferenceData.PickUpItemPurple = packet.NFlag ;
			}
			else if (packet.NBits == (int)USER_COMMONFLAG.CF_AUTO_ADD_ITEM_GREY) 
			{
				PlayerPreferenceData.PickUpItemGrey = packet.NFlag ;
			}
        }

        public void HandlePacket(GC_SYNC_COPYSCENENUMBER packet)
        {
            for (int i = 0; i < packet.nSceneClassIDCount; i++)
            {
                if (packet.nDayCountCount <= 0)
                {
                    SetCopySceneMultiple(packet.GetNSceneClassID(i), packet.GetNMultiple(i));
                }
                else
                {
                    CopySceneDayNumber info;

                    info.m_nDayCount =  packet.GetNDayCount(i);
                    info.m_ndayTeamCount = packet.GetNTeamDayCount(i);
                    info.m_nTotalCount1 = packet.GetNTotalCount1(i);
                    info.m_nTotalCount2 = packet.GetNTotalCount2(i);
                    info.m_nTotalCount3 = packet.GetNTotalCount3(i);
                    info.m_nTeamTotalCount1 = packet.GetNTeamTotalCount1(i);
                    info.m_nTeamTotalCount2 = packet.GetNTeamTotalCount2(i);
                    info.m_nTeamTotalCount3 = packet.GetNTeamTotalCount3(i);
                    info.m_nMultiple = packet.GetNMultiple(i);
                    info.m_nResetCount = packet.GetNDayResetCount(i);
                    info.m_nResetTeamCount = packet.GetNTeamDayResetCount(i);
                    info.m_nExtraDayCount = 0;
                    info.m_nExtradayTeamCount = 0;
                    SetCopySceneNumber(packet.GetNSceneClassID(i), info);
                }
            }
        }
        public void HandlePacket(GC_SYNC_COPYSCENEEXTRANUMBER packet)
        {
            for (int i = 0; i < packet.nSceneClassIDCount; i++)
            {
                SetCopySceneExtra(packet.GetNSceneClassID(i), packet.GetNDayExtraCount(i), packet.GetNTeamDayExtraCount(i));
            }
        }
        public void HandlePacket(GC_SYNC_BUYBACKCOPYSCENENUMBER packet)
        {
            for (int i = 0; i < packet.nSceneClassIDCount; i++)
            {               
                    CopySceneNumberEx info;
                    info.m_nBuybackDayCount = packet.GetNBuyBackCount(i);
                    info.m_nBuybackDayTeamCount= packet.GetNBuyBackTeamCount(i);
                    SetCopySceneNumberEx(packet.GetNSceneClassID(i), info);
                
            }
        }
        public void HandlePacket(GC_SYNC_CSACTIVITY packet)
        {
            for (int i = 0; i < packet.nSceneClassIDCount; i++)
            {
                if (packet.GetNSceneClassID(i) == -1)
                {
                    if (m_IsCSActivity != null)
                    {
                        m_IsCSActivity.Clear();
                    }
                }
                else
                {
                    CopySceneActivityOnOff info;
                    info.m_bSolo = packet.GetNSolo(i) == 1;
                    info.m_bTeam = packet.GetNTeam(i) == 1;
                    SetIsCSActivity(packet.GetNSceneClassID(i), info);
                }              
            }
        }

		public bool IsHaveCanGotRewardCangjingge(int nType)// 0:全部奖励；	1：单人；	2：组队
		{
			foreach (KeyValuePair<int, List<Tab_CangJingGeExtraReward>> pair in TableManager.GetCangJingGeExtraReward())
			{
				Tab_CangJingGeExtraReward tabExtraReward = pair.Value[0];
				if (null != tabExtraReward)
				{
					if (nType == tabExtraReward.CopySceneType || nType == 0 )
					{
						if (IsCanReceiveReward(tabExtraReward.Id) && !IsAlreadyReceiveReward(tabExtraReward.Id))
						{
							return true;
						}
					}
				}
			}
			return false;
		}

		public bool IsCanReceiveReward(int nExtraRewardTableID)
		{
			Tab_CangJingGeExtraReward tabExtraReward = TableManager.GetCangJingGeExtraRewardByID(nExtraRewardTableID, 0);
			if (null != tabExtraReward)
			{
				if ((int)GameDefine_Globe.CopyScene_PlayType.SINGLE == tabExtraReward.CopySceneType)
				{
					return GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_CANGJINGGE_TIER) > tabExtraReward.TierLimit;
				}
				else if ((int)GameDefine_Globe.CopyScene_PlayType.MULTIPLE == tabExtraReward.CopySceneType)
				{
					return GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COPYSCENE_MULTIPLECANGJINGGE_TIER) > tabExtraReward.TierLimit;
				}
			}
			return false;
		}
		
		public bool IsAlreadyReceiveReward(int nExtraRewardTableID)
		{
			Tab_CangJingGeExtraReward tabExtraReward = TableManager.GetCangJingGeExtraRewardByID(nExtraRewardTableID, 0);
			if (null != tabExtraReward)
			{
				if ((int)GameDefine_Globe.CopyScene_PlayType.SINGLE == tabExtraReward.CopySceneType)
				{
					return GetCommonData((int)USER_COMMONDATA.CD_CANGJINGGE_EXTRAREWARD_TIER) >= tabExtraReward.TierLimit;
				}
				else if ((int)GameDefine_Globe.CopyScene_PlayType.MULTIPLE == tabExtraReward.CopySceneType)
				{
					return GetCommonData((int)USER_COMMONDATA.CD_MULTIPLECANGJINGGE_EXTRAREWARD_TIER) >= tabExtraReward.TierLimit;
				}
			}
			return false;
		}
    }
}
