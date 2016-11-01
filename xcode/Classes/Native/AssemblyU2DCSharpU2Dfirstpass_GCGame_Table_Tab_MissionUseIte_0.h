#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t744;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
#include "mscorlib_System_Object.h"
// GCGame.Table.Tab_MissionUseItem
struct Tab_MissionUseItem_t555  : public Object_t
{
	// System.Int32 GCGame.Table.Tab_MissionUseItem::m_Id
	int32_t ___m_Id;
	// System.Int32 GCGame.Table.Tab_MissionUseItem::m_ItemID
	int32_t ___m_ItemID;
	// System.Int32 GCGame.Table.Tab_MissionUseItem::m_PosCnt
	int32_t ___m_PosCnt;
	// System.Single[] GCGame.Table.Tab_MissionUseItem::m_TargetPosX
	SingleU5BU5D_t744* ___m_TargetPosX;
	// System.Single[] GCGame.Table.Tab_MissionUseItem::m_TargetPosY
	SingleU5BU5D_t744* ___m_TargetPosY;
	// System.Int32[] GCGame.Table.Tab_MissionUseItem::m_TargetRadius
	Int32U5BU5D_t116* ___m_TargetRadius;
	// System.Int32 GCGame.Table.Tab_MissionUseItem::m_TargetSceneID
	int32_t ___m_TargetSceneID;
};
