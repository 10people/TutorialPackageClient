/********************************************************************************
 *	文件名：	CutsceneActionStoryDialog.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionStoryDialog.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：显示对话界面的任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Mission;
using Games.GlobeDefine;

namespace Cutscene
{
	public class CutsceneActionStoryDialog : CutsceneActionBase
	{
		#region Fields
		/// <summary>
		/// 当前进行的剧情对话ID
		/// </summary>
		private int m_nStoryID;
		
		/// <summary>
		/// 对应的客户端表ID
		/// </summary>
		private int m_nClientStoryID;

		/// <summary>
		/// 正在播放第几句话
		/// </summary>
		private int m_nDialogID;
				
		/// <summary>
		/// 界面的显示类型
		/// </summary>
		private int m_nDialogType;
		/// <summary>
		/// 当前进行的剧情对话对应的任务ID
		/// </summary>
		private int m_nMissionID;
		
		/// <summary>
		/// Demo中需要做特殊处理的炸车Dialog = =+
		/// </summary>
		private const int m_nDemoZhaCheDialogID = 81;
		
		/// <summary>
		/// 如此不堪一击！
		/// </summary>
		private const int m_nDemoRuCiBuKanYiJi = 80;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionStoryDialog (int nStoryID)
		{
			m_nStoryID = nStoryID;
		}

		public override void Start ()
		{
			base.Start ();

			// 检测一些前置的条件

			if (m_nStoryID < 0) base.Finish();
			Tab_StoryTable storyTable = TableManager.GetStoryTableByID(m_nStoryID, 0);
			if (storyTable == null) 
			{
				Module.Log.LogModule.ErrorLog("Can not find storyTable {0}", m_nStoryID);
				base.Finish();
				return;
			}
			
			int storyMissionID = storyTable.MissionID;
			if (storyMissionID > -1)
			{
				// 任务状态判断
				MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(storyMissionID);
				if (MissionState.Mission_Accepted != misState)
				{
					Module.Log.LogModule.ErrorLog("MissionState misState is failed {0}", m_nStoryID);

					StoryDialogLogic.ShowStory(storyTable.ClientStoryID, 0, StoryDialogOverCallback, 0);
					base.Finish();

					return;
				}
			}
			
			// NPC距离判断
			Tab_ClientStoryTable storyLine = TableManager.GetClientStoryTableByID(storyTable.ClientStoryID, 0);
			if (storyLine == null) 
			{
				base.Finish();
				return;
			}
			
			
//			// 全填-1的时候不检测距离
//			if (storyLine.TargetPosX > -1 && storyLine.TargetPosZ > -1 && storyLine.TargetPosRadius > -1)
//			{
//				Vector3 userPos = new Vector3(0, 0, 0);
//				if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
//				{
//					userPos = Singleton<ObjManager>.GetInstance().MainPlayer.Position;
//				}
//				else
//				{
//					userPos = GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterScenePos;
//				}
//				
//				Vector3 targetPos = new Vector3(storyLine.TargetPosX, 0, storyLine.TargetPosZ);
//				targetPos.y = userPos.y;
//				float dis = Mathf.Abs(Vector3.Distance(userPos, targetPos));
//				if (dis > storyLine.TargetPosRadius)
//				{
//					base.Finish();
//				}
//			}
			// 所有前置判断结束，真的可以进入剧情了
			m_nMissionID = storyMissionID;
			m_nClientStoryID = storyTable.ClientStoryID;
			m_nDialogType = storyLine.DialogType;
			m_nDialogID = 0;

			// 大对话框
			if (m_nDialogType == 0)
			{
				// 判断是否进入ModelStory模式
				Singleton<ObjManager>.Instance.MainPlayer.IsInModelStory = IsNeedSilentMode(m_nStoryID);
				#if BOBJOYSTICK
				JoyControllerLogic.storyDialogOn = true;
				#endif
			}

			// 小对话框
			else if (m_nDialogType == 1)
			{
			}

			StoryDialogLogic.ShowStory(m_nClientStoryID, 0, StoryDialogOverCallback, m_nDialogType);
		}

		public override void Finish ()
		{
			base.Finish ();
			// 大对话
			if (m_nDialogType == 0)
			{
//				UIManager.ShowAllUIExceptStory();
			}
			else if (m_nDialogType == 1)
			{
				//UIManager.ShowUI(UIInfo.ChatFrameRoot);
			}
			UIManager.CloseUI (UIInfo.StoryDialogRoot);
			
			if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
				Singleton<ObjManager>.GetInstance().MainPlayer.OnPlayStoryOver(m_nStoryID);
			#if BOBJOYSTICK
			JoyControllerLogic.storyDialogOn = false;
			#endif
			
			// 对话完成 设置剧情任务 状态
			if (m_nMissionID > -1)
			{
				bool nRet = GameManager.gameManager.MissionManager.SetStoryMissionState(m_nMissionID, 2);
				if (nRet)
				{
					if ((int)MISSIONTYPE.MISSION_MAIN == GameManager.gameManager.MissionManager.GetMissionType(m_nMissionID)
					    || (int)MISSIONTYPE.MISSION_BRANCH == GameManager.gameManager.MissionManager.GetMissionType(m_nMissionID))
					{
						MissionInfoController.ShowMissionDialogUI(m_nMissionID);
					}
				}
			}
			int nClosedStoryID = m_nStoryID;
			
			SendPlayStoryOverPacket(nClosedStoryID);
			
//			if (m_nDialogType == 0)
//			{
//				if (Singleton<ObjManager>.Instance.MainPlayer != null)
//				{
//					Singleton<ObjManager>.Instance.MainPlayer.IsNoMove = false;
//				}
//			}
			
			m_nStoryID = -1;
			m_nMissionID = -1;
			m_nDialogType = -1;
			m_nDialogID = -1;
		}

		/// <summary>
		/// 一句话说完的回调
		/// </summary>
		private void StoryDialogOverCallback(bool noMoreNext)
		{
			ThrowCustomEvent(m_nDialogID++);
			if (!noMoreNext)
			{
				StoryDialogLogic.ShowStory(m_nClientStoryID, m_nDialogID, StoryDialogOverCallback, m_nDialogType);
			}
			else
			{
				Finish ();
			}
		}

		/// <summary>
		/// 向服务器发送剧情播放完毕的网络包
		/// </summary>
		private void SendPlayStoryOverPacket (int nClosedStoryID)
		{
			CG_PLAYSTORY_OVER packet = (CG_PLAYSTORY_OVER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PLAYSTORY_OVER);
			packet.SetStoryID(nClosedStoryID);
			packet.SendPacket();
		}

		//是否进入安静模式，即只能看电视，不能点击
		public static bool IsNeedSilentMode(int storyid)
		{
			if (GlobeVar.MARRY_PARADE_STORY == storyid)// ||
				//		    GlobeVar.DEMO_STORY1 == storyid ||
				//		    GlobeVar.DEMO_STORY2 == storyid ||
				//		    GlobeVar.DEMO_STORY3 == storyid ||
				//		    GlobeVar.DEMO_STORY4 == storyid ||
				//		    GlobeVar.DEMO_STORY5 == storyid ||
				//		    GlobeVar.DEMO_STORY6 == storyid ||
				//		    GlobeVar.DEMO_STORY7 == storyid)
			{
				return true;
			}
			return false;
		}
		#endregion
	}
}
