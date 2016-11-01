/********************************************************************************
 *	文件名：	Cutscene.cs
 *	全路径：	\Script\Player\Cutscene\Cutscene.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画类
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Module.Log;

namespace Cutscene
{
	public class Cutscene 
	{
		/// <summary>
		/// Action容器
		/// </summary>
		//public struct ActionContainer
		public class ActionContainer
		{
			/// <summary>
			/// 改Action容器在改Cutscene里的编号
			/// </summary>
			public int ID;
			/// <summary>
			/// 是否是主线Action
			/// </summary>
			public bool IsMainAction;
			/// <summary>
			/// Action引用
			/// </summary>
			public CutsceneActionBase Action;
			/// <summary>
			/// 开始事件的响应
			/// </summary>
			public List<EventHandler> StartEventHandler;
			/// <summary>
			/// 结束事件的响应
			/// </summary>
			public List<EventHandler> FinishEventHandler;
			/// <summary>
			/// 自定义事件的响应
			/// </summary>
			public List<EventHandler> CustomEventHandler;
		}

		/// <summary>
		/// 事件触发器
		/// </summary>
		public struct EventHandler
		{
			/// <summary>
			/// 触发事件类型
			/// </summary>
			public enum EEventHandlerType
			{
				StartAction,	// 开始一个Action
				FinishAction,	// 结束一个Action
			}

	//		/// <summary>
	//		/// 发出者ID
	//		/// </summary>
	//		public int SourceActionContainerID;
			/// <summary>
			/// 目标ActionContainer
			/// </summary>
			public ActionContainer TargetActionContainer; 
			/// <summary>
			/// 延迟触发时间
			/// </summary>
			public float Delay;
			/// <summary>
			/// 事件本体
			/// </summary>
			public CutsceneEvent CEvent;
			/// <summary>
			/// 触发事件类型
			/// </summary>
			public EEventHandlerType HandlerType;

			public bool IsTrigger(CutsceneEvent cEvent)
			{
				return cEvent == CEvent;
			}

			public EventHandler (ActionContainer targetActionContainer, float delay, CutsceneEvent cEvent, EEventHandlerType handlerType)
			{
				TargetActionContainer = targetActionContainer;
				Delay = delay;
				CEvent = cEvent;
				HandlerType = handlerType;
			}
		}

		public enum ECutsceneState
		{
			Stop,
			Pause,
			Playing,
		}

		#region Fields

		/// <summary>
		/// 过场动画实例的根动作
		/// </summary>
		private ActionContainer m_RootActionContainer;

		/// <summary>
		/// 每一帧能开启的新Action数量限制
		/// </summary>
		private static int m_nStartActionPerFrameNum = 2;

		private ECutsceneState m_State;


		///////////////////////////////////////////////////////////////////////////
		///	运行时数据 

		/// <summary>
		/// 当前正在跑的Action
		/// </summary>
		private List<ActionContainer> m_CurrentRunningAction = new List<ActionContainer>();
		/// <summary>
		/// 等待开始的Action
		/// </summary>
		private Queue<ActionContainer> m_WaitToStartActionQueue = new Queue<ActionContainer>();
		/// <summary>
		/// 延时触发的Event
		/// </summary>
		private List<EventHandler> m_TimedEvent = new List<EventHandler>();	

		#endregion

		#region Properties
		#endregion

		#region Methods

		/// <summary>
		/// Play this instance.
		/// </summary>
		public void Play ()
		{
			m_State = ECutsceneState.Playing;
			CleanUp();
			StartAction(m_RootActionContainer);
		}

		/// <summary>
		/// Stop this instance.
		/// </summary>
		public void Stop ()
		{
			m_State = ECutsceneState.Stop;
			CleanUp();
		}

		/// <summary>
		/// Cleans up.
		/// </summary>
		private void CleanUp()
		{
			for (int i = m_CurrentRunningAction.Count - 1; i >= 0; i--)
			{
				if (m_CurrentRunningAction[i].Action.Finished == false) 
				{
					m_CurrentRunningAction[i].Action.Finish();
				}
			}
			m_CurrentRunningAction.Clear();
			m_WaitToStartActionQueue.Clear();
			m_TimedEvent.Clear();
		}

		public void Update (float deltaTime)
		{
			if (m_State != ECutsceneState.Playing) return;
            //LogModule.DebugLog("__________________________________________ m_CurrentRunningAction.Count " + m_CurrentRunningAction.Count);
			// 更新正在跑的Action
			for (int i = m_CurrentRunningAction.Count - 1; i >= 0; i--)
			{
				// 判断有没有结束的Action
				if (m_CurrentRunningAction[i].Action.Finished)
				{
					// 触发结束事件
					if (m_CurrentRunningAction[i].FinishEventHandler != null)
					{
						for (int j = m_CurrentRunningAction[i].FinishEventHandler.Count - 1; j >= 0; j--)
						{
							HandleEvent(m_CurrentRunningAction[i].FinishEventHandler[j]);
						}
					}
					// 处理完事件从当前列表删除
					m_CurrentRunningAction.RemoveAt(i);
				}
				else
				{
					m_CurrentRunningAction[i].Action.Update(deltaTime);

					// 处理自定义事件
					while (m_CurrentRunningAction[i].Action.HasEvent())
					{
						CutsceneEvent cEvent = m_CurrentRunningAction[i].Action.GetEvent();
						if (m_CurrentRunningAction[i].CustomEventHandler != null)
						{
							for (int j = m_CurrentRunningAction[i].CustomEventHandler.Count - 1; j >= 0; j--)
							{
								if (m_CurrentRunningAction[i].CustomEventHandler[j].IsTrigger(cEvent))
								{
									HandleEvent(m_CurrentRunningAction[i].CustomEventHandler[j]);
									m_CurrentRunningAction[i].CustomEventHandler.RemoveAt(j);
								}
							}
						}
					}
				}
			}

			// 更新延时触发的Event
			for (int i = m_TimedEvent.Count - 1; i >= 0; i--)
			{
				EventHandler timedEvent = m_TimedEvent[i];
				timedEvent.Delay = m_TimedEvent[i].Delay - deltaTime;
				if (timedEvent.Delay <= 0)
				{
					if (m_TimedEvent[i].HandlerType == EventHandler.EEventHandlerType.StartAction)
					{
						m_WaitToStartActionQueue.Enqueue(m_TimedEvent[i].TargetActionContainer);
					}
					if (m_TimedEvent[i].HandlerType == EventHandler.EEventHandlerType.FinishAction)
					{
						FinishAction(m_TimedEvent[i].TargetActionContainer);
					}
					m_TimedEvent.RemoveAt(i); 
				}
				else
				{
					m_TimedEvent[i] = timedEvent;
				}
			}

			// 更新等待开始Action列表
			for (int i = 0; i < m_nStartActionPerFrameNum; i++)
			{
				if (m_WaitToStartActionQueue.Count > 0)
				{
					ActionContainer ac = m_WaitToStartActionQueue.Dequeue();
					StartAction(ac);
				}
				else
				{
					break;
				}
			}
		}

		/// <summary>
		/// 处理事件
		/// </summary>
		/// <param name="eventHandler">Event handler.</param>
		private void HandleEvent(EventHandler eventHandler)
		{
			// 延迟触发的进延时Event列表
			if (eventHandler.Delay > 0)
			{
				m_TimedEvent.Add(eventHandler);
			}
			// 否则将Action加入等待队列
			else
			{
				TriggerEvent(eventHandler);
			}
		}

		/// <summary>
		/// 真正触发事件
		/// </summary>
		/// <param name="eventHandler">Event handler.</param>
		private void TriggerEvent(EventHandler eventHandler)
		{
			if (eventHandler.HandlerType == EventHandler.EEventHandlerType.StartAction)
			{
				m_WaitToStartActionQueue.Enqueue(eventHandler.TargetActionContainer);
			}
			if (eventHandler.HandlerType == EventHandler.EEventHandlerType.FinishAction)
			{
				FinishAction(eventHandler.TargetActionContainer);
			}
		}

		/// <summary>
		/// Starts the action.
		/// </summary>
		/// <param name="actionContainer">Action container.</param>
		private void StartAction (ActionContainer actionContainer)
		{
			m_CurrentRunningAction.Add(actionContainer);
			actionContainer.Action.Start();
			// 处理开始事件
			if (actionContainer.StartEventHandler != null)
			{
				for (int i = actionContainer.StartEventHandler.Count - 1; i >= 0; i--)
				{
					HandleEvent(actionContainer.StartEventHandler[i]);
				}
			}
		}

		/// <summary>
		/// Finishs the action.
		/// </summary>
		/// <param name="actionContainer">Action container.</param>
		private void FinishAction (ActionContainer actionContainer)
		{
			//for (int i = m_CurrentRunningAction.Count - 1; i >= 0; i--)
			if (m_CurrentRunningAction.Contains(actionContainer))
			{
				//if (m_CurrentRunningAction[i].ID == actionContainer.ID)
				{
					// 这里只是终止，从当前运行Action列表移除和触发相关事件放在下一个Update里执行
					//m_CurrentRunningAction[i].Action.Finish();
					actionContainer.Action.Finish();
					//break;
				}
			}
		}

		/// <summary>
		/// 设置根动作，这个方法只能由Factory调用
		/// </summary>
		/// <param name="rootContainer">Root container.</param>
		public void SetRootActionContainer(ActionContainer rootContainer)
		{
			m_RootActionContainer = rootContainer;
		}

		#endregion
	}
}