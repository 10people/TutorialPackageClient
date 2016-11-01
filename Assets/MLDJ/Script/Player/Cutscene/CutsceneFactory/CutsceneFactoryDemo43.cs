/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：任务165 说明：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo43 : CutsceneFactoryBase
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
		public override Cutscene CreatCutscene ()
		{
			
			BeginBuild();
			
			///////////////////////////////////////////////////////////////////
			/// 定义阶段
			///////////////////////////////////////////////////////////////////
			DefineAction ("HeiBian", new CutsceneActionMovieUIControl ());
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (161, 1f), true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1, 0), true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (180),true);
			DefineAction ("DuiHua2", new CutsceneActionStoryDialog (181),true);
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart("Begin", "DuiHua1");
			StartBWhenAStart ("DuiHua1", "HeiBian");
			StartBWhenAFinish ("DuiHua1", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "DuiHua2", 1f);
			StartBWhenAFinish ("DuiHua2", "CameraMove2");
			FinishBWhenAFinish ("CameraMove2", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}