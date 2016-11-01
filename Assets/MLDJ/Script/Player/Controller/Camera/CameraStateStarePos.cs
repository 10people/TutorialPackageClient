/********************************************************************************
 *	文件名：	CameraStateStarePos.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraStateStarePos.cs
 *	创建人：    陈惟楚
 *	创建时间：   2015-03-21
 *
 *	功能说明： 盯着某个固定点
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.LogicObj;

public class CameraStateStarePos : ICameraState
{
    #region Fields
    private ThirdPersonCamera m_ThirdPersonCamera;

    private Vector3 m_CameraPos = Vector3.one;
    private Vector3 m_StarePos = Vector3.zero;


    private Vector3 m_TargetPos;

    #endregion
    #region Properties

    #endregion
    #region Methods
    private CameraStateStarePos() {}
    public CameraStateStarePos(ThirdPersonCamera thirdPersonCamera)
    {
        m_ThirdPersonCamera = thirdPersonCamera;
    }

    /// <summary>
    /// 进入状态，初始参数
    /// </summary>
    /// <param name="target"></param>
    public void EnterState(Vector3 targetPos)
    {
        m_TargetPos = targetPos;
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
        if (m_ThirdPersonCamera.Dirty == false) return;
        // 摄像机目标点
        m_StarePos = m_TargetPos;
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
            m_ThirdPersonCamera.m_StateChangeToStarePos.EnterState(pos, m_TargetPos, fDuration, CameraDefine.m_ChangeTargetEaseType1, onCameraMoveDone);
            m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateChangeToStarePos);
        }  
    }

    public void LookTarget(Obj target, CameraDefine.CameraMoveDoneCallback onCameraMoveDone, float fDuration)
    {
        if (m_ThirdPersonCamera == null || target == null) return;
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
            m_ThirdPersonCamera.m_StateChangeToStareTarget.EnterState(target, m_TargetPos, fDuration, CameraDefine.m_ChangeTargetEaseType1, onCameraMoveDone);
            m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateChangeToStareTarget);
        }
    }
    #endregion
}