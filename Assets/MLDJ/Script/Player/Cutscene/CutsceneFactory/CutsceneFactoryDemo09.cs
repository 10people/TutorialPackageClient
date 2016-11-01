/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryTest.cs
 *	创建人：	赵琦
 *	创建时间：2015-8-10
 *
 *	功能说明：遗忘废墟剧情副本1第一个剧情动画：
 *	修改记录：
*********************************************************************************/


using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo09 : CutsceneFactoryBase 
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

			DefineAction ("DuiHua", new CutsceneActionStoryDialog (107),true);

			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////

			StartBWhenAStart("Begin", "DuiHua");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}