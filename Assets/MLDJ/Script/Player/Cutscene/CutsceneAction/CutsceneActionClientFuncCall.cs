/********************************************************************************
 *	文件名：	CutsceneActionClientFuncCall.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionClientFuncCall.cs
 *	创建人：	卫彤
 *	创建时间：2016-02-25
 *
 *	功能说明：过场动画代码调用任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System;
using System.Collections;

namespace Cutscene
{
    public class CutsceneActionClientFuncCall : CutsceneActionBase
    {
        #region Fields
        private Action mCallBack;
        #endregion

        #region Properties
        #endregion

        #region Methods
        public CutsceneActionClientFuncCall(Action callback)
        {
            mCallBack = callback;
        }
        public override void Start()
        {
            base.Start();
            mCallBack();
            Finish();
        }
        #endregion
    }
}