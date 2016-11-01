/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-16
 *
 *	功能说明：呼啸沙漠剧情副本3结束：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo66 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (254),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (30.56f, 14.99f, 21.56f), 0), true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (new Vector3 (21.6f, 14.99f, 20.64f), 1), true);
			DefineAction ("CameraMove3", new CutsceneActionCameraTarget (-1, 0), true);	
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,0.5f,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,0.5f),true);		
			DefineAction ("bossmove0", new CutsceneActionCharacterMove (1116, new Vector3 (21.6f, 14.99f, 20.64f), 0,90f), true);

			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart("Begin", "danchu");
			StartBWhenAStart ("danchu", "HeiBian");
			StartBWhenAFinish ("danchu", "PlayerMove0");
			StartBWhenAFinish ("PlayerMove0", "bossmove0");
			StartBWhenAFinish ("bossmove0", "danru");
			StartBWhenAFinish ("danru", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "DuiHua");
			StartBWhenAFinish ("DuiHua", "CameraMove3");
			FinishBWhenAFinish ("CameraMove3", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}