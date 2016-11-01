/********************************************************************************
 *	文件名：	CutsceneFactoryCommonMiniDialog.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryCommonMiniDialog.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-05-05
 *
 *	功能说明：通用小对话
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;

namespace Cutscene
{
	public class CutsceneFactoryCommonDialog : CutsceneFactoryBase 
	{
		#region Fields
		private int m_nStoryID;
		private bool m_bIsMiniStory;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		private CutsceneFactoryCommonDialog() {}

		public CutsceneFactoryCommonDialog (int nStoryID)
		{
			m_nStoryID = nStoryID;
			if (m_nStoryID < 0) return;
			Tab_StoryTable storyTable = TableManager.GetStoryTableByID(m_nStoryID, 0);
			if (storyTable == null) 
			{
				Module.Log.LogModule.ErrorLog("Can not find storyTable {0}", m_nStoryID);
				return;			
			}
			Tab_ClientStoryTable storyLine = TableManager.GetClientStoryTableByID(storyTable.ClientStoryID, 0);
			m_bIsMiniStory = storyLine.DialogType == 1;
		}

		/// <summary>
		/// 用这个Factory创建一个Cutscene
		/// </summary>
		/// <returns>The cutscene.</returns>
		public override Cutscene CreatCutscene ()
		{
			BeginBuild();

			if (!m_bIsMiniStory)
			{
				// 电影黑边界面控制
				DefineAction("MovieUI", new CutsceneActionMovieUIControl());
				StartBWhenAFinish("Begin", "MovieUI");
				// 彩蛋
				DefineAction("CYou Cabal", new CutsceneActionStoryDialog(m_nStoryID), true);
				StartBWhenAFinish("Begin", "CYou Cabal");
				FinishBWhenAFinish("CYou Cabal", "MovieUI");
			}
			else
			{
				// 彩蛋
				DefineAction("CYou Cabal", new CutsceneActionStoryDialog(m_nStoryID), true);
				StartBWhenAFinish("Begin", "CYou Cabal");
			}
			EndBuild();
			return base.CreatCutscene ();
		}

		#endregion
	}
}
