/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：雷纳堡副本2开场：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo74 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (264),true);
			DefineAction ("robotMove0", new CutsceneActionCharacterMove (1138, new Vector3 (63.86f, 5f, 26.49f), 0), true);
			DefineAction ("robotMove1", new CutsceneActionCharacterMove (1138, new Vector3 (62.63f, 5f, 15.45f), 0), true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3(63.86f, 5f, 26.49f),1),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,0),true);
			
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "robotMove0");
			StartBWhenAStart ("robotMove0", "HeiBian");
			StartBWhenAFinish ("robotMove0", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "DuiHua");
			StartBWhenAFinish ("DuiHua", "CameraMove2");
			StartBWhenAStart ("CameraMove2", "robotMove1");
			StartBWhenAFinish ("CameraMove2", "HeiBian");


			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}