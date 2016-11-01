/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-4
 *
 *	功能说明：黄昏湖畔剧情副本2开场动画：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo55 : CutsceneFactoryBase
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
			///////////////////////////////////////////////////////////////////
			DefineAction ("HeiBian", new CutsceneActionMovieUIControl ());
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (193),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (194),true);
			DefineAction ("DuiHua2", new CutsceneActionStoryDialog (195),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (36.91f, 2.7f, 26.24f), 2), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));			
			DefineAction ("guaiMove0", new CutsceneActionCharacterMove (190, new Vector3 (33.9f, 2.7f, 23.66f), 0.5f));
			DefineAction ("guaiRun0", new CutsceneActionPlayAnim (190, 1));
			DefineAction("guaiStand0",new CutsceneActionPlayAnim(190,0));
			DefineAction("guaidie0",new CutsceneActionPlayAnim(190,422));
			DefineAction ("guaishunyi0", new CutsceneActionCharacterMove (190, new Vector3 (27.43f, 3.56f, 56.51f), 0));
			DefineAction ("guaiMove1", new CutsceneActionCharacterMove (188, new Vector3 (41.14f, 2.7f, 24.14f), 0.5f));
			DefineAction ("guaiRun1", new CutsceneActionPlayAnim (188, 1));
			DefineAction("guaiStand1",new CutsceneActionPlayAnim(188,0));
			DefineAction("guaidie1",new CutsceneActionPlayAnim(188,422));
			DefineAction ("guaishunyi1", new CutsceneActionCharacterMove (188, new Vector3 (27.43f, 3.56f, 56.51f), 0));
			DefineAction ("guaiMove2", new CutsceneActionCharacterMove (185, new Vector3 (41.1f, 2.7f, 29.14f), 0.5f));
			DefineAction ("guaiRun2", new CutsceneActionPlayAnim (185, 1));
			DefineAction("guaiStand2",new CutsceneActionPlayAnim(185,0));
			DefineAction("guaidie2",new CutsceneActionPlayAnim(185,422));
			DefineAction ("guaishunyi2", new CutsceneActionCharacterMove (185, new Vector3 (27.43f, 3.56f, 56.51f), 0));
			DefineAction ("guaiMove3", new CutsceneActionCharacterMove (187, new Vector3 (33.7f, 2.7f, 28.37f), 0.5f));
			DefineAction ("guaiRun3", new CutsceneActionPlayAnim (187, 1));
			DefineAction("guaiStand3",new CutsceneActionPlayAnim(187,0));
			DefineAction("guaidie3",new CutsceneActionPlayAnim(187,422));
			DefineAction ("guaishunyi3", new CutsceneActionCharacterMove (187, new Vector3 (27.43f, 3.56f, 56.51f), 0));
			DefineAction("guaidie4",new CutsceneActionPlayAnim(186,422));
			DefineAction ("guaishunyi4", new CutsceneActionCharacterMove (186, new Vector3 (27.43f, 3.56f, 56.51f), 0));
			DefineAction("guaidie5",new CutsceneActionPlayAnim(189,422));
			DefineAction ("guaishunyi5", new CutsceneActionCharacterMove (189, new Vector3 (27.43f, 3.56f, 56.51f), 0));
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (30.78f, 2.7f, 26.11f), 1));
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);
			DefineAction ("LinMove0", new CutsceneActionCharacterMove (191, new Vector3 (36.25f, 2.7f, 27.98f), 0));
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "HeiBian", 0.05f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "CameraMove1");
			StartBWhenAFinish ("PlayerMove0", "DuiHua");
			StartBWhenAFinish("DuiHua", "CameraMove3");
			StartBWhenAStart ("CameraMove3", "guaiMove0");
			StartBWhenAStart ("CameraMove3", "guaiRun0",0.05f);
			StartBWhenAStart ("CameraMove3", "guaiStand0",0.5f);			
			StartBWhenAStart ("CameraMove3", "guaiMove1");
			StartBWhenAStart ("CameraMove3", "guaiRun1",0.05f);
			StartBWhenAStart ("CameraMove3", "guaiStand1",0.5f);
			StartBWhenAFinish ("CameraMove3", "DuiHua1");
			StartBWhenAStart ("DuiHua1", "guaiMove2");
			StartBWhenAStart ("DuiHua1", "guaiRun2",0.05f);
			StartBWhenAStart ("DuiHua1", "guaiStand2",0.5f);			
			StartBWhenAStart ("DuiHua1", "guaiMove3");
			StartBWhenAStart ("DuiHua1", "guaiRun3",0.05f);
			StartBWhenAStart ("DuiHua1", "guaiStand3",0.5f);
			StartBWhenAFinish ("DuiHua1", "danchu");
			StartBWhenAFinish ("danchu", "LinMove0");
			StartBWhenAFinish("danchu","guaishunyi0");
			StartBWhenAFinish("danchu","guaishunyi1");
			StartBWhenAFinish("danchu","guaishunyi2");
			StartBWhenAFinish("danchu","guaishunyi3");
			StartBWhenAFinish("danchu","guaishunyi4");
			StartBWhenAFinish("danchu","guaishunyi5");
			StartBWhenAFinish ("danchu", "danru",0.5f);
			StartBWhenAFinish ("danru", "DuiHua2");

			FinishBWhenAFinish ("DuiHua2", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}