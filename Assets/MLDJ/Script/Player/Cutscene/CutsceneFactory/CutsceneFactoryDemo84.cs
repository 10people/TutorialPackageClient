/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：血色冰封副本3结束：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo84 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (276),true);
			DefineAction ("CameraMove1", new CutsceneActionCameraTarget (1140,1),true);
			DefineAction ("CameraMove8", new CutsceneActionCameraTarget (-1,0),true);
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,1,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,1,0,1),true);
			DefineAction("PlayerMove", new CutsceneActionCharacterMove(-1,new Vector3(77.47f, 2f, 68.08f),0,0),true);	
			DefineAction("BossMove", new CutsceneActionCharacterMove(1140,new Vector3(76.96f, 2f, 79.52f),0,180f),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart("Begin", "danchu");
			StartBWhenAStart ("danchu", "HeiBian");
			StartBWhenAFinish ("danchu", "BossMove");
			StartBWhenAFinish ("BossMove", "PlayerMove");
			StartBWhenAFinish ("PlayerMove", "danru");
			StartBWhenAFinish ("danru", "CameraMove1");
			StartBWhenAFinish ("CameraMove1", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "CameraMove8");
			FinishBWhenAFinish ("CameraMove8", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}