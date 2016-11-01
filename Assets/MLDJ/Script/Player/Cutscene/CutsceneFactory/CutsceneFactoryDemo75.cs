/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：雷纳堡副本2结束：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo75 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (265),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (266),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (63.98f, 5f, 33.68f), 0,180f), true);
			DefineAction ("robotMove0", new CutsceneActionCharacterMove (1138, new Vector3 (63.86f, 5f, 26.49f), 0), true);
			DefineAction ("qiaoannaMove1", new CutsceneActionCharacterMove (1137, new Vector3 (59.4f, 5f, 30.98f), 0,90f), true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3(63.86f, 5f, 26.49f),1),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,0),true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (new Vector3(59.4f, 5f, 30.98f),1),true);
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,0.5f,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,0.5f),true);
			DefineAction("danru1",new CutsceneActionScreenFade(Color.white,2,0.5f,0),true);
			DefineAction("danchu1",new CutsceneActionScreenFade(Color.white,2,0,0.5f),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "danchu");
			StartBWhenAStart ("danchu", "HeiBian");
			StartBWhenAFinish ("danchu", "PlayerMove0");
			StartBWhenAFinish ("PlayerMove0", "robotMove0");
			StartBWhenAFinish ("robotMove0", "danru");
			StartBWhenAFinish ("danru", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "DuiHua");
			StartBWhenAFinish ("DuiHua", "danchu1");
			StartBWhenAFinish ("danchu1", "qiaoannaMove1");
			StartBWhenAFinish ("qiaoannaMove1", "danru1");
			StartBWhenAFinish ("danru1", "CameraMove3");
			StartBWhenAFinish ("CameraMove3", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "CameraMove2");
			StartBWhenAFinish ("CameraMove2", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}