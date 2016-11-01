/********************************************************************************
 *	文件名：MissionManager.cs
 *	全路径：	\Script\Mission\MissionManager.cs
 *	创建人：	王华
 *	创建时间：2013-11-05
 *
 *	功能说明： 客户端的任务管理器，负责管理所有客户端任务相关数据，供界面使用。
 *	       
 *	修改记录：
 *         2014-5-28 Lijia: 客户端效率优化，把CurOwnMission从class改为struct
*********************************************************************************/

using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using GCGame.Table;
using Games.Events;
using Games.LogicObj;
using Games.GlobeDefine;
using Module.Log;
using Games.UserCommonData;
using Games.DailyMissionData;
namespace Games.Mission
{
    //任务类型
    public enum MISSIONTYPE
    {
        MISSION_INVALID = -1,
        MISSION_DAILY,
        MISSION_MAIN,
        MISSION_BRANCH,
        MISSION_GUILD,
		MISSION_PAOHUAN,
    }

    // 任务逻辑类型
    public enum TableType
    {
        Table_Invalid = -1,
        Table_Story,          //剧情
        Table_KillMonster,    //杀怪
        Table_Delivery,   // 送信
        Table_CollectItem,   //杀怪掉落
        Table_Enterarea,  // 探索区域
        Table_LootItem,   // 杀怪掉落
        Table_CopySceneMonster,   // 副本杀怪掉落
        Table_LevelUp,  // 升级
        Table_OperationNum, // 操作次数
        Mission_Num,
        SceneplayFB, // 剧情副本
    }

    public enum DailyMissionType
    {
        DailyMissionType_Invalid = -1,
        DailyMissionType_Master,          //门派
        DailyMissionType_KillMonster,    //杀怪
        DailyMissionType_CopyScene,     //副本
        DailyMissionType_Strength,   // 强化
        DailyMissionType_Pvp,  // 竞技
        DailyMissionType_GuildWar,   // 帮战
        DailyMissionType_Award,   // 抽奖
        DailyMissionType_Belle,   // 美人
        DailyMissionType_Fellow,   // 伙伴
        DailyMissionType_Num
    }

    public enum MissionState
    {
        Mission_None,       // 未接取
        Mission_Accepted,   // 已接任务未完成
        Mission_Completed,  // 已完成未提交
        Mission_Failed,     // 任务失败
    }

    public enum MISSION_QUALITY
    {
        MISSION_QUALITY_NONE = 0,
        MISSION_QUALITY_WHITE = 1,
        MISSION_QUALITY_GREEN = 2,
        MISSION_QUALITY_BLUE = 3,
        MISSION_QUALITY_PURPLE = 4,
        MISSION_QUALITY_ORANGE = 5,
    }

    /// <summary>
    /// 当前拥有的任务信息,需要服务器同步
    /// </summary>
    public class CurOwnMission
    {
        public const byte MAX_MISSION_PARAM_NUM = 8;

        public int m_nMissionID;   //任务ID

        public byte m_yStatus;      //任务状态，1表示进行中，2表示完成，3表示失败
        public byte m_yFlags;       // 0x0000 |FollowChanged事件|ItemChanged事件|EnterZone事件|KillObject事件|
        public byte m_yQuality;    // 任务品质 白、绿、蓝、紫、橙
        public Int32[] m_nParam;

        public CurOwnMission()
        {
            CleanUp();
        }

        public void CleanUp()
        {
            if (null == m_nParam)
            {
                m_nParam = new Int32[MAX_MISSION_PARAM_NUM];
            }
            m_nMissionID = -1;
            m_yStatus = 0;
            m_yFlags = 0;
            m_yQuality = 0;

            for (int i = 0; i < MAX_MISSION_PARAM_NUM; ++i)
            {
                m_nParam[i] = 0;
            }
        }

        public void SetStatus(byte status)
        {
            m_yStatus = status;
        }
    }

    /// <summary>
    /// 任务列表
    /// </summary>
    public class MissionList
    {
        public const byte MAX_CHAR_MISSION_NUM = 30;
        public const UInt16 MAX_CHAR_MISSION_FLAG_LEN = 32;

        public byte m_Count = 0;

        public Dictionary<int, CurOwnMission> m_aMission;         //角色目前拥有的任务数据
        public UInt32[] m_aMissionHaveDoneFlags;   //角色的任务完成标志，支持最多1024个任务

        public MissionList()
        {
            m_Count = 0;
            m_aMission = new Dictionary<int, CurOwnMission>();
            m_aMissionHaveDoneFlags = new UInt32[MAX_CHAR_MISSION_FLAG_LEN];
        }

        public bool IsMissionFull()
        {
            if (m_aMission.Count > MAX_CHAR_MISSION_NUM)
            {
                return true;
            }
            return false;
        }

        public void CleanUp()
        {
            m_aMission.Clear();
            for (int i = 0; i < MAX_CHAR_MISSION_FLAG_LEN; i++)
            {
                m_aMissionHaveDoneFlags[i] = 0;
            }
        }

    };

	public class PaoHuanMissionInfo {
		// 玩家领取本周跑环任务时候的等级
		public int PlayerLevelWhenGetMission;
		// 当前环数
		public int CurrentNum;
		// 当前任务ID
		public int CurrentMissionID;
		// 当前领取状态0不可领取1可领取2已领取
		public int CheckState;
		// 免费刷新CD
		public int RefreshCD;
		// 服务器发来同步包时的CD
		public int CurrentServerCD;
		// 已使用免费刷新次数
		public int RefreshCntFree;
		// 已使用付费刷新次数
		public int RefreshCntPaid;

		// 服务器发来同步包时的客户端时间(取自Time.realtimeSinceStartup)
		public int SyncClientTime;

		// 10环奖励提示的特效是否正在显示
		public bool AwardTipShowing;

		public void Clear ()
		{
			PlayerLevelWhenGetMission = -1;
			CurrentNum = 0;
			CurrentMissionID = -1;
			CheckState = 0;
			RefreshCD = int.MaxValue;
			CurrentServerCD = int.MaxValue;
			RefreshCntFree = 0;
			RefreshCntPaid = 0;

			SyncClientTime = int.MaxValue;
			AwardTipShowing = false;
		}

		/// <summary>
		/// 获得当前客户端CD
		/// <returns>The client C.</returns>
		public int CurrentClientCD ()
		{
			if (CheckState == 2) {
				return Mathf.Clamp(CurrentServerCD - ((int)Time.realtimeSinceStartup - SyncClientTime), 0, int.MaxValue);
			} else {
				return int.MaxValue;
			}
		}

		/// <summary>
		/// 获得当前跑环10整数倍奖励物品ID
		/// </summary>
		/// <returns>The special award item I.</returns>
		public int CurrentSpecialAwardItemID ()
		{
			if (CheckState == 2) {
				var dics = TableManager.GetPaoHuanBonus ();
				foreach (var dic in dics) {
					foreach (var line in dic.Value) {
						if (line.MinLevelLimit <= PlayerLevelWhenGetMission && line.MaxLevelLimit > PlayerLevelWhenGetMission) {
							// 还在提示领取说明得显示上10环的奖励
							if (AwardTipShowing)
								return line.GetItemIDbyIndex ((CurrentNum / 10) - 1);
							else
								return line.GetItemIDbyIndex (CurrentNum / 10);
						}
					}
				}
			}
			return -1;
		}
	}

    public class MissionManager
    {
        private MissionList m_MissionList;  //任务列表

        // 忽略前序任务标记
        private int m_IgnoreMissionPreFlag;
        public int IgnoreMissionPreFlag
        {
            set { m_IgnoreMissionPreFlag = value; }
        }

		/// <summary>
		/// 是否杀怪任务自动挂机中
		/// </summary>
		private bool m_bMissionAutoCombat = false;
		/// <summary>
		/// 设置杀怪任务自动挂机状态
		/// </summary>
		/// <value><c>true</c> if mission auto combat; otherwise, <c>false</c>.</value>
		public bool MissionAutoCombat
		{
			set
			{
				m_bMissionAutoCombat = value;
			}
		}

		public PaoHuanMissionInfo PaoHuanInfo = new PaoHuanMissionInfo();

        public MissionManager()
        {
            m_MissionList = new MissionList();
            m_IgnoreMissionPreFlag = 0;

			Messenger.AddListener(MessengerConst.OnAutoCombatEnd, OnAutoCombatEnd);
        }

		~MissionManager ()
		{
			Messenger.RemoveListener(MessengerConst.OnAutoCombatEnd, OnAutoCombatEnd);
		}

