#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UIImageButton
struct UIImageButton_t1204;
// UnityEngine.GameObject
struct GameObject_t9;
// UIGrid
struct UIGrid_t1199;
// Games.Item.GameItem
struct GameItem_t1172;
// ItemTooltipsLogic/VoidBuyDelegate
struct VoidBuyDelegate_t1495;
// ItemTooltipsLogic
struct ItemTooltipsLogic_t1496;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ItemTooltipsLogic/ShowType
#include "AssemblyU2DCSharp_ItemTooltipsLogic_ShowType.h"
// ItemTooltipsLogic
struct ItemTooltipsLogic_t1496  : public MonoBehaviour_t18
{
	// UILabel ItemTooltipsLogic::m_ItemNameLabel
	UILabel_t1176 * ___m_ItemNameLabel;
	// UILabel ItemTooltipsLogic::m_ItemTypeLabel
	UILabel_t1176 * ___m_ItemTypeLabel;
	// UILabel ItemTooltipsLogic::m_ItemUseLevelLabel
	UILabel_t1176 * ___m_ItemUseLevelLabel;
	// UILabel ItemTooltipsLogic::m_ItemBindLabel
	UILabel_t1176 * ___m_ItemBindLabel;
	// UILabel ItemTooltipsLogic::m_ItemPriceLabel
	UILabel_t1176 * ___m_ItemPriceLabel;
	// UISprite ItemTooltipsLogic::m_ItemPriceIcon
	UISprite_t1202 * ___m_ItemPriceIcon;
	// UILabel ItemTooltipsLogic::m_ItemMaxNumLabel
	UILabel_t1176 * ___m_ItemMaxNumLabel;
	// UILabel ItemTooltipsLogic::m_ItemDescLabel
	UILabel_t1176 * ___m_ItemDescLabel;
	// UISprite ItemTooltipsLogic::m_ItemIconSprite
	UISprite_t1202 * ___m_ItemIconSprite;
	// UISprite ItemTooltipsLogic::m_ItemQualityGrid
	UISprite_t1202 * ___m_ItemQualityGrid;
	// UIImageButton ItemTooltipsLogic::m_SellButton
	UIImageButton_t1204 * ___m_SellButton;
	// UIImageButton ItemTooltipsLogic::m_ThrowButton
	UIImageButton_t1204 * ___m_ThrowButton;
	// UIImageButton ItemTooltipsLogic::m_UseButton
	UIImageButton_t1204 * ___m_UseButton;
	// UIImageButton ItemTooltipsLogic::m_LoverFlowerUseButton
	UIImageButton_t1204 * ___m_LoverFlowerUseButton;
	// UIImageButton ItemTooltipsLogic::m_ShareLinkButton
	UIImageButton_t1204 * ___m_ShareLinkButton;
	// UIImageButton ItemTooltipsLogic::m_BuyButton
	UIImageButton_t1204 * ___m_BuyButton;
	// UIImageButton ItemTooltipsLogic::m_BuyBatchButton
	UIImageButton_t1204 * ___m_BuyBatchButton;
	// UIImageButton ItemTooltipsLogic::m_ConsignSaleBuyButton
	UIImageButton_t1204 * ___m_ConsignSaleBuyButton;
	// UIImageButton ItemTooltipsLogic::m_CangKuInButton
	UIImageButton_t1204 * ___m_CangKuInButton;
	// UIImageButton ItemTooltipsLogic::m_CangKuOutButton
	UIImageButton_t1204 * ___m_CangKuOutButton;
	// UILabel ItemTooltipsLogic::m_ItemSellLabel
	UILabel_t1176 * ___m_ItemSellLabel;
	// UnityEngine.GameObject ItemTooltipsLogic::m_ItemDisableSprite
	GameObject_t9 * ___m_ItemDisableSprite;
	// UIImageButton ItemTooltipsLogic::m_UseBatchButton
	UIImageButton_t1204 * ___m_UseBatchButton;
	// UnityEngine.GameObject ItemTooltipsLogic::m_PutInQianKunDaiButton
	GameObject_t9 * ___m_PutInQianKunDaiButton;
	// UIGrid ItemTooltipsLogic::m_OpButtonGrid
	UIGrid_t1199 * ___m_OpButtonGrid;
	// UILabel ItemTooltipsLogic::m_ItemDescDynamicLabel
	UILabel_t1176 * ___m_ItemDescDynamicLabel;
	// UILabel ItemTooltipsLogic::m_RemainTimeLable
	UILabel_t1176 * ___m_RemainTimeLable;
	// UnityEngine.GameObject ItemTooltipsLogic::m_AbsorbButton
	GameObject_t9 * ___m_AbsorbButton;
	// UnityEngine.GameObject ItemTooltipsLogic::m_ComposeButton
	GameObject_t9 * ___m_ComposeButton;
	// Games.Item.GameItem ItemTooltipsLogic::m_Item
	GameItem_t1172 * ___m_Item;
	// System.Int32 ItemTooltipsLogic::m_NewPlayerGuideFlag_Step
	int32_t ___m_NewPlayerGuideFlag_Step;
};
struct ItemTooltipsLogic_t1496_StaticFields{
	// ItemTooltipsLogic/VoidBuyDelegate ItemTooltipsLogic::delBuyClick
	VoidBuyDelegate_t1495 * ___delBuyClick;
	// ItemTooltipsLogic/VoidBuyDelegate ItemTooltipsLogic::delBuyBatchClick
	VoidBuyDelegate_t1495 * ___delBuyBatchClick;
	// ItemTooltipsLogic ItemTooltipsLogic::m_Instance
	ItemTooltipsLogic_t1496 * ___m_Instance;
	// Games.Item.GameItem ItemTooltipsLogic::m_curItem
	GameItem_t1172 * ___m_curItem;
	// ItemTooltipsLogic/ShowType ItemTooltipsLogic::m_curType
	int32_t ___m_curType;
	// ItemSlotLogic ItemTooltipsLogic::m_curItemSlot
	ItemSlotLogic_t1237 * ___m_curItemSlot;
};
