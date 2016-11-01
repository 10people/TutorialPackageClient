/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：黄昏要塞剧情副本3第3个剧情动画：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo26 : CutsceneFactoryBase 
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (125),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (65,1),true);


			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ( "CameraMove1","HeiBian");
			StartBWhenAFinish ( "CameraMove1","DuiHua");
			FinishBWhenAFinish ("DuiHua", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}