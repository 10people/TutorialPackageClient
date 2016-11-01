/********************************************************************************
 *	文件名：	CutsceneActionResetDefaultCameraParam.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionResetDefaultCameraParam.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画摄像机回复默认参数（pitch、yaw、distance）任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;

namespace Cutscene
{
	public class CutsceneActionResetDefaultCameraParam : CutsceneActionBase
	{
		#region Fields
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public override void Start ()
		{
			base.Start ();
			CameraManager.Instance.ResetThirdPersonCamera();
			Finish();
		}
		#endregion
	}
}