        /// <summary>
        /// 客户端检查，是否可以接受任务
        /// </summary>
        /// <param name="nMissionID">任务ID</param>
        /// <returns>成功与否</returns>
        public bool CanAcceptMission(int nMissionID)
        {
            Tab_MissionBase misLine = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (misLine == null)
			{
				LogModule.DebugLog("Can not find missionBase: {0}", nMissionID);
                return false;
			}

            // 0、任务是否已满
            if (m_MissionList.IsMissionFull())
            {
				// cunyi
//				LogModule.DebugLog("Mission is full");
                // 提示 任务已满
                return false;
            }
            
            // 1、检查玩家身上是否有任务
            if (true == IsHaveMission(nMissionID) 
                && MissionState.Mission_Failed != (MissionState)GetMissionState(nMissionID))
            {
//				LogModule.DebugLog("Already have mission: {0}", nMissionID);
                return false;
            }

            if (false == SpecialMission_CanAccept(nMissionID))
            {
//				LogModule.DebugLog("Can not accept mission: {0}", nMissionID);
                return false;
            }

            Tab_MissionLimit misLimitLine = TableManager.GetMissionLimitByID(misLine.LimitID, 0);
            if (misLimitLine == null) // 无限制
			{
				LogModule.DebugLog("Can not find missionLimit: {0}", misLine.LimitID);
				return true;
            }

            // 2、任务限制等级
            int nPlayerLevel = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level;
            if (misLimitLine.LowLevel > nPlayerLevel)
            {
//				LogModule.DebugLog("Player level less then lowLevel of mission: {0}", nMissionID);
                return false;
            }

            // 3、检查玩家是否完成任务
            if (misLimitLine.IsLoop != 1)
            {
                if (true == IsMissionHaveDone(nMissionID))
                {
//					LogModule.DebugLog("Mission have already done: {0}", nMissionID);
                    // 提示 任务已完成
                    return false;
                }
            }

            // 4、检查前续任务
            if (m_IgnoreMissionPreFlag == 0)
            {
				for( int i = 0 ; i < misLimitLine.getPreMissionCount(); ++i )
				{
					if (misLimitLine.GetPreMissionbyIndex(i) > -1 && !IsMissionHaveDone(misLimitLine.GetPreMissionbyIndex(i)))
					{
//						LogModule.DebugLog("PreMission of mission {0} havent done, premissionID: {1}", nMissionID, misLimitLine.PreMission);
						return false;
					}
				}
            }

            return true;
        }

        /// <summary>
        /// 客户端添加任务
        /// </summary>
        /// <param name="nMissionID">任务ID</param>
        /// <returns>返回添加成功与否</returns>
        bool AddMission(int nMissionID, byte yQuality)
        {
            if (nMissionID < 0)
            {
				LogModule.DebugLog("MissionID: {0} less then 0", nMissionID);
                return false;
            }

            if (m_MissionList.m_aMission.ContainsKey(nMissionID))
            {
				LogModule.DebugLog("Already have mission {0}", nMissionID);
                return false;
            }

            CurOwnMission tempMission = new CurOwnMission();
            tempMission.CleanUp();
            tempMission.m_nMissionID = nMissionID;
            tempMission.m_yQuality = yQuality;
            m_MissionList.m_aMission.Add(nMissionID, tempMission);

            return true;
        }

        /// <summary>
        /// 客户端删除一个任务
        /// </summary>
        /// <param name="nMissionID"></param>
        /// <returns></returns>
        bool DelMission(int nMissionID)
        {
            if (nMissionID < 0)
            {
				LogModule.DebugLog("MissionID: {0} less then 0", nMissionID);
                return false;
            }

            bool bRet = m_MissionList.m_aMission.Remove(nMissionID);
            return bRet;
        }

        /// <summary>
        /// 完成任务，这里以后需要由服务器同步过来
        /// </summary>
        /// <param name="nMissionID"></param>
        /// <returns></returns>
        bool SetMissionHaveDone(int nMissionID)
        {
            int idIndex = (nMissionID >> 5);
            if (idIndex < MissionList.MAX_CHAR_MISSION_FLAG_LEN)
            {
                UInt32 uData = (UInt32)nMissionID & 0x0000001f;
                m_MissionList.m_aMissionHaveDoneFlags[idIndex] |= (UInt32)(0x00000001 << (Int32)uData);

                return true;
            }
            return false;
        }

        public bool IsMissionHaveDone(int nMissionID)
        {
            if (nMissionID < 0)
            {
				LogModule.DebugLog("MissionID: {0} less then 0", nMissionID);
                return false;
            }
            int idIndex = (nMissionID >> 5);
            if (idIndex < MissionList.MAX_CHAR_MISSION_FLAG_LEN)
            {
                UInt32 uRet = (UInt32)(0x00000001 << ((Int32)nMissionID & 0x0000001F)) & m_MissionList.m_aMissionHaveDoneFlags[idIndex];
                return (uRet != 0);
            }

            return false;
        }

        // 通过任务ID取该任务在任务表表的索引值， 无该任务时返回UINT_MAX
        public int GetMissionIndexByID(int nMissionID) { return 1; }

        // 任务参数
        public void SetMissionParam(int nMissionID, int nParamIndex, int nValue)
        {
            if (!m_MissionList.m_aMission.ContainsKey(nMissionID))
            {
				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
                return;
            }
            if (nParamIndex >= 0 && nParamIndex < CurOwnMission.MAX_MISSION_PARAM_NUM)
            {
                m_MissionList.m_aMission[nMissionID].m_nParam[nParamIndex] = nValue;
            }
            // 默认0位置存任务跟踪项 计数
            if (nParamIndex == 0)
            {
                // 客户端任务 存下
                if (IsClientMission(nMissionID))
                {
                    if (null != Singleton<ObjManager>.GetInstance()
                        && null != Singleton<ObjManager>.GetInstance().MainPlayer)
                    {
                        UInt64 PlayerGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
                        UserConfigData.AddClientMission(PlayerGuid.ToString(), m_MissionList.m_aMission[nMissionID]);
                    }
                }	

                // 通知UI
                NotifyMissionUI(nMissionID, "state");
            }

        }
        public int GetMissionParam(int nMissionID, int nParamIndex)
        {
            if (!m_MissionList.m_aMission.ContainsKey(nMissionID))
            {
				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
                return -1;
            }
            if (nParamIndex >= 0 && nParamIndex < CurOwnMission.MAX_MISSION_PARAM_NUM)
            {
                return m_MissionList.m_aMission[nMissionID].m_nParam[nParamIndex];
            }
            return -1;
        }

        // 接任务 给服务器发包
        public bool AcceptMission(int nMissionID)
        {
            // 添加任务接取判断条件

            // 给服务器发包
            CG_ACCEPTMISSION askMission = (CG_ACCEPTMISSION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ACCEPTMISSION);
            askMission.SetMissionID(nMissionID);
            askMission.SendPacket();

            return true;
        }

        // 任务接取成功后 客户端处理
        public bool AddMissionToUser(int nMissionID, byte yQualityType)
        {
            if (IsHaveMission(nMissionID))
            {
				LogModule.DebugLog("Already have mission {0}", nMissionID);
                return false;
            }

            if (false == AddMission(nMissionID, yQualityType))
            {
                return false;
            }

            // 通知客户端更新UI，每日任务不出现
            if (IsInTracer(nMissionID))
            {
                NotifyMissionUI(nMissionID, "add");
            }

            // 通知日常任务界面
            NotifyDailyMissionUI(nMissionID,"add");

            // 通知帮会任务界面
            NotifyGuildMissionUI(nMissionID, "add");

            if (false == SetMissionState(nMissionID, (byte)MissionState.Mission_Accepted))
            {
                return false;
            }

			Messenger.Broadcast (MessengerConst.OnMissionStateChanged);

            // 第一个任务 无玩家坐标，剧情跳过
            if (nMissionID == 0)
            {
				Cutscene.CutsceneManager.Instance.PlayCommonStory(1);
               return true;
            }
            Tab_MissionBase table = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (table == null )
			{
				LogModule.DebugLog("Can not find missionBase {0}", nMissionID);
				return false;
			}
			//else
            {
                //是剧情任务,不弹出对话框
                if (table.LogicType == (short)TableType.Table_Story 
                    && table.MissionType != (int)MISSIONTYPE.MISSION_DAILY
                    && table.MissionType != (int)MISSIONTYPE.MISSION_GUILD) 
                {
                    //if (StoryDialogLogic.ShowStory(table.LogicID))
                    //{
                    //    return true;
                    //}
					Cutscene.CutsceneManager.Instance.PlayCommonStory(table.LogicID);
                    return true;
                }
			}

			if (table.LogicType != (int)TableType.Table_Invalid &&
			    table.LogicType != (int)TableType.Table_LevelUp &&
			    table.LogicType != (int)TableType.Table_OperationNum
                && nMissionID != 5
				&& Singleton<ObjManager>.Instance.MainPlayer.IsOpenCabalAuto
			    )
			{
				MissionPathFinder(nMissionID);
			}

            return true;
        }

