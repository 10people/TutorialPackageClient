/********************************************************************************
 *	文件名：	CutsceneFactoryDemo91.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo91.cs
 *	创建人：	赵琦
 *	创建时间：2016-5-19
 *
 *	功能说明：8-1结束对话
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo96 : CutsceneFactoryBase
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
			DefineAction ("HeiBian", new CutsceneActionMovieUIControl ());
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (164,1),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,0),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (293),true);
			DefineAction ("DuiHua2", new CutsceneActionStoryDialog (294),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			StartBWhenAStart ("Begin", "HeiBian");
			StartBWhenAStart ("Begin", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "CameraMove1");
			StartBWhenAFinish("CameraMove1", "DuiHua2");
			StartBWhenAFinish ("DuiHua2", "CameraMove2");
			FinishBWhenAFinish ("CameraMove2", "HeiBian");
            EndBuild();
            return base.CreatCutscene();
        }
        #endregion
    }
}