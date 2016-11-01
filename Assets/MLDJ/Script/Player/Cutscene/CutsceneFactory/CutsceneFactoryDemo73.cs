/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-17
 *
 *	功能说明：雷纳堡副本1结尾：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo73 : CutsceneFactoryBase
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (263),true);
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (40.58f, 10f, 87.48f), 2f), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "PlayerMove0");
			StartBWhenAStart ("PlayerMove0", "HeiBian", 0.05f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			StartBWhenAFinish ("PlayerMove0", "DuiHua");
			StartBWhenAFinish ("DuiHua", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}