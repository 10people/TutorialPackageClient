/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：试水boss血量50%：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo31 : CutsceneFactoryBase 
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
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (135),true);

			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////

			StartBWhenAStart("Begin", "DuiHua");
			StartBWhenAStart ("DuiHua", "HeiBian");
			FinishBWhenAFinish ("DuiHua", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}