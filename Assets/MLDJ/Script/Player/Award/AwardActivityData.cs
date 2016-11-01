//********************************************************************
// 文件名: AwardActivityData.cs
// 描述: 奖励活动数据
// 作者: HeWenpeng
// 创建时间: 2014-2-24
// 功能说明：包括新服奖励（首周）、每日登录奖励、在线奖励的活动数据
// 修改历史:
//         2014-4-18: 添加 活跃度领奖数据
//         2014-5-28 Lijia: 客户端效率优化，把AwardActivityData从class改为struct
//********************************************************************

using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Collections.Generic;

namespace Games.AwardActivity
{
    public enum AwardActivityType
    {
        AWARD_NONE,
        AWARD_NEWSERVER,
        AWARD_DAY,
        AWARD_ONLINE,
        AWARD_NEWONLINE,
        AWARD_NEW7DAYONLINE,
		AWARD_DAYSIGNIN,
        Award_CONTINUELOGIN
    }

    // 领取按钮三种状态
    public enum AwardState
    {
        AWARD_CANNNTHAVE,
        AWARD_CANHAVE,
        AWARD_HAVEDONE,
        AWARD_NOTHAVEDONE,
    }
    public struct AccumulateSignInfo
    {
        public int ItemIndex;
        public int ItemStatus;

        public int vipLimit;

        public int Exp;
        public int Money;
        public int BindYuanbao;
        public int ItemDataID1;
        public int ItemCount1;
        public int ItemDataID2;
        public int ItemCount2;
        public int ItemDataID3;
        public int ItemCount3;
        public int ItemDataID4;
        public int ItemCount4;
        public int ItemDataID5;
        public int ItemCount5;
        void cleanUp()
        {
            ItemIndex = 0;
            ItemStatus = 0;
            vipLimit = 0;
            Exp = 0;
            Money = 0;
            BindYuanbao = 0;
            ItemDataID1 = 0;
            ItemCount1 = 0;
            ItemDataID2 = 0;
            ItemCount2 = 0;
            ItemDataID3 = 0;
            ItemCount3 = 0;
            ItemDataID4 = 0;
            ItemCount4 = 0;
            ItemDataID5 = 0;
            ItemCount5 = 0;
            vipLimit = 0;
        }
    }

	public struct DaySignInItem
	{
		public int ItemIndex;
		public int ItemStatus;

		public int vipLimit;

		public int Exp;
		public int Money;
		public int BindYuanbao;
		public int Item1DataID;
		public int Item1Count;
		public int Item2DataID;
		public int Item2count;
		public int SupplyCost;

		void cleanUp()
		{
			ItemIndex = 0;
			ItemStatus = 0;
			vipLimit = 0;

			Exp = 0;
			Money = 0;
			BindYuanbao = 0;
			Item1DataID = 0;
			Item1Count = 0;
			Item2DataID = 0;
			Item2count = 0;
			vipLimit = 0;
		}
	}

    public struct ActivityRewardData
    {
        public int Index;
        public int Exp;
        public int Money;
        public int BindYuanbao;
        public int Item1DataID;
        public int Item1Count;
        public int Item2DataID;
        public int Item2count;
        public AcitivityRewardState State;
        public int StartDate;

        void CleanUp()
        {
            Index = -1;
            Exp = -1;
            Money = -1;
            BindYuanbao = -1;
            Item1DataID = -1;
            Item1Count = -1;
            Item2DataID = -1;
            Item2count = -1;
//            State = AcitivityRewardState.INVALLD;
            StartDate = -1;
        }
    }

    public struct JoinNumRewardData
    {
        public int Index;
        public int Number;
        public int Item1DataID;
        public int Item1Count;
        public JoinNumRewardState State;
        public int JoinNum;
        public int StartDate;

        void CleanUp()
        {
            Index = -1;
            Number = -1;
            Item1DataID = -1;
            Item1Count = -1;
//            State = JoinNumRewardState.INVALLD;
            JoinNum = -1;
            StartDate = -1;
        }
    }

    public struct OnlineAwardLine
    {
        public int ID;
        public int LeftTime;
        public int Exp;
        public int Money;
        public int BindYuanbao;
        public int Item1DataID;
        public int Item1Count;
        public int Item2DataID;
        public int Item2count;

