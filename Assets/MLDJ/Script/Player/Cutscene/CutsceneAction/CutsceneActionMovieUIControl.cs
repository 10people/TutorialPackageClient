/********************************************************************************
 *	文件名：	CutsceneActionMovieUIControl.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionMovieUIControl.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：控制界面与电影黑边的任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Mission;
using Games.GlobeDefine;

namespace Cutscene
{
	public class CutsceneActionMovieUIControl : CutsceneActionBase
	{
		#region Fields

		#endregion
		
		#region Properties
		#endregion
		
		#region Methods

		public override void Start ()
		{
			base.Start ();
			ProcessInput.IsProcessInput = false;

            //UIManager.HideAllUIExceptStory();
            //UIManager.ShowUI(UIInfo.StoryDialogRoot, OnUIOpen, null);

//			// 判断是否进入ModelStory模式
//			Singleton<ObjManager>.Instance.MainPlayer.IsInModelStory = IsNeedSilentMode(m_nStoryID);

			// 如果正在键盘输入 隐藏键盘
			if (ChatInfoLogic.Instance() != null)
			{
				ChatInfoLogic.Instance().HideKeyboard();
			}
			if (ProcessInput.Instance() != null)
			{
				ProcessInput.Instance().ReleaseTouch();
                ProcessInput.Instance().ResetStickState();
			}
			if (JoyStickLogic.Instance() != null)
			{
				JoyStickLogic.Instance().ReleaseJoyStick();
			}
			
			if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
			{
				// 这儿进行一些特殊的处理，可能Cabal里用不到
				Singleton<ObjManager>.Instance.MainPlayer.StopMove();
				Singleton<ObjManager>.Instance.MainPlayer.IsNoMove = true;
			}

            UIManager.HideAllUIExceptStory();
//            UIManager.ShowUI(UIInfo.StoryDialogRoot, OnUIOpen, null);
			UIManager.ShowUI(UIInfo.MovieUI, OnUIOpen, null);

			Messenger.Broadcast(MessengerConst.OnCutsceneMovieBegin);
		}
		
		public override void Finish ()
		{
			base.Finish ();
			UIManager.ShowAllUIExceptStory();

			if (MovieUI.Instance () != null)
			{
				MovieUI.Instance().HideMovieUI();
			}

			if (Singleton<ObjManager>.Instance.MainPlayer != null)
			{
				Singleton<ObjManager>.Instance.MainPlayer.IsNoMove = false;
			}

			ProcessInput.IsProcessInput = true;
		}
		
		private void OnUIOpen (bool bSuccess, object para)
		{
			if (!bSuccess)
				return;
			if (MovieUI.Instance() != null)
				MovieUI.Instance().ShowMovieUI();
		}

		#endregion
	}
}
