/********************************************************************************
 *	文件名：	CutsceneActionBase.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneActionBase.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画任务类
 *	修改记录：
*********************************************************************************/

using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace Cutscene
{
	public class CutsceneActionBase
	{
		#region Fields
		private bool m_bFinished = false;

		/// <summary>
		/// 需要抛出的事件
		/// </summary>
		private Queue<CutsceneEvent> m_Events = new Queue<CutsceneEvent>();
		#endregion
		
		#region Properties
		/// <summary>
		/// 是否已经结束
		/// </summary>
		/// <value><c>true</c> if finished; otherwise, <c>false</c>.</value>
		public bool Finished
		{
			get
			{
				return m_bFinished;
			}
		}
		#endregion
		
		#region Methods

		/// <summary>
		/// 开始一个Action
		/// </summary>
		public virtual void Start()
		{
//			Debug.Log(string.Format("__________________________{0}::Start", GetType().Name));
			m_bFinished = false;
		}

		/// <summary>
		/// Update the specified deltaTime.
		/// </summary>
		/// <param name="deltaTime">Delta time.</param>
		public virtual void Update (float deltaTime)
		{
		}

		/// <summary>
		/// 结束一个Action
		/// </summary>
		public virtual void Finish()
		{
//			Debug.Log(string.Format("__________________________{0}::Finish", GetType().Name));
			m_bFinished = true;
		}

		/// <summary>
		/// Determines whether this instance has event.
		/// </summary>
		/// <returns><c>true</c> if this instance has event; otherwise, <c>false</c>.</returns>
		public bool HasEvent ()
		{
			return m_Events.Count != 0;
		}

		/// <summary>
		/// Gets the event.
		/// </summary>
		/// <returns>The event.</returns>
		public CutsceneEvent GetEvent()
		{
			if (m_Events.Count != 0)
			{
				return m_Events.Dequeue();
			}
			else
			{
				throw new CutsceneEventException(string.Format("Attempting to get event in {0}, but event queue is empty.", GetType().Name));
			}
		}

		/// <summary>
		/// 向Cutscene抛出一个自定义事件
		/// </summary>
		/// <param name="id">Identifier.</param>
		protected void ThrowCustomEvent(int id)
		{
//			Debug.Log(string.Format("__________________________{0}::ThrowCustomEvent : {1}", GetType().Name, id));
			CutsceneEvent newEvent = new CutsceneEvent();
			newEvent.m_nCustomEventID = id;
			m_Events.Enqueue(newEvent);
		}
		#endregion
	}
}
