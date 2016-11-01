/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：任务78 说明：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo41 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (174),true);
			DefineAction ("DuiHua2", new CutsceneActionStoryDialog (175),true);
			DefineAction ("DuiHua3", new CutsceneActionStoryDialog (176),true);
			DefineAction ("DuiHua4", new CutsceneActionStoryDialog (177),true);
			DefineAction ("DuiHua5", new CutsceneActionStoryDialog (178),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3(73.3f,19.81f,51.82f),3),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (new Vector3(13f,23.39f,112f),4),true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (new Vector3(73.3f,19.81f,51.82f),4),true);
			DefineAction ("CameraMove4", new CutsceneActionCameraTarget (new Vector3(48f,21.07f,30f),3),true);
			DefineAction ("CameraMove5", new CutsceneActionCameraTarget (new Vector3 (73.3f,19.81f,51.82f), 3), true);
			DefineAction ("CameraMove6", new CutsceneActionCameraTarget (new Vector3(100.91f,17.81f,25.08f),3),true);
			DefineAction ("CameraMove8", new CutsceneActionCameraTarget (-1,0),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart("Begin", "DuiHua1");
			StartBWhenAStart("Begin", "HeiBian");
			StartBWhenAFinish ("DuiHua1", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "CameraMove2");
			StartBWhenAFinish ("CameraMove2", "DuiHua2");
			StartBWhenAFinish ("DuiHua2", "CameraMove3");
			StartBWhenAFinish ("CameraMove3", "CameraMove4");
			StartBWhenAFinish ("CameraMove4", "DuiHua3");
			StartBWhenAFinish ("DuiHua3", "CameraMove5");
			StartBWhenAFinish ("CameraMove5", "CameraMove6");
			StartBWhenAFinish ("CameraMove6", "DuiHua4");
			StartBWhenAFinish ("DuiHua4", "CameraMove8");
			StartBWhenAFinish ("CameraMove8", "DuiHua5");
			FinishBWhenAFinish ("DuiHua5", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}