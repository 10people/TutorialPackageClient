/********************************************************************************
 *	文件名：	CutsceneActionPlayAnim.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionPlayAnim.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：过场动画指定角色播放动作任务
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;

namespace Cutscene
{
	public class CutsceneActionPlayAnim : CutsceneActionBase
	{
		#region Fields

		/// <summary>
		/// 做动作的NPC的ServerID，如果是主角，则为-1
		/// </summary>
		private int m_nTargetID;

		/// <summary>
		/// Table_Animation表里的ID
		/// </summary>
		private int m_nAnimID;

		/// <summary>
		/// 是否正在播放主角动画
		/// </summary>
		public static bool m_bIsPlayingMainPlayerAnim = false;
		#endregion
		
		#region Properties
		#endregion
		
		#region Methods
		public CutsceneActionPlayAnim(int nTargetID, int nAnimID)
		{
			m_nTargetID = nTargetID;
			m_nAnimID = nAnimID;
		}

		public override void Start ()
		{
			base.Start ();
			if (m_nTargetID != -1)
			{
				// 暂时试试以RoleBaseAttr中的名字来取得Obj
				Tab_RoleBaseAttr RoleBase = TableManager.GetRoleBaseAttrByID(m_nTargetID, 0);
				if (null != RoleBase)
				{
					Obj_Character character = ObjManager.Instance.FindObjCharacterInSceneByName(RoleBase.Name, true, 20);
					if (null != character)
					{
						Animation animComp = character.AnimLogic.GetAnimation();
						if (null != animComp)
						{
							// 有些动作竟然会跳出屏幕，这还怎么玩？
							animComp.cullingType = AnimationCullingType.AlwaysAnimate;
							character.AnimLogic.Play(m_nAnimID, AnimFinishCallback);
						}
						else
						{
							Finish();
						}
					}
					else
					{
						Finish();
					}
				}
				else
				{
					Finish();
				}
			}
			else
			{
				Obj_Character character = Singleton<ObjManager>.GetInstance().MainPlayer;
				if (null != character)
				{
					Animation animComp = character.AnimLogic.GetAnimation();
					if (null != animComp)
					{
                        animComp.cullingType = AnimationCullingType.AlwaysAnimate;
						character.AnimLogic.Play(m_nAnimID, AnimFinishCallback);
						m_bIsPlayingMainPlayerAnim = true;
					}
					else
					{
						Finish();
					}
				}
				else
				{
					Finish();
				}
			}
		}

		public override void Finish ()
		{
			base.Finish ();
			if (m_nTargetID == -1)
			{
				m_bIsPlayingMainPlayerAnim = false;
			}
		}

		private void AnimFinishCallback ()
		{
			Finish();
		}
		#endregion
	}
}