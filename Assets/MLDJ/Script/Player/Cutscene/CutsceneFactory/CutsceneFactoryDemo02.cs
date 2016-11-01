/********************************************************************************
 *	文件名：	CutsceneFactoryDemo02.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo02.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：Demo的过场动画2：铁轨上BOSS退场
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo02 : CutsceneFactoryBase 
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
			//DefineAction("BossMove1", new CutsceneActionCharacterMove(1080, new Vector3(71.5f, 58.4f, 65.8f), 0, 180));
			// 玩家战斗待机动作
			DefineAction("PlayerBattleStandAnim", new CutsceneActionPlayAnim(-1, 102));

			// 玩家瞬移
			DefineAction("PlayerMove1", new CutsceneActionCharacterMove(0, new Vector3(71.6f, 58.4f, 60.2f), 0, 0));
			// 瞬移镜头
			DefineAction("CameraMove1", new CutsceneActionCameraTarget(new Vector3(71.5f, 58.4f, 63.5f), 0));

			// 屏幕淡入
			DefineAction("ScreenFadeIn1", new CutsceneActionScreenFade(Color.white, 2, 1, 0), true);

			// 玩家眩晕特效
			DefineAction("PlayerStunEffect", new CutsceneActionPlayEffect(393, new Vector3(71.6f, 60.2f, 61.2f), 999f));
			// Boss说话
			DefineAction("StoryDialog1", new CutsceneActionStoryDialog(81), true);

			// Boss技能3动作
			DefineAction("BossSkill3Anim", new CutsceneActionPlayAnim(1080, 242), true);
			// 爆炸特效
			DefineAction("ExplosionEffect", new CutsceneActionPlayEffect(399, new Vector3(72f, 58f, 63.5f)));
			// 爆炸音效
			DefineAction("ExplosionSound", new CutsceneActionPlaySound(198));
			// 持续爆炸特效
			DefineAction("ExplosionEffect2", new CutsceneActionPlayEffect(394, new Vector3(71.7f, 58.21f, 67.81f), 1f), true);

			// 小爆炸震动
//			DefineAction("XiaoExplisionCameraRock", new CutsceneActionCameraAnim(37));
			// 大爆炸震动
			DefineAction("DaExplisionCameraRock", new CutsceneActionCameraAnim(38));

			// 镜头动作
			DefineAction("CameraAnim", new CutsceneActionCameraAnim(35));
			
			//			// 镜头移到Boss
//			DefineAction("CameraMoveToBoss", new CutsceneActionCameraTarget(1080));
			// 传送门出现
			DefineAction("DoorOpenEffect", new CutsceneActionPlayEffect(398, new Vector3(71.4f, 58.4f, 69.7f)));
			// 传送门出现音效
			DefineAction("DoorOpenSound", new CutsceneActionPlaySound(204));
			// 传送门持续
			DefineAction("DoorEffect", new CutsceneActionPlayEffect(396, new Vector3(71.4f, 58.4f, 69.7f), 999f));
			// 传送门持续音效
			//DefineAction("DoorSound", new CutsceneActionPlaySound(202));
			// 传送门消失
			DefineAction("DoorCloseEffect", new CutsceneActionPlayEffect(397, new Vector3(71.4f, 58.4f, 69.7f)));
			// 传送门消失音效
			DefineAction("DoorCloseSound", new CutsceneActionPlaySound(203));

			// Boss转身动作
			DefineAction("BossTurnBack", new CutsceneActionPlayAnim(1080, 247), true);
			// Boss走路动作
			DefineAction("BossWalk", new CutsceneActionPlayAnim(1080, 246));

			// Boss走向传送门
			DefineAction("BossMoveToDoor", new CutsceneActionCharacterMove(1080, new Vector3(71.4f, 58.4f, 69.7f), 1f), true);
			// Boss消失
			DefineAction("BossDisappear", new CutsceneActionCharacterMove(1080, new Vector3(26.85f, 56.59f, 47.6f), 0));
			// 镜头移回玩家所在位置
			DefineAction("CameraStay", new CutsceneActionCameraTarget(new Vector3(71.4f, 58.4f, 69.7f), 0.1f), true);


			// 镜头焦点变成玩家
			DefineAction("CameraReset", new CutsceneActionCameraTarget(-1), true);

			// 玩家追赶
			DefineAction("PlayerRun", new CutsceneActionCharacterMove(0, new Vector3(71.4f, 58.4f, 65f), 1f), true);
			// 玩家站立动作
			DefineAction("PlayerStandAnim", new CutsceneActionPlayAnim(-1, 0));
			// 玩家跑步动作
			DefineAction("PlayerRunAnim", new CutsceneActionPlayAnim(-1, 1));

			// 玩家上骑乘
			DefineAction("PlayerMountMoto", new CutsceneActionRemoteFuncCall(0));
			// Demo的第二个过场动画结束
			DefineAction("CutsceneOver", new CutsceneActionRemoteFuncCall(1), true);
			// 玩家急速移动
			DefineAction("PlayerMotoMove", new CutsceneActionCharacterMove(0, new Vector3(70f, 58.4f, 197f), 4f), true);
			// 结束时屏幕淡出
			DefineAction("ScreenFadeOut2", new CutsceneActionScreenFade(Color.white, .5f, 0, 1), true);
			// 炸车震动
			DefineAction("ZhaCheZhenDong", new CutsceneActionZhaCheZhenDong(37, 1f));

			// 运动模糊
			DefineAction("MotionBlur", new CutsceneActionCameraEffect());

            // ==================== new added by TT ===========================
            // Boss出生
            DefineAction("BossBorn", new CutsceneActionRemoteFuncCall(2));
            // Boss出生音效
            DefineAction("BossBornSound", new CutsceneActionPlaySound(205));
            // BOSS出场震动
            DefineAction("CameraRock", new CutsceneActionCameraAnim(36));

            // 剧本开始
			// 开始后屏幕淡出
			StartBWhenAFinish("Begin", "ScreenFadeOut1");
			// 开始后开启电影界面
			StartBWhenAFinish("Begin", "MovieUI");
			// 屏幕淡出后屏幕淡入
			StartBWhenAFinish("ScreenFadeOut1", "ScreenFadeIn1", 0.1f);
			// 屏幕淡出后BOSS移动到指定位置，弃用
			//StartBWhenAFinish("ScreenFadeOut1", "BossMove1");
			// 屏幕淡出后玩家移动到指定位置
			StartBWhenAFinish("ScreenFadeOut1", "PlayerMove1");
			StartBWhenAFinish("ScreenFadeOut1", "PlayerBattleStandAnim", 0.5f);
			// 屏幕淡出后摄像机移动到指定位置
			StartBWhenAFinish("ScreenFadeOut1", "CameraMove1");
			// 玩家眩晕特效
//			StartBWhenAFinish("ScreenFadeIn1", "PlayerStunEffect");
            // 屏幕淡出后魔王出生
            StartBWhenAFinish("ScreenFadeOut1", "BossBorn");
            StartBWhenAStart("BossBorn", "BossBornSound", 0.3f);
            StartBWhenAStart("BossBorn", "CameraRock", 0.5f);
			// Boss炸车对话
            StartBWhenAFinish("ScreenFadeIn1", "StoryDialog1", 2);
			// Boss对话完了后做炸车动作
			StartBWhenAFinish("StoryDialog1", "BossSkill3Anim");
			// Boss炸车动作播到一半时开始摄像机动画
			//StartBWhenAStart("BossSkill3Anim", "CameraAnim", 2f);
			StartBWhenAStart("BossSkill3Anim", "ExplosionEffect", 2f);
//			StartBWhenAStart("BossSkill3Anim", "XiaoExplisionCameraRock", 2f);
			StartBWhenAStart("BossSkill3Anim", "ZhaCheZhenDong", 2f);
//			StartBWhenAFinish("StoryDialog1", "BossSkill3Anim");

			// Boss开传送门跑路阶段
			StartBWhenAFinish("BossSkill3Anim", "BossTurnBack");
			StartBWhenAFinish("BossSkill3Anim", "DoorOpenEffect");
			StartBWhenAStart("DoorOpenEffect", "DoorOpenSound");
			StartBWhenAFinish("BossSkill3Anim", "DoorEffect", 0.5f);
			//StartBWhenAStart("DoorEffect", "DoorSound");
			StartBWhenAFinish("BossTurnBack", "BossWalk");
			StartBWhenAFinish("BossTurnBack", "BossMoveToDoor");
//			FinishBWhenAStart("BossMoveToDoor", "PlayerStunEffect");

			// boss消失 关门
			StartBWhenAFinish("BossMoveToDoor", "BossDisappear");
			StartBWhenAFinish("BossMoveToDoor", "DoorCloseEffect");
			StartBWhenAStart("DoorCloseEffect", "DoorCloseSound");
			FinishBWhenAFinish("BossMoveToDoor", "DoorEffect");
			

			// 玩家上骑乘追赶阶段			
			StartBWhenAStart("BossMoveToDoor", "PlayerRun", 0.5f);
			StartBWhenAStart("PlayerRun", "PlayerRunAnim");
			StartBWhenAFinish("PlayerRun", "PlayerStandAnim");
			StartBWhenAFinish("PlayerRun", "PlayerMountMoto", 1f);
//			StartBWhenAFinish("BossMoveToDoor", "CameraStay");
			StartBWhenAFinish("PlayerRun", "PlayerMotoMove", 3f);
			StartBWhenAStart("PlayerMotoMove", "MotionBlur");
			FinishBWhenAStart("PlayerMotoMove", "MotionBlur", 1f);
			StartBWhenAStart("PlayerMotoMove", "ExplosionEffect2");
			FinishBWhenAStart("PlayerMotoMove", "ZhaCheZhenDong");
			StartBWhenAStart("PlayerMotoMove", "DaExplisionCameraRock");
			StartBWhenAStart("ExplosionEffect2", "ExplosionSound");
			StartBWhenAStart("ExplosionEffect2", "ScreenFadeOut2", 0.8f);
			//			FinishBWhenAFinish("ScreenFadeOut2", "CameraAnim");

			StartBWhenAFinish("ScreenFadeOut2", "CutsceneOver");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}