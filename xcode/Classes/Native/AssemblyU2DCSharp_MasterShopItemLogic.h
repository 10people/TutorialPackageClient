#pragma once
#include <stdint.h>
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UIImageButton
struct UIImageButton_t1204;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MasterShopItemLogic
struct MasterShopItemLogic_t1540  : public MonoBehaviour_t18
{
	// ItemSlotLogic MasterShopItemLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel MasterShopItemLogic::m_NumContent
	UILabel_t1176 * ___m_NumContent;
	// UILabel MasterShopItemLogic::m_PriceContent
	UILabel_t1176 * ___m_PriceContent;
	// UILabel MasterShopItemLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UISprite MasterShopItemLogic::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UIImageButton MasterShopItemLogic::m_BuyItemBtn
	UIImageButton_t1204 * ___m_BuyItemBtn;
	// System.Int32 MasterShopItemLogic::m_ItemID
	int32_t ___m_ItemID;
	// System.String MasterShopItemLogic::m_Name
	String_t* ___m_Name;
	// System.Int32 MasterShopItemLogic::m_nShopItemChangeMin
	int32_t ___m_nShopItemChangeMin;
	// System.Int32 MasterShopItemLogic::m_nShopItemChangeMax
	int32_t ___m_nShopItemChangeMax;
	// System.Int32 MasterShopItemLogic::m_nPrice
	int32_t ___m_nPrice;
	// System.Int32 MasterShopItemLogic::m_nConsumItemID
	int32_t ___m_nConsumItemID;
	// System.Boolean MasterShopItemLogic::m_nIsItemCanBuy
	bool ___m_nIsItemCanBuy;
};
