/********************************************************************************
 *	文件名：	CutsceneActionPlayEffect.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionPlayEffect.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画播特效Duang任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneActionPlayEffect : CutsceneActionBase 
	{
		#region Fields
		/// <summary>
		/// 要播放的Effect的ID，在Effect表里
		/// </summary>
		private int m_nEffectID;

		/// <summary>
		/// 特效播放的世界坐标
		/// </summary>
		private Vector3 m_EffectPos;
		/// <summary>
		/// 特效物体引用
		/// </summary>
		private GameObject m_EffectObj;
		/// <summary>
		/// 特效存在时间
		/// </summary>
		private float m_fTime;
		private float m_fTimer;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionPlayEffect (int nEffectID, Vector3 effectPos, float time = 0)
		{
			m_nEffectID = nEffectID;
			m_EffectPos = effectPos;
			m_fTime = time;
		}

		public override void Start ()
		{
			base.Start ();
			Games.Scene.ActiveScene activeScene = GameManager.gameManager.ActiveScene;
			if (null != activeScene)
			{
				SceneEffectBehaviourController sebc = activeScene.SceneEffect;
				if (null != sebc)
				{
					sebc.PlayEffect(m_nEffectID, EffectStartPlayCallback);
				}
			}
			if (m_fTime > 0)
			{
				m_fTimer = m_fTime;
			}
			else
			{
				base.Finish();
			}
		}

		public override void Update (float deltaTime)
		{
			base.Update (deltaTime);
			if (m_fTimer > 0)
			{
				m_fTimer -= deltaTime;
			}
			else
			{
				Finish();
			}
		}

		public override void Finish ()
		{
			base.Finish ();
			if (null != m_EffectObj)
			{
				m_EffectObj.SetActive(false);
			}
		}

		/// <summary>
		/// Effect开始播放的回调
		/// </summary>
		/// <param name="effectObj">Effect object.</param>
		/// <param name="param">Parameter.</param>
		private void EffectStartPlayCallback (GameObject effectObj, object param)
		{
//			if (null != effectObj && effectObj.transform.childCount > 0)
//			{
//				Transform realEffectObject = effectObj.transform.GetChild(0);
//				realEffectObject.transform.position = m_EffectPos;
//			}
			if (null == effectObj) 
			{
				if (!Finished) 
				{
					base.Finish();
				}
				return;
			}
			m_EffectObj = effectObj;
			effectObj.transform.position = m_EffectPos;
		}
		#endregion
	}
}