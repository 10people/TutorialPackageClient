/********************************************************************************
 *	文件名：	CutsceneActionCharacterMove.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionCharacterMove.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画移动角色任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;

namespace Cutscene
{
	public class CutsceneActionCharacterMove : CutsceneActionBase 
	{

		#region Fields
		/// <summary>
		/// The m_n target I.
		/// </summary>
		private int m_nTargetID;
		/// <summary>
		/// 移动目的地
		/// </summary>
		private Vector3 m_TargetPos;
		/// <summary>
		/// 方向
		/// </summary>
		private float m_fDir;
		/// <summary>
		/// 总时长
		/// </summary>
		private float m_fDuration;

		private float m_fTimer;

		private Vector3 m_StartPos;

		private Obj_Character m_TargetCharacter;

		// 目标的寻路组件的原始状态
		private bool m_TargetCharacterNavAgentOrigState;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionCharacterMove (int nTargetID, Vector3 targetPos, float duration, float dir = 0)
		{
			m_nTargetID = nTargetID;
			m_TargetPos = targetPos;
			m_fDir = dir;
			m_fDuration = duration;
		}
		
		public override void Start ()
		{
			base.Start ();
			// 如果是NPC
			if (m_nTargetID > 0)
			{
				Tab_RoleBaseAttr RoleBase = TableManager.GetRoleBaseAttrByID(m_nTargetID, 0);
				if (null != RoleBase)
				{
					m_TargetCharacter = ObjManager.Instance.FindObjCharacterInSceneByName(RoleBase.Name, true, 20);
					if (null != m_TargetCharacter)
					{
						// 强制停止自动移动
						if (m_TargetCharacter.AutoMoveComponent != null)
						{
							m_TargetCharacter.AutoMoveComponent.ForceStopMove();
						}
						m_StartPos = m_TargetCharacter.Position;
						m_fTimer = m_fDuration;

						// 关掉寻路组件，防止寻路组件强行设置位置导致一些莫名其妙的问题
						if (null != m_TargetCharacter.NavAgent)
						{
							m_TargetCharacterNavAgentOrigState = m_TargetCharacter.NavAgent.enabled;
							if (m_TargetCharacterNavAgentOrigState == true)
							{
								m_TargetCharacter.NavAgent.enabled = false;
							}
						}

						if (m_fDuration <= 0)
						{
							// 只有瞬移的时候这个参数才有意义，否则旋转是算出来的
							m_TargetCharacter.Rotation = Quaternion.Euler(0, m_fDir, 0);
							Finish();
						}
						else
						{
							Vector3 dir = m_TargetPos - m_StartPos;
							dir.y = 0;
							m_TargetCharacter.ObjTransform.forward = dir;
						}
					}
					else
					{
						base.Finish();
					}
				}
			}
			// 如果是玩家
			else
			{
				m_TargetCharacter = Singleton<ObjManager>.GetInstance().MainPlayer;
				if (null != m_TargetCharacter)
				{
					m_StartPos = m_TargetCharacter.Position;
					m_fTimer = m_fDuration;

					// 关掉寻路组件，防止寻路组件强行设置位置导致一些莫名其妙的问题
					if (null != m_TargetCharacter.NavAgent)
					{
						m_TargetCharacterNavAgentOrigState = m_TargetCharacter.NavAgent.enabled;
						if (m_TargetCharacterNavAgentOrigState == true)
						{
							m_TargetCharacter.NavAgent.enabled = false;
						}
					}

					if (m_fDuration <= 0)
					{
						// 只有瞬移的时候这个参数才有意义，否则旋转是算出来的
						m_TargetCharacter.Rotation = Quaternion.Euler(0, m_fDir, 0);
						Finish();
					}
					else
					{
						Vector3 dir = m_TargetPos - m_StartPos;
						dir.y = 0;
						m_TargetCharacter.ObjTransform.forward = dir;
					}
				}
				else
				{
					base.Finish();
				}
			}
		}
		
		public override void Update (float deltaTime)
		{
			base.Update (deltaTime);

			if (m_fTimer < 0)
			{
				Finish();
				return;
			}
			m_fTimer -= deltaTime;
			SetPosition();
		}

		public override void Finish ()
		{
			base.Finish ();
			if (null != m_TargetCharacter)
			{
				m_TargetCharacter.Position = m_TargetPos;
				if (m_TargetCharacterNavAgentOrigState == true)
				{
					m_TargetCharacter.NavAgent.enabled = true;
				}
			}
		}

		private void SetPosition()
		{
			if (null == m_TargetCharacter)
			{
				base.Finish();
				return;
			}
			Vector3 curPos = Vector3.Lerp(m_StartPos, m_TargetPos, 1 - m_fTimer / m_fDuration);
			m_TargetCharacter.Position = curPos;
		}
		#endregion
	}
}