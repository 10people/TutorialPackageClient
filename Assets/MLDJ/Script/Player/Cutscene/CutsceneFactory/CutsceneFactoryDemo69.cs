/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：雷纳堡边境副本1第二阶段：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo69 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (257),true);
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (258),true);
			//DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (14.83f, 22f, 16.97f), 3f), true);
			DefineAction ("liqilaiMove1", new CutsceneActionCharacterMove (1136, new Vector3 (12.1f, 22f, 22.79f), 0,180f), true);
			DefineAction ("liqilaiMove2", new CutsceneActionCharacterMove (1136, new Vector3 (99f, 22f, 99f), 0), true);
			//DefineAction ("PlayerMove1", new CutsceneActionCharacterMove (-1, new Vector3 (14.83f, 22f, 16.97f), 0,90f), true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (12.1f, 22f, 22.79f), 1.5f), true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);	
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,0.5f,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,0.5f),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "liqilaiMove1");
			StartBWhenAStart ("liqilaiMove1", "HeiBian");
			StartBWhenAFinish ("liqilaiMove1", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "DuiHua");
			StartBWhenAFinish ("DuiHua", "danchu");
			StartBWhenAFinish ("danchu", "liqilaiMove2");
			StartBWhenAFinish ("liqilaiMove2", "danru");
			StartBWhenAFinish ("danru", "CameraMove3");
			StartBWhenAFinish ("CameraMove3", "DuiHua1");
			FinishBWhenAFinish ("DuiHua1", "HeiBian");


			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}