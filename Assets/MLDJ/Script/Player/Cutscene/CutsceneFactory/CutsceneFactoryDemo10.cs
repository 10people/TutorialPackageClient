/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：遗忘废墟剧情副本1第二个剧情动画：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.LogicObj;
namespace Cutscene
{
	public class CutsceneFactoryDemo10 : CutsceneFactoryBase 
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
			//DefineAction ("DuiHua", new CutsceneActionStoryDialog (108),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (107),true);
			//DefineAction("CameraMove1", new CutsceneActionCameraTarget(48,2f),true);
			//DefineAction("PlayerMove",new CutsceneActionCharacterMove(-1,new Vector3(29.09f, 18.81f, 14.84f),0),true);
			//DefineAction("PlayerRun",new CutsceneActionPlayAnim(-1,1));
			//DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			//DefineAction("LilisiMove",new CutsceneActionCharacterMove(48,new Vector3(28.09f, 18.81f, 6.22f),0));
			//DefineAction("CameraMove2", new CutsceneActionCameraTarget(new Vector3(18.33162f, 18.80838f, 20.27621f),0),true);
			//DefineAction("CameraMove4", new CutsceneActionCameraTarget(new Vector3(18.66f, 18.81f, 6.22f),2),true);
			//DefineAction("CameraMove3", new CutsceneActionCameraTarget(-1,0),true);
            //DefineAction("BlockAutoBattle",new CutsceneActionBlockAutoBattle(true));
			// 远程调用，给玩家加满XP
			//DefineAction("RFC_FullXPAndNewPlayerGuide", new CutsceneActionRemoteFuncCall(0));
			// 变身引导
			//DefineAction("NewPlayerGuide", new CutsceneActionNewPlayerGuide(8),true);
			//变身教学语音
			//DefineAction("GuideSound1", new CutsceneActionPlaySound(323,new Vector3(0f, 0f, 0f)));
           //DefineAction("BlockAutoBattle_End", new CutsceneActionBlockAutoBattle(false));
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "DuiHua1");
            //StartBWhenAStart("Begin", "BlockAutoBattle");
			StartBWhenAStart ("DuiHua1", "HeiBian");
			//StartBWhenAFinish ("DuiHua1", "CameraMove1");
			//StartBWhenAStart ("CameraMove1", "DuiHua");
			//StartBWhenAFinish ("DuiHua", "CameraMove2");
			//StartBWhenAStart ("CameraMove2", "CameraMove4");
			//StartBWhenAStart ("CameraMove2", "LilisiMove");
			//StartBWhenAFinish ("CameraMove4", "PlayerMove");
			//StartBWhenAFinish ("PlayerMove","CameraMove3");
			//StartBWhenAStart ("CameraMove3", "RFC_FullXPAndNewPlayerGuide");
			FinishBWhenAStart ("DuiHua1", "HeiBian");
			//StartBWhenAFinish ("CameraMove3", "NewPlayerGuide");
			//StartBWhenAStart ("NewPlayerGuide", "GuideSound1");
           // StartBWhenAFinish("NewPlayerGuide", "BlockAutoBattle_End");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}