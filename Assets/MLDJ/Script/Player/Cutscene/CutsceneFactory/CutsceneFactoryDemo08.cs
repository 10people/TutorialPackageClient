/********************************************************************************
 *	文件名：	CutsceneFactoryDemo05.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo05.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：剧情副本过场动画3
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public class CutsceneFactoryDemo08 : CutsceneFactoryBase 
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
			DefineAction("HeiBian",new CutsceneActionMovieUIControl());
			DefineAction ("DuiHua", new CutsceneActionStoryDialog (91),true);
			DefineAction("BossMove", new CutsceneActionCharacterMove(163,new Vector3(6.78f, 18.79f, 16.9f),0,0));
			DefineAction("PlayerMove", new CutsceneActionCharacterMove(-1,new Vector3(6.78f, 18.79f, 13.45f),0,0));
			DefineAction("hunqitexiao", new CutsceneActionPlayEffect(474,new Vector3(80f, 18.79f, 16.3f),5));
			DefineAction("danru",new CutsceneActionScreenFade(Color.white,2,1,0),true);
			DefineAction("danchu",new CutsceneActionScreenFade(Color.white,2,0,1),true);
			DefineAction ("bossdaoxia", new CutsceneActionPlayAnim (163,422));
			
		
			
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			
			StartBWhenAStart ("Begin", "danchu");
			StartBWhenAStart ("danchu", "HeiBian");
			StartBWhenAFinish("danchu", "PlayerMove");
			StartBWhenAFinish("danchu","danru",1);
			StartBWhenAFinish("danchu","BossMove");
			StartBWhenAFinish("danchu","bossdaoxia");
			StartBWhenAFinish ("danru", "DuiHua");
			StartBWhenAStart ("DuiHua", "hunqitexiao");
			FinishBWhenAFinish ("DuiHua", "HeiBian");
			EndBuild();
			return base.CreatCutscene ();
		}
		#endregion
	}
}