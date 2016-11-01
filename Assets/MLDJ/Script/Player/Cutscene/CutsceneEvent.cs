/********************************************************************************
 *	文件名：	CutsceneEvent.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneEvent.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画流程事件
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
	public struct CutsceneEvent
	{
		#region Fields

		public static CutsceneEvent EmptyEvent = new CutsceneEvent();

		/// <summary>
		/// 归属ActionContainer的编号
		/// </summary>

		/// <summary>
		/// 自定义Event编号
		/// </summary>
		public int m_nCustomEventID;

		#endregion
		
		#region Properties

//		/// <summary>
//		/// 空的Event
//		/// </summary>
//		/// <value>The empty event.</value>
//		public static CutsceneEvent EmptyEvent
//		{
//			get
//			{
//				CutsceneEvent emptyEvent = new CutsceneEvent();
//				emptyEvent.nCustomEventID = -1;
//				return emptyEvent;
//			}
//		}
		#endregion
		
		#region Methods

		public CutsceneEvent (int nCustomEventID)
		{
			m_nCustomEventID = nCustomEventID;
		}

		public static bool operator == (CutsceneEvent event1, CutsceneEvent event2)
		{
			return event1.m_nCustomEventID == event2.m_nCustomEventID;
		}

		public static bool operator != (CutsceneEvent event1, CutsceneEvent event2)
		{
			return event1.m_nCustomEventID != event2.m_nCustomEventID;
		}
		#endregion

	}
}
