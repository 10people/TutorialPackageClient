/********************************************************************************
 *	文件名：	CutsceneActionScreenFade.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionScreenFade.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画渐变屏幕颜色任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionScreenFade : CutsceneActionBase {
		#region Fields
		/// <summary>
		/// 屏幕渐变颜色 todo
		/// </summary>
		private Color m_Color;
		/// <summary>
		/// 渐变时长
		/// </summary>
		private float m_Duration;
		/// <summary>
		/// 渐变开始Alpha值
		/// </summary>
		private float m_AlphaFrom;
		/// <summary>
		/// 渐变结束Alpha值
		/// </summary>
		private float m_AlphaTo;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
        public CutsceneActionScreenFade(Color color, float duration, float from, float to)
		{
			m_Color = color;
			m_Duration = duration;
			m_AlphaFrom = from;
			m_AlphaTo = to;
		}

		public override void Start ()
		{
			base.Start ();
			if (m_Duration <= 0)
			{
				Finish();
			}

			BackCamerControll.Instance().InitBlackScreenTween(m_Color, m_Duration, m_AlphaFrom, m_AlphaTo, 0);
            BackCamerControll.Instance().PlayBlackScreenTween(FinishFadeCallback);
            BackCamerControll.Instance().SetAutoClose(false);

		}

		public override void Finish ()
		{
			base.Finish ();
		}

		private void FinishFadeCallback ()
		{
			Finish ();
		}
		#endregion
	}
}