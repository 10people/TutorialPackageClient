/********************************************************************************
 *	文件名：	CabalTrigger.cs
 *	全路径：	\Script\Scene\CabalObstacle.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-07-27
 *
 *	功能说明：种动态阻挡的脚本
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

public class CabalObstacle : MonoBehaviour {
	static Color normalColor = new Color(1f, .32f, .4f, .66f);
	public int ID;

	private int m_nEffectID = 453;

	private int m_nEffectCnt;
	private int m_nEffectNum;

	void Awake ()
	{
		// 加特技
		Games.Scene.ActiveScene activeScene = GameManager.gameManager.ActiveScene;
		if (null != activeScene)
		{
			SceneEffectBehaviourController sebc = activeScene.SceneEffect;
			if (null != sebc)
			{
				m_nEffectNum = (int)(Mathf.Max(transform.localScale.x, transform.localScale.z) / 2.15f);
				if (m_nEffectNum == 0)
					m_nEffectNum = 1;
				m_nEffectCnt = 0;
				for (int i = 0; i < m_nEffectNum; i++) {
					sebc.PlayEffect(m_nEffectID, EffectStartPlayCallback);
				}

			}
		}
	}

	/// <summary>
	/// Effect开始播放的回调
	/// </summary>
	/// <param name="effectObj">Effect object.</param>
	/// <param name="param">Parameter.</param>
	private void EffectStartPlayCallback (GameObject effectObj, object param)
	{
		if (null == effectObj) 
		{
			return;
		}
		effectObj.transform.parent.parent = transform.parent;
		effectObj.transform.rotation = transform.parent.rotation;
		if (transform.localScale.x < transform.localScale.z) {
			effectObj.transform.eulerAngles = effectObj.transform.eulerAngles + Vector3.up * 90f;
		}
		effectObj.transform.position = transform.position;
		effectObj.transform.localPosition = effectObj.transform.localPosition - (m_nEffectCnt - (m_nEffectNum - 1) * 0.5f) * effectObj.transform.right * 2.15f;
		m_nEffectCnt++;
	}

//	void OnDestroy ()
//	{
//		Games.Scene.ActiveScene activeScene = GameManager.gameManager.ActiveScene;
//		if (null != activeScene) {
//			SceneEffectBehaviourController sebc = activeScene.SceneEffect;
//			if (null != sebc) {
//				for (int i = 0; i < m_nEffectNum; i++) {
//					sebc.StopEffect (m_nEffectID);
//				}
//			}
//		}
//	}

	void OnDrawGizmos ()
	{
		Gizmos.color = normalColor;
		Matrix4x4 defaultMatrix = Gizmos.matrix;
		Gizmos.matrix = transform.localToWorldMatrix;
		Gizmos.DrawCube(Vector3.zero, Vector3.one);
		Gizmos.matrix = defaultMatrix;
	}
}
