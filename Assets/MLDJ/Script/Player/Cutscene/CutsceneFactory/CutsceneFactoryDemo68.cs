/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：雷纳堡边缘剧情副本1进入：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo68 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (256),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (14.83f, 22f, 16.97f), 3f), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));			
			DefineAction ("liqilaiMove0", new CutsceneActionCharacterMove (1136, new Vector3 (14.81f, 22f, 18.65f), 3f));
			DefineAction ("liqilaiRun0", new CutsceneActionPlayAnim (1136, 1));
			DefineAction("liqilaiStand0",new CutsceneActionPlayAnim(1136,0));
			DefineAction ("liqilaiMove1", new CutsceneActionCharacterMove (1136, new Vector3 (12.1f, 22f, 22.79f), 1.5f), true);
			DefineAction ("liqilaiRun1", new CutsceneActionPlayAnim (1136, 1));
			DefineAction("liqilaiStand1",new CutsceneActionPlayAnim(1136,0));
			DefineAction ("PlayerMove1", new CutsceneActionCharacterMove (-1, new Vector3 (14.83f, 22f, 16.97f), 0,90f), true);
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "HeiBian", 0.05f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAStart ("PlayerMove0", "liqilaiMove0");
			StartBWhenAStart ("PlayerMove0", "liqilaiRun0", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "liqilaiStand0");
			StartBWhenAFinish ("PlayerMove0", "DuiHua");
			StartBWhenAFinish ("DuiHua", "liqilaiMove1");
			StartBWhenAStart ("liqilaiMove1", "liqilaiRun0", 0.1f);
			StartBWhenAFinish ("liqilaiMove1", "PlayerMove1");
			StartBWhenAStart("PlayerMove1","liqilaiStand0");
			FinishBWhenAFinish ("PlayerMove1", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}