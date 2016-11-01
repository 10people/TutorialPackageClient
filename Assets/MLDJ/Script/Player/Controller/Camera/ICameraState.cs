/********************************************************************************
 *	文件名：	ICameraState.cs
 *	全路径：	\Script\Player\Controller\Camera\ICameraState.cs
 *	创建人：    陈惟楚
 *	创建时间：   2015-03-20
 *
 *	功能说明： 摄像机状态接口 新增加了一些摄像机的逻辑需求，使用状态模式便于后续修改，理清逻辑
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.LogicObj;

public interface ICameraState
{
    #region Fields
    #endregion
    #region Properties
    /// <summary>
    /// 摄像机应该在的位置
    /// </summary>
    Vector3 CameraPos
    {
        get;
    }
    /// <summary>
    /// 摄像机应该看向的位置
    /// </summary>
    Vector3 StarePos
    {
        get;
    }
    #endregion
    #region Methods
    /// <summary>
    /// 根据不同状态的逻辑更新状态本身，计算CameraPos和StarePos
    /// </summary>
    void UpdateCamera();

    /// <summary>
    /// 让摄像机盯着一个位置
    /// </summary>
    /// <param name="pos">需要盯着的位置</param>
    /// <param name="onCameraMoveDone">当移动动画结束时的回调，fDuration为0时不会调用</param>
    /// <param name="fDuration">摄像机移动动画的时长</param>
    void LookPos(Vector3 pos, CameraDefine.CameraMoveDoneCallback onCameraMoveDone, float fDuration);
    
    /// <summary>
    /// 让摄像机盯着一个Obj
    /// </summary>
    /// <param name="target">需要盯着的Obj</param>
    /// <param name="onCameraMoveDone">当移动动画结束时的回调，fDuration为0时不会调用</param>
    /// <param name="fDuration">摄像机移动动画的时长</param>
    void LookTarget(Obj target, CameraDefine.CameraMoveDoneCallback onCameraMoveDone, float fDuration);
    #endregion
}