        // 提交任务，给服务器发包
        public bool CompleteMission(int nMissionID)
        {
            Tab_MissionBase misLine = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (misLine == null)
			{
				LogModule.DebugLog("Can not find missionBase {0}", nMissionID);
                return false;
			}

            // 2、检查玩家身上是否有任务
            if (false == IsHaveMission(nMissionID))
            {
				LogModule.DebugLog("Already have mission {0}", nMissionID);
                return false;
            }

            // 3、任务状态检查
            if ((byte)MissionState.Mission_Completed != GetMissionState(nMissionID))
            {
				LogModule.DebugLog("Mission is not completed {0}", nMissionID);
                return false;
            }

            // 给服务器发包
            CG_COMPLETEMISSION askMission = (CG_COMPLETEMISSION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_COMPLETEMISSION);
            askMission.SetMissionID(nMissionID);
            askMission.SendPacket();

            return true;
        }

        // 任务提交成功后 客户端处理
        public bool CompleteMissionOver(int nMissionID)
        {
            // 客户端模拟包
            if (false == SetMissionHaveDone(nMissionID))
            {
				LogModule.DebugLog("SetMissionHaveDone({0}) failed", nMissionID);
                return false;
            }

            // 通知客户端更新UI
            NotifyMissionUI(nMissionID, "Del");

            bool bRet = DelMission(nMissionID);//删除任务
            if (!bRet)
            {
				LogModule.DebugLog("DelMission({0}) failed", nMissionID);
                return false;
            }

            if (IsClientMission(nMissionID))
            {
                if (null != Singleton<ObjManager>.GetInstance()
                        && null != Singleton<ObjManager>.GetInstance().MainPlayer)
                {
                    UInt64 PlayerGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
                    UserConfigData.DelClientMission(PlayerGuid.ToString(), nMissionID);
                }
            }

            // 通知日常任务界面
            NotifyDailyMissionUI(nMissionID,"Del");

            // 通知日常任务界面
            NotifyGuildMissionUI(nMissionID, "Del");

            //弹出下一个任务的接受界面
			int nNextMissionId = GetNextAcceptedMissionIDInNpc(nMissionID);
			if(nNextMissionId!=GlobeVar.INVALID_ID)
            {
                MissionInfoController.ShowMissionDialogUI(nNextMissionId);
            }
			else
			{
				LogModule.DebugLog("Can not find NEXT mission, complete mission:{0}", nMissionID);
			}

			// 如果当前完成的是主线任务，则自动接取当前npc下当前完成的主线开启的的所有支线
			if( GetMissionType(nMissionID) == (int)MISSIONTYPE.MISSION_MAIN )
			{
				Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;
				if(TargetNpc!=null)
				{
					for (int i = 0; i < TargetNpc.MissionList.Count; ++i)
					{
						int missionID = TargetNpc.MissionList[i];
						if (missionID < 0)
						{
							continue;
						}
						
						Tab_MissionBase table = TableManager.GetMissionBaseByID(missionID, 0);
						if (table == null)
						{
							continue;
						}
						
						if (table.AcceptDataID != TargetNpc.BaseAttr.RoleBaseID)
						{
							continue;
						}
						
						if(table.MissionType!=(int)MISSIONTYPE.MISSION_BRANCH)
						{
							continue;
						}
						
						Tab_MissionLimit misLimitLine = TableManager.GetMissionLimitByID(table.LimitID, 0);
						if (misLimitLine == null) // 无限制
						{
							continue;
						}
						
						if( misLimitLine.GetPreMissionbyIndex(0)!=nMissionID && misLimitLine.GetPreMissionbyIndex(1)!=nMissionID )
						{
							continue;
						}
						
						bool bCanAcceptMission = CanAcceptMission(missionID);
						if (bCanAcceptMission)
						{
							AcceptMission(missionID);
						}
					}
				}
			}

            return true;
        }

        // 放弃任务
        public bool AbandonMission(int nMissionID)
        {
            // 检查玩家身上是否有任务
            if (false == IsHaveMission(nMissionID))
            {
				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
                return false;
            }

            // 给服务器发包
            CG_ABANDONMISSION askMission = (CG_ABANDONMISSION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ABANDONMISSION);
            askMission.SetMissionID(nMissionID);
            askMission.SendPacket();

            return true;
        }

        public bool AbandonMissionOver(int nMissionID)
        {

            // 通知客户端更新UI
            NotifyMissionUI(nMissionID, "Del");
            
            // 直接删除任务
            bool bRet = DelMission(nMissionID);//删除任务
            if (!bRet)
            {
				LogModule.DebugLog("DelMission({0}) failed", nMissionID);
                return false;
            }

            NotifyDailyMissionUI(nMissionID, "");

            NotifyGuildMissionUI(nMissionID, "");

            if (IsClientMission(nMissionID))
            {
                if (null != Singleton<ObjManager>.GetInstance()
                        && null != Singleton<ObjManager>.GetInstance().MainPlayer)
                {
                    UInt64 PlayerGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
                    UserConfigData.DelClientMission(PlayerGuid.ToString(), nMissionID);
                }
            }

            return true;
        }

        public bool IsHaveMission(int nMissionID)
        {
            if (nMissionID < 0)
            {
				LogModule.DebugLog("MissionID: {0} less then 0", nMissionID);
                return false;
            }

            if (m_MissionList.m_aMission.ContainsKey(nMissionID))
            {
                return true;
            }
            return false;
        }
        public bool SetMissionState(int nMissionID, byte nStatus)
        {
            if (false == IsHaveMission(nMissionID))
            {
				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
                return false;
            }
            if (nStatus == GetMissionState(nMissionID))
            {
                return false;
            }
            m_MissionList.m_aMission[nMissionID].SetStatus(nStatus);

            // 客户端任务 保存下状态
            if (IsClientMission(nMissionID))
            {
                if (null != Singleton<ObjManager>.GetInstance()
                    && null != Singleton<ObjManager>.GetInstance().MainPlayer)
                {
                    UInt64 PlayerGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
                    UserConfigData.AddClientMission(PlayerGuid.ToString(), m_MissionList.m_aMission[nMissionID]);
                }
            }

			// 如果是探查任务，并且有过场动画的话，就播放过场动画
			if (nStatus == 2 && GetMissionLogicType (nMissionID) == (int)TableType.Table_Enterarea) {
				Tab_MissionBase lineMissionBase = TableManager.GetMissionBaseByID(nMissionID,0);
				if (lineMissionBase != null)
				{
					Tab_MissionEnterArea lineMissionEnterArea = TableManager.GetMissionEnterAreaByID (lineMissionBase.LogicID, 0);
					if (lineMissionEnterArea != null) {
						if (lineMissionEnterArea.GetPlayCutsceneIDbyIndex(0) != -1) {
							Cutscene.CutsceneManager.Instance.PlayCutscene (lineMissionEnterArea.GetPlayCutsceneIDbyIndex(0));
						}
					}
				}
			}

			// 如果是杀怪任务完成了，自动交任务(副本内不寻路)
			int missionLogicType = GetMissionLogicType(nMissionID);
			if (!GameManager.gameManager.ActiveScene.IsCopyScene() &&
			    (missionLogicType == (int)TableType.Table_KillMonster ||
			    missionLogicType == (int)TableType.Table_LootItem ||
			    missionLogicType == (int)TableType.Table_CollectItem ||
			    missionLogicType == (int)TableType.Table_Invalid))
			{
				if (nStatus == (byte)MissionState.Mission_Completed)
				{
					if (m_bMissionAutoCombat)
					{
						Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
						if (null != mainPlayer)
						{
							mainPlayer.LeveAutoCombat();
						}
					}
					m_bMissionAutoCombat = false;

					// 如果是跑环任务，则自动发送完成任务请求
					if (GetMissionType (nMissionID) == (int)MISSIONTYPE.MISSION_PAOHUAN) 
					{
						CompleteMission (nMissionID);
					}
					else
					if (false == IsNoNeedFindPath(nMissionID) && Singleton<ObjManager>.Instance.MainPlayer.IsOpenCabalAuto)
                    {
                        // 自动寻路
                        MissionPathFinder(nMissionID);
                    }
                    
				}
			}

            // 通知UI更新
            NotifyMissionUI(nMissionID, "state");

            // 通知日常任务界面
            NotifyDailyMissionUI(nMissionID, "state");

            // 通知帮会任务界面
            NotifyGuildMissionUI(nMissionID, "state");

            return true;
        }
        public byte GetMissionState(int nMissionID)
        {
            if (false == IsHaveMission(nMissionID))
            {
//				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
                return 0;
            }
            return m_MissionList.m_aMission[nMissionID].m_yStatus;
        }

