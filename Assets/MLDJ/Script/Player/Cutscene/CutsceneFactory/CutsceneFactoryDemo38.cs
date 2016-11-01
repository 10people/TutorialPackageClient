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
	public class CutsceneFactoryDemo38 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (142),true);
			//DefineAction ("DuiHua2", new CutsceneActionStoryDialog (143),true);
			//DefineAction ("DuiHua3", new CutsceneActionStoryDialog (144),true);
			//DefineAction ("DuiHua4", new CutsceneActionStoryDialog (145),true);
			DefineAction ("DuiHua5", new CutsceneActionStoryDialog (146),true);
			DefineAction ("DuiHua6", new CutsceneActionStoryDialog (147),true);
			//DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3(46.44f,10.08f,24.31f),2),true);
			//DefineAction ("CameraMove2", new CutsceneActionCameraTarget (new Vector3(24.31f,10.14f,24.47f),2),true);
			//DefineAction ("CameraMove3", new CutsceneActionCameraTarget (new Vector3(23.94f,10.08f,2.66f),2),true);
			//DefineAction ("CameraMove4", new CutsceneActionCameraTarget (new Vector3(24.31f,10.14f,24.47f),2),true);
			//DefineAction ("CameraMove5", new CutsceneActionCameraTarget (new Vector3 (24.1f, 10.08f, 47.35f), 2), true);
			//DefineAction ("CameraMove6", new CutsceneActionCameraTarget (new Vector3(24.31f,10.14f,24.47f),2),true);
			DefineAction ("CameraMove7", new CutsceneActionCameraTarget (new Vector3(3.27f,10.08f,24.37f),2),true);
			DefineAction ("CameraMove8", new CutsceneActionCameraTarget (-1,0),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////

			StartBWhenAStart("Begin", "DuiHua1");
			StartBWhenAStart ("DuiHua1", "HeiBian");
			StartBWhenAFinish ("DuiHua1", "CameraMove7");
			//StartBWhenAFinish ("CameraMove1", "DuiHua2");
			//StartBWhenAFinish ("DuiHua2", "CameraMove2");
			//StartBWhenAFinish ("CameraMove2", "CameraMove3");
			//StartBWhenAFinish ("CameraMove3", "DuiHua3");
			//StartBWhenAFinish ("DuiHua3", "CameraMove4");
			//StartBWhenAFinish ("CameraMove4", "CameraMove5");
			//StartBWhenAFinish ("CameraMove5", "DuiHua4");
			//StartBWhenAFinish ("DuiHua4", "CameraMove6");
			//StartBWhenAFinish ("CameraMove6", "CameraMove7");
			StartBWhenAFinish ("CameraMove7", "DuiHua5");
			StartBWhenAFinish ("DuiHua5", "CameraMove8");
			StartBWhenAStart ("CameraMove8", "DuiHua6");
			FinishBWhenAFinish ("DuiHua6", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}