#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// Games.LogicObj.Obj
#include "AssemblyU2DCSharp_Games_LogicObj_Obj.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Games.LogicObj.Obj_DropItem
struct Obj_DropItem_t4474  : public Obj_t2130
{
	// System.Single Games.LogicObj.Obj_DropItem::fActiveRadius
	float ___fActiveRadius;
	// System.Boolean Games.LogicObj.Obj_DropItem::bIsDrop
	bool ___bIsDrop;
	// System.Single Games.LogicObj.Obj_DropItem::m_fDropTimeSecond
	float ___m_fDropTimeSecond;
	// System.Boolean Games.LogicObj.Obj_DropItem::bIsSendDrop
	bool ___bIsSendDrop;
	// System.Single Games.LogicObj.Obj_DropItem::m_fSendDropTimeSecond
	float ___m_fSendDropTimeSecond;
	// System.Single Games.LogicObj.Obj_DropItem::m_fUpdateTimeSecond
	float ___m_fUpdateTimeSecond;
	// System.Single Games.LogicObj.Obj_DropItem::m_fMoveSecond
	float ___m_fMoveSecond;
	// System.Single Games.LogicObj.Obj_DropItem::m_fSpeed
	float ___m_fSpeed;
	// System.Single Games.LogicObj.Obj_DropItem::m_fStop
	float ___m_fStop;
	// System.Single Games.LogicObj.Obj_DropItem::m_fScaling
	float ___m_fScaling;
	// UnityEngine.Vector3 Games.LogicObj.Obj_DropItem::m_localScale
	Vector3_t121  ___m_localScale;
	// System.Int32 Games.LogicObj.Obj_DropItem::m_nDropType
	int32_t ___m_nDropType;
	// System.Int32 Games.LogicObj.Obj_DropItem::m_nItemId
	int32_t ___m_nItemId;
	// System.Int32 Games.LogicObj.Obj_DropItem::m_nItemCount
	int32_t ___m_nItemCount;
	// System.UInt64 Games.LogicObj.Obj_DropItem::m_OwnerGuid
	uint64_t ___m_OwnerGuid;
	// UILabel Games.LogicObj.Obj_DropItem::m_NameBoard
	UILabel_t1176 * ___m_NameBoard;
	// UISprite Games.LogicObj.Obj_DropItem::m_ItemSprite
	UISprite_t1202 * ___m_ItemSprite;
};
