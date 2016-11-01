/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：任务165 说明：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo86 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (205),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3(83.6f,19.28f,69.67f),0),true);
			DefineAction ("CameraMove8", new CutsceneActionCameraTarget (-1,0),true);
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			DefineAction("danru1",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu1",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			DefineAction ("peitelunMove", new CutsceneActionCharacterMove (201, new Vector3 (72.05f, 19.34f, 69.82f), 0),true);
			DefineAction ("linMove", new CutsceneActionCharacterMove (202, new Vector3 (73.46f, 19.28f, 67.98f), 0),true);
			DefineAction ("fulideMove", new CutsceneActionCharacterMove (203, new Vector3 (73.75f, 19.28f, 71.52f), 0),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (75.24f, 19.28f, 69.7f), 0), true);
			DefineAction ("yinmuMove1", new CutsceneActionCharacterMove (204, new Vector3 (83.6f,19.28f,69.67f), 0,180),true);
			DefineAction ("yinmuMove2", new CutsceneActionCharacterMove (204, new Vector3 (55.94f,19.28f,69.17f), 0),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart("Begin", "danchu");
			StartBWhenAStart ("danchu", "HeiBian");
			StartBWhenAFinish ("danchu", "PlayerMove0");
			StartBWhenAFinish ("PlayerMove0", "peitelunMove");
			StartBWhenAFinish ("peitelunMove","linMove");
			StartBWhenAFinish ("linMove","fulideMove");
			StartBWhenAFinish ("fulideMove","yinmuMove1");
			StartBWhenAFinish ("yinmuMove1","CameraMove1");
			StartBWhenAStart ("CameraMove1","danru");
			StartBWhenAFinish ("danru","DuiHua1");
			StartBWhenAFinish ("DuiHua1","danchu1");
			StartBWhenAFinish ("danchu1","yinmuMove2");
			StartBWhenAFinish ("yinmuMove2","CameraMove8");
			StartBWhenAStart ("CameraMove8","danru1");
			FinishBWhenAFinish ("danru1", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}