        void CleanUp()
        {
            ID = -1;
            LeftTime = -1;
            Exp = -1;
            Money = -1;
            BindYuanbao = -1;
            Item1DataID = -1;
            Item1Count = -1;
            Item2DataID = -1;
            Item2count = -1;
        }
    }

    public struct AwardActivityData
    {
        // 新服奖励
        public const int MaxNewServerDays = 7;
        private int m_nNewServerDays;
      
        public int NewServerDays
        {
            get {return m_nNewServerDays; }
            set { m_nNewServerDays = value; }
        }
        public bool[] BNewServerAwardFlag
        {
            get { return m_bNewServerAwardFlag; }
        }
        private bool[] m_bNewServerAwardFlag;
        private bool m_bGotExtraFlag;
        public bool GotExtraFlag
        {
            get { return m_bGotExtraFlag; }
            set { m_bGotExtraFlag = value; }
        }
        public bool GetNewServerAwardFlag(int nDay)
        {
            if (nDay >= 0 && nDay < MaxNewServerDays)
            {
                return m_bNewServerAwardFlag[nDay];
            }
            return false;
        }
        public bool IsCanGetAward(int nDay)
        {
            int nMaxRecordCount = TableManager.GetNewServerAward().Count;
            if (nDay < 0 || nDay >= nMaxRecordCount)
            {
                return false;
            }
            if (nDay == nMaxRecordCount - 1)
            {
                // 第7天的包 特殊处理，前面须领够4次，才能领包
                int nNeedCount = 0;
                for (int nIndex = 0; nIndex < nDay; nIndex++)
                {
                    if (GetNewServerAwardFlag(nIndex))
                    {
                        nNeedCount++;
                    }
                }
                if (nNeedCount >= 4 && false == GetNewServerAwardFlag(nDay))
                {
                    return true;
                }
            }
            else if (false == GetNewServerAwardFlag(nDay))
            {
                return true;
            }
            return false;
        }

        // 每日登录
        public const int MaxDayAwardDays = 7;
        private int m_nWeekDay;
        public int WeekDay
        {
            get { return m_nWeekDay; }
            set { m_nWeekDay = value; }
        }
        private bool m_bDayAwardFlag;
        public bool DayAwardFlag
        {
            get { return m_bDayAwardFlag; }
            set { m_bDayAwardFlag = value; }
        }

        // 在线奖励
        public const int MaxOnlineAwardCount = 7;
        private int m_nOnlineAwardID;
        public int OnlineAwardID
        {
            get { return m_nOnlineAwardID; }
            set { m_nOnlineAwardID = value; }
        }
        private int m_nLeftTime;
        public int LeftTime
        {
            get { return m_nLeftTime; }
            set { 
                m_nLeftTime = value; 
                if (AwardLogic.Instance())
                {
                    AwardLogic.Instance().LeftTime = m_nLeftTime;
                }
            }
        }
        private float m_CurTimeCount; // 计时器
        // 新开服在线奖励
        public const int MaxNewOnlineAwardCount = 7;
        private int m_nNewOnlineAwardID;
        public int NewOnlineAwardID
        {
            get { return m_nNewOnlineAwardID; }
            set { m_nNewOnlineAwardID = value; }
        }
        private int m_nNewLeftTime;
        public int NewLeftTime
        {
            get { return m_nNewLeftTime; }
            set
            {
                m_nNewLeftTime = value;
                if (AwardLogic.Instance())
                {
                    AwardLogic.Instance().NewLeftTime = m_nNewLeftTime;
                }
            }
        }
        public bool m_bNewOnlineAwardStart;
        public bool NewOnlineAwardStart
        {
            get { return m_bNewOnlineAwardStart; }
            set { m_bNewOnlineAwardStart = value; }
        }
        // 活跃度奖励
        private int m_nActiveness;  // 活跃度
        public int Activeness
        {
            get { return m_nActiveness; }
            set { 
                m_nActiveness = value;
//                 if (ActivityController.Instance())
//                 {
//                     ActivityController.Instance().UpDateActiveness(m_nActiveness);
//                 }
                if (FunctionButtonLogic.Instance())
                {
                    FunctionButtonLogic.Instance().UpdateActionButtonTip();
                }
                if (MissionLogLogic.Instance())
                {
                    MissionLogLogic.Instance().dailyView.UpdateActivePoint(m_nActiveness);
                }
                
            }
        }
        public const int Activeness_Max_Count = 20;
        private bool[] m_bActivenessAwardFlag;

        //在线7天奖励
        // 开服奖励 表格数据--用于动态加载
        public const int MaxNew7DayOnlineAwardCount = 7;

        private bool m_IsShowNew7DayOnlineAwardWindow;
        public bool ShowNew7DayOnlineAwardWindow
        {
            get { return m_IsShowNew7DayOnlineAwardWindow; }
            set { m_IsShowNew7DayOnlineAwardWindow = value; }
        }

        private int m_nNew7DayOnlineAwardID;
        public int New7DayOnlineAwardID
        {
            get { return m_nNew7DayOnlineAwardID; }
            set { m_nNew7DayOnlineAwardID = value; }
        }

        private int m_nNew7DayLeftTime;
        public int New7DayLeftTime
        {
            get { return m_nNew7DayLeftTime; }
            set
            {
                m_nNew7DayLeftTime = value;
                if (AwardLogic.Instance())
                {
                    AwardLogic.Instance().New7DayLeftTime = m_nNew7DayLeftTime;
                }
            }
        }
        private float m_New7DayBeginTime;
        public float New7DayBeginTime
        {
          get { return m_New7DayBeginTime; }
          set { m_New7DayBeginTime = value; }
        }
        private List<int> m_New7DayGetList;
        public List<int> New7DayGetList
        {
          get { return m_New7DayGetList; }
        }
        public bool m_bNew7DayOnlineAwardStart;
        public bool New7DayOnlineAwardStart
        {
            get { return m_bNew7DayOnlineAwardStart; }
            set { m_bNew7DayOnlineAwardStart = value; }
        }
        private Dictionary<int, OnlineAwardLine> m_New7DayOnlineAwardTable;
        public Dictionary<int, OnlineAwardLine> New7DayOnlineAwardTable
        {
            get { return m_New7DayOnlineAwardTable; }
            set { m_New7DayOnlineAwardTable = value; }
        }
        public void AddNew7DayOnlineAwardLine(OnlineAwardLine DataLine)
        {
            if (m_New7DayOnlineAwardTable.ContainsKey(DataLine.ID))
            {
                m_New7DayOnlineAwardTable[DataLine.ID] = DataLine;
            }
            else
            {
                m_New7DayOnlineAwardTable.Add(DataLine.ID, DataLine);
            }
        }
        private NewOnlineDateTime m_sNew7DayOnlineDateTime;
        public NewOnlineDateTime New7DayOnlineDateTime
        {
            get { return m_sNew7DayOnlineDateTime; }
            set { m_sNew7DayOnlineDateTime = value; }
        }

        //天道酬勤，连续登陆的天数
        public const int MaxContinueServerDays = 7;
        private int m_nContinueLoginDay;
        public int ContinueLoginDay
        {
            get { return m_nContinueLoginDay; }
            set { m_nContinueLoginDay = value; }
        }
        public bool[] BContinueAwardFlag
        {
            get { return m_bContinueAwardFlag; }
        }
        private bool[] m_bContinueAwardFlag;
        public bool GetContinueAwardFlag(int nDay)
        {
            if (nDay >= 0 && nDay < MaxContinueServerDays)
            {
                return m_bContinueAwardFlag[nDay];
            }
            return false;
        }


        //public AwardActivityData()
        //{
        //    CleanUp();
        //}

        public void CleanUp()
        {
            if (null == m_bNewServerAwardFlag)
            {
                m_bNewServerAwardFlag = new bool[MaxNewServerDays];
            }
            if(null==m_bContinueAwardFlag)
            {
                m_bContinueAwardFlag=new bool[MaxContinueServerDays];
            }
            if (null == m_bActivenessAwardFlag)
            {
                m_bActivenessAwardFlag = new bool[Activeness_Max_Count];
            }
            // 新服奖励
            m_nNewServerDays = -1;
            for (int i = 0; i < MaxNewServerDays; i++)
            {
                m_bNewServerAwardFlag[i] = false;
            }
            //天道酬勤
            m_nContinueLoginDay = -1;
            for (int i = 0; i < MaxContinueServerDays;++i)
            {
                m_bContinueAwardFlag[i] = false;
            }
                // 每日登录
                m_nWeekDay = -1;
            m_bDayAwardFlag = false;

            // 在线奖励
            m_nOnlineAwardID = -1;
            m_nLeftTime = 0;
            m_CurTimeCount = 0;
            m_nNewOnlineAwardID = -1;
            m_bNewOnlineAwardStart = false;
            m_nNewLeftTime = 0;
            // 活跃度奖励
            m_nActiveness = 0;
            for (int i = 0; i < Activeness_Max_Count; i++)
            {
                m_bActivenessAwardFlag[i] = false;
            }
            // 在线7天奖励
            m_nNew7DayOnlineAwardID = -1;
            m_bNew7DayOnlineAwardStart = false;
            m_IsShowNew7DayOnlineAwardWindow = false;
            m_nNew7DayLeftTime = 0;
            m_New7DayOnlineAwardTable = new Dictionary<int, OnlineAwardLine>();
        }

        // 心跳，用于UI倒计时
        public void Tick_Award()
        {
            m_CurTimeCount += Time.fixedDeltaTime;
            if (m_CurTimeCount < 1)
            {
                return;
            }
            if (LeftTime > 0)
            {
                LeftTime--;
            }
            if (NewLeftTime > 0)
            {
                NewLeftTime--;
            }
//             if (New7DayLeftTime > 0)
//             {
//                 New7DayLeftTime--;
//             }
            m_CurTimeCount = 0;
        }

        // 领奖，请求服务器
        public void SendAwardPacket(AwardActivityType type,int dayIndex = 0)
        {
            switch(type)
            {
                case AwardActivityType.AWARD_NEWSERVER:
                    {
                        CG_ASK_NEWSERVERAWARD packet = (CG_ASK_NEWSERVERAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_NEWSERVERAWARD);
                        packet.SetDay(dayIndex);
                        packet.SendPacket();
                    }
                    break;
                case AwardActivityType.AWARD_DAY:
                    {
                        CG_ASK_DAYAWARD packet = (CG_ASK_DAYAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_DAYAWARD);
                        packet.SetWeekDay(m_nWeekDay);
                        packet.SendPacket();
                     }
                    break;
                case AwardActivityType.AWARD_ONLINE:
                    {
                        CG_ASK_ONLINEAWARD packet = (CG_ASK_ONLINEAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_ONLINEAWARD);
                        packet.SetOnlineAwardID(m_nOnlineAwardID);
                        packet.SendPacket();
                    }
                    break;
                case AwardActivityType.AWARD_NEWONLINE:
                    {
                        CG_ASK_NEWONLINEAWARD packet = (CG_ASK_NEWONLINEAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_NEWONLINEAWARD);
                        packet.SetNewOnlineAwardID(m_nNewOnlineAwardID);
                        packet.SendPacket();
                    }
                    break;
                case AwardActivityType.AWARD_NEW7DAYONLINE:
                    {
                        CG_ASK_NEW7DAYONLINEAWARD packet = (CG_ASK_NEW7DAYONLINEAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_NEW7DAYONLINEAWARD);
                        packet.SetNewOnlineAwardID(m_nNew7DayOnlineAwardID);
                        packet.SendPacket();
                    }
                    break;
                case AwardActivityType.Award_CONTINUELOGIN:
                    {
                        CG_ASK_CONTINUELOGIN_AWARD packet = (CG_ASK_CONTINUELOGIN_AWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_CONTINUELOGIN_AWARD);
                        packet.SetDay(dayIndex);
                        packet.SendPacket();
                    }
                    break;
                default:
                    break;
            }
        }
        //天道酬勤
        public void HandlePacket(GC_CONTINUELOGINAWARD_DATA packet)
        {
           // m_nNewServerDays = packet.Day;
            m_nContinueLoginDay = packet.NDays;
            for (int i = 0; i < packet.flagCount; i++)
            {
                int nFlag = packet.GetFlag(i);
                if (nFlag == 0)
                {
                    m_bContinueAwardFlag[i] = false;
                }
                else
                    m_bContinueAwardFlag[i] = true;
            }

            // 通知UI按钮 显示提醒
            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }

            if (null != AwardLogic.Instance() && AwardLogic.Instance().m_TianDaoRoot!=null)
            {
                AwardLogic.Instance().UpdateTip();
                if (AwardLogic.Instance().m_TianDaoRoot.gameObject.activeSelf)
                {
                    AwardLogic.Instance().m_TianDaoRoot.ButtonNewServerAward();
                    AwardLogic.Instance().m_TianDaoRoot.PlayEffect(m_nContinueLoginDay);
                }
            }
            if (null != QianDaoController.Instance())
            {

            }

        }
        public void HandlePacket(GC_NEWSERVERAWARD_DATA packet)
        {
            m_nNewServerDays = packet.Day;
           // m_nStartTime = packet.StartTime;
           // m_nEndTime = packet.EndTime;
            for (int i = 0; i < packet.flagCount && i < MaxNewServerDays; i++)
            {
                int nFlag = packet.GetFlag(i);
                if (nFlag == 0)
                {
                    m_bNewServerAwardFlag[i] = false;
                }
                else
                    m_bNewServerAwardFlag[i] = true;
            }

            GotExtraFlag = packet.GetFlag(7) == 0 ? false : true;
            // 通知UI按钮 显示提醒
            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }

            if (null != AwardLogic.Instance() && AwardLogic.Instance().m_NewServerAwardRoot!=null)
            {
                AwardLogic.Instance().UpdateTip();
                if (AwardLogic.Instance().m_NewServerAwardRoot.gameObject.activeSelf)
                {
                    AwardLogic.Instance().m_NewServerAwardRoot.ButtonNewServerAward();
                    AwardLogic.Instance().m_NewServerAwardRoot.PlayEffect(m_nNewServerDays);
                    //if (AwardLogic.Instance().m_NewServerAwardRoot.YellowDotVisibal())
                    //{
                    
                    //}
                    
                }
            }
            if (null != QianDaoController.Instance())
            {
 
            }

        }

        public void HandlePacket(GC_DAYAWARD_DATA packet)
        {
            m_nWeekDay = packet.WeekDay;
            int nFlag = packet.Flag;
            if (nFlag == 0)
            {
                m_bDayAwardFlag = false;
            }
            else
                m_bDayAwardFlag = true;

            // 通知UI按钮 显示提醒
            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }

            if (null != AwardLogic.Instance() && AwardLogic.Instance().m_DayAwardRoot!=null)
            {
                AwardLogic.Instance().UpdateTip();
                if (AwardLogic.Instance().m_DayAwardRoot.gameObject.activeSelf)
                {
                    AwardLogic.Instance().m_DayAwardRoot.ButtonDayAward();
                    AwardLogic.Instance().m_DayAwardRoot.PlayEffect(m_nWeekDay, m_bDayAwardFlag);
                }
            }
        }

        public void HandlePacket(GC_ONLINEAWARD_DATA packet)
        {
            m_nOnlineAwardID = packet.OnlineAwardID;
            m_nLeftTime = packet.LeftTime;

            // 通知UI按钮 显示提醒
            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }

            if (null != AwardLogic.Instance() && AwardLogic.Instance().m_OnlineAwardRoot!=null)
            {
                AwardLogic.Instance().UpdateTip();
                if (AwardLogic.Instance().m_OnlineAwardRoot.gameObject.activeSelf)
                {
                    AwardLogic.Instance().m_OnlineAwardRoot.ButtonOnlineAward();
                    AwardLogic.Instance().m_OnlineAwardRoot.PlayEffect(m_nOnlineAwardID);
                }
            }
        }
        public void HandlePacket(GC_NEWONLINEAWARD_DATA packet)
        {
            m_nNewOnlineAwardID = packet.NewOnlineAwardID;
            NewLeftTime = packet.NewleftTime;
            m_bNewOnlineAwardStart = packet.IsStart > 0;
            // 通知UI按钮 显示提醒
            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }

            if (null != AwardLogic.Instance() && AwardLogic.Instance().m_NewOnlineAwardRoot!=null)
            {
                AwardLogic.Instance().UpdateTip();
                if (AwardLogic.Instance().m_NewOnlineAwardRoot.gameObject.activeSelf)
                {
                    AwardLogic.Instance().m_NewOnlineAwardRoot.ButtonOnlineAward();
                    AwardLogic.Instance().m_NewOnlineAwardRoot.PlayEffect(m_nNewOnlineAwardID);
                }
            }
        }

		public void HandlePacket(GC_RET_GETREWARDFORSIGNIN packet)
		{
			int nFlag = packet.Ret;
			if (nFlag == 0)
			{
				m_bDayAwardFlag = true;
			}
			else
				m_bDayAwardFlag = false;
            GameManager.gameManager.PlayerDataPool.AlreadySingedCount = packet.AlreadySingDays;
            if (null != AwardLogic.Instance() && AwardLogic.Instance().m_DaySignInAwardRoot!=null)
			{
				//AwardLogic.Instance().UpdateTip();
				if (AwardLogic.Instance().m_DaySignInAwardRoot.gameObject.activeSelf)
				{
					if(m_bDayAwardFlag)
					{
						AwardLogic.Instance().m_DaySignInAwardRoot.GainRewardSucessfully(true);
					}
					else
					{
						
                        AwardLogic.Instance().m_DaySignInAwardRoot.GainRewardSucessfully(false);
                        // 弹出提示：签到失败
					}

				}
			}
		}

        static int m_CurMonthBoxIndex;//当前点击的箱子序号
        /// <summary>
        /// 发包，请求打开箱子
        /// </summary>
        /// <param name="boxIndex"></param>
        public void SendReqOpenMonthBox(int boxIndex)
        {
            m_CurMonthBoxIndex = boxIndex + 1;
            CG_ASK_GETREWARDFORACCUMULATESIGNIN msg = (CG_ASK_GETREWARDFORACCUMULATESIGNIN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GETREWARDFORACCUMULATESIGNIN);
            msg.NIndex = boxIndex;
            msg.SendPacket();
        }
        
        /// <summary>
        /// 领取月度签到宝箱之后
        /// </summary>
        /// <param name="packet"></param>
        public void HandlePacket(GC_RET_GETREWARDFORACCUMULATESIGNIN packet)
        {
            if (GameManager.gameManager.PlayerDataPool.DaySignInfo.m_AccumateSignDic.ContainsKey(m_CurMonthBoxIndex))
            {
                AccumulateSignInfo newItem = GameManager.gameManager.PlayerDataPool.DaySignInfo.m_AccumateSignDic[m_CurMonthBoxIndex];
                newItem.ItemStatus = 1;
                GameManager.gameManager.PlayerDataPool.DaySignInfo.m_AccumateSignDic[m_CurMonthBoxIndex] = newItem;
                if (null != AwardLogic.Instance() && AwardLogic.Instance().m_DaySignInAwardRoot != null)
                {
                    if (AwardLogic.Instance().m_DaySignInAwardRoot.gameObject.activeSelf)
                    {
                        AwardLogic.Instance().m_DaySignInAwardRoot.OpenBoxResult(packet.Ret == 0);
                    }
                }
                m_CurMonthBoxIndex = -1;
            }
        }

        // 活跃度奖励
        void SetActivenessFlag(int nTurnID, bool bFlag)
        {
            if (nTurnID >= 0 && nTurnID < Activeness_Max_Count)
            {
                m_bActivenessAwardFlag[nTurnID] = bFlag;
            }
        }
        public bool GetActivenessAwardFlag(int nTurnID)
        {
            if (nTurnID >= 0 && nTurnID < Activeness_Max_Count)
            {
                return m_bActivenessAwardFlag[nTurnID];
            }
            return false;
        }
        public void SendActivenessAward(int nTurnID)
        {
            CG_ASK_ACTIVENESSAWARD packet = (CG_ASK_ACTIVENESSAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_ACTIVENESSAWARD);
            packet.SetTurnid(nTurnID);
            packet.SendPacket();
        }
        public void HandlePacket(GC_ASK_ACTIVENESSAWARD_RET packet)
        {
            int nTurnID = packet.Turnid;
            bool bFlag = (packet.Flag==0? false:true);
            SetActivenessFlag(nTurnID, bFlag);

            // 通知UI更新
//             if (ActivityController.Instance())
//             {
//                 ActivityController.Instance().UpdateAwardItemState(nTurnID);
//                 ActivityController.Instance().UpdateTabTips();
//             }
            if (FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateActionButtonTip();
            }
            if (MissionLogLogic.Instance())
            {
                MissionLogLogic.Instance().dailyView.UpdateChests(m_nActiveness);
                MissionLogLogic.Instance().DailyMissionRedPoint();
            }
        }
        public void HandlePacket(GC_SYNC_ACTIVENESSAWARD packet)
        {
            for (int i = 0; i < packet.flagCount; i++)
            {
                bool bFlag = (packet.GetFlag(i) == 0? false:true);
                SetActivenessFlag(i, bFlag);
            }
        }
        public void HandlePacket(GC_SYNC_ACTIVENESS packet)
        {
            Activeness = packet.Activeness;
        }
       

        public void HandlePacket(GC_NEW7DAYONLINEAWARD_DATA packet)
        {
            m_nNew7DayOnlineAwardID = packet.NewOnlineAwardID;
            New7DayLeftTime = packet.NewleftTime;
            m_bNew7DayOnlineAwardStart = packet.IsStart > 0;
            New7DayBeginTime = Time.realtimeSinceStartup;
            if (New7DayGetList == null) {
              m_New7DayGetList = new List<int>();
            }
            New7DayGetList.Clear();
            New7DayGetList.AddRange(packet.flagList);
            // 通知UI按钮 显示提醒
            /*if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }
            if (null != AwardLogic.Instance())
            {
                AwardLogic.Instance().UpdateTip();
                if (AwardLogic.Instance().m_New7DayOnlineAwardRoot.gameObject.activeSelf)
                {
                    AwardLogic.Instance().m_New7DayOnlineAwardRoot.ButtonOnlineAward();
                    AwardLogic.Instance().m_New7DayOnlineAwardRoot.PlayEffect(m_nNew7DayOnlineAwardID);
                }
            }*/
        }
        public void HandlePacket(GC_SYNC_NEW7DAYONLINEAWARDTABLE packet)
        {
             bool isShow = packet.IsShow > 0;
             ShowNew7DayOnlineAwardWindow = isShow;
             if (isShow)
             {
                 for (int i = 0; i < packet.idCount; i++)
                 {
                     OnlineAwardLine DataLine = new OnlineAwardLine();
                     DataLine.ID = packet.GetId(i);
                     DataLine.LeftTime = packet.GetLefttime(i);
                     DataLine.Exp = packet.GetExp(i);
                     DataLine.Money = packet.GetMoney(i);
                     DataLine.BindYuanbao = packet.GetBindyuanbao(i);
                     DataLine.Item1DataID = packet.GetItem1dataid(i);
                     DataLine.Item1Count = packet.GetItem1count(i);
                     DataLine.Item2DataID = packet.GetItem2dataid(i);
                     DataLine.Item2count = packet.GetItem2count(i);
                     AddNew7DayOnlineAwardLine(DataLine);

                     if (packet.HasStartDate)
                     {
                         m_sNew7DayOnlineDateTime.StartDate = packet.StartDate;
                     }
                     if (packet.HasEndDate)
                     {
                         m_sNew7DayOnlineDateTime.EndDate = packet.EndDate;
                     }
                     if (packet.HasStartTime)
                     {
                         m_sNew7DayOnlineDateTime.StartTime = packet.StartTime;
                     }
                     if (packet.HasEndTime)
                     {
                         m_sNew7DayOnlineDateTime.EndTime = packet.EndTime;
                     }
                 }
             }
        }
    }
    public struct NewOnlineDateTime
    {
        public int StartDate;
        public int EndDate;
        public int StartTime;
        public int EndTime;

        public void CleanUp()
        {
            StartDate = 0;
            EndDate = 0;
            StartTime = 0;
            EndTime = 0;
        }
    }
	
}

