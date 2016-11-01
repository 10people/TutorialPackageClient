#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// Games.Item.GameItem
struct GameItem_t1172;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CangKuItemLogic
struct CangKuItemLogic_t1269  : public MonoBehaviour_t18
{
	// UISprite CangKuItemLogic::m_ArrowUpSprite
	UISprite_t1202 * ___m_ArrowUpSprite;
	// UISprite CangKuItemLogic::m_ArrowDownSprite
	UISprite_t1202 * ___m_ArrowDownSprite;
	// ItemSlotLogic CangKuItemLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UISprite CangKuItemLogic::m_ItemSlotBgSprite
	UISprite_t1202 * ___m_ItemSlotBgSprite;
	// Games.Item.GameItem CangKuItemLogic::m_Item
	GameItem_t1172 * ___m_Item;
	// System.Boolean CangKuItemLogic::mIsShowInfo
	bool ___mIsShowInfo;
	// System.Boolean CangKuItemLogic::mIsLock
	bool ___mIsLock;
};
