/********************************************************************************
 *	文件名：	CameraStateStareTarget.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraStateStareTarget.cs
 *	创建人：    陈惟楚
 *	创建时间：   2015-03-20
 *
 *	功能说明： 盯着某一个Obj，跟随其移动
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.LogicObj;

public class CameraStateStareTarget : ICameraState
{
    #region Fields
    private ThirdPersonCamera m_ThirdPersonCamera;

    private Vector3 m_CameraPos = Vector3.one;
    private Vector3 m_StarePos = Vector3.zero;


    private Obj m_Target;
    private Transform m_TargetTransformCache;
    /// <summary>
    /// 上一次有效的目标位置，作为切换到转换状态的参数
    /// </summary>
    private Vector3 m_LastValidTargetPos = Vector3.zero;
    #endregion
    #region Properties

    #endregion
    #region Methods
    private CameraStateStareTarget() {}
    public CameraStateStareTarget(ThirdPersonCamera thirdPersonCamera)
    {
        m_ThirdPersonCamera = thirdPersonCamera;
    }

    /// <summary>
    /// 进入状态，初始参数
    /// </summary>
    /// <param name="target"></param>
    public void EnterState(Obj target)
    {
        if (target == null || target.transform == null) return;
        m_Target = target;
        m_TargetTransformCache = target.transform;
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
        if (m_Target == null)
        {
            LookTarget(Singleton<ObjManager>.GetInstance().MainPlayer, null, CameraDefine.m_fDefaultCameraMoveTime);
            return;
        }
        if (m_TargetTransformCache == null)
        {
            m_TargetTransformCache = m_Target.transform;
        }
        if (m_TargetTransformCache == null) return;

        if (m_ThirdPersonCamera.Dirty == false && m_LastValidTargetPos == m_TargetTransformCache.position) return;

        m_LastValidTargetPos = m_TargetTransformCache.position;    

        // 摄像机目标点
        m_StarePos = m_TargetTransformCache.position;
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
            m_ThirdPersonCamera.m_StateChangeToStarePos.EnterState(pos, m_LastValidTargetPos, fDuration, CameraDefine.m_ChangeTargetEaseType1, onCameraMoveDone);
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
            m_ThirdPersonCamera.m_StateChangeToStareTarget.EnterState(target, m_LastValidTargetPos, fDuration, CameraDefine.m_ChangeTargetEaseType1, onCameraMoveDone);
            m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateChangeToStareTarget);
        }        
    }
    #endregion
}