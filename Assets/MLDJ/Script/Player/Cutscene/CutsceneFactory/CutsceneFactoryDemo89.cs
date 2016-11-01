/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-1-26
 *
 *	功能说明：巨猿军队 说明：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo89 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (282),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3(18.56f,22f,19.04f),1),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,0),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAStart ("CameraMove1","DuiHua1");
			StartBWhenAFinish ("DuiHua1", "CameraMove2");
			FinishBWhenAStart ("CameraMove2", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}