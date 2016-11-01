#pragma once
#include <stdint.h>
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GongJiShopItem
struct GongJiShopItem_t1427  : public MonoBehaviour_t18
{
	// ItemSlotLogic GongJiShopItem::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel GongJiShopItem::m_PriceContent
	UILabel_t1176 * ___m_PriceContent;
	// UILabel GongJiShopItem::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// System.Int32 GongJiShopItem::m_ShopTabID
	int32_t ___m_ShopTabID;
	// System.Int32 GongJiShopItem::m_nPrice
	int32_t ___m_nPrice;
	// System.Int32 GongJiShopItem::m_nConsumItemID
	int32_t ___m_nConsumItemID;
};
