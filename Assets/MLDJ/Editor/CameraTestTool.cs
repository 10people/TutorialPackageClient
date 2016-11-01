/********************************************************************************
 *	文件名：	CameraTestTool.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraTestTool.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-03-31
 *
 *	功能说明：给美术测试场景和确定摄像机参数的工具
 *	修改记录：
*********************************************************************************/
 
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class CameraTestTool : MonoBehaviour 
{
    [HideInInspector]
    public float m_fDistanceMin = 6f;
    [HideInInspector]
    public float m_fDistanceMax = 20f;
    [HideInInspector]
    public float m_fDistance;
    [HideInInspector]
    public float m_fPitchMin = 0f;
    [HideInInspector]
    public float m_fPitchMax = 80f;
    [HideInInspector]
    public float m_fPitch;
    [HideInInspector]
    public float m_fYaw;

    [HideInInspector]
	public float m_fDefaultDistance = 11f;
    [HideInInspector]
	public float m_fDefaultPitch = 27.645f;
    [HideInInspector]
    public float m_fDefaultYaw = -41f;

    [HideInInspector]
    public Vector3 m_CameraTargetOffset = new Vector3(0, 0.6f, 0);

    [HideInInspector]
    public Transform m_CameraTransCache;
    [HideInInspector]
    public Transform m_TargetTransCache;

	[HideInInspector]
	public string m_ExportFileName = string.Empty;

    #region 调整摄像机震屏的字段
    public AnimationCurve m_PitchRock = new AnimationCurve();   //震屏 摄像机Pitch偏移
    public AnimationCurve m_YawRock = new AnimationCurve();     //震屏 摄像机Yaw偏移
    public AnimationCurve m_DistanceRock = new AnimationCurve();//震屏 摄像机Distance偏移
    public AnimationCurve m_OffsetYRock = new AnimationCurve(); //震屏 摄像机Offset的Y分量偏移

    [HideInInspector]
    public float m_fRockTimer = 0;
    [HideInInspector]
    public float m_fRockTime = 1;
	[HideInInspector]
	public float m_fRockDelayTimer = 0;
	[HideInInspector]
	public float m_fRockDely = 0;
    #endregion

    // Use this for initialization
	void Start () 
    {
        m_fDistance = m_fDefaultDistance;
        m_fPitch = m_fDefaultPitch;
        m_fYaw = m_fDefaultYaw;
        m_CameraTransCache = Camera.main.transform;
        GameObject mainPlayer = GameObject.Find("MainPlayer");
        if (mainPlayer != null)
        {
            m_TargetTransCache = mainPlayer.transform;
        }
	}

    public void StartTestRock()
    {
        m_fRockTimer = m_fRockTime;
		m_fRockDelayTimer = m_fRockDely;
    }
	
	// Update is called once per frame
	void LateUpdate () 
    {
        if (m_TargetTransCache == null || m_CameraTransCache == null) return;

        float pitch = m_fPitch;
        float yaw = m_fYaw;
        float distance = m_fDistance;
        Vector3 offset = m_CameraTargetOffset; 

		if (m_fRockDelayTimer > 0)
		{
			m_fRockDelayTimer -= Time.deltaTime;
			return;
		}
        if (m_fRockTimer > 0)
        {
            m_fRockTimer -= Time.deltaTime;
            if (m_fRockTimer < 0)
            {
                m_fRockTimer = 0;
            }
            float time = m_fRockTime - m_fRockTimer;
            float rockPitch = m_PitchRock.Evaluate(time);
            float rockYaw = m_YawRock.Evaluate(time);
            float rockDistance = m_DistanceRock.Evaluate(time);
            float rockOffsetY = m_OffsetYRock.Evaluate(time);

            pitch += rockPitch;
            yaw += rockYaw;
            distance += rockDistance;
            offset.y += rockOffsetY;
        }
        // 摄像机旋转
        Vector3 cameraEuler = new Vector3(pitch, yaw, 0);
        m_CameraTransCache.rotation = Quaternion.Euler(cameraEuler);

        // 摄像机目标点
        Vector3 m_StarePos = m_TargetTransCache.position;
        m_StarePos += offset;

        // 摄像机位置
        m_CameraTransCache.position = m_StarePos - distance * m_CameraTransCache.forward;
	}    
}

