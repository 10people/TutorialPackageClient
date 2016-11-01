/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：暮色雨林剧情副本1镜头1修改：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo06 : CutsceneFactoryBase 
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (89),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (81.56f, 14.6f, 21.3f), 0), true);
			DefineAction("ScreenFadeOut1", new CutsceneActionScreenFade(Color.white, 1, 0, 1), true);
			DefineAction("ScreenFadeIn1", new CutsceneActionScreenFade(Color.white, 2, 1, 0), true);
			//DefineAction ("PlayerMove1", new CutsceneActionCharacterMove (-1, new Vector3 (81.07f, 14.8f, 16.35f), 0,180f), true);
			//DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			//DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			//DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (78.19f, 16.43f, 33.97f), 3), true);
			//DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);
			//DefineAction ("KushujingAttack2", new CutsceneActionPlayAnim (50, 9));
			//DefineAction ("KushujingAttack3", new CutsceneActionPlayAnim (51, 9));
			//DefineAction ("sekesasiMove0", new CutsceneActionCharacterMove (1149, new Vector3 (85.92f, 16.43f, 39f), 3f));
			//DefineAction ("sekesasiRun0", new CutsceneActionPlayAnim (1149, 1));
			//DefineAction("sekesasiStand0",new CutsceneActionPlayAnim(1149,0));
			//DefineAction ("DuiHua1", new CutsceneActionStoryDialog (284),true);
			// 第一次打
			if( !GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsPass(0) )
			{
				DefineAction("BlockAutoBattle",new CutsceneActionBlockAutoBattle(true));
				// 远程调用，给玩家加满XP
				DefineAction("RFC_FullXPAndNewPlayerGuide", new CutsceneActionRemoteFuncCall(0));
				// 变身引导
				DefineAction("NewPlayerGuide", new CutsceneActionNewPlayerGuide(8),true);
				//变身教学语音
				DefineAction("GuideSound1", new CutsceneActionPlaySound(323,new Vector3(0f, 0f, 0f)));
				DefineAction("BlockAutoBattle_End", new CutsceneActionBlockAutoBattle(false));
			}


			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////

			StartBWhenAStart ("Begin", "ScreenFadeOut1");
			if( !GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsPass(0) )
			{
				StartBWhenAStart("Begin", "BlockAutoBattle");
			}
			StartBWhenAStart ("ScreenFadeOut1", "HeiBian");
			//StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			//StartBWhenAStart ("PlayerMove0", "sekesasiMove0");
			//StartBWhenAStart ("PlayerMove0", "sekesasiRun0", 0.1f);
			//StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			//StartBWhenAFinish ("PlayerMove0", "sekesasiStand0");
			//StartBWhenAFinish ("PlayerMove0", "CameraMove1");
			StartBWhenAFinish("ScreenFadeOut1","PlayerMove0");
			StartBWhenAFinish ("PlayerMove0", "ScreenFadeIn1");
			StartBWhenAFinish ("ScreenFadeIn1", "DuiHua");
			//StartBWhenAStart ("CameraMove1", "KushujingAttack1");
			//StartBWhenAStart ("CameraMove1", "KushujingAttack2");
			//StartBWhenAStart ("KushujingAttack2", "KushujingAttack3");
			//StartBWhenAFinish ("CameraMove1", "PlayerMove1");
			//StartBWhenAFinish("PlayerMove1" ,"CameraMove3");
			if( !GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.IsPass(0) )
			{
				StartBWhenAStart("DuiHua", "RFC_FullXPAndNewPlayerGuide");
				//StartBWhenAFinish ("CameraMove3", "DuiHua1");
				StartBWhenAFinish ("DuiHua", "NewPlayerGuide");
				StartBWhenAStart ("NewPlayerGuide", "GuideSound1");
				StartBWhenAFinish("NewPlayerGuide", "BlockAutoBattle_End");
			}

			FinishBWhenAFinish ("DuiHua", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}