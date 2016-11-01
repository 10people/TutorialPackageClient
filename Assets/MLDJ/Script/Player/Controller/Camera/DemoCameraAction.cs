/********************************************************************************
 *	文件名：	DemoCameraAction.cs
 *	全路径：	\Script\Player\Controller\Camera\DemoCameraAction.cs
 *	创建人：    陈惟楚
 *	创建时间：   2015-04-14
 *
 *	功能说明： Demo中用到的摄像机动作控制脚本，如果以后有相似的需求考虑写成通用的机制
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

public class DemoCameraAction : MonoBehaviour {

	public float m_fDistanceAnimSpeed = 20f;


	// 震动计时器
	private float m_fRockTimer = 0;

	/// <summary>
	/// 震动曲线的时长
	/// </summary>
	private float m_fRockLength = 1f;
	/// <summary>
	/// 震动ID
	/// </summary>
	private int m_nRockId = 22;

	private void Start ()
	{
		m_fRockTimer = m_fRockLength;
	}
	private void Update ()
	{
		m_fRockTimer += Time.deltaTime;
		if (m_fRockTimer > m_fRockLength)
		{
			CameraManager.Instance.StartRock(m_nRockId);
			m_fRockTimer = 0;
		}
		CameraManager.Instance.UpdateDistance(-m_fDistanceAnimSpeed * Time.deltaTime);
	}

	private void OnDestroy ()
	{
		// 停止震动
		CameraManager.Instance.StopRock(m_nRockId);
		// 摄像机归位
		CameraManager.Instance.ResetThirdPersonCamera();
	}
}
