/********************************************************************************
 *	文件名：	CameraStateInit.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraStateInit.cs
 *	创建人：    陈惟楚
 *	创建时间：   2015-03-20
 *
 *	功能说明： 摄像机的初始状态，游戏运行过程中不应该进入此状态
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.LogicObj;

public class CameraStateInit : ICameraState
{
    #region Fields
    private ThirdPersonCamera m_ThirdPersonCamera;

    #endregion
    #region Properties

    #endregion
    #region Methods
    private CameraStateInit() {}
    public CameraStateInit(ThirdPersonCamera thirdPersonCamera)
    {
        m_ThirdPersonCamera = thirdPersonCamera;
    }
    #endregion

    #region 实现ICameraState

    public Vector3 CameraPos
    {
        get { return Vector3.zero; }
    }

    public Vector3 StarePos
    {
        get { return Vector3.zero; }
    }

    public void UpdateCamera() {}
    public void LookPos(Vector3 pos, CameraDefine.CameraMoveDoneCallback onCameraMoveDone, float fDuration) { }

    /// <summary>
    /// 只做初始状态转为StareTarget状态用
    /// </summary>
    /// <param name="target"></param>
    /// <param name="fDuration"></param>
    public void LookTarget(Obj target, CameraDefine.CameraMoveDoneCallback onCameraMoveDone, float fDuration)
    {
        if (m_ThirdPersonCamera == null || target == null)
        {
            Module.Log.LogModule.ErrorLog("Init CameraState Error,  target = {0}", target.ToString());
            return;
        }
        m_ThirdPersonCamera.m_StateStareTarget.EnterState(target);
        m_ThirdPersonCamera.SetState(m_ThirdPersonCamera.m_StateStareTarget);
    }
    #endregion
}