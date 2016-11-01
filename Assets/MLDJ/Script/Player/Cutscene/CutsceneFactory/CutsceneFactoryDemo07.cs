/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo05.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：剧情副本过场动画2
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo07 : CutsceneFactoryBase 
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (90),true);
			//DefineAction("CameraMove1", new CutsceneActionCameraTarget(new Vector3(83f, 14.72f, 16.3f),2f),true);
			//DefineAction("CameraMove3", new CutsceneActionCameraTarget(-1,0),true);
			//DefineAction("BossMove", new CutsceneActionCharacterMove(163,new Vector3(83f, 14.72f, 16.3f),0,-90),true);
			//DefineAction("BossMoveBack", new CutsceneActionCharacterMove(163,new Vector3(58.86f, 13.4f, 8.74f),0,0),true);
			// 玩家倒地动作
			DefineAction("PlayerBeAttack", new CutsceneActionPlayAnim(-1, 248));
			// 玩家虚弱动作
			DefineAction("PlayerDown", new CutsceneActionPlayAnim(-1, 249));
			// 玩家战斗待机动作
			//DefineAction("PlayerBattleStandAnim", new CutsceneActionPlayAnim(-1, 102),true);
			DefineAction("ScreenFadeOut1", new CutsceneActionScreenFade(Color.white, 1, 0, 1), true);
			DefineAction("ScreenFadeIn1", new CutsceneActionScreenFade(Color.white, 1, 1, 0), true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAFinish("Begin", "ScreenFadeOut1");
			StartBWhenAFinish("Begin", "HeiBian");
			StartBWhenAFinish("ScreenFadeOut1", "ScreenFadeIn1", 0.1f);
			StartBWhenAFinish("ScreenFadeIn1",  "DuiHua");
			StartBWhenAStart ("DuiHua", "PlayerBeAttack");
			StartBWhenAStart ("DuiHua", "PlayerDown",0.7f);
			FinishBWhenAFinish ("DuiHua", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}