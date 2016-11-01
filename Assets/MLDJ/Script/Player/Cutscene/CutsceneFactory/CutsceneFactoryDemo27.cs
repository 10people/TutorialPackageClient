/********************************************************************************
 *	文件名：	CutsceneFactoryTest.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-24
 *
 *	功能说明：任务40：探查 动画
 *	修改记录：
*********************************************************************************/


using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo27 : CutsceneFactoryBase 
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
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (23.95f, 18.19f, 20.21f), 1), true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (new Vector3 (31.34f, 18.19f, 14f), 1), true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (new Vector3 (28.11f, 18.19f, 8.73f), 1), true);
			DefineAction ("CameraMove4", new CutsceneActionCameraTarget (-1, 1), true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////

			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAFinish ("CameraMove1", "CameraMove2",1f);
			StartBWhenAFinish ("CameraMove2", "CameraMove3",1f);
			StartBWhenAFinish ("CameraMove3", "CameraMove4",1f);
			FinishBWhenAStart ("CameraMove4", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}