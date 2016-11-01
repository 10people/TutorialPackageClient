#pragma once
#include <stdint.h>
// BackPackItemLogic
struct BackPackItemLogic_t1236;
// UISprite
struct UISprite_t1202;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// Games.Item.GameItem
struct GameItem_t1172;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BackPackItemLogic/STATUS
#include "AssemblyU2DCSharp_BackPackItemLogic_STATUS.h"
// BackPackItemLogic
struct BackPackItemLogic_t1236  : public MonoBehaviour_t18
{
	// UISprite BackPackItemLogic::m_ArrowUpSprite
	UISprite_t1202 * ___m_ArrowUpSprite;
	// UISprite BackPackItemLogic::m_ArrowDownSprite
	UISprite_t1202 * ___m_ArrowDownSprite;
	// ItemSlotLogic BackPackItemLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UISprite BackPackItemLogic::m_ItemSlotBgSprite
	UISprite_t1202 * ___m_ItemSlotBgSprite;
	// Games.Item.GameItem BackPackItemLogic::m_Item
	GameItem_t1172 * ___m_Item;
	// BackPackItemLogic/STATUS BackPackItemLogic::m_Status
	int32_t ___m_Status;
	// System.Int32 BackPackItemLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct BackPackItemLogic_t1236_StaticFields{
	// BackPackItemLogic BackPackItemLogic::m_Instance
	BackPackItemLogic_t1236 * ___m_Instance;
};
