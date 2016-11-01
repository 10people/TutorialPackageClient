/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-16
 *
 *	功能说明：呼啸沙漠副本3开场：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo65 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (252),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (253),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (30.56f, 14.99f, 21.56f), 1.5f), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (21.6f, 14.99f, 20.64f), 1), true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);	
			DefineAction("danru",new CutsceneActionScreenFade(Color.yellow,2,0.5f,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.yellow,2,0,0.5f),true);		
			DefineAction("danru1",new CutsceneActionScreenFade(Color.yellow,2,0.5f,0),true);
			DefineAction("danchu1",new CutsceneActionScreenFade(Color.yellow,2,0,0.5f),true);
			DefineAction ("bossmove0", new CutsceneActionCharacterMove (1116, new Vector3 (21.6f, 14.99f, 20.64f), 0,90f), true);
			DefineAction ("bossmove1", new CutsceneActionCharacterMove (1116, new Vector3 (50.75f, 14.99f,21.92f), 0,90f),true);
			DefineAction ("BossAttack", new CutsceneActionPlayAnim (1116, 348),true);
			DefineAction ("BossTexiao", new CutsceneActionPlayEffect (522, new Vector3 (21.6f, 14.99f, 20.64f), 3));
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			StartBWhenAStart ("Begin", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "HeiBian", 0.05f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "DuiHua");
			StartBWhenAFinish ("DuiHua", "danchu");
			StartBWhenAFinish ("danchu", "danru");
			StartBWhenAFinish ("danru", "danchu1", 0.5f);
			StartBWhenAFinish ("danchu1", "bossmove0");
			StartBWhenAFinish ("bossmove0", "danru1");
			StartBWhenAFinish ("danru1", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "BossAttack");
			StartBWhenAStart ("BossAttack", "BossTexiao");
			StartBWhenAFinish ("BossAttack", "CameraMove3",1f);
			StartBWhenAFinish ("CameraMove3", "bossmove1");
			FinishBWhenAStart ("bossmove1", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}