        public byte GetMissionQuality(int nMissionID)
        {
            if (true == IsHaveMission(nMissionID))
            {
                return m_MissionList.m_aMission[nMissionID].m_yQuality;
            }
			else
			{
				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
			}
            return (byte)MISSION_QUALITY.MISSION_QUALITY_NONE;
        }

        // 任务更新UI
        public void NotifyMissionUI(int nMissionID, string strOpt)
        {
            if (null != MissionDialogAndLeftTabsLogic.Instance())
            {
                MissionDialogAndLeftTabsLogic.Instance().UpDateMissionFollow(nMissionID, strOpt);
                MissionDialogAndLeftTabsLogic.Instance().SortMissionItem();
            }

        }

        public bool IsClientMission(int nMissionID)
        {
            Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (MissionBase == null)
            {
				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
                return false;
            }
            int nType = MissionBase.LogicType;
            if (nType == (int)TableType.Table_Story || nType == (int)TableType.Table_CollectItem)
            {
                return true;
            }
            return false;
        }

        // 剧情任务 在客户端完成
        public bool SetStoryMissionState(int nMissionID, byte byState)
        {
            Tab_MissionBase misLine = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (misLine == null)
            {
				LogModule.DebugLog("Do not have mission: {0}", nMissionID);
                return false;
            }

            if (TableType.Table_Story == (TableType)misLine.LogicType)
            {
                SetMissionParam(nMissionID, 0, 1);
                return SetMissionState(nMissionID, (byte)byState);
            }

            return false;
        }

        // 获取玩家身上的任务
        public List<int> GetAllMissionID()
        {
            List<int> nMissionIDList = new List<int>();

            // 遍历玩家任务列表
            foreach (KeyValuePair<int, CurOwnMission> kvp in m_MissionList.m_aMission)
            {
                if (kvp.Key < 0)
                    continue;
                nMissionIDList.Add(kvp.Key);
            }
            return nMissionIDList;
        }

        /// <summary>
        /// 获得需要追踪的任务
        /// </summary>
        /// <returns></returns>
        public List<int> GetMissionsInTracker()
        {
            List<int> nMissionIDList = new List<int>();

            // 遍历玩家任务列表
            foreach (KeyValuePair<int, CurOwnMission> kvp in m_MissionList.m_aMission)
            {
                if (kvp.Key < 0)
                    continue;
                Tab_MissionBase misBase = TableManager.GetMissionBaseByID(kvp.Key, 0);
                if (misBase == null)
                {
                    LogModule.DebugLog("Do not have mission: {0}", kvp.Key);
                    continue;
                }
                if (misBase.MissionType == (int)MISSIONTYPE.MISSION_DAILY)
                {
                    continue;
                }
                nMissionIDList.Add(kvp.Key);
            }
            return nMissionIDList;
        }

        /// <summary>
        /// 是否应该显示在任务追踪里
        /// </summary>
        /// <param name="missionId"></param>
        /// <returns></returns>
        public bool IsInTracer(int missionId)
        {
            Tab_MissionBase misBase = TableManager.GetMissionBaseByID(missionId, 0);
            return (misBase.MissionType != (int)MISSIONTYPE.MISSION_DAILY);
        }

        /// <summary>
        /// 获取玩家身上的非日常任务，非公会任务
        /// </summary>
        /// <returns></returns>
        public List<int> GetAllNotDailyMissionList()
        {
            List<int> nMissionIDList = new List<int>();

            // 遍历玩家任务列表
            foreach (KeyValuePair<int, CurOwnMission> kvp in m_MissionList.m_aMission)
            {
                if (kvp.Key < 0)
                    continue;

                Tab_MissionBase misBase = TableManager.GetMissionBaseByID(kvp.Key, 0);
				if (misBase == null)
				{
					LogModule.DebugLog("Do not have mission: {0}", kvp.Key);
					continue;
				}
                if (misBase.MissionType == (int)MISSIONTYPE.MISSION_DAILY
                    || misBase.MissionType == (int)MISSIONTYPE.MISSION_GUILD)
                {
                    continue;
                }

                nMissionIDList.Add(kvp.Key);
            }
            return nMissionIDList;
        }

        /// <summary>
        /// 获取玩家身上日常任务
        /// </summary>
        /// <returns></returns>
        public List<int> GetAllDailyMissionList()
        {
            List<int> nMissionIDList = new List<int>();

            // 遍历玩家任务列表
            foreach (KeyValuePair<int, CurOwnMission> kvp in m_MissionList.m_aMission)
            {
                if (kvp.Key < 0)
                    continue;

                Tab_MissionBase misBase = TableManager.GetMissionBaseByID(kvp.Key, 0);
                if (misBase == null)
                {
                    LogModule.DebugLog("Do not have mission: {0}", kvp.Key);
                    continue;
                }
                if (misBase.MissionType == (int)MISSIONTYPE.MISSION_DAILY)
                {
                    nMissionIDList.Add(kvp.Key);
                }
            }
            return nMissionIDList;
        }

		// 获取玩家可接的非日常任务，非公会任务
		public List<int> GetAllCanAcceptedMissionList()
		{
			List<int> nMissionIDList = new List<int>();
			for (int i = 0; i < TableManager.GetMissionBase().Count; i++ )
			{
				Tab_MissionBase misBase = TableManager.GetMissionBaseByID(i, 0);
				if (null == misBase)
				{
					continue;
				}

				if( CanAcceptMission(i) )
				{
					nMissionIDList.Add(i);
				}

				if (misBase.MissionType == (int)MISSIONTYPE.MISSION_DAILY
				    || misBase.MissionType == (int)MISSIONTYPE.MISSION_GUILD)
				{
					continue;
				}
			}
			return nMissionIDList;
		}

		public int GetNextAcceptedMissionIDInNpc(int nCompleteMissionID)
		{

			Obj_NPC TargetNpc = Singleton<DialogCore>.GetInstance().CareNPC;

			// 如果不在npc附件
			if (TargetNpc == null)
			{
				return GlobeVar.INVALID_ID;
			}

			// 如果刚完成主线，弹下一个主线
			if( nCompleteMissionID==GlobeVar.INVALID_ID )
			{
				return GlobeVar.INVALID_ID;
			}
				
			Tab_MissionBase misBase = TableManager.GetMissionBaseByID(nCompleteMissionID, 0);
			if (misBase == null)
			{
				return GlobeVar.INVALID_ID;
			}
				
			if( misBase.MissionType == (int)MISSIONTYPE.MISSION_MAIN )
			{//主线弹主线
				int nNextMissionID = misBase.NextMissionID;
				if (TargetNpc.IsHaveMission(nNextMissionID))
				{
					return nNextMissionID;
				}
				return GlobeVar.INVALID_ID;
			}
			else if( misBase.MissionType == (int)MISSIONTYPE.MISSION_BRANCH )
			{//支线弹支线
				for (int i = 0; i < TargetNpc.MissionList.Count; ++i)
				{
					int missionID = TargetNpc.MissionList[i];
					if (missionID < 0)
					{
						continue;
					}
					
					Tab_MissionBase table = TableManager.GetMissionBaseByID(missionID, 0);
					if (table == null)
					{
						continue;
					}
					
					if (table.AcceptDataID != TargetNpc.BaseAttr.RoleBaseID)
					{
						continue;
					}

					if(table.MissionType!=(int)MISSIONTYPE.MISSION_BRANCH)
					{
						continue;
					}
					
					bool bCanAcceptMission = GameManager.gameManager.MissionManager.CanAcceptMission(missionID);
					if (bCanAcceptMission)
					{
						return table.Id;
					}
				}
			}

			return GlobeVar.INVALID_ID;
		}

