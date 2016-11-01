/********************************************************************************
 *	文件名：	JuQingCopySceneData.cs
 *	全路径：	\Script\Player\UserData\JuQingCopySceneData.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-07-10
 *
 *	功能说明：剧情副本相关数据
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections.Generic;
using Games.GlobeDefine;
using Module.Log;
using GCGame.Table;

namespace Games.JuQingCopySceneData
{
//    public struct DailyMission
//    {
//        private int m_nMissionID; // 日常任务ID
//        public int MissionID
//        {
//            get { return m_nMissionID; }
//            set { m_nMissionID = value; }
//        }
//        private byte m_yQuality;  // 品质
//        public byte Quality
//        {
//            get { return m_yQuality; }
//            set { m_yQuality = value; }
//        }
//
//        public void CleanUp()
//        {
//            m_nMissionID = GlobeVar.INVALID_ID;
//            m_yQuality = 0;
//        }
//    }

	public struct StoryCopySceneScoreInfo
	{
		public int m_nID;
		public bool m_bResult;
		public bool m_bFirstStarGet;
        public bool m_bFirstBonusGet;
		public bool m_bSecondStarGet;
        public bool m_bSecondBonusGet;
		public bool m_bThirdStarGet;
        public bool m_bThirdBonusGet;
	}


	public struct StoryCopySceneLevelInfo
	{
        private const int STORYCOPYSCENE_BIT_ONESTAR = 1;
        private const int STORYCOPYSCENE_BIT_TWOSTAR = 2;
        private const int STORYCOPYSCENE_BIT_THREESTAR = 4;

		public int m_nID;
		// 上次获得星数
		public int m_nPreStarCnt;
		// 已获得星数
		public int m_nStarCnt;
		// 今日剩余次数
		public int m_nDayCount;

        public int GetStarCount()
        {
            int nCount = 0;
            if (IsGetStar1())
            {
                ++nCount;
            }
            if (IsGetStar2())
            {
                ++nCount;
            }
            if (IsGetStar3())
            {
                ++nCount;
            }
            return nCount;
        }

        public bool IsGetStar1()
        {
            return 0 != (m_nStarCnt & STORYCOPYSCENE_BIT_ONESTAR);
        }

        public bool IsGetStar2()
        {
            return 0 != (m_nStarCnt & STORYCOPYSCENE_BIT_TWOSTAR);
        }

        public bool IsGetStar3()
        {
            return 0 != (m_nStarCnt & STORYCOPYSCENE_BIT_THREESTAR);
        }

		public bool IsPreGetStar1()
		{
			return 0 != (m_nPreStarCnt & STORYCOPYSCENE_BIT_ONESTAR);
		}
		
		public bool IsPreGetStar2()
		{
			return 0 != (m_nPreStarCnt & STORYCOPYSCENE_BIT_TWOSTAR);
		}
		
		public bool IsPreGetStar3()
		{
			return 0 != (m_nPreStarCnt & STORYCOPYSCENE_BIT_THREESTAR);
		}
	}

	public struct StoryCopySceneChapterInfo
	{
		public int m_nID;
		// 每章星星奖励领取情况 4个 0未领取 1已领取
		public List<bool> m_bAwardGot;
        // 每关之间宝箱领取情况 3个 0未领取 1已领取
        public List<bool> m_bLevelAwardGot;
		// 章节包含的关卡
		public List<int> _ContaindLevelList;
	}

    public class JuQingCopySceneData
    {
        //剧情副本扫荡令物品ID
        public const int STORYCOPYSCENE_SAODANGLING_ITEMID = 73025;

		// 每章关卡数
		public const int ChapterLevelNum = 4;
        public static int[] ChapterAwardStarReq = { 3, 6, 9, 12 };

		private StoryCopySceneScoreInfo m_LastScore;

		private Dictionary<int, StoryCopySceneLevelInfo> m_LevelInfoDic = new Dictionary<int, StoryCopySceneLevelInfo>();
		private Dictionary<int, StoryCopySceneChapterInfo> m_ChapterInfoDic = new Dictionary<int, StoryCopySceneChapterInfo>();
		public JuQingCopySceneData()
        {
			m_LevelInfoDic.Clear();
			m_ChapterInfoDic.Clear();

			var chapterDic = TableManager.GetStoryCopySceneChapter();
			var levelDic = TableManager.GetStoryCopyScene ();
			foreach (var chapterList in chapterDic) {
				var chapterTable = chapterList.Value [0];
				if (chapterTable != null) {
					StoryCopySceneChapterInfo info = new StoryCopySceneChapterInfo ();
					info.m_nID = chapterTable.Id;
                    info.m_bAwardGot = new List<bool>();
                    info.m_bLevelAwardGot = new List<bool>();
					info._ContaindLevelList = new List<int> ();
					foreach (var levelList in levelDic) {
						var levelTable = levelList.Value [0];
						if (levelTable != null && levelTable.BelongToChapterID == chapterTable.Id) {
							info._ContaindLevelList.Add (levelTable.Id);
						}
					}
					m_ChapterInfoDic[info.m_nID] = info;
				}
			}

			Messenger.AddListener(MessengerConst.OnEnterSceneFinish, OnEnterSceneFinish);
        }

        public void CleanUp()
        {
			Messenger.RemoveListener(MessengerConst.OnEnterSceneFinish, OnEnterSceneFinish);
			m_LevelInfoDic.Clear();
			m_ChapterInfoDic.Clear();
        }

		/// <summary>
		/// 得到章节信息列表
		/// </summary>
		/// <returns>The chapter info list.</returns>
		public List<StoryCopySceneChapterInfo> GetChapterInfoList ()
		{
			List<StoryCopySceneChapterInfo> ret = new List<StoryCopySceneChapterInfo>();
			var itor = m_ChapterInfoDic.GetEnumerator();
			while(itor.MoveNext())
			{
				ret.Add(itor.Current.Value);
			}
			return ret;
		}

		public int GetChapterTotalStar(int nChapterID)
		{
			int nTotalStar = 0;
			StoryCopySceneChapterInfo chapter;
			if (m_ChapterInfoDic.TryGetValue(nChapterID, out chapter))
			{
				for (int i = 0; i < ChapterLevelNum && i < chapter._ContaindLevelList.Count; i++)
				{
					StoryCopySceneLevelInfo info;
					if (m_LevelInfoDic.TryGetValue(chapter._ContaindLevelList[i], out info))
					{
						nTotalStar += info.GetStarCount();
					}
				}
			}
			return nTotalStar;
		}

		public bool IsHaveChapterUngotAward(int nChapterID)
		{
			int nTotalStar = GetChapterTotalStar(nChapterID);
			StoryCopySceneChapterInfo chapter;
			if (m_ChapterInfoDic.TryGetValue(nChapterID, out chapter))
			{
				for(int i = 0 ; i < chapter.m_bAwardGot.Count ; ++i )
				{
					if( !chapter.m_bAwardGot[i] )
					{
						if (nTotalStar >= ChapterAwardStarReq[i])
						{
							return true;
						}
					}
				}
			}
			return false;
		}

		public bool IsHaveUngotAward()
		{
			var chapterInfoList = GetChapterInfoList ();
			for(int i = 0;i<chapterInfoList.Count;i++)
			{
				StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[i];
				int nChapterID = currentChapterInfo.m_nID;
				if( IsHaveChapterUngotAward(nChapterID) )
				{
					return true;
				}
			}
			return false;
		}

		public int GetLastChapterID()
		{
			int nBakSelectChapter = 1;
			var chapterInfoList = GetChapterInfoList ();
			for(int i = 0;i<chapterInfoList.Count;i++)
			{
				int nPreChapterIndex = 0;
				if(i!=0)
				{
					nPreChapterIndex = i-1;
				}

				StoryCopySceneChapterInfo preChapterInfo = chapterInfoList[nPreChapterIndex];
				StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[i];

				for (int j = 0; j < 4; j++) 
				{
					int levelID = currentChapterInfo._ContaindLevelList [j];
					bool bLocked = IsStoryCopySceneLocked(levelID);
					if( bLocked && j == 0 )
					{
						return preChapterInfo.m_nID;
					}
					if( bLocked && j != 0 )
					{
						return currentChapterInfo.m_nID;
					}

					// 如果有没过关的，显示没过关的章节
					if(!IsPass(levelID))
					{
						nBakSelectChapter = currentChapterInfo.m_nID;
					}
				}
			}

			return nBakSelectChapter;
		}

		public bool IsPass(int nLevelID)
		{
			StoryCopySceneLevelInfo info;
			if (m_LevelInfoDic.TryGetValue(nLevelID, out info))
			{
				return info.IsGetStar1();
			}
			
			return false;
		}

		/// <summary>
		/// 根据章节ID得到所有关卡信息
		/// </summary>
		/// <returns>The levels by chapter I.</returns>
		/// <param name="nChapterID">N chapter I.</param>
		public List<StoryCopySceneLevelInfo> GetLevelsByChapterID (int nChapterID)
		{
			StoryCopySceneChapterInfo chapter;
			if (m_ChapterInfoDic.TryGetValue(nChapterID, out chapter))
			{
				List<StoryCopySceneLevelInfo> ret = new List<StoryCopySceneLevelInfo>();
				for (int i = 0; i < ChapterLevelNum && i < chapter._ContaindLevelList.Count; i++)
				{
					StoryCopySceneLevelInfo info;
					if (m_LevelInfoDic.TryGetValue(chapter._ContaindLevelList[i], out info))
					{
						ret.Add(info);
					}
				}
				return ret;
			}
			else
			{
				LogModule.ErrorLog("JuQingCopySceneData::GetLevelsByChapterID, StoryCopyScene Chapter {0} not exist", nChapterID);
				return null;
			}
		}

		/// <summary>
		/// 根据StorySCopySceneID得到关卡信息
		/// </summary>
		/// <returns>The level by level I.</returns>
		/// <param name="nStoryCopySceneID">N story copy scene I.</param>
		public StoryCopySceneLevelInfo GetLevelByLevelID (int nStoryCopySceneID)
		{
			if (m_LevelInfoDic.ContainsKey(nStoryCopySceneID))
			{
				return m_LevelInfoDic[nStoryCopySceneID];
			}
			return new StoryCopySceneLevelInfo();
		}

		/// <summary>
		/// 某关是否未解锁
		/// </summary>
		/// <returns><c>true</c> if this instance is story copy scene locked the specified nStoryCopySceneID; otherwise, <c>false</c>.</returns>
		/// <param name="nStoryCopySceneID">N story copy scene I.</param>
		public bool IsStoryCopySceneLocked (int nStoryCopySceneID)
		{
			var line = TableManager.GetStoryCopySceneByID(nStoryCopySceneID, 0);
			if (line != null)
			{
				int missionID = line.PreMission;
                if (GlobeVar.INVALID_ID != missionID)
                {
                    return !GameManager.gameManager.MissionManager.IsMissionHaveDone(missionID);
                }
                else
                {
                    int nLevel = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_JUQINGFUBEN_LEVEL);
                    return nStoryCopySceneID > (nLevel + 1);
                }
			}
			else
			{
				LogModule.ErrorLog("StoryCopyScene can not find {0}", nStoryCopySceneID);
				return true;
			}
		}

		public void SetScore(int nStoryCopySceneID, bool bResult, bool bCondition1, bool bCondition2, bool bCondition3)
		{
			m_LastScore.m_nID = nStoryCopySceneID;
			m_LastScore.m_bResult = bResult;
			m_LastScore.m_bFirstStarGet = bCondition1;
            m_LastScore.m_bFirstBonusGet = !GetLevelByLevelID(nStoryCopySceneID).IsGetStar1() && bCondition1;
			m_LastScore.m_bSecondStarGet = bCondition2;
            m_LastScore.m_bSecondBonusGet = !GetLevelByLevelID(nStoryCopySceneID).IsGetStar2() && bCondition2;
			m_LastScore.m_bThirdStarGet = bCondition3;
            m_LastScore.m_bThirdBonusGet = !GetLevelByLevelID(nStoryCopySceneID).IsGetStar3() && bCondition3;

            if (BackCamerControll.Instance() != null)
            {
				if(bResult)
					BackCamerControll.Instance().PlaySceneEffect(475);
            }
            GameManager.gameManager.SoundManager.PlaySoundEffect(249);

            UIManager.ShowUI(UIInfo.StoryCopySceneResultRoot, null, null);
		}

		public StoryCopySceneScoreInfo GetLastScore ()
		{
			return m_LastScore;
		}

		/// <summary>
		/// 得到并清理上次结果
		/// </summary>
		/// <returns>The and clear last score.</returns>
		public StoryCopySceneScoreInfo GetAndClearLastScore ()
		{
//			StoryCopySceneScoreInfo ret = m_LastScore;
			m_LastScore.m_nID = -1;
			return m_LastScore;
		}

		public bool IsCanTiaozhan(int nStoryCopySceneID)
		{
			Tab_StoryCopyScene tabStoryCopyScene = TableManager.GetStoryCopySceneByID(nStoryCopySceneID, 0);
			if (null == tabStoryCopyScene)
			{
				return false;
			}
			
			int nTiaozhanDayCount = GetLevelByLevelID(0).m_nDayCount;
			//int nRemainDayCount = tabStoryCopyScene.TimesPerDay - nTiaozhanDayCount;
            int nRemainDayCount = nTiaozhanDayCount;
			int nMission = tabStoryCopyScene.CheckMission;
			bool bHaveMission = GameManager.gameManager.MissionManager.IsHaveMission(nMission);
			if (0 >= nRemainDayCount && !bHaveMission )
			{
				return false;
			}

			return true;
		}

		public bool IsCanSweep(int nStoryCopySceneID)
		{
			Tab_StoryCopyScene tabStoryCopyScene = TableManager.GetStoryCopySceneByID(nStoryCopySceneID, 0);
			if (null == tabStoryCopyScene)
			{
				return false;
			}

			bool bEnable = true;

			// 是否三星
			if (!GetLevelByLevelID(nStoryCopySceneID).IsGetStar1())
			{
				bEnable = false;
			}
			if (!GetLevelByLevelID(nStoryCopySceneID).IsGetStar2())
			{
				bEnable = false;
			}
			if (!GetLevelByLevelID(nStoryCopySceneID).IsGetStar3())
			{
				bEnable = false;
			}

			// 是否有扫荡令
//			if (null != GameManager.gameManager.PlayerDataPool.BackPack)
//			{
//				if (0 >= GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(JuQingCopySceneData.STORYCOPYSCENE_SAODANGLING_ITEMID))
//				{
//					bEnable = false;
//				}
//			}

			// 是否能挑战
			if( !IsCanTiaozhan(nStoryCopySceneID) )
			{
				bEnable = false;
			}

			return bEnable;
		}

		/// <summary>
		/// 请求章节奖励
		/// </summary>
		/// <param name="nChapterID"></param>
		/// <param name="nAwardID"></param>
		public void ReqChapterAward (int nChapterID, int nAwardIndex)
		{
			CG_REQ_STORYCOPYSCENE_CHAPTERAWARD pack = (CG_REQ_STORYCOPYSCENE_CHAPTERAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_STORYCOPYSCENE_CHAPTERAWARD);
			pack.SetChapterID(nChapterID);
            pack.SetAwardIndex(nAwardIndex);
			pack.SendPacket();
		}

        public void ReqChapterLevelAward(int nChapterID, int nAwardIndex)
        {
            CG_REQ_STORYCOPYSCENE_CHAPTERLEVELAWARD pack = (CG_REQ_STORYCOPYSCENE_CHAPTERLEVELAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_STORYCOPYSCENE_CHAPTERLEVELAWARD);
            pack.SetChapterID(nChapterID);
            pack.SetAwardIndex(nAwardIndex);
            pack.SendPacket();
        }

		/// <summary>
		/// 请求进入剧情副本
		/// </summary>
		/// <param name="nStoryCopySceneID">N story copy scene I.</param>
		public void ReqOpenStoryCopyScene (int nStoryCopySceneID)
		{
			CG_OPEN_STORYCOPYSCENE pack = (CG_OPEN_STORYCOPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_OPEN_STORYCOPYSCENE);
			pack.SetStoryCopySceneID(nStoryCopySceneID);
			pack.SendPacket();
		}

        /// <summary>
        /// 请求扫荡剧情副本
        /// </summary>
        /// <param name="nStoryCopySceneID">N story copy scene I.</param>
		public void ReqSweepStoryCopyScene(int nStoryCopySceneID,int nReqSweepCount)
        {
            CG_ASK_STORYCOPYSCENE_SWEEP pack = (CG_ASK_STORYCOPYSCENE_SWEEP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_STORYCOPYSCENE_SWEEP);
            pack.SetNStoryCopySceneID(nStoryCopySceneID);
			pack.SetNCount(nReqSweepCount);
            pack.SendPacket();
        }

		public void HandlePacket(GC_SYNC_STORYCOPYSCENEAWARDINFO packet)
		{
			for (int i = 0; i < packet.nStoryCopySceneChapterIDCount; i++)
			{
				StoryCopySceneChapterInfo info;
				info.m_nID = packet.GetNStoryCopySceneChapterID(i);
				if(info.m_nID<=0)
				{
					continue;
				}

                info.m_bAwardGot = new List<bool>();
                for (int j = i * ChapterLevelNum; j < (i + 1) * ChapterLevelNum && j < packet.nAwardGotCount; j++)
                {
                    info.m_bAwardGot.Add(packet.nAwardGotList[j] == 1);
                }

                info.m_bLevelAwardGot = new List<bool>();
                for (int j = i * (ChapterLevelNum - 1); j < (i + 1) * (ChapterLevelNum - 1) && j < packet.LevelAwardGotCount; j++)
                {
                    info.m_bLevelAwardGot.Add(packet.LevelAwardGotList[j] == 1);
                }

				info._ContaindLevelList = new List<int>();
				var storyCopySceneDic = TableManager.GetStoryCopyScene();
				foreach (var pair in storyCopySceneDic)
				{
					if (pair.Value != null && pair.Value.Count != 0 && pair.Value[0].BelongToChapterID == info.m_nID)
					{
						info._ContaindLevelList.Add(pair.Value[0].Id);
					}
				}
				m_ChapterInfoDic[info.m_nID] = info;
			}
			// 通知界面
			Messenger.Broadcast(MessengerConst.OnUpdateJuQingCopySceneChapterInfo);
		}
		public void HandlePacket(GC_SYNC_STORYCOPYSCENEINFO packet)
		{
			for (int i = 0; i < packet.nStoryCopySceneIDCount; i++)
			{
				StoryCopySceneLevelInfo info;
				// id
				info.m_nID = packet.GetNStoryCopySceneID(i);

				// 上次星级
				StoryCopySceneLevelInfo infoPre;
				if (m_LevelInfoDic.TryGetValue(info.m_nID, out infoPre))
				{
					info.m_nPreStarCnt = infoPre.m_nStarCnt;
				}
				else
				{
					info.m_nPreStarCnt = 0;
				}

				// 星级
				info.m_nStarCnt = packet.GetNStartGot(i);
                if (0 > info.m_nStarCnt)
                {
                    info.m_nStarCnt = 0;
                }
                
				// 挑战次数
				info.m_nDayCount = packet.GetNDayCount(i);

				m_LevelInfoDic[info.m_nID] = info;
			}
			// 通知界面
			Messenger.Broadcast(MessengerConst.OnUpdateJuQingCopySceneLevelInfo);
            Messenger.Broadcast(MessengerConst.OnUpdateStoryCopySceneLogicInfo );
		}
        public void HandlePacket(GC_RET_STORYCOPYSCENE_CHAPTERAWARD packet)
        {
            if (false == m_ChapterInfoDic.ContainsKey(packet.ChapterId))
            {
                return;
            }

            if (packet.AwardIndex < 0 || packet.AwardIndex >= m_ChapterInfoDic[packet.ChapterId].m_bAwardGot.Count)
            {
                return;
            }

            if (packet.Result != 1)
            {
                return;
            }

            m_ChapterInfoDic[packet.ChapterId].m_bAwardGot[packet.AwardIndex] = true;

            Messenger.Broadcast(MessengerConst.OnUpdateJuQingCopySceneChapterInfo);
        }

        public void HandlePacket(GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD packet)
        {
            if (false == m_ChapterInfoDic.ContainsKey(packet.ChapterId))
            {
                return;
            }

            if (packet.AwardIndex < 0 || packet.AwardIndex >= m_ChapterInfoDic[packet.ChapterId].m_bLevelAwardGot.Count)
            {
                return;
            }

            if (packet.Result != 1)
            {
                return;
            }

            m_ChapterInfoDic[packet.ChapterId].m_bLevelAwardGot[packet.AwardIndex] = true;

            Messenger.Broadcast(MessengerConst.OnUpdateJuQingCopySceneChapterInfo);
        }

		/// <summary>
		/// 因为需要从副本里出来后打开副本主界面，所以需要在这个消息响应函数里添加打开界面逻辑
		/// </summary>
		private void OnEnterSceneFinish ()
		{
//			Tab_SceneClass lastSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.LastRunningScene, 0);
//			if (lastSceneClass != null) 
//			{
//				if (lastSceneClass.Type == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_STORYCOPYSCENE &&
//				    !GameManager.gameManager.ActiveScene.IsCopyScene())
//				{
//					UIManager.ShowUI(UIInfo.Activity);
//				}
//			}
			// 如果进入了剧情副本，则创建相应的触发器和动态阻挡
			if (GameManager.gameManager.ActiveScene.IsStoryCopyScene())
			{
				Tab_SceneClass scLine = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
				if (scLine != null)
				{
					Tab_StoryCopyScene scsLine = TableManager.GetStoryCopySceneByID(scLine.CopySceneID, 0);
					if (scsLine != null)
					{
						// 阻挡
						string dynamicObstacleStr = scsLine.ObstaclesID;
						string[] dynamicObstacles = dynamicObstacleStr.Split('_');
						foreach (string s in dynamicObstacles)
						{
							int id = -1;
							if (int.TryParse(s, out id))
							{
								Tab_DynamicObstacle doLine = TableManager.GetDynamicObstacleByID(id, 0);
								if (doLine != null)
								{
									DynamicObstacle.CreateObstacle(id);
								}
								else
								{
									LogModule.ErrorLog("Cant find dynamicObstacle {0}", id);
								}
							}
							else
							{
								LogModule.ErrorLog("Cant read dynamicObstacle id from {0} in StoryCopyScene {1}", dynamicObstacleStr, scLine.CopySceneID);
							}
						}

						// 改为服务器给客户端发包创建
//						// 触发器
//						Tab_StoryCopySceneFlow scsfLine = TableManager.GetStoryCopySceneFlowByID(scLine.CopySceneID, 0);
//						if (scsfLine != null)
//						{
//							int triggerCnt = scsfLine.getTriggerCount();
//							for (int i = 0; i < triggerCnt; i++)
//							{
//								int triggerId = scsfLine.GetTriggerbyIndex(i);
//								if (triggerId != -1)
//								{
//									if (!CabalTrigger.CreateTrigger(triggerId))
//									{
//										LogModule.ErrorLog("Create trigger failed when enter storyCopyScene {0}", scLine.CopySceneID);
//									}
//								}
//							}
//						}
//						else
//						{
//							LogModule.ErrorLog("Cant find StoryCopySceneFlow {0}", scLine.CopySceneID);
//						}
					}
					else
					{
						LogModule.ErrorLog("Cant find StoryCopyScene {0}", scLine.CopySceneID);
					}
				}


			}
		}
    }

}
