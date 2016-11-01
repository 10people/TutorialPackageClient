/********************************************************************************
 *	文件名：	CutsceneActionPlaySound.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionPlaySound.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画播音效任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionPlaySound : CutsceneActionBase {

		#region Fields
		/// <summary>
		/// 音效ID
		/// </summary>
		private int m_nSoundID;
		/// <summary>
		/// 声音发出的世界坐标
		/// </summary>
		private Vector3 m_SoundPos;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionPlaySound (int nSoundID, Vector3 soundPos)
		{
			m_nSoundID = nSoundID;
			m_SoundPos = soundPos;
		}
		public CutsceneActionPlaySound (int nSoundID)
		{
			m_nSoundID = nSoundID;
			m_SoundPos = Vector3.zero;
		}
		
		public override void Start ()
		{
			base.Start ();
			if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
			{
				if (m_SoundPos != Vector3.zero)
				{
					GameManager.gameManager.SoundManager.PlaySoundEffectAtPos(m_nSoundID, m_SoundPos, Singleton<ObjManager>.GetInstance().MainPlayer.Position);
				}
				else
				{
					GameManager.gameManager.SoundManager.PlaySoundEffect(m_nSoundID);
				}
			}
			Finish();
		}
		#endregion
	}
}