        // 遍历场景中前nNum个可接任务（按等级先大后小） 任务日志用
        public List<int> GetCanAcceptedMissionIDInScene(int nNum)
        {
            List<int> nMissionIDList = new List<int>();
            
            // 遍历表格 查任务
            Dictionary<int, List<Tab_SceneNpc> > AllNpc = TableManager.GetSceneNpc();
            foreach (int key in AllNpc.Keys)
            {
                Tab_SceneNpc NpcTable = AllNpc[key][0];
                if (null == NpcTable)
                {
                    continue;
                }

                Tab_RoleBaseAttr npcRoleBase = TableManager.GetRoleBaseAttrByID(NpcTable.DataID, 0);
                if (null == npcRoleBase || npcRoleBase.DialogID < 0)
                {
					//LogModule.DebugLog("Do not have roleBaseAttr: {0} or roleBaseAttr.DialogID less then 0", NpcTable.DataID);
                    continue;
                }

                Tab_NpcDialog npcDialog = TableManager.GetNpcDialogByID(npcRoleBase.DialogID, 0);
                if (null == npcDialog)
                {
					//LogModule.DebugLog("Do not have npcDialog: {0}", npcRoleBase.DialogID);
                    continue;
                }
                //表格遍历，筛选可用
                for (int i = 0; i < npcDialog.getMissionIDCount(); i++ )
                {
                    int nMissionID = npcDialog.GetMissionIDbyIndex(i);
                    if (nMissionID < 0)
                    {
                        continue;
                    }

                    Tab_MissionBase misBase = TableManager.GetMissionBaseByID(nMissionID, 0);
                    if (null == misBase)
                    {
						LogModule.DebugLog("Do not have missionBase: {0}", nMissionID);
                        continue;
                    }

                    if (false == CanAcceptMission(nMissionID)
                        || misBase.AcceptDataID != NpcTable.DataID)
                    {
						//LogModule.DebugLog("Can not accept mission: {0} or missionBase.AcceptDataID: {1} do not match with NpcTable.DataID: {2}", nMissionID, misBase.AcceptDataID, NpcTable.DataID);
                        continue;
                    }

                    // 有序添加
                    if (false == AddMissionIDByLevel(nMissionIDList, nMissionID))
                    {
						LogModule.DebugLog("AddMissionIDByLevel({0}, {1}) failed", nMissionIDList, nMissionID);
                    }

                    if (nMissionIDList.Count > nNum)
                    {
                        nMissionIDList.RemoveAt(nNum);
                    }
                }
            }

			// 特殊 周跑环可接任务
			if (PaoHuanInfo.CheckState == 1) 
			{
				// 有序添加
				if (false == AddMissionIDByLevel(nMissionIDList, PaoHuanInfo.CurrentMissionID))
				{
					LogModule.DebugLog("AddMissionIDByLevel({0}, {1}) failed", nMissionIDList, PaoHuanInfo.CurrentMissionID);
				}
			}

            return nMissionIDList;
        }
        // 按任务限制等级排序 任务日志用
        bool AddMissionIDByLevel(List<int> MissionList, int nMissionID)
        {
            if (MissionList.Count < 0)
            {
                return false;
            }

            bool bFlag = false;
            for (int i = 0; i < MissionList.Count; i++)
            {
                Tab_MissionLimit TempMisLimit = TableManager.GetMissionLimitByID(nMissionID, 0);
                if (TempMisLimit == null)
                {
					LogModule.DebugLog("Do not have missionLimit: {0}", nMissionID);
                    return false;
                }

                Tab_MissionLimit MisLimit = TableManager.GetMissionLimitByID(MissionList[i], 0);
                if (MisLimit == null)
                {
					LogModule.DebugLog("Do not have missionLimit: {0}", MissionList[i]);
                    // 异常 怎么处理？
                    continue;
                }

                if (TempMisLimit.LowLevel > MisLimit.LowLevel)
                {
                    bFlag = true;
                    MissionList.Insert(i, nMissionID);
                    break;
                }
            }

            if (bFlag == false)
            {
                MissionList.Add(nMissionID);
            }

            return true;
        }

        // 任务追踪、任务日志寻路
        public void MissionPathFinder(int nMissionID)
        {
            //新手指引测试
            //if(nMissionID == 79)
            //{
            //    Mission_NewPlayerGuide(nMissionID);
            //    NewPlayerGuide.NewPlayerGuideOpt("PlayerFrame", 21);
            //    return;
            //}
            if (nMissionID < 0)
            {
				LogModule.DebugLog("MissionID: {0} less then 0", nMissionID);
                return;
            }
            Tab_MissionDictionary MDLine = TableManager.GetMissionDictionaryByID(nMissionID, 0);
            if (MDLine == null)
            {
				LogModule.DebugLog("Do not have missionDictionary: {0}", nMissionID);
                return;
            }
            if (Singleton<ObjManager>.Instance.MainPlayer)
            {
                if (GameManager.gameManager.ActiveScene.IsCopyScene())
                {
                    Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{1604}");
                    return;
                }
            }
            if (MDLine.IsAcceptAutoFindPath) //自动寻路
            {
              
                //接受任务后自动寻路
                Vector3 targetPos = new Vector3();
                int nTargetScene = -1;
                int nTargetNpcDataID = -1;
                // 任务是否完成
                MissionState misState = (MissionState)GetMissionState(nMissionID);
                if (MissionState.Mission_None == misState
                    || MissionState.Mission_Failed == misState)
                {
                    if (Faild_OpenMissionWindow(nMissionID))
                    {
                        return;
                    }

                    nTargetScene = MDLine.AccepteNpcSceneID;
                    targetPos.x = MDLine.AccepteNpcPosX;
                    targetPos.z = MDLine.AccepteNpcPosZ;
                    nTargetNpcDataID = MDLine.AcceptNpcDataID;
                }
                else if (MissionState.Mission_Accepted == misState)
                {
                    //打开日常任务UI
                    int nDailyMissionType = GetDailyMissionType(nMissionID);
                    if (nDailyMissionType == (int)DailyMissionType.DailyMissionType_Award)
                    {
                        OpenDailyLuckyUI();
                        return;
                    }

                    // 日常任务处理
                    if ((int)TableType.Table_LevelUp == GetMissionLogicType(nMissionID))
                    {
						UIManager.ShowUI(UIInfo.MissionLogRoot, OnLoadMissionAndMissionMainRoot, nMissionID);
                        return;
                    }

                    if (nMissionID == 207) // 20次日常任务
                    {
                        OpenDailyMissionUI();
                        return;
                    }

                    Tab_MissionBase missionBase = TableManager.GetMissionBaseByID(nMissionID, 0);

                    // 如果是剧情副本，打开副本界面
                    if (missionBase.LogicType == (int)TableType.SceneplayFB)
                    {
                        UIManager.ShowUI(UIInfo.Activity, _OnClickMissionItemToCopyStory, nMissionID);
                        return;
                    }

                    if (Mission_NewPlayerGuide(nMissionID)) // 特殊任务 新手指引
                    {
                        return;
                    }

					// 一些特殊处理
					if (Mission_SpecialAction (nMissionID)) {
						return;
					}

                    if (OpenMissionWindow(nMissionID))
                    {
                        return;
                    }
                    if (nMissionID == 80)//仓库新手教学
                    {
                        OptionDialogLogic.isNewPlayerGuide = true;
                    }
                    nTargetScene = MDLine.TargetNpcSceneID;
                    targetPos.x = MDLine.TargetNpcPosX;
                    targetPos.z = MDLine.TargetNpcPosZ;
                    nTargetNpcDataID = MDLine.TargetNpcDataID;
                }
                else if (MissionState.Mission_Completed == misState)
                {
                    // 日常任务处理
                    if ((int)MISSIONTYPE.MISSION_DAILY == GetMissionType(nMissionID))
                    {                    
                        OpenDailyMissionUI();                 
                        return;
                    } 
                    else if ((int)MISSIONTYPE.MISSION_GUILD == GetMissionType(nMissionID))
                    {
                        OpenGuildMissionUI();
                        return;
                    }
                    else
                    {
                        nTargetScene = MDLine.CompleteNpcSceneID;
                        targetPos.x = MDLine.CompleteNpcPosX;
                        targetPos.z = MDLine.CompleteNpcPosZ;
                        nTargetNpcDataID = MDLine.CompleteNpcDataID;
                    }
                }

                if (null != Singleton<ObjManager>.GetInstance()
                    && null != Singleton<ObjManager>.GetInstance().MainPlayer)
                {
                    Singleton<ObjManager>.GetInstance().MainPlayer.BreakAutoCombatState();

                    // 自动寻路
                    AutoSearchPoint point = new AutoSearchPoint(nTargetScene, targetPos.x, targetPos.z);
                    if (GameManager.gameManager && GameManager.gameManager.AutoSearch && !GameManager.gameManager.ActiveScene.IsCopyScene())
                    {
                        string sAutoSearchTargetName = string.Empty;
                        Tab_RoleBaseAttr RoleBase = TableManager.GetRoleBaseAttrByID(nTargetNpcDataID, 0);
                        if (null != RoleBase)
                        {
                            sAutoSearchTargetName = RoleBase.Name;
                        }
//						else
//						{
//							LogModule.DebugLog("Do not have roleBaseAttr: {0}", nTargetNpcDataID);
//						}
                        GameManager.gameManager.AutoSearch.ProcessAutoSearch(point, sAutoSearchTargetName);
                    }

                    MoveOverMissionEvent(nMissionID);
                }
            }
        }

