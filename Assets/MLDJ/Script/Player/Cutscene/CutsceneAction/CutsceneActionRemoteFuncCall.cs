/********************************************************************************
 *	文件名：	CutsceneActionRemoteFuncCall.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionRemoteFuncCall.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画服务器代码调用任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionRemoteFuncCall : CutsceneActionBase
	{
		#region Fields
		private int m_nRfcID;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionRemoteFuncCall(int rfcID)
		{
			m_nRfcID = rfcID;
		}
		public override void Start ()
		{
			base.Start ();
			CutsceneManager.Instance.SendRFC(m_nRfcID);
			Finish();
		}
		#endregion
	}
}