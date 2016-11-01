/********************************************************************************
 *	文件名：	CutsceneActionCameraRock.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionCameraRock.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画移动摄像机震动任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionCameraRock : CutsceneActionBase
	{
		#region Fields
		/// <summary>
		/// 摄像机动画ID，对应CameraRock表
		/// </summary>
		private int m_nCameraAnimID;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionCameraRock(int nCameraAnimID)
		{
			m_nCameraAnimID = nCameraAnimID;
		}

		public override void Start ()
		{
			base.Start ();
			float time = CameraManager.Instance.StartRock(m_nCameraAnimID, AnimFinishCallback);
			if (time == 0)			
			{
				Finish();
			}
		}

		public override void Finish ()
		{
			base.Finish ();
			// 不会有死循环吧？
			if (CameraManager.Instance.IsRocking(m_nCameraAnimID))
			{
				CameraManager.Instance.StopRock(m_nCameraAnimID);
			}
		}

		private void AnimFinishCallback ()
		{
			base.Finish ();
		}
		#endregion
	}
}
