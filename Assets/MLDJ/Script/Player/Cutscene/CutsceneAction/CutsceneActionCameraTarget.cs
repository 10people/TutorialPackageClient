/********************************************************************************
 *	文件名：	CutsceneActionCameraAction.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionCameraAction.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画移动摄像机焦点任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;

namespace Cutscene
{
	public class CutsceneActionCameraTarget : CutsceneActionBase
	{
		#region Fields
		/// <summary>
		/// 目标位置
		/// </summary>
		private Vector3 m_TargetPos;
		/// <summary>
		/// The m_n target I.
		/// </summary>
		private int m_nTargetID;
		/// <summary>
		/// 镜头移动需要花的时间
		/// </summary>
		private float m_fDuration;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		/// <summary>
		/// 摄像机焦点移动到固定点
		/// </summary>
		/// <param name="targetPos">Target position.</param>
		/// <param name="fDuration">F duration.</param>
		public CutsceneActionCameraTarget(Vector3 targetPos, float fDuration = 1f)
		{
			m_TargetPos = targetPos;
			m_fDuration = fDuration;
			m_nTargetID = 0;
		}
		/// <summary>
		/// 摄像机跟随targetID目标，0的话是主角
		/// </summary>
		/// <param name="targetID">Target I.</param>
		/// <param name="fDuration">F duration.</param>
		public CutsceneActionCameraTarget(int targetID, float fDuration = 1f)
		{
			m_nTargetID = targetID;
			m_fDuration = fDuration;
		}

		public override void Start ()
		{
			base.Start ();
			if (m_nTargetID == 0)
			{
				CameraManager.Instance.LookPos(m_TargetPos, CameraMoveOver, m_fDuration);
			}
			if (m_nTargetID < 0)
			{
				if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
				{
					CameraManager.Instance.LookTarget(Singleton<ObjManager>.GetInstance().MainPlayer, CameraMoveOver, m_fDuration);
				}
				else
				{
					Finish();
				}
			}
			if (m_nTargetID > 0)
			{
				Tab_RoleBaseAttr RoleBase = TableManager.GetRoleBaseAttrByID(m_nTargetID, 0);
				if (null != RoleBase)
				{
					Obj_Character targetCharacter = ObjManager.Instance.FindObjCharacterInSceneByName(RoleBase.Name, true, 20);
					if (null != targetCharacter)
					{
						CameraManager.Instance.LookTarget(targetCharacter, CameraMoveOver, m_fDuration);
					}
				}
			}
		}

		private void CameraMoveOver()
		{
			Finish();
		}
		#endregion
	}
}
