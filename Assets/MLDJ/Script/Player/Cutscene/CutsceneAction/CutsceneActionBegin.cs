/********************************************************************************
 *	文件名：	CutsceneActionBegin.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionBegin.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画开始特殊任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionBegin : CutsceneActionBase
	{
		#region Fields
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public override void Start ()
		{
			base.Start ();
			Messenger.Broadcast(MessengerConst.OnCutsceneBegin);
			Finish();
		}
		#endregion
	}
}