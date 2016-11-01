/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：遗忘废墟剧情副本1第3个剧情动画：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo11 : CutsceneFactoryBase 
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (108),true);
			DefineAction("CameraMove1", new CutsceneActionCameraTarget(new Vector3(6.06f, 18.96f, 15.74f),2f),true);
			DefineAction("CameraMove3", new CutsceneActionCameraTarget(-1,0),true);
			//DefineAction("BossMove", new CutsceneActionCharacterMove(163,new Vector3(6.06f, 18.96f, 15.74f),0,90f),true);
			DefineAction("BossMoveBack", new CutsceneActionCharacterMove(163,new Vector3(12.45f, 18.96f, 26.81f),0,0),true);
			// 玩家倒地动作
			//DefineAction("PlayerBeAttack", new CutsceneActionPlayAnim(-1, 248));
			// 玩家虚弱动作
			//DefineAction("PlayerDown", new CutsceneActionPlayAnim(-1, 249));
			// 玩家战斗待机动作
			//DefineAction("PlayerBattleStandAnim", new CutsceneActionPlayAnim(-1, 102),true);
			//DefineAction("ScreenFadeOut1", new CutsceneActionScreenFade(Color.white, 1, 0, 1), true);
			//DefineAction("ScreenFadeIn1", new CutsceneActionScreenFade(Color.white, 1, 1, 0), true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAFinish("Begin", "CameraMove1");
			StartBWhenAFinish("Begin", "HeiBian");
			StartBWhenAFinish("CameraMove1", "DuiHua");
			StartBWhenAFinish ("DuiHua", "CameraMove3");
			StartBWhenAFinish ("CameraMove3", "BossMoveBack");
			FinishBWhenAFinish ("BossMoveBack", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}