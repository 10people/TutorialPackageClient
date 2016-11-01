/********************************************************************************
 *	文件名：	CabalTrigger.cs
 *	全路径：	\Script\Scene\CabalTrigger.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-07-27
 *
 *	功能说明：客户端触发器，触发后向服务器发送消息包CG_TRIGGER_ENTER
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame.Table;

public class CabalTrigger : MonoBehaviour {
	
	static Color normalColor = new Color(1f, .6f, .4f, .6f);
//	static Color overlapColor = new Color(0f, .4f, .6f, .6f);


	public int ID;
	bool bTriggered = false;

	/// <summary>
	/// 创建一个Trigger，懒得改ObjManager了，就在这里创建一个CabalTrigger实例吧，实际上应该由ObjManager管理并且tick做检测的
	/// </summary>
	/// <returns>The trigger.</returns>
	/// <param name="id">Identifier.</param>
	public static CabalTrigger CreateTrigger (int id)
	{
		Tab_Trigger tLine = TableManager.GetTriggerByID(id, 0);
		if (tLine != null)
		{
			GameObject newTrigger = new GameObject("Trigger" + id.ToString());
			if (newTrigger != null)
			{
				newTrigger.transform.position = new Vector3(tLine.PosX, tLine.PosY, tLine.PosZ);
				newTrigger.transform.rotation = Quaternion.Euler(tLine.RotX, tLine.RotY, tLine.RotZ);
				newTrigger.transform.localScale = new Vector3(tLine.ScaleX, tLine.ScaleY, tLine.ScaleZ);
				CabalTrigger trigger = newTrigger.AddComponent<CabalTrigger>();
				if (trigger != null)
				{
					trigger.ID = id;
				}
				return trigger;
			}
		}
		else
		{
			LogModule.ErrorLog("Cant find trigger {0}", id);
			return null;
		}
		return null;
	}

	void Update ()
	{
		if (bTriggered) return;
		// 先简单地写一下检测主玩家触发
		if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
		{
			// 把玩家简化为腰部的一个半径0.25的球
			if (IsSphereOverlap(Singleton<ObjManager>.GetInstance().MainPlayer.Position + Vector3.up * 0.5f, 0.35f))
			{
				// 发送网络包并把自己删除
				CG_TRIGGER_ENTER packet = (CG_TRIGGER_ENTER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_TRIGGER_ENTER);
				packet.SetNObjId(0);	// 现在只用于单机版副本的玩家触发功能，用不着这个字段
				packet.SetNTriggerId(ID);
				packet.SendPacket();
				bTriggered = true;
				Destroy(gameObject);
			}
		}
	}

	/// <summary>
	/// 判断球体是否与Trigger发生碰撞
	/// </summary>
	/// <returns><c>true</c> if this instance is sphere overlap the specified pos radius; otherwise, <c>false</c>.</returns>
	/// <param name="pos">Position.</param>
	/// <param name="radius">Radius.</param>
	bool IsSphereOverlap (Vector3 pos, float radius)
	{
		// 这个方法在棱角处检测不太精确，但是很快
		Bounds testBounds = new Bounds(Vector3.zero, transform.localScale + 2f * radius * Vector3.one);
		Vector3 localp = transform.InverseTransformPoint(pos);
		Vector3 realLocalp = new Vector3(localp.x * transform.localScale.x, localp.y * transform.localScale.y, localp.z * transform.localScale.z);
		if (testBounds.Contains(realLocalp)) return true; else return false;
	}

	void OnDrawGizmos ()
	{
		// 画一个自身的范围
		Gizmos.color = normalColor;
		Matrix4x4 defaultMatrix = Gizmos.matrix;
		Gizmos.matrix = transform.localToWorldMatrix;
		Gizmos.DrawCube(Vector3.zero, Vector3.one);
		Gizmos.matrix = defaultMatrix;
	}
}
