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
// CangKuBackItemLogic
struct CangKuBackItemLogic_t1268  : public MonoBehaviour_t18
{
	// UISprite CangKuBackItemLogic::m_ArrowUpSprite
	UISprite_t1202 * ___m_ArrowUpSprite;
	// UISprite CangKuBackItemLogic::m_ArrowDownSprite
	UISprite_t1202 * ___m_ArrowDownSprite;
	// ItemSlotLogic CangKuBackItemLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// Games.Item.GameItem CangKuBackItemLogic::m_Item
	GameItem_t1172 * ___m_Item;
	// System.Boolean CangKuBackItemLogic::mIsShowInfo
	bool ___mIsShowInfo;
};