        // 任务寻路完成后 任务相关事件处理
        void MoveOverMissionEvent(int nMissionID)
        {
            if (nMissionID == 80)//仓库新手教学
            {
                Debug.LogError("2222222222222");
                //GameEvent gameEvent = new GameEvent();
                //gameEvent.Reset();
                //gameEvent.EventID = Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_NEWPLAYER;
                //GameManager.gameManager.AutoSearch.Path.FinishCallBackEvent = gameEvent;
                MenuBarLogic.Instance().NewPlayerGuideIndex = 22;
            }
            // 收集任务特殊处理
            Tab_MissionBase missBase = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (missBase == null)
            {
				LogModule.DebugLog("Do not have missionBase: {0}", nMissionID);
                return;
            }
            MissionState misState = (MissionState)GetMissionState(nMissionID);
            if (missBase.LogicType == (int)TableType.Table_CollectItem)
            {
                if (misState != MissionState.Mission_Accepted)
                {
                    return;
                }

                GameEvent gameEvent = new GameEvent();
                gameEvent.Reset();
                gameEvent.EventID = Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_MISSION_COLLECTITEM;
                //gameEvent.AddIntParam(nMissionID);
                //注意,要在MoveTo之后调用
                if (null != GameManager.gameManager.AutoSearch &&
                    null != GameManager.gameManager.AutoSearch.Path)
                    GameManager.gameManager.AutoSearch.Path.FinishCallBackEvent = gameEvent;
               
            }
           
        }

        // 服务器同步数据
        public void SyncMissionList(GC_MISSION_SYNC_MISSIONLIST data)
        {
            m_MissionList.CleanUp();

            for (int i = 0; i < MissionList.MAX_CHAR_MISSION_NUM; i++)
            {
                int nMissionID = data.GetMissionID(i);
				if (nMissionID == GlobeVar.INVALID_ID) continue;
                if (true == AddMission(nMissionID, (byte)data.GetQualitytype(i)))
                {
                    m_MissionList.m_aMission[nMissionID].SetStatus((byte)data.GetState(i));

                    for (int j = 0; j < CurOwnMission.MAX_MISSION_PARAM_NUM; j++)
                    {
                        m_MissionList.m_aMission[nMissionID].m_nParam[j] = data.nParamList[i * CurOwnMission.MAX_MISSION_PARAM_NUM + j];
                    }
                }

                // 读取客户端存储的任务数据
                if (IsClientMission(nMissionID))
                {
                    Dictionary<string, List<CurOwnMission>> ClientMissionData = UserConfigData.GetClientMissionData();
                    UInt64 PlayerGuid = PlayerPreferenceData.LastRoleGUID;
                    if (ClientMissionData.ContainsKey(PlayerGuid.ToString()))
                    {
                        foreach (CurOwnMission oMission in ClientMissionData[PlayerGuid.ToString()])
                        {
                            if (nMissionID == oMission.m_nMissionID)
                            {
                                m_MissionList.m_aMission[nMissionID].SetStatus(oMission.m_yStatus);
                                m_MissionList.m_aMission[nMissionID].m_nParam[0] = oMission.m_nParam[0];
                            }
                        }
                    }
                }

                // 任务特殊处理额……机车任务、拼图任务
                if (nMissionID == 1 || nMissionID == 37)
                {
                    m_MissionList.m_aMission[nMissionID].SetStatus((byte)MissionState.Mission_Completed);
                    m_MissionList.m_aMission[nMissionID].m_nParam[0] = 1;
                }
            }

            for (int nIndex = 0; nIndex < MissionList.MAX_CHAR_MISSION_FLAG_LEN; nIndex++)
            {
                m_MissionList.m_aMissionHaveDoneFlags[nIndex] = data.GetHavedoneFlag(nIndex);
            }

            GameManager.gameManager.PlayerDataPool.MissionSortList.Clear();
            // 如果UI存在，更新UI
            if (MissionDialogAndLeftTabsLogic.Instance())
            {
                MissionDialogAndLeftTabsLogic.Instance().InitMissionFollow();
            }
        }

        //MissionBoard用，Npc头顶任务特效
        public bool IsHaveMissionAccepted(Obj_NPC oNpc)
        {
            foreach (int nMissionID in oNpc.MissionList)
            {
                Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
                if (MissionBase == null)
                {
					LogModule.DebugLog("Do not have missionBase: {0}", nMissionID);
                    continue;
                }

                if (MissionBase.AcceptDataID != oNpc.BaseAttr.RoleBaseID)
                {
					//LogModule.DebugLog("MissionBase.AcceptDataID: {0} do not match with BaseAttr.RoleBaseID: {1}", MissionBase.AcceptDataID, oNpc.BaseAttr.RoleBaseID);
                    continue;
                }

                if (CanAcceptMission(nMissionID))
                {
                    return true;
                }
            }

            return false;
        }
        public MissionBoard.MissionBoardState GetMissionBoardState(Obj_NPC oNpc)
        {
            foreach (int nMissionID in oNpc.MissionList)
            {
                Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
                if ( MissionBase == null)
                {
					LogModule.DebugLog("Do not have missionBase: {0}", nMissionID);
                    continue;
                }

                if (false == IsHaveMission(nMissionID))
                {
                    continue;
                }

                byte yState = GetMissionState(nMissionID);
                if (MissionBase.CompleteDataID == oNpc.BaseAttr.RoleBaseID)
                {
                    if (yState == (byte)MissionState.Mission_Accepted)
                    {
                        return MissionBoard.MissionBoardState.MISSION_CANCOMPLETED;
                    }
                    else if (yState == (byte)MissionState.Mission_Completed)
                    {
                        return MissionBoard.MissionBoardState.MISSION_COMPLETED;
                    }
                }
                else if (MissionBase.AcceptDataID == oNpc.BaseAttr.RoleBaseID)
                {
                    return MissionBoard.MissionBoardState.MISSION_ACCEPTED;
                }
            }

            return MissionBoard.MissionBoardState.MISSION_NONE;
        }
        
        // 更新日常任务界面
        void NotifyDailyMissionUI(int nMissionID, string strOpt)
        {
            Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (MissionBase != null && MissionBase.MissionType == (int)MISSIONTYPE.MISSION_DAILY)
            {
                Tab_DailyMission DailyMission = TableManager.GetDailyMissionByID(MissionBase.DalityMissionTabID, 0);
                if (DailyMission == null)
                {
                    LogModule.DebugLog("Do not have dailyMission: {0}", MissionBase.DalityMissionTabID);
                    return;
                }
                if (MissionLogLogic.Instance())
                {
                    MissionLogLogic.Instance().dailyView.UpdateMissionList();
                }

                //if (ActivityController.Instance())
                //{
                //    if (strOpt == "Del")
                //    {
                //        ActivityController.Instance().UpdateDailyMissionList();
                //    }
                //    ActivityController.Instance().UpdateMissionItemByKind(DailyMission.Type);
                //}
            }
        }

        // 更新帮会任务界面
        void NotifyGuildMissionUI(int nMissionID, string strOpt)
        {
//            Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
//            if (MissionBase != null && MissionBase.MissionType == (int)MISSIONTYPE.MISSION_GUILD)
//            {
//                Tab_GuildMission GuildMisTab = TableManager.GetGuildMissionByID(MissionBase.GuildMissionTabID, 0);
//                if (GuildMisTab == null)
//                {
//                    return;
//                }
//                if (GuildMission.Instance())
//                {
//                    GuildMission.Instance().UpdateMissionState(nMissionID);
//                }
//                
//            }
        }

        public int GetMissionType(int nMissionID)
        {
            Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (MissionBase != null)
            {
                return MissionBase.MissionType;
            }
			LogModule.DebugLog("Do not have missionBase: {0}", nMissionID);
            return (int)MISSIONTYPE.MISSION_INVALID;
        }

        public int GetMissionLogicType(int nMissionID)
        {
            Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (MissionBase != null)
            {
                return MissionBase.LogicType;
            }
			LogModule.DebugLog("Do not have missionBase: {0}", nMissionID);
            return (int)TableType.Table_Invalid;
        }

        // 采集任务处理
        public void MissionCollectItem()
        {
            Dictionary<string, GameObject> otherObjPool = Singleton<ObjManager>.GetInstance().OtherGameObjPools;
            if (otherObjPool.Count <= 0)
            {
                return;
            }

            foreach (KeyValuePair<string, GameObject> objPair in otherObjPool)
            {
                if (objPair.Value.CompareTag("CollectItem"))
                {
                    // 距离判断
                    Vector3 userPos = new Vector3(0, 0, 0);
                    if (Singleton<ObjManager>.GetInstance().MainPlayer == null)
                    {
                        return; 
                    }
                    userPos = Singleton<ObjManager>.GetInstance().MainPlayer.Position;

                    Vector3 TargetPos = objPair.Value.transform.position;
                    TargetPos.y = userPos.y;
                    float dis = Mathf.Abs(Vector3.Distance(userPos, TargetPos));
                    if (dis > 2)
                    {
                        continue;
                    }
                    Singleton<CollectItem>.GetInstance().RemoveItem(objPair.Value);
                    return;
                }
            }
        }

