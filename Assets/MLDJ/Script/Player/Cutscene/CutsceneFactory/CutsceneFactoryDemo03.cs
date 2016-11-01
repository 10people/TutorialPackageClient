/********************************************************************************
 *	文件名：	CutsceneFactoryDemo03.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo03.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：Demo的过场动画3：主角进入沙漠
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo03 : CutsceneFactoryBase 
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

			// 镜头焦点盯着出口
            DefineAction("CameraStay", new CutsceneActionCameraTarget(new Vector3(13.04f, 0.34f, 3.2f), 0));
			// 屏幕淡入
			DefineAction("ScreenFadeIn1", new CutsceneActionScreenFade(Color.white, 1f, 1, 0));
			// 摄像机参数回复
			DefineAction("ResetCamera", new CutsceneActionResetDefaultCameraParam());
			// 电影黑边界面控制
			DefineAction("MovieUI", new CutsceneActionMovieUIControl());
			// 玩家瞬移
			DefineAction("PlayerInitMove", new CutsceneActionCharacterMove(0, new Vector3(8.13f, 0.34f, 4.91f), 0), true);
			// 玩家骑机车移动
            DefineAction("PlayerMove", new CutsceneActionCharacterMove(0, new Vector3(12.66f, 0.34f, 4.57f), 1), true);

            DefineAction("BossBorn", new CutsceneActionRemoteFuncCall(0), true);

            DefineAction("CameraStayBoss", new CutsceneActionCameraTarget(new Vector3(13.65f, 0.6f, 23.15f), 0));

            DefineAction("StoryDialogBoss", new CutsceneActionStoryDialog(85), true);

            //DefineAction("CameraMoveBridge", new CutsceneActionCameraTarget(new Vector3(9.31f, 0.34f, 4.6f), 2), true);

            DefineAction("XiaoGuaiBorn", new CutsceneActionRemoteFuncCall(1));

            //DefineAction("PlayerBridge", new CutsceneActionCharacterMove(0, new Vector3(33.89f, 56.60f, 20.89f), 0));

            // 焦点回到玩家
			DefineAction("CameraReset", new CutsceneActionCameraTarget(-1, 1));
			// 玩家说话
			DefineAction("StoryDialog1", new CutsceneActionStoryDialog(77), true);
			// 镜头动作
			DefineAction("CameraAnim", new CutsceneActionCameraAnim(34));
			// 落石音效
			DefineAction("LuoshiSound", new CutsceneActionPlaySound(199));
			// 落石特效
			DefineAction("LuoShiEffect", new CutsceneActionPlayEffect(395, new Vector3(8.5f, 0.72f, 2.97f)));
			// 落石震动
			DefineAction("CameraRock", new CutsceneActionCameraAnim(39));

			// Demo的第二个过场动画结束
			DefineAction("CutsceneOver", new CutsceneActionRemoteFuncCall(2), true);


            StartBWhenAFinish("Begin", "ScreenFadeIn1");
            StartBWhenAFinish("Begin", "MovieUI");
            StartBWhenAFinish("Begin", "BossBorn");
            StartBWhenAFinish("Begin", "CameraStayBoss");
            StartBWhenAStart("BossBorn", "StoryDialogBoss");  
            StartBWhenAFinish("StoryDialogBoss", "PlayerInitMove");
            StartBWhenAFinish("StoryDialogBoss", "XiaoGuaiBorn");
            //StartBWhenAFinish("CameraMoveBridge", "PlayerInitMove", 2.0f);
            StartBWhenAFinish("PlayerInitMove", "CameraStay");
            StartBWhenAFinish("PlayerInitMove", "ResetCamera");
            StartBWhenAFinish("PlayerInitMove", "LuoshiSound");
            StartBWhenAFinish("PlayerInitMove", "LuoShiEffect");
            StartBWhenAFinish("PlayerInitMove", "CameraRock");
            StartBWhenAFinish("PlayerInitMove", "PlayerMove");
            StartBWhenAFinish("PlayerMove", "StoryDialog1");
            StartBWhenAFinish("PlayerMove", "CameraReset");
            StartBWhenAFinish("StoryDialog1", "CutsceneOver");
            FinishBWhenAFinish("StoryDialog1", "MovieUI");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}