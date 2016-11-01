/********************************************************************************
 *	文件名：	CutsceneFactoryDemo91.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo91.cs
 *	创建人：	卫彤
 *	创建时间：2016-2-25
 *
 *	功能说明：新手副本最开始新加过场动画，玩家出场
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo91 : CutsceneFactoryBase
    {
        #region Fields
        #endregion

        #region Properties
        #endregion

        #region Methods
        /// <summary>
        /// 用这个Factory创建一个Cutscene
        /// </summary>
        /// <returns>The cutscene.</returns>
        public override Cutscene CreatCutscene()
        {
            BeginBuild();

            ///////////////////////////////////////////////////////////////////
            /// 定义阶段
            ///////////////////////////////////////////////////////////////////
            // 电影黑边界面控制
            DefineAction("MovieUI", new CutsceneActionMovieUIControl());
            // 开始过场动画
            DefineAction("Dialog", new CutsceneActionStoryDialog(285), true);
            // 移动新手引导
            DefineAction("NewUserGuide1", new CutsceneActionClientFuncCall(() =>
            {
                JoyStickLogic.Instance().NewPlayerGuide(1);
            }), true);

            ///////////////////////////////////////////////////////////////////
            /// 连接阶段
            ///////////////////////////////////////////////////////////////////
            StartBWhenAStart("Begin", "Dialog");
            StartBWhenAStart("Dialog", "MovieUI");
            FinishBWhenAFinish("Dialog", "MovieUI");
            StartBWhenAFinish("Dialog", "NewUserGuide1");
            EndBuild();
            return base.CreatCutscene();
        }
        #endregion
    }
}