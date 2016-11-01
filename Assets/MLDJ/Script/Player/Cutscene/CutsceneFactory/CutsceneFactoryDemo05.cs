/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo05.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：Demo的过场动画5：沙漠boss退场
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo05 : CutsceneFactoryBase 
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

			// 电影黑边界面控制
			DefineAction("MovieUI", new CutsceneActionMovieUIControl());
			// 屏幕淡出
			DefineAction("ScreenFadeOut1", new CutsceneActionScreenFade(Color.white, 2, 0, 1), true);
			// Boss瞬移
            DefineAction("BossMove1", new CutsceneActionCharacterMove(1081, new Vector3(12.8f, 0.6f, 23.15f), 0, 90));
			// 玩家瞬移
			DefineAction("PlayerMove1", new CutsceneActionCharacterMove(0, new Vector3(15.8f, 0.6f, 23.15f), 0, 270));
			// 瞬移镜头
            DefineAction("CameraMove1", new CutsceneActionCameraTarget(1081, 0));

			// 屏幕淡入
			DefineAction("ScreenFadeIn1", new CutsceneActionScreenFade(Color.white, 2, 1, 0), true);
			// Boss击倒动作
            DefineAction("BossAttack", new CutsceneActionPlayAnim(1081, 245), true);
			// 玩家倒地动作
			DefineAction("PlayerBeAttack", new CutsceneActionPlayAnim(-1, 248));
			// 玩家虚弱动作
			DefineAction("PlayerDown", new CutsceneActionPlayAnim(-1, 249));
			// 玩家战斗待机动作
			DefineAction("PlayerBattleStandAnim", new CutsceneActionPlayAnim(-1, 102));

			// Boss转身动作
            DefineAction("BossTurnBack", new CutsceneActionPlayAnim(1081, 247), true);
			// Boss真正转身
            DefineAction("BossMove2", new CutsceneActionCharacterMove(1081, new Vector3(12.8f, 0.6f, 23.15f), 0, 270));
			// 镜头盯着挖掘机
			DefineAction("CameraMove2", new CutsceneActionCameraTarget(new Vector3(8.97f, 0.6f, 23.28f)));

			// Boss说话
			DefineAction("StoryDialog1", new CutsceneActionStoryDialog(80), true);
			// Boss攻击挖掘机动作
            DefineAction("BossAttack2", new CutsceneActionPlayAnim(1081, 244), true);
			// 挖掘机爆炸特效
			DefineAction("ExplosionEffect", new CutsceneActionPlayEffect(392, new Vector3(11.42f, 2.8f, 22.15f)), true);
			// 挖掘机爆炸特效2
			DefineAction("ExplosionEffect2", new CutsceneActionPlayEffect(400, new Vector3(10.08f, 1.06f, 25.72f)));
			// 挖掘机爆炸音效
			DefineAction("ExplosionSound", new CutsceneActionPlaySound(197));
			// 挖掘机爆炸震动
			DefineAction("ExplosionRock", new CutsceneActionCameraRock(38));

			// 镜头动作
			DefineAction("CameraAnim", new CutsceneActionCameraAnim(35));

			// 屏幕淡出
			DefineAction("ScreenFadeOut2", new CutsceneActionScreenFade(Color.white, 1f, 0, 1), true);

			// 过场动画结束
			DefineAction("CutsceneOver", new CutsceneActionRemoteFuncCall(0), true);

			// 瞬移+击倒玩家阶段
			StartBWhenAFinish("Begin", "ScreenFadeOut1");
			StartBWhenAFinish("Begin", "MovieUI");
			StartBWhenAFinish("ScreenFadeOut1", "ScreenFadeIn1", 0.1f);
			StartBWhenAFinish("ScreenFadeOut1", "BossMove1");
			StartBWhenAFinish("ScreenFadeOut1", "PlayerBattleStandAnim");
			StartBWhenAFinish("ScreenFadeOut1", "CameraMove1");
            StartBWhenAStart("MovieUI", "PlayerMove1");

			StartBWhenAFinish("ScreenFadeIn1", "BossAttack");
			StartBWhenAStart("BossAttack", "PlayerBeAttack", 3f);
            StartBWhenAStart("BossAttack", "PlayerDown", 3.7f);
			StartBWhenAFinish("BossAttack", "CameraMove2");
			StartBWhenAFinish("BossAttack", "BossTurnBack");

			StartBWhenAFinish("BossTurnBack", "BossMove2");
			StartBWhenAFinish("BossTurnBack", "StoryDialog1");
			StartBWhenAFinish("StoryDialog1", "BossAttack2");
			StartBWhenAFinish("StoryDialog1", "CameraAnim");
			StartBWhenAStart("BossAttack2", "ExplosionEffect2", 0.5f);

			StartBWhenAFinish("BossAttack2", "ExplosionEffect");
			StartBWhenAFinish("BossAttack2", "ExplosionRock");
			StartBWhenAStart("ExplosionEffect", "ExplosionSound");

//			FinishBWhenAFinish("ExplosionEffect", "MovieUI");
			StartBWhenAFinish("ExplosionEffect", "ScreenFadeOut2", 1f);
			StartBWhenAFinish("ScreenFadeOut2", "CutsceneOver");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}