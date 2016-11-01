/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-5
 *
 *	功能说明：黄昏之湖剧情副本3开场：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo62 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (202),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (203),true);
			DefineAction ("DuiHua2", new CutsceneActionStoryDialog (204),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (75.24f, 19.28f, 69.7f), 2), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));			
			DefineAction ("peitelunMove", new CutsceneActionCharacterMove (201, new Vector3 (72.05f, 19.34f, 69.82f), 0));
			//DefineAction ("peitelunRun", new CutsceneActionPlayAnim (201, 1));
			//DefineAction("peitelunStand",new CutsceneActionPlayAnim(201,102));
			DefineAction ("linMove", new CutsceneActionCharacterMove (202, new Vector3 (73.46f, 19.28f, 67.98f), 0));
			//DefineAction ("linRun", new CutsceneActionPlayAnim (202, 1));
			//DefineAction("linStand",new CutsceneActionPlayAnim(202,102));
			DefineAction ("fulideMove", new CutsceneActionCharacterMove (203, new Vector3 (73.75f, 19.28f, 71.52f), 0));
			//DefineAction ("fulideRun", new CutsceneActionPlayAnim (203, 1));
			//DefineAction("fulideStand",new CutsceneActionPlayAnim(203,102));
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (199, 1),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,1), true);
			//DefineAction ("CameraMove3", new CutsceneActionCameraTarget (201,2), true);
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "HeiBian", 0.05f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "DuiHua");
			StartBWhenAFinish("DuiHua", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "danchu");
			StartBWhenAFinish ("danchu", "CameraMove2");
			StartBWhenAFinish ("CameraMove2", "danru", 0.5f);
			StartBWhenAStart ("danru", "peitelunMove");
			//StartBWhenAStart ("CameraMove3", "peitelunRun", 0.1f);
			//StartBWhenAStart("CameraMove3","peitelunStand",1f);
			StartBWhenAStart ("danru", "linMove");
			//StartBWhenAStart ("CameraMove3", "linRun", 0.1f);
			//StartBWhenAStart("CameraMove3","linStand",1f);
			StartBWhenAStart ("danru", "fulideMove");
			//StartBWhenAStart ("CameraMove3", "fulideRun", 0.1f);
			//StartBWhenAStart("CameraMove3","fulideStand",1f);
			StartBWhenAFinish ("danru", "DuiHua2");
			FinishBWhenAFinish ("DuiHua2", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}