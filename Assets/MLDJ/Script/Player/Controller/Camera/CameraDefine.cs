/********************************************************************************
 *	文件名：	ICameraState.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraDefine.cs
 *	创建人：    陈惟楚
 *	创建时间：   2015-03-20
 *
 *	功能说明： 摄像机用到的一些常亮定义
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

public class CameraDefine
{
    public const float m_fCameraXOffsetMax = 7.8f;            //摄像机相对主角的X偏移
    public const float m_fCameraYOffsetMax = 8.0f;           //摄像机相对主角的Y偏移
    public const float m_fCameraZOffsetMax = -9.0f;          //摄像机相对主角的Z偏移
    public const float m_fCameraXOffsetMin = 4.0f;
    public const float m_fCameraYOffsetMin = 4.0f;
    public const float m_fCameraZOffsetMin = -5.0f;

    public const float m_fCenterOffsetMax = 0.9f;
    public const float m_fCenterOffsetMin = 0.6f;

    public const float m_fCameraYawDefault = -40.1f;

    public const float m_fCameraPitchDefault = 30.2f;
    public const float m_fCameraPitchMin = 20f;
    public const float m_fCameraPitchMax = 30.2f;   

    public const float m_fCameraDistanceDefault = 12f;
    public const float m_fCameraDistanceMin = 6f;
    public const float m_fCameraDistanceMax = 12.0f;
    public const float m_fCameraDistanceChangeMaxSpeed = 5f;

    public static Vector3 m_CameraTargetOffset = new Vector3(0, 0.6f, 0);

    /// <summary>
    /// 切换目标摄像机动画的差值类型1，稳定状态接转换状态用
    /// </summary>
    public const iTween.EaseType m_ChangeTargetEaseType1 = iTween.EaseType.easeInOutQuad;
    /// <summary>
    /// 切换目标摄像机动画的差值类型2，转换状态接转换状态用
    /// </summary>
    public const iTween.EaseType m_ChangeTargetEaseType2 = iTween.EaseType.easeOutQuad;

    public const float m_fDefaultCameraMoveTime = 1;

    public delegate void CameraMoveDoneCallback();
}
