/********************************************************************************
 *	文件名：	CutsceneActionCameraEffect.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionCameraEffect.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画移动摄像机ImageEffect任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionCameraEffect : CutsceneActionBase
	{
		#region Fields
//		/// <summary>
//		/// 摄像机动画ID，对应CameraRock表
//		/// </summary>
//		private int m_nCameraAnimID;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionCameraEffect()
		{

		}

		public override void Start ()
		{
			base.Start ();
			CameraManager.Instance.OpenAndCloseMotionBlur = true;
		}

		public override void Finish ()
		{
			base.Finish ();
			CameraManager.Instance.OpenAndCloseMotionBlur = false;
		}
		#endregion
	}
}
