/********************************************************************************
 *	文件名：	CutsceneActionNewPlayerGuide.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionNewPlayerGuide.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画新手引导任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionNewPlayerGuide : CutsceneActionBase
	{
		#region Fields
		/// <summary>
		/// 新手引导编号
		/// </summary>
		private int m_nIdx;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionNewPlayerGuide(int nIdx)
		{
			m_nIdx = nIdx;
		}

		public override void Start ()
		{
			base.Start ();
            // XP教学特殊
            if (SkillBarLogic.Instance() != null)
			{
				if (m_nIdx == 1) {
					SkillBarLogic.Instance ().NewPlayerGuide (1);
					base.Finish ();
				} else if (m_nIdx == 8) {
					SkillBarLogic.Instance ().NewPlayerGuide (8);
					base.Finish ();
				} else {
					Messenger.AddListener (MessengerConst.OnNewPlayerGuideClose, OnNewPlayerGuideClose);
					SkillBarLogic.Instance ().NewPlayerGuide (m_nIdx);
				}
			}
			else
			{
				base.Finish();
			}
		}
		public override void Finish ()
		{
			base.Finish ();
			Messenger.RemoveListener(MessengerConst.OnNewPlayerGuideClose, OnNewPlayerGuideClose);
		}

		private void OnNewPlayerGuideClose()
		{
			Finish();
		}
		#endregion
	}
}