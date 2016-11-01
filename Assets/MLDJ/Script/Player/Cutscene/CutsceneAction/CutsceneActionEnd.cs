/********************************************************************************
 *	文件名：	CutsceneActionEnd.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionEnd.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画结束特殊任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionEnd : CutsceneActionBase
	{
		#region Fields
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public override void Start ()
		{
			base.Start ();
			Finish();
		}

		public override void Finish ()
		{
			base.Finish ();
			Messenger.Broadcast(MessengerConst.OnCutsceneEnd);
		}
		#endregion
	}
}