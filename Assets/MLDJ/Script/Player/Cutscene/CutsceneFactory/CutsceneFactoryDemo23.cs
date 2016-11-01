/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：黄昏要塞剧情副本2第3个剧情动画：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo23 : CutsceneFactoryBase 
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (121),true);
			DefineAction ("DuiHua2", new CutsceneActionStoryDialog (122),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (38,1),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,0),true);




			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			StartBWhenAStart("Begin", "DuiHua1");
			StartBWhenAStart ("DuiHua1", "HeiBian");
			StartBWhenAFinish ("DuiHua1", "CameraMove1");
			StartBWhenAStart("CameraMove1", "DuiHua2");
			StartBWhenAFinish ("DuiHua2", "CameraMove2");
			FinishBWhenAStart ("CameraMove2", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}