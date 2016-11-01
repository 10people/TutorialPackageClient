/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-11-21
 *
 *	功能说明：血色冰封剧情副本3,第三阶段 ：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo49 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (187),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3(82.4f, 18.79f, 17.96f), 2f), true);
			// 传送门出现
			DefineAction("DoorOpenEffect", new CutsceneActionPlayEffect(398, new Vector3(83.5f, 18.79f, 20.7f)));
			// 传送门出现音效
			DefineAction("DoorOpenSound", new CutsceneActionPlaySound(204));
			// 传送门持续
			DefineAction("DoorEffect", new CutsceneActionPlayEffect(396, new Vector3(83.5f, 18.79f, 20.7f), 999f));
			// 传送门消失
			DefineAction("DoorCloseEffect", new CutsceneActionPlayEffect(397, new Vector3(83.5f, 18.79f, 20.7f)));
			// 传送门消失音效
			DefineAction("DoorCloseSound", new CutsceneActionPlaySound(203));
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);
			//阿里奥奈尔消失
			DefineAction ("npcMove1", new CutsceneActionCharacterMove (180,new Vector3(30f, 0f, 30f), 0), true);
			//艾莉娜消失
			DefineAction ("npcMove2", new CutsceneActionCharacterMove (179,new Vector3(30f, 0f, 30f), 0), true);
			DefineAction("danru1",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu1",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "CameraMove1");
			StartBWhenAStart ("CameraMove1", "HeiBian");
			StartBWhenAFinish ("CameraMove1", "DuiHua");
			// Boss开传送门跑路阶段
			StartBWhenAFinish("DuiHua", "DoorOpenEffect");
			StartBWhenAStart("DoorOpenEffect", "DoorOpenSound");
			StartBWhenAFinish("DuiHua", "DoorEffect", 0.5f);						
			// boss消失 关门
			StartBWhenAFinish ("DuiHua", "danchu", 1.5f);
			StartBWhenAFinish ("danchu", "npcMove1");
			StartBWhenAFinish ("npcMove1", "npcMove2");
			StartBWhenAFinish ("npcMove2", "danru");
			StartBWhenAFinish("danru", "DoorCloseEffect");
			StartBWhenAStart("DoorCloseEffect", "DoorCloseSound");
			FinishBWhenAFinish("danru", "DoorEffect");
			StartBWhenAFinish ("danru", "CameraMove3",2f);
			FinishBWhenAStart ("CameraMove3", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}