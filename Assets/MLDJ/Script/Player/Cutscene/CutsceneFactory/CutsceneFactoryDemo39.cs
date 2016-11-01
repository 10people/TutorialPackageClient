/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-11-11
 *
 *	功能说明：任务62 说明：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo39 : CutsceneFactoryBase
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
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (91.5f, 18.78f, 57.11f), 2), true);
			DefineAction ("Duihua1", new CutsceneActionStoryDialog (167));
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1, 1), true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAStart ("CameraMove1","Duihua1");
			StartBWhenAFinish ("CameraMove1", "CameraMove2",3f);
			FinishBWhenAStart ("CameraMove2", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}