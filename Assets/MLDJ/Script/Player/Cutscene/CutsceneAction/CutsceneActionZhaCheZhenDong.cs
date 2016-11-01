/********************************************************************************
 *	文件名：	CutsceneActionZhaCheZhenDong.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionZhaCheZhenDong.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画炸车震动任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionZhaCheZhenDong : CutsceneActionBase
	{
		#region Fields
		/// <summary>
		/// 摄像机动画ID，对应CameraRock表
		/// </summary>
		private int m_nCameraRockID;

		private float m_fTimer;

		private float m_fRockInterval = 1f;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionZhaCheZhenDong(int nCameraAnimID, float fInterval)
		{
			m_nCameraRockID = nCameraAnimID;
			m_fRockInterval = fInterval;
		}

		public override void Start ()
		{
			base.Start ();
			m_fTimer = m_fRockInterval;
			float time = CameraManager.Instance.StartRock(m_nCameraRockID, null);
			if (time == 0)			
			{
				Finish();
			}
		}

		public override void Update (float deltaTime)
		{
			base.Update (deltaTime);
			if (m_fTimer < 0)
			{
				m_fTimer = m_fRockInterval;
				CameraManager.Instance.StartRock(m_nCameraRockID, null);
			}
			m_fTimer -= deltaTime;
		}

		public override void Finish ()
		{
			base.Finish ();
			// 不会有死循环吧？
			if (CameraManager.Instance.IsRocking(m_nCameraRockID))
			{
				CameraManager.Instance.StopRock(m_nCameraRockID);
			}
		}

//		private void AnimFinishCallback ()
//		{
//			base.Finish ();
//		}
		#endregion
	}
}
