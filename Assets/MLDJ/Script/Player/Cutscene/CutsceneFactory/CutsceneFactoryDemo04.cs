/********************************************************************************
 *	文件名：	CutsceneFactoryDemo04.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo04.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：Demo的过场动画4：沙漠boss入场
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo04 : CutsceneFactoryBase 
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
            // 玩家说：休想破坏时空稳定器！
			DefineAction("StoryDialog1", new CutsceneActionStoryDialog(84), true);
            // 镜头移到Boss
            DefineAction("CameraMoveToBoss", new CutsceneActionCameraTarget(new Vector3(13.65f, 0.6f, 23.15f)), true);
            // Boss说：阻碍计划者，死！
			DefineAction("StoryDialog2", new CutsceneActionStoryDialog(78), true);
            // Boss走到台中
            DefineAction("BossWalk", new CutsceneActionPlayAnim(1081, 246));
            DefineAction("BossMoveToCenter", new CutsceneActionCharacterMove(1081, new Vector3(17.65f, 0.6f, 20f), 1f), true);
			DefineAction("CameraStareBoss", new CutsceneActionCameraTarget(new Vector3(17.65f, 0.6f, 20f),1f));
            DefineAction("BossStand", new CutsceneActionPlayAnim(1081, 102));
            // 取消阻挡，小怪出生
            DefineAction("XiaoGuaiBorn", new CutsceneActionRemoteFuncCall(1));
            // Boss说：你找死！
            DefineAction("StoryDialog4", new CutsceneActionStoryDialog(286), true);
            // 镜头移到玩家
            DefineAction("CameraMoveToPlayer", new CutsceneActionCameraTarget(-1), true);
            // 玩家说：你妄图摧毁时空稳定器召出恶魔军团？有我在这里你就休想！
			DefineAction("StoryDialog3", new CutsceneActionStoryDialog(79), true);
            // 变身引导
            DefineAction("BianShenGuide", new CutsceneActionNewPlayerGuide(1), true);
			// Demo的第一个过场动画结束
			DefineAction("CutsceneOver", new CutsceneActionRemoteFuncCall(2), true);

            // 镜头移到小怪
            //DefineAction("CameraMove2", new CutsceneActionCameraTarget(new Vector3(16.23f, 0.6f, 20.67f)), true);

			StartBWhenAFinish("Begin", "MovieUI");
			StartBWhenAFinish("Begin", "StoryDialog1", 0.1f);
			StartBWhenAFinish("StoryDialog1", "CameraMoveToBoss");
			StartBWhenAFinish("CameraMoveToBoss", "StoryDialog2", 1f);
            StartBWhenAStart("StoryDialog2", "BossMoveToCenter",1f);
			StartBWhenAStart("BossMoveToCenter", "BossWalk", 0.05f);
			StartBWhenAStart("BossMoveToCenter", "CameraStareBoss");
            StartBWhenAFinish("BossMoveToCenter", "BossStand");
            StartBWhenAFinish("BossMoveToCenter", "XiaoGuaiBorn");
            StartBWhenAFinish("BossMoveToCenter", "StoryDialog4", 1f);
            StartBWhenAFinish("StoryDialog4", "CameraMoveToPlayer");
            StartBWhenAFinish("CameraMoveToPlayer", "StoryDialog3");
            StartBWhenAFinish("StoryDialog3", "BianShenGuide");
            StartBWhenAFinish("BianShenGuide", "CutsceneOver");
            FinishBWhenAStart("CutsceneOver", "MovieUI");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}