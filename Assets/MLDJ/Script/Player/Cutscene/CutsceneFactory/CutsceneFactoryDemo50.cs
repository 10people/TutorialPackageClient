/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-11-21
 *
 *	功能说明：血色冰封剧情副本3最后一个 ：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo50 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (188),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (82.4f, 19.06f, 17.96f), 1), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "danchu");
			StartBWhenAStart ("danchu", "HeiBian");
			StartBWhenAFinish ("danchu", "danru", 1f);
			StartBWhenAFinish ("danru", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "DuiHua");
			FinishBWhenAFinish ("DuiHua", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}