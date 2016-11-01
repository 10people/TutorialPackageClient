/********************************************************************************
 *	文件名：	CutsceneFactoryTest.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-24
 *
 *	功能说明：任务26：探查 动画
 *	修改记录：
*********************************************************************************/


using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo28 : CutsceneFactoryBase 
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
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (32.61f, 18.78f, 77.26f), 3),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (new Vector3 (14.82f,18.79f,88.79f), 2),true);
			DefineAction ("CameraMove4", new CutsceneActionCameraTarget (-1, 1), true);
			DefineAction ("Duihua1", new CutsceneActionStoryDialog (131));
			DefineAction ("Duihua2", new CutsceneActionStoryDialog (132));
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////

			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAStart ("CameraMove1","Duihua1");
			StartBWhenAFinish ("CameraMove1", "CameraMove2",1f);
			StartBWhenAStart ("CameraMove2", "Duihua2");
			StartBWhenAFinish ("CameraMove2", "CameraMove4",1f);
			FinishBWhenAStart ("CameraMove4", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}