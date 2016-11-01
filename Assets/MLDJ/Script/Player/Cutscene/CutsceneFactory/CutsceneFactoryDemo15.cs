/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：遗忘废墟剧情副本3第2个剧情动画：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo15 : CutsceneFactoryBase 
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
			DefineAction("HeiBian",new CutsceneActionMovieUIControl());
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (113),true);
			DefineAction ("DuiHua2", new CutsceneActionStoryDialog (114),true);
			DefineAction ("LilisiTexie", new CutsceneActionCameraTarget (48, 0), true);
			DefineAction ("LilisiRun", new CutsceneActionPlayAnim (48, 1));
			DefineAction ("LilisiMove", new CutsceneActionCharacterMove (48, new Vector3 (82.18f, 19.15f, 65.16f), 5));
			DefineAction ("LilisiMove2", new CutsceneActionCharacterMove (48, new Vector3 (82.18f, 19.15f, 65.16f),0,90));
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1,0), true);
			DefineAction("PlayerMove", new CutsceneActionCharacterMove(-1,new Vector3(84.13f, 19.03f, 62.16f),0,0));
			DefineAction("lilisiStand",new CutsceneActionPlayAnim(48,0));
			DefineAction("BossShunyi",new CutsceneActionCharacterMove(164,new Vector3(84.51f, 19.15f, 65.15f),0));
			DefineAction("NverShunyi",new CutsceneActionCharacterMove(85,new Vector3(86.75f, 19.15f, 65.15f),0,-90));
			DefineAction ("BossDie", new CutsceneActionPlayAnim (164, 422));
			DefineAction ("NverTexie", new CutsceneActionCameraTarget (85, 0), true);
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,1,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,1,0,1),true);
			DefineAction("BossShunyi2",new CutsceneActionCharacterMove(164,new Vector3(82.9f, 19.15f, 46.1f),0));
			DefineAction("NverShunyi2",new CutsceneActionCharacterMove(85,new Vector3(88.2f, 19.15f, 46.1f),0,180));
			DefineAction("danru1",new CutsceneActionScreenFade(Color.white,1,1,0),true);
			DefineAction("danchu1",new CutsceneActionScreenFade(Color.white,1,0,1),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart("Begin", "danchu");
			StartBWhenAStart ("danchu", "HeiBian");
			StartBWhenAStart ("danchu", "PlayerMove");
			StartBWhenAFinish ("danchu", "BossShunyi");
			StartBWhenAFinish ("danchu", "danru",1);
			StartBWhenAFinish ("danchu", "BossDie");
			StartBWhenAFinish ("danchu", "NverShunyi");
			StartBWhenAFinish ("danru", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "danchu1");
			StartBWhenAFinish ("danchu1", "NverShunyi2");
			StartBWhenAFinish ("danchu1", "LilisiMove2");
			StartBWhenAFinish ("danchu1", "danru1",1);
			StartBWhenAFinish("danru1","LilisiTexie");
			StartBWhenAFinish ( "LilisiTexie","DuiHua2");
			StartBWhenAFinish ("DuiHua2", "CameraMove3");
			FinishBWhenAStart ("CameraMove3", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();

		}
		#endregion
	}
}