        // 显示日常任务界面
        void OpenDailyMissionUI()
        {
            UIManager.ShowUI(UIInfo.Activity, ShowDailyMissionOver);
        }

        // 显示帮会任务界面
        void OpenGuildMissionUI()
        {
//            GuildWindow.SetStartTab("GuildRewardaMission"); 
//            UIManager.ShowUI(UIInfo.MasterAndGuildRoot);
        }

		void OnLoadMissionAndMissionMainRoot(bool bSuccess, object param)
		{
			if (MissionLogLogic.Instance() != null) {
				MissionLogLogic.Instance().SetOpenTabName("Btn1-Main");
			}
		}

        // 显示任务界面
        void OnOpenMissionLogUI(bool bSuccess, object param)
        {
            if (bSuccess == false)
            {
                return;
            }

            int nMissionID = (int)param;
            if (nMissionID <= GlobeVar.INVALID_ID)
            {
                return;
            }

            if (MissionLogLogic.Instance())
            {
                MissionLogLogic.Instance().mainView.SelectMissionID = nMissionID;
            }

        }

        void OpenDailyLuckyUI()
        {
            if (MainUILogic.Instance() != null)
            {
                UIManager.ShowUI(UIInfo.DailyDrawRoot);
            }
        }

        int GetDailyMissionType(int nMissionID)
        {
            Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
            if (MissionBase == null)
            {
				LogModule.DebugLog("Do not have missionBase: {0}", nMissionID);
                return (int)DailyMissionType.DailyMissionType_Invalid;
            }
            Tab_DailyMission DailyMission = TableManager.GetDailyMissionByID(MissionBase.DalityMissionTabID, 0);
            if (DailyMission == null)
            {
                return (int)DailyMissionType.DailyMissionType_Invalid;
            }
			else
			{
				LogModule.DebugLog("Do not have dailyMission: {0}", MissionBase.DalityMissionTabID);
			}
            return DailyMission.Type;
        }

        void ShowDailyMissionOver(bool bSuccess, object param)
        {
            if (bSuccess)
            {
                if (ActivityController.Instance())
                {
                    ActivityController.Instance().ChangeToDailyMissionTab();
                }
            }
        }

        // 特殊不可接任务
        public bool SpecialMission_CanAccept(int nMissionID)
        {
//             if (nMissionID == 236)
//             {
//                 bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_MISSION_DAILYMISSION_FLAG);
//                 if (bRet == true)
//                 {
//                     return false;
//                 }
//             }
//             else if (nMissionID == 238)
//             {
//                 bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_ACTIVITY_SINGLEDAY_FLAG);
//                 bool bFlag = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_ACTIVITY_SINGLEDAYMISSION_FLAG);
//                 if (bRet == false || bFlag == true)
//                 {
//                     return false;
//                 }
//             }
//             else if(nMissionID == 239 || nMissionID == 240)
//             {
//                 bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_ACTIVITY_THANKSGIVINGDAYFLAG);
//                 bool bFlag = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_ACTIVITY_THANKSMISSIONERYDAYFLAG);
//                 if (bRet == false || bFlag == true)
//                 {
//                     return false;
//                 }
//             }
            return true;
        }
    
        // 新手指引任务 点击指引
        bool Mission_NewPlayerGuide(int nMissionID)
        {
            bool bRet = false;
            string strUIName = "";
            int nIndex = -1;
            switch(nMissionID)
            {
                // Cabel
                case 1://机车
                    strUIName = "NewFunction";
                    nIndex = 16;
                    break;
                case 14: // 赠兽
                    strUIName = "PlayerFrame";
                    nIndex = 2;
                    break;
                case 19: // 
                    strUIName = "NewFunction";
                    nIndex = 17;
                    break;
                case 28: // 
                    strUIName = "NewFunction";
                    nIndex = 19;
                    break;
                case 45: // 
                    strUIName = "NewFunction";
                    nIndex = 21;
                    break;
                case 50: // 
                    strUIName = "NewFunction";
                    nIndex = 23;
                    break;
                case 51: // 藏经阁
                    strUIName = "NewFunction";
                    nIndex = 8;
                    break;
                case 52: // PK
                    strUIName = "NewFunction";
                    nIndex = 4;
                    break;
                case 20: // 钟灵
                    strUIName = "PlayerFrame";
                    nIndex = 1;
                    break;
                case 29: // 伙伴天赋技能
                    strUIName = "PlayerFrame";
                    nIndex = 12;
                    break;
                case 33: // 放毒
                    strUIName = "PlayerFrame";
                    nIndex = 3;
                    break;
                case 245: // 1级宝石引导
                    strUIName = "PlayerFrame";
                    nIndex = 9;
                    break;
                case 43: // 强化
                    strUIName = "PlayerFrame";
                    nIndex = 0;
                    break;
                case 327: // 混沌之地1层
                    strUIName = "NewFunction";
                    nIndex = 26;
                    break;
                case 328: // 混沌之地5层
                    strUIName = "NewFunction";
                    nIndex = 26;
                    break;
                case 156:   // 黄昏要塞
                    strUIName = "NewFunction";
                    nIndex = 30;
                    break;
                case 164:   // 机械研究所
                    strUIName = "NewFunction";
                    nIndex = 31;
                    break;
                case 175:   //雷纳包
                    strUIName = "NewFunction";
                    nIndex = 32;
                    break;
                case 86:   //冰冻地下
                    strUIName = "NewFunction";
                    nIndex = 33;
                    break;
                case 187:   //废弃都市
                    strUIName = "NewFunction";
                    nIndex = 34;
                    break;
                case 76 :  // pvp 
                    strUIName = "NewFunction";
                    nIndex = 35;
                    break;
                case 167:  // 科技园 
                    strUIName = "PlayerFrame";
                    nIndex = 5;
                    break;
                case 397:   // 第一次剧情副本过关后领取奖励
                    strUIName = "NewFunction";
                    nIndex = 25;
                    break;
                case 310:   // 魂器阵法引导
                    strUIName = "PlayerFrame";
                    nIndex = 4;
                    break;
                case 398:   // 翅膀引导
                    strUIName = "PlayerFrame";
                    nIndex = 19;
                    break;
                case 168:   // 宠物升星引导
                    strUIName = "PlayerFrame";
                    nIndex = 14;
                    break;
                // end

                //case 37: // 结拜
                //    strUIName = "PlayerFrame";
                //    nIndex = 5;
                //    break;
                //case 38: // 竞技
                //    strUIName = "FunctionButton";
                //    nIndex = 2;
                //    break;
                //case 124: // 爬塔
                //    strUIName = "FunctionButton";
                //    nIndex = 8;
                //    break;
                //case 125: // 重入
                //    strUIName = "FunctionButton";
                //    nIndex = 8;
                //    break;
                //case 144: // 伪装--燕子坞
                //    strUIName = "FunctionButton";
                //    nIndex = 9;
                //    break;
                //case 157: // 历练
                //    {
                //        DailyMission rDailyMission = GameManager.gameManager.PlayerDataPool.DailyMissionData.GetDailyMissionByKind(0);
                //        if (rDailyMission.MissionID > GlobeVar.INVALID_ID)
                //        {
                //            bool bHasMission = IsHaveMission(rDailyMission.MissionID);
                //            if (bHasMission)
                //            {
                //                OpenDailyMissionUI();
                //            }
                //            else
                //            {
                //                strUIName = "FunctionButton";
                //                nIndex = 4;
                //            }
                //        }
                //    }
                //    break;
                //case 209: // 珍珑棋局
                //    strUIName = "FunctionButton";
                //    nIndex = 14;
                //    break;
                //case 210: // 聚贤庄
                //    strUIName = "FunctionButton";
                //    nIndex = 10;
                //    break;
                //case 150: // 伙伴抽取
                //    strUIName = "PlayerFrame";
                //    nIndex = 6;
                //    break;
                //case 179: // 宝石镶嵌
                //    strUIName = "PlayerFrame";
                //    nIndex = 9;
                //    break;
                //case 237: // 批量买药
                //    strUIName = "PlayerFrame";
                //    nIndex = 10;
                //    break;
            }

            if (strUIName != "" && nIndex > -1)
            {
                bRet = true;
                NewPlayerGuide.NewPlayerGuideOpt(strUIName, nIndex);
            }

            return bRet;
        }

