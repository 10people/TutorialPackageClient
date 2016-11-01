/********************************************************************************
 *	文件名：	CutsceneFactoryBase.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactoryBase.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画创建器基类（在派生类里写每个过场动画的逻辑流程）
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace Cutscene
{
	public class CutsceneFactoryBase
	{
		#region Fields
		/// <summary>
		/// 已注册的所有Action
		/// </summary>
		private Dictionary<string, Cutscene.ActionContainer> m_RegistedActions = new Dictionary<string, Cutscene.ActionContainer>();

		/// <summary>
		/// ActionContainer的GUID分配器
		/// </summary>
		private int m_nGUIDAllocator;

		/// <summary>
		/// 构造Cutscene的过程中当前最末尾的主线Action
		/// </summary>
		private Cutscene.ActionContainer m_CurrentLastMainAction; 

		/// <summary>
		/// 生产的Cutscene
		/// </summary>
		private Cutscene m_Product;

		/// <summary>
		/// 是否正在生产
		/// </summary>
		private bool m_bBuilding = false;

		#endregion
		
		#region Properties
		#endregion
		
		#region Methods

		/// <summary>
		/// 定义一个Action
		/// </summary>
		/// <param name="actionName">Action name.</param>
		/// <param name="action">Action.</param>
		protected void DefineAction(string actionName, CutsceneActionBase action, bool isMainAction = false)
		{
			if (null == action)
			{
				throw new CutsceneLinkException(string.Format("DefineAction {0} before create action instance", actionName));
			}
			if (!m_bBuilding)
			{
				throw new CutsceneLinkException(string.Format("DefineAction {0}:{1} before BeginBuild or after EndBuild", actionName, action.GetType().Name));
			}

			if (m_RegistedActions.ContainsKey(actionName)) return;
			Cutscene.ActionContainer newContainer = new Cutscene.ActionContainer();
			newContainer.Action = action;
			newContainer.IsMainAction = isMainAction;
			newContainer.ID = m_nGUIDAllocator++;
			m_RegistedActions.Add(actionName, newContainer);
		}

		/// <summary>
		/// Begins the build.
		/// </summary>
		protected void BeginBuild()
		{
			m_Product = new Cutscene();
			m_bBuilding = true;
			DefineAction("Begin", new CutsceneActionBegin(), true);			 
			m_Product.SetRootActionContainer(m_RegistedActions["Begin"]);
			m_CurrentLastMainAction = m_RegistedActions["Begin"];
		}

		/// <summary>
		/// Ends the build.
		/// </summary>
		protected void EndBuild()
		{
			DefineAction("End", new CutsceneActionEnd(), true);
			if (null == m_CurrentLastMainAction.FinishEventHandler)
			{
				m_CurrentLastMainAction.FinishEventHandler = new List<Cutscene.EventHandler>();
			}
			Cutscene.EventHandler newHandler = new Cutscene.EventHandler(
				m_RegistedActions["End"], 
				0, 
				CutsceneEvent.EmptyEvent, 
				Cutscene.EventHandler.EEventHandlerType.StartAction);
			m_CurrentLastMainAction.FinishEventHandler.Add(newHandler);
			m_CurrentLastMainAction = m_RegistedActions["End"];
			m_bBuilding = false;
		}

		/// <summary>
		/// 在A开始时，开始B
		/// </summary>
		/// <param name="actionAName">Action A name.</param>
		/// <param name="actionBName">Action B name.</param>
		/// <param name="delay">Delay.</param>
		protected void StartBWhenAStart(string actionAName, string actionBName, float delay = 0)
		{
			if (!m_bBuilding)
			{
				throw new CutsceneLinkException(string.Format("StartBWhenAStart (B:{0}) (A:{1}) before BeginBuild or after EndBuild", actionBName, actionAName));
			}
			if (!m_RegistedActions.ContainsKey(actionAName) || !m_RegistedActions.ContainsKey(actionBName))
			{
				throw new CutsceneLinkException(string.Format("Can't find define, Start {0} When {1} Start faild", actionBName, actionAName));
			}
			Cutscene.ActionContainer a = m_RegistedActions[actionAName];
			Cutscene.ActionContainer b = m_RegistedActions[actionBName];
			// 判断是否按照主线规则建造
			if (b.IsMainAction)
			{
				if (a != m_CurrentLastMainAction)
				{
					throw new CutsceneLinkException(string.Format("Start main action {0} faild, {1} is not current last main action", actionBName, actionAName));
				}
				else
				{
					m_CurrentLastMainAction = b;
				}
			}
			if (null == a.StartEventHandler)
			{
				a.StartEventHandler = new List<Cutscene.EventHandler>();
			}
			Cutscene.EventHandler newHandler = new Cutscene.EventHandler(
				b, 
				delay < 0 ? 0 : delay, 
				CutsceneEvent.EmptyEvent, 
				Cutscene.EventHandler.EEventHandlerType.StartAction);
			a.StartEventHandler.Add(newHandler);
		}

		/// <summary>
		/// 在A结束时，开始B
		/// </summary>
		/// <param name="actionAName">Action A name.</param>
		/// <param name="actionBName">Action B name.</param>
		/// <param name="delay">Delay.</param>
		protected void StartBWhenAFinish(string actionAName, string actionBName, float delay = 0)
		{
			if (!m_bBuilding)
			{
				throw new CutsceneLinkException(string.Format("StartBWhenAFinish (B:{0}) (A:{1}) before BeginBuild or after EndBuild", actionBName, actionAName));
			}
			if (!m_RegistedActions.ContainsKey(actionAName) || !m_RegistedActions.ContainsKey(actionBName))
			{
				throw new CutsceneLinkException(string.Format("Can't find define, Start {0} When {1} Finish faild", actionBName, actionAName));
			}
			Cutscene.ActionContainer a = m_RegistedActions[actionAName];
			Cutscene.ActionContainer b = m_RegistedActions[actionBName];
			// 判断是否按照主线规则建造
			if (b.IsMainAction)
			{
				if (a != m_CurrentLastMainAction)
				{
					throw new CutsceneLinkException(string.Format("Start main action {0} faild, {1} is not current last main action", actionBName, actionAName));
				}
				else
				{
					m_CurrentLastMainAction = b;
				}
			}
			if (null == a.FinishEventHandler)
			{
				a.FinishEventHandler = new List<Cutscene.EventHandler>();
			}
			Cutscene.EventHandler newHandler = new Cutscene.EventHandler(
				b, 
				delay < 0 ? 0 : delay, 
				CutsceneEvent.EmptyEvent, 
				Cutscene.EventHandler.EEventHandlerType.StartAction);
			a.FinishEventHandler.Add(newHandler);
		}

		/// <summary>
		/// 在A抛出事件时，开始B
		/// </summary>
		/// <param name="actionAName">Action A name.</param>
		/// <param name="actionBName">Action B name.</param>
		/// <param name="customEventId">Custom event identifier.</param>
		/// <param name="delay">Delay.</param>
		protected void StartBWhenAEvent(string actionAName, string actionBName, int customEventId, float delay = 0)
		{
			if (!m_bBuilding)
			{
				throw new CutsceneLinkException(string.Format("StartBWhenAEvent (B:{0}) (A:{1}) before BeginBuild or after EndBuild", actionBName, actionAName));
			}
			if (!m_RegistedActions.ContainsKey(actionAName) || !m_RegistedActions.ContainsKey(actionBName))
			{
				throw new CutsceneLinkException(string.Format("Can't find define, Start {0} When {1} Event faild", actionBName, actionAName));
			}
			Cutscene.ActionContainer a = m_RegistedActions[actionAName];
			Cutscene.ActionContainer b = m_RegistedActions[actionBName];
			// 判断是否按照主线规则建造
			if (b.IsMainAction)
			{
				if (a != m_CurrentLastMainAction)
				{
					throw new CutsceneLinkException(string.Format("Start main action {0} faild, {1} is not current last main action", actionBName, actionAName));
				}
				else
				{
					m_CurrentLastMainAction = b;
				}
			}
			if (null == a.CustomEventHandler)
			{
				a.CustomEventHandler = new List<Cutscene.EventHandler>();
			}
			Cutscene.EventHandler newHandler = new Cutscene.EventHandler(
				b, 
				delay < 0 ? 0 : delay, 
				new CutsceneEvent(customEventId), 
				Cutscene.EventHandler.EEventHandlerType.StartAction);
			a.CustomEventHandler.Add(newHandler);
		}

		/// <summary>
		/// 在A开始时，结束B
		/// </summary>
		/// <param name="actionAName">Action A name.</param>
		/// <param name="actionBName">Action B name.</param>
		/// <param name="delay">Delay.</param>
		protected void FinishBWhenAStart(string actionAName, string actionBName, float delay = 0)
		{
			if (!m_bBuilding)
			{
				throw new CutsceneLinkException(string.Format("FinishBWhenAStart (B:{0}) (A:{1}) before BeginBuild or after EndBuild", actionBName, actionAName));
			}
			if (!m_RegistedActions.ContainsKey(actionAName) || !m_RegistedActions.ContainsKey(actionBName))
			{
				throw new CutsceneLinkException(string.Format("Can't find define, Finish {0} When {1} Start faild", actionBName, actionAName));
			}
			Cutscene.ActionContainer a = m_RegistedActions[actionAName];
			Cutscene.ActionContainer b = m_RegistedActions[actionBName];
			// 判断是否按照主线规则建造
			if (b.IsMainAction)
			{
				throw new CutsceneLinkException(string.Format("Can't finish main action {0}", actionBName));
			}
			if (null == a.StartEventHandler)
			{
				a.StartEventHandler = new List<Cutscene.EventHandler>();
			}
			Cutscene.EventHandler newHandler = new Cutscene.EventHandler(
				b, 
				delay < 0 ? 0 : delay, 
				CutsceneEvent.EmptyEvent, 
				Cutscene.EventHandler.EEventHandlerType.FinishAction);
			a.StartEventHandler.Add(newHandler);
		}

		/// <summary>
		/// 在A结束时，结束B
		/// </summary>
		/// <param name="actionAName">Action A name.</param>
		/// <param name="actionBName">Action B name.</param>
		/// <param name="delay">Delay.</param>
		protected void FinishBWhenAFinish(string actionAName, string actionBName, float delay = 0)
		{
			if (!m_bBuilding)
			{
				throw new CutsceneLinkException(string.Format("FinishBWhenAFinish (B:{0}) (A:{1}) before BeginBuild or after EndBuild", actionBName, actionAName));
			}
			if (!m_RegistedActions.ContainsKey(actionAName) || !m_RegistedActions.ContainsKey(actionBName))
			{
				throw new CutsceneLinkException(string.Format("Can't find define, Finish {0} When {1} Finish faild", actionBName, actionAName));
			}
			Cutscene.ActionContainer a = m_RegistedActions[actionAName];
			Cutscene.ActionContainer b = m_RegistedActions[actionBName];
			// 判断是否按照主线规则建造
			if (b.IsMainAction)
			{
				throw new CutsceneLinkException(string.Format("Can't finish main action {0}", actionBName));
			}
			if (null == a.FinishEventHandler)
			{
				a.FinishEventHandler = new List<Cutscene.EventHandler>();
			}
			Cutscene.EventHandler newHandler = new Cutscene.EventHandler(
				b, 
				delay < 0 ? 0 : delay, 
				CutsceneEvent.EmptyEvent, 
				Cutscene.EventHandler.EEventHandlerType.FinishAction);
			a.FinishEventHandler.Add(newHandler);
		}

		/// <summary>
		/// 在A抛出事件时，结束B
		/// </summary>
		/// <param name="actionAName">Action A name.</param>
		/// <param name="actionBName">Action B name.</param>
		/// <param name="customEventId">Custom event identifier.</param>
		/// <param name="delay">Delay.</param>
		protected void FinishBWhenAEvent(string actionAName, string actionBName, int customEventId, float delay = 0)
		{
			if (!m_bBuilding)
			{
				throw new CutsceneLinkException(string.Format("FinishBWhenAFinish (B:{0}) (A:{1}) before BeginBuild or after EndBuild", actionBName, actionAName));
			}
			if (!m_RegistedActions.ContainsKey(actionAName) || !m_RegistedActions.ContainsKey(actionBName))
			{
				throw new CutsceneLinkException(string.Format("Can't find define, Finish {0} When {1} Finish faild", actionBName, actionAName));
			}
			Cutscene.ActionContainer a = m_RegistedActions[actionAName];
			Cutscene.ActionContainer b = m_RegistedActions[actionBName];
			// 判断是否按照主线规则建造
			if (b.IsMainAction)
			{
				throw new CutsceneLinkException(string.Format("Can't finish main action {0}", actionBName));
			}
			if (null == a.CustomEventHandler)
			{
				a.CustomEventHandler = new List<Cutscene.EventHandler>();
			}
			Cutscene.EventHandler newHandler = new Cutscene.EventHandler(
				b, 
				delay < 0 ? 0 : delay, 
				new CutsceneEvent(customEventId), 
				Cutscene.EventHandler.EEventHandlerType.FinishAction);
			a.CustomEventHandler.Add(newHandler);
		}

		/// <summary>
		/// 用这个Factory创建一个Cutscene
		/// </summary>
		/// <returns>The cutscene.</returns>
		public virtual Cutscene CreatCutscene()
		{
			return m_Product;
		}

	#if UNITY_EDITOR
		/// <summary>
		/// 检查这个Factory是否符合生产规范，比如有注册了但没连接到逻辑上的Action
		/// </summary>
		/// <returns><c>true</c>, if fatory was checked, <c>false</c> otherwise.</returns>
		public bool CheckFatory ()
		{
			return true;
		}
	#endif

		#endregion
	}
}