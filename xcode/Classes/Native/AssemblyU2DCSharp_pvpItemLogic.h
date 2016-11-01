#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.Item.GameItem
struct GameItem_t1172;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// pvpItemLogic
struct pvpItemLogic_t4801  : public MonoBehaviour_t18
{
	// UILabel pvpItemLogic::m_ItemName
	UILabel_t1176 * ___m_ItemName;
	// UILabel pvpItemLogic::m_ItemCount
	UILabel_t1176 * ___m_ItemCount;
	// UILabel pvpItemLogic::m_ItemPrice
	UILabel_t1176 * ___m_ItemPrice;
	// UISprite pvpItemLogic::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UnityEngine.GameObject pvpItemLogic::m_SellOut
	GameObject_t9 * ___m_SellOut;
	// System.Int32 pvpItemLogic::m_itemId
	int32_t ___m_itemId;
	// Games.Item.GameItem pvpItemLogic::m_item
	GameItem_t1172 * ___m_item;
	// System.Int32 pvpItemLogic::m_BlockId
	int32_t ___m_BlockId;
};