        // 日常任务 显示对应界面
        bool OpenMissionWindow(int nMissionID)
        {
            // cabel begain
            bool bRet = true;
            if (nMissionID == 28 || nMissionID == 45 || nMissionID == 50)
            {
                UIManager.ShowUI(UIInfo.Activity/*, ShowMissionWindow, nMissionID*/);
            }
            else if (nMissionID == 37)
            {
                UIManager.ShowUI(UIInfo.MissionGame);
            }
            // cabel end
            
            else if (nMissionID == 91)
            {
                UIManager.ShowUI(UIInfo.EquipStren);
            }
            else if (nMissionID == 92 || nMissionID == 219)
            {
                UIManager.ShowUI(UIInfo.EquipStren, OpenEquipStar);
            }
            else if (nMissionID == 93)
            {
                UIManager.ShowUI(UIInfo.RoleView, OpenRoleView);
            }
            else if (nMissionID == 212)
            {
                UIManager.ShowUI(UIInfo.Belle);
            }
            else if (nMissionID == 213)
            {
                //UIManager.ShowUI(UIInfo.PartnerAndMountRoot, OpenFellow);
            }
            else
            {
                bRet = false;
            }

            return bRet;
        }

        // 失败 打开Mission界面 显示对应界面
        bool Faild_OpenMissionWindow(int nMissionID)
        {
            bool bRet = false;
            if ((nMissionID == GlobeVar.PAOSHANG_MISSIONID_H 
                || nMissionID == GlobeVar.PAOSHANG_MISSIONID_L))
            {
                bRet = true;
                UIManager.ShowUI(UIInfo.MissionLogRoot, OnOpenMissionLogUI, nMissionID);
            }
            else
            {
                bRet = false;
            }
            return bRet;
        }

        void OpenEquipStar(bool bSuccess, object param)
        {
            if (bSuccess == false)
            {
                return;
            }

            if (EquipStrengthenLogic.Instance()
                && EquipStrengthenLogic.Instance().m_TabController)
            {
                EquipStrengthenLogic.Instance().m_TabController.ChangeTab("Button2-Star");
                return;
            }
        }
        void OpenRoleView(bool bSuccess, object param)
        {
        }
        void OpenFellow(bool bSuccess, object param)
        {
//            if (PartnerFrameLogic.Instance())
//            {
//                PartnerFrameLogic.Instance().SetStartDelegate(2);
//            }
        }
        // 任务相关 打开相关界面
        void ShowMissionWindow(bool bSuccess, object param)
        {
            if (bSuccess == false)
            {
                return;
            }

            if (ActivityController.Instance() == null)
            {
                return;
            }

            int nMissionID = (int)param;

            string strTabName = "";
            switch (nMissionID)
            {
                case 85:
                case 319:
                    strTabName = "Tab6";   // 燕子坞
                    break;
                case 86:
                case 320:
                    strTabName = "Tab8";    // 燕王古墓
                    break;
                case 87:
                case 234:
                case 235:
                case 321:
                    strTabName = "Tab7";    // 珍珑棋局
                    break;
                case 88:
                case 233:
                case 322:
                    strTabName = "Tab3";    // 聚贤庄
                    break;
                case 89:
                case 323:
                    strTabName = "Tab10";   // 少室山
                    break;
                case 90:
                    strTabName = "Tab5";    // 藏经阁
                    break;
                case 94:
                    strTabName = "Tab2";    // 名人录
                    break;
                case 223:
                    strTabName = "Tab13";   // 怒海锄奸
                    break;

            }

            if (strTabName != "")
            {
                ActivityController.Instance().StrTabName = strTabName;
            }
        }

        // 有任务并且任务未失败
        public bool IsMissionNotFaild(int nMissionID)
        {
            if (IsHaveMission(nMissionID))
            {
                MissionState MState = (MissionState)GetMissionState(nMissionID);
                if (MissionState.Mission_None != MState
                    && MissionState.Mission_Failed != MState)
                {
                    return true;
                }
            }
            return false;
        }

		/// <summary>
		/// 如果在杀怪任务挂机的时候取消了挂机，这个标志也要 取消
		/// </summary>
		private void OnAutoCombatEnd ()
		{
			m_bMissionAutoCombat = false;
		}

        //add by mawenbin 
        //comment code for building begin
//        public MissionBoard.MissionBoardState GetMissionBoardState(Obj_NPC oNpc)
//        {
//            foreach (int nMissionID in oNpc.MissionList)
//            {
//                Tab_MissionBase MissionBase = TableManager.GetMissionBaseByID(nMissionID, 0);
//                if (MissionBase == null)
//                {
//                    continue;
//                }
//
//                if (false == IsHaveMission(nMissionID))
//                {
//                    continue;
//                }
//
//                byte yState = GetMissionState(nMissionID);
//                if (MissionBase.CompleteDataID == oNpc.BaseAttr.RoleBaseID)
//                {
//                    if (yState == (byte)MissionState.Mission_Accepted)
//                    {
//                        return MissionBoard.MissionBoardState.MISSION_CANCOMPLETED;
//                    }
//                    else if (yState == (byte)MissionState.Mission_Completed)
//                    {
//                        return MissionBoard.MissionBoardState.MISSION_COMPLETED;
//                    }
//                }
//                else if (MissionBase.AcceptDataID == oNpc.BaseAttr.RoleBaseID)
//                {
//                    return MissionBoard.MissionBoardState.MISSION_ACCEPTED;
//                }
//            }
//
//            return MissionBoard.MissionBoardState.MISSION_NONE;
//        }
        //comment code for building end


        bool IsNoNeedFindPath(int nMissionID)
        {
            if (nMissionID == 14 // 召唤伙伴 // nMissionID == 1 // 机车
                || nMissionID == 20 // 美人
                || nMissionID == 29 // 伙伴技能
                || nMissionID == 33 // 驱虫剂
                || nMissionID == 43 // 强化
                || nMissionID == 245 // 宝石镶嵌
                || nMissionID == 6 // 特殊采集任务
                )
            {
                return true;
            }

            return false;
        }


		public void UpdatePaoHuanMissionInfo (
			int playerLevelWhenGetMission,
			int currentNum,
			int currentMissionID,
			int checkState,
			int refreshCD,
			int currentServerCD,
			int refreshCntFree,
			int refreshCntPaid)
		{
			PaoHuanInfo.PlayerLevelWhenGetMission = playerLevelWhenGetMission;
			PaoHuanInfo.CurrentNum = currentNum;
			PaoHuanInfo.CurrentMissionID = currentMissionID;
			PaoHuanInfo.CheckState = checkState;
			PaoHuanInfo.RefreshCD = refreshCD;
			PaoHuanInfo.CurrentServerCD = currentServerCD;
			PaoHuanInfo.RefreshCntFree = refreshCntFree;
			PaoHuanInfo.RefreshCntPaid = refreshCntPaid;

			// 客户端检测比服务器检测严格1秒，防止出现客户端检测过了但服务器检测没过的事故(客户端点刷新没反应)
			PaoHuanInfo.SyncClientTime = (int)Time.realtimeSinceStartup + 1;

			if (currentNum != 1 && (currentNum - 1) % 10 == 0)
				PaoHuanInfo.AwardTipShowing = true;

			Messenger.Broadcast (MessengerConst.OnUpdatePaoHuanInfo);
		}

		/// <summary>
		/// 向服务器发送刷新跑环任务的请求
		/// </summary>
		/// <param name="paid">Paid.</param>
		public void RefreshPaoHuanMission (int paid)
		{
			if (paid == 0 && PaoHuanInfo.CurrentClientCD() > 0)
				return;
			CG_PAOHUAN_REQ_REFRESH askMission = (CG_PAOHUAN_REQ_REFRESH)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PAOHUAN_REQ_REFRESH);
			askMission.SetPaid(paid);
			askMission.SendPacket();
		}

		/// <summary>
		/// 特殊处理
		/// </summary>
		/// <param name="nMissionID">N mission I.</param>
		private bool Mission_SpecialAction(int nMissionID)
		{
			if (GameManager.gameManager.ActiveScene.IsCopyScene ())
				return false;
			if (nMissionID == 325) {
				Singleton<ObjManager>.Instance.MainPlayer.SendOpenScene (30, 1, 1);
				return true;
			} else if (nMissionID == 326) {
				Singleton<ObjManager>.Instance.MainPlayer.SendOpenScene (31, 1, 1);
				return true;
			}
			return false;
		}
		//==============================================
		private void _OnClickMissionItemToCopyStory( bool isSuccess ,object missionId) // missionId 暂时没用
		{
            ActivityController.Instance().ChangToCopyStory((int)missionId);
		}
    }
}
