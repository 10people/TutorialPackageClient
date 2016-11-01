/********************************************************************************
 *	文件名：	CutsceneFactoryDemo01.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo01.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：Demo的过场动画1：铁轨上BOSS登场
 *	修改记录：和02号剧本合并，此剧本弃用     by TT
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo01 : CutsceneFactoryBase 
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

			// 移动镜头
			DefineAction("CameraMove1", new CutsceneActionCameraTarget(new Vector3(71.49f, 58.42f, 64.44f)), true);
			// 电影黑边界面控制
			DefineAction("MovieUI", new CutsceneActionMovieUIControl());
			// Boss出生
			DefineAction("BossBorn", new CutsceneActionRemoteFuncCall(0));
			// Boss出生音效
			DefineAction("BossBornSound", new CutsceneActionPlaySound(205));
			// Boss说话
			DefineAction("StoryDialog1", new CutsceneActionStoryDialog(76), true);
			// 镜头移到小怪
			//DefineAction("CameraMove2", new CutsceneActionCameraTarget(new Vector3(71.55f, 58.4f, 55.31f)), true);
			// 小怪出生
			//DefineAction("XiaoGuaiBorn", new CutsceneActionRemoteFuncCall(1));
			// 镜头移回玩家
			//DefineAction("CameraReset", new CutsceneActionCameraTarget(-1), true);
			// Demo的第一个过场动画结束
			DefineAction("CutsceneOver", new CutsceneActionRemoteFuncCall(2), true);
			// BOSS出场震动
			DefineAction("CameraRock", new CutsceneActionCameraAnim(36));

            //DefineAction("SkillGuide", new CutsceneActionNewPlayerGuide(3), true);

//			// 玩家倒地动作
//			DefineAction("PlayerBeAttack", new CutsceneActionPlayAnim(-1, 248));
//			// 玩家虚弱动作
//			DefineAction("PlayerDown", new CutsceneActionPlayAnim(-1, 249));

			StartBWhenAFinish("Begin", "CameraMove1");
			StartBWhenAFinish("Begin", "MovieUI");
			StartBWhenAFinish("CameraMove1", "BossBorn");
			StartBWhenAStart("BossBorn", "BossBornSound", 0.3f);
			StartBWhenAStart("BossBorn", "CameraRock", 0.5f);
			StartBWhenAFinish("CameraMove1", "StoryDialog1", 2);
			//StartBWhenAFinish("StoryDialog1", "CameraMove2");
			//StartBWhenAFinish("CameraMove2", "XiaoGuaiBorn");
			//StartBWhenAFinish("CameraMove2", "CameraReset", 1f);
            FinishBWhenAFinish("StoryDialog1", "MovieUI");
            StartBWhenAFinish("StoryDialog1", "CutsceneOver");
            //StartBWhenAStart("CutsceneOver", "SkillGuide");

//			StartBWhenAFinish("Begin", "CutsceneOver", 10);
//			StartBWhenAStart("Begin", "PlayerBeAttack", 1);
//			StartBWhenAFinish("PlayerBeAttack", "PlayerDown");

			EndBuild();
			return base.CreatCutscene ();
		}

		#endregion
	}
}
