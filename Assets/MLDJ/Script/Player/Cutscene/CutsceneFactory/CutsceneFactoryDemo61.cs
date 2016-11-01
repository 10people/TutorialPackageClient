/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-12-5
 *
 *	功能说明：黄昏之湖剧情副本2：
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo61 : CutsceneFactoryBase
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
			DefineAction ("DuiHua1", new CutsceneActionStoryDialog (201),true);

			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart("Begin", "DuiHua1");
			StartBWhenAStart ("DuiHua1", "HeiBian");
			FinishBWhenAFinish ("DuiHua1", "HeiBian");

			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}