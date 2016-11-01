/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：血色冰封副本3第二阶段：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo83 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (275),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (1140,1),true);
			DefineAction ("CameraMove8", new CutsceneActionCameraTarget (-1,0),true);
			DefineAction("BossMove0", new CutsceneActionCharacterMove(1140,new Vector3(76.96f, 2f, 79.52f),0,180f),true);
			DefineAction("BossMove1", new CutsceneActionCharacterMove(1140,new Vector3(72.28f, 2f, 55.28f),0,180f),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "BossMove0"); 
			StartBWhenAFinish("BossMove0","CameraMove1",1f);
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAFinish ("CameraMove1", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "CameraMove8");
			StartBWhenAFinish ("CameraMove8", "BossMove1");
			FinishBWhenAFinish("BossMove1","HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}