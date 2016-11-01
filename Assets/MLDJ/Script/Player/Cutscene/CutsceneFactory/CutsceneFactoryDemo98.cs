/********************************************************************************
 *	文件名：	CutsceneFactoryDemo91.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo91.cs
 *	创建人：	赵琦
 *	创建时间：2016-5-19
 *
 *	功能说明：8-2结尾
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo98 : CutsceneFactoryBase
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
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (1139,1),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,0),true);
			//DefineAction ("CameraMove3", new CutsceneActionCameraTarget (1147,1),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (297),true);
			//DefineAction ("DuiHua2", new CutsceneActionStoryDialog (291),true);
			//DefineAction ("DuiHua3", new CutsceneActionStoryDialog (292),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			StartBWhenAStart ("Begin", "HeiBian");
			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "DuiHua1");
			StartBWhenAFinish("DuiHua1", "CameraMove2");
			FinishBWhenAFinish ("CameraMove2", "HeiBian");
            EndBuild();
            return base.CreatCutscene();
        }
        #endregion
    }
}