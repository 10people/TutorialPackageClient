/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：血色冰封副本2开场：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo80 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (271),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (272),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (71.22f, 2f, 42.34f), 1f), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));			
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (1139,2),true);
			DefineAction ("CameraMove2", new CutsceneActionCameraTarget (-1,0),true);
			DefineAction ("BossAttack", new CutsceneActionPlayAnim (1140, 342),true);
			DefineAction ("BossTexiao", new CutsceneActionPlayEffect (516, new Vector3 (73.37f, 2f, 47.73f), 2));
			DefineAction ("BossDie", new CutsceneActionPlayAnim (1139, 422),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "HeiBian", 0.05f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "CameraMove1"); 
			StartBWhenAFinish("CameraMove1","DuiHua");
			StartBWhenAFinish ("DuiHua", "BossAttack");
			StartBWhenAStart ("BossAttack", "BossTexiao");
			StartBWhenAFinish ("BossAttack", "BossDie");
			StartBWhenAFinish("BossDie","DuiHua1");
			StartBWhenAFinish ("DuiHua1", "CameraMove2");
			FinishBWhenAFinish ("CameraMove2", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}