/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-4
 *
 *	功能说明：黄昏湖畔副本3开场：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo57 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (197),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (27.69f, 3.57f, 61.5f), 4), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			DefineAction("Zhendongyixiakankan",new CutsceneActionCameraRock(24),true);
			DefineAction ("jiqirenMove0", new CutsceneActionCharacterMove (195, new Vector3 (30.73f, 3.57f, 55.82f), 0),true);
			DefineAction ("robotbroke", new CutsceneActionPlayAnim (195, 252));
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "HeiBian", 0.05f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "DuiHua1");
			StartBWhenAFinish ("DuiHua1", "Zhendongyixiakankan");
			StartBWhenAStart ("Zhendongyixiakankan", "danchu");
			StartBWhenAFinish ("danchu", "jiqirenMove0");
			StartBWhenAFinish ("jiqirenMove0", "robotbroke");
			StartBWhenAFinish ("jiqirenMove0", "danru",0.5f);
			FinishBWhenAFinish ("danru", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}