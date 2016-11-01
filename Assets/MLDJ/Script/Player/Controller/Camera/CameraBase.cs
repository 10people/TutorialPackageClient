/********************************************************************************
 *	文件名：	CameraBase.cs
 *	全路径：	\Script\Player\Controller\Camera\CameraBase.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-03-26
 *
 *	功能说明：摄像机基类
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

public abstract class CameraBase
{
    #region Fields

    #endregion
    #region Properties

    #endregion
    #region Methods
    public virtual void Init() { }
    public virtual void Clear() { }
    public virtual void Update(float deltaTime) { }
    #endregion
}
