/********************************************************************************
 *	文件名：	CameraStateChangeToStarePos.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraStateChangeToStarePos.cs
 *	创建人：    陈惟楚
 *	创建时间：   2015-03-21
 *
 *	功能说明： 移动摄像机以盯着某个固定点
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.LogicObj;

public class CameraStateChangeToStarePos : ICameraState
{
    #region Fields
    private ThirdPersonCamera m_ThirdPersonCamera;

    private Vector3 m_CameraPos = Vector3.one;
    private Vector3 m_StarePos = Vector3.zero;


    private Vector3 m_TargetPos;
    private Vector3 m_OldPos;
    /// <summary>
    /// 上一次有效的目标位置，作为切换到转换状态的参数
    /// </summary>
    private Vector3 m_LastValidTargetPos = Vector3.zero;

    private float m_fDuration;
    private float m_fTimer;
    private CameraDefine.CameraMoveDoneCallback m_OnFinish;

    private iTween.EaseType m_EaseType;
    #endregion

    #region Properties

    #endregion
    #region Methods
    private CameraStateChangeToStarePos() { }
    public CameraStateChangeToStarePos(ThirdPersonCamera thirdPersonCamera)
    {
        m_ThirdPersonCamera = thirdPersonCamera;
    }

    /// <summary>
    /// 进入状态，初始参数
    /// </summary>
    /// <param name="target"></param>
    public void EnterState(Vector3 targetPos, Vector3 currentStarePos, float fDuration, iTween.EaseType easeType, CameraDefine.CameraMoveDoneCallback onFinish)
    {
        m_TargetPos = targetPos;
        m_OldPos = currentStarePos;
        m_fDuration = fDuration;
        m_fTimer = 0;
        m_EaseType = easeType;
        m_OnFinish = onFinish;
        UpdateCamera();
    }
    #endregion

    #region 实现ICameraState

    public Vector3 CameraPos
    {
        get
        {
            return m_CameraPos;
        }
    }

    public Vector3 StarePos
    {
        get
        {
            return m_StarePos;
        }
    }

    public void UpdateCamera()
    {
        if (m_ThirdPersonCamera == null) return;

        m_fTimer += Time.deltaTime;
        float t = m_fTimer / m_fDuration;
        // 状态完成
        if (t > 1)
        {
            LookPos(m_TargetPos, null, 0);
            if (m_OnFinish != null) m_OnFinish();
            return;
        }
        t = iTween.Easing(0, 1, t, m_EaseType);
        Vector3 tempTargetPos = m_OldPos * (1 - t) + m_TargetPos * t;
        m_LastValidTargetPos = tempTargetPos;

        // 摄像机目标点
        m_StarePos = tempTargetPos;
        m_StarePos += m_ThirdPersonCamera.TargetOffset;

        // 摄像机位置
        m_CameraPos = m_StarePos - m_ThirdPersonCamera.Distance * CameraManager.Instance.MainCameraTrans.forward;
    }

    public void LookPos(Vector3 pos, CameraDefine.CameraMoveDoneCallback onCameraMoveDone, float fDuration)
    {
        if (m_ThirdPersonCamera == null) return;
        if (fDuration <= 0)
        {
            m_ThirdPersonCamera.m_StateStarePos.EnterState(pos);
            m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateStarePos);
        }
        else
        {
            m_ThirdPersonCamera.m_StateChangeToStarePos.EnterState(pos, m_LastValidTargetPos, fDuration, CameraDefine.m_ChangeTargetEaseType2, onCameraMoveDone);
            m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateChangeToStarePos);
        }  
    }

    public void LookTarget(Obj target, CameraDefine.CameraMoveDoneCallback onCameraMoveDone, float fDuration)
    {
        if (m_ThirdPersonCamera == null || target == null)
        {
            return;
        }
        if (fDuration <= 0)
        {
            m_ThirdPersonCamera.m_StateStareTarget.EnterState(target);
            m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateStareTarget);
			if (onCameraMoveDone != null)
			{
				onCameraMoveDone();
			}
        }
        else
        {
            m_ThirdPersonCamera.m_StateChangeToStareTarget.EnterState(target, m_LastValidTargetPos, fDuration, CameraDefine.m_ChangeTargetEaseType2, onCameraMoveDone);
            m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateChangeToStareTarget);
        }
    }
    #endregion
}

