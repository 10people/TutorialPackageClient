/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：遗忘废墟剧情副本3第1个剧情动画：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo14 : CutsceneFactoryBase 
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (112),true);
			DefineAction ("BossTexie", new CutsceneActionCameraTarget (30, 0), true);
			DefineAction ("BossAttack", new CutsceneActionPlayAnim (30, 267),true);
			DefineAction ("BossMove", new CutsceneActionCharacterMove (30,new Vector3 (84.51f, 19.14f, 65.15f),0,180f), true);
			DefineAction ("BossTexiao", new CutsceneActionPlayEffect (427, new Vector3 (78.03f, 19.13f, 46.1f), 3));
			DefineAction ("CameraMove", new CutsceneActionCameraTarget (-1,0), true);
			DefineAction ("PlayerMove", new CutsceneActionCharacterMove (-1,new Vector3 (84.28f, 19.14f, 59.42f),1), true);
			DefineAction("PlayerRun",new CutsceneActionPlayAnim(-1,1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			
			
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "PlayerMove");
			StartBWhenAStart ("PlayerMove", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove", "PlayerStand");
			StartBWhenAStart ("PlayerMove", "HeiBian");
			StartBWhenAFinish ("PlayerMove", "BossTexie");
			StartBWhenAStart ("BossTexie", "DuiHua");
			StartBWhenAFinish ("DuiHua", "BossMove");
			StartBWhenAFinish ("BossMove", "BossAttack");
			StartBWhenAStart ("BossAttack", "BossTexiao");
			StartBWhenAFinish("BossAttack","CameraMove");
			FinishBWhenAFinish ("BossAttack", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}