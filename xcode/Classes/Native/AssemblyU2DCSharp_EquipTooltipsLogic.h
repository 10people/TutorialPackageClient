#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// TooltipsEquipStar
struct TooltipsEquipStar_t1334;
// TooltipsEquipAttr
struct TooltipsEquipAttr_t1335;
// TooltipsEquipGem
struct TooltipsEquipGem_t1336;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UIGrid
struct UIGrid_t1199;
// UIImageButton
struct UIImageButton_t1204;
// UISlider
struct UISlider_t1219;
// Games.Item.GameItem
struct GameItem_t1172;
// EquipTooltipsLogic/VoidBuyDelegate
struct VoidBuyDelegate_t1398;
// EquipTooltipsLogic
struct EquipTooltipsLogic_t1399;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EquipTooltipsLogic/ShowType
#include "AssemblyU2DCSharp_EquipTooltipsLogic_ShowType.h"
// EquipTooltipsLogic
struct EquipTooltipsLogic_t1399  : public MonoBehaviour_t18
{
	// UILabel EquipTooltipsLogic::m_EquipNameLabel
	UILabel_t1176 * ___m_EquipNameLabel;
	// UILabel EquipTooltipsLogic::m_EquipProLabel
	UILabel_t1176 * ___m_EquipProLabel;
	// UILabel EquipTooltipsLogic::m_EquipLevelTitleLabel
	UILabel_t1176 * ___m_EquipLevelTitleLabel;
	// UILabel EquipTooltipsLogic::m_EquipLevelLabel
	UILabel_t1176 * ___m_EquipLevelLabel;
	// UILabel EquipTooltipsLogic::m_EquipBindLabel
	UILabel_t1176 * ___m_EquipBindLabel;
	// TooltipsEquipStar EquipTooltipsLogic::m_EquipStarLevel
	TooltipsEquipStar_t1334 * ___m_EquipStarLevel;
	// UILabel EquipTooltipsLogic::m_EquipStrengthenLevelLabel
	UILabel_t1176 * ___m_EquipStrengthenLevelLabel;
	// UILabel EquipTooltipsLogic::m_EquipPowerLabel
	UILabel_t1176 * ___m_EquipPowerLabel;
	// TooltipsEquipAttr EquipTooltipsLogic::m_EquipAttrInfo
	TooltipsEquipAttr_t1335 * ___m_EquipAttrInfo;
	// TooltipsEquipGem EquipTooltipsLogic::m_EquipGemInfo
	TooltipsEquipGem_t1336 * ___m_EquipGemInfo;
	// UILabel EquipTooltipsLogic::m_EquipDescLabel
	UILabel_t1176 * ___m_EquipDescLabel;
	// UnityEngine.BoxCollider EquipTooltipsLogic::m_EquipDescBoxCollider
	BoxCollider_t128 * ___m_EquipDescBoxCollider;
	// UILabel EquipTooltipsLogic::m_EquipPriceLabel
	UILabel_t1176 * ___m_EquipPriceLabel;
	// UISprite EquipTooltipsLogic::m_EquipPriceIcon
	UISprite_t1202 * ___m_EquipPriceIcon;
	// UISprite EquipTooltipsLogic::m_EquipIconSprite
	UISprite_t1202 * ___m_EquipIconSprite;
	// UISprite EquipTooltipsLogic::m_EquipQualityGrid
	UISprite_t1202 * ___m_EquipQualityGrid;
	// UnityEngine.GameObject EquipTooltipsLogic::m_EquipTooltips
	GameObject_t9 * ___m_EquipTooltips;
	// UnityEngine.GameObject EquipTooltipsLogic::m_CompareEquipTooltips
	GameObject_t9 * ___m_CompareEquipTooltips;
	// UIGrid EquipTooltipsLogic::m_TooltipsGrid
	UIGrid_t1199 * ___m_TooltipsGrid;
	// UIImageButton EquipTooltipsLogic::m_EquipBackButton
	UIImageButton_t1204 * ___m_EquipBackButton;
	// UIImageButton EquipTooltipsLogic::m_EquipSellButton
	UIImageButton_t1204 * ___m_EquipSellButton;
	// UIImageButton EquipTooltipsLogic::m_EquipSuitButton
	UIImageButton_t1204 * ___m_EquipSuitButton;
	// UIImageButton EquipTooltipsLogic::m_EquipTakeOffButton
	UIImageButton_t1204 * ___m_EquipTakeOffButton;
	// UIImageButton EquipTooltipsLogic::m_EquipUseButton
	UIImageButton_t1204 * ___m_EquipUseButton;
	// UIImageButton EquipTooltipsLogic::m_EquipShareLinkButton
	UIImageButton_t1204 * ___m_EquipShareLinkButton;
	// UIImageButton EquipTooltipsLogic::m_EquipBuyButton
	UIImageButton_t1204 * ___m_EquipBuyButton;
	// UIImageButton EquipTooltipsLogic::m_EquipBuyBatchButton
	UIImageButton_t1204 * ___m_EquipBuyBatchButton;
	// UIImageButton EquipTooltipsLogic::m_EquipEnchanceButton
	UIImageButton_t1204 * ___m_EquipEnchanceButton;
	// UIImageButton EquipTooltipsLogic::m_ConsignSaleBuyButton
	UIImageButton_t1204 * ___m_ConsignSaleBuyButton;
	// UIImageButton EquipTooltipsLogic::m_CangKuInButton
	UIImageButton_t1204 * ___m_CangKuInButton;
	// UIImageButton EquipTooltipsLogic::m_CangKuOutButton
	UIImageButton_t1204 * ___m_CangKuOutButton;
	// UISlider EquipTooltipsLogic::m_EquipStrenExp
	UISlider_t1219 * ___m_EquipStrenExp;
	// UIGrid EquipTooltipsLogic::m_EquipOpButtonGrid
	UIGrid_t1199 * ___m_EquipOpButtonGrid;
	// UILabel EquipTooltipsLogic::m_EquipStrenExpInfo
	UILabel_t1176 * ___m_EquipStrenExpInfo;
	// UILabel EquipTooltipsLogic::m_EquipStrenExpTitle
	UILabel_t1176 * ___m_EquipStrenExpTitle;
	// UILabel EquipTooltipsLogic::m_EquipSellLabel
	UILabel_t1176 * ___m_EquipSellLabel;
	// UISprite EquipTooltipsLogic::m_EquipPowerArrowUpSprite
	UISprite_t1202 * ___m_EquipPowerArrowUpSprite;
	// UISprite EquipTooltipsLogic::m_EquipPowerArrowDownSprite
	UISprite_t1202 * ___m_EquipPowerArrowDownSprite;
	// UnityEngine.GameObject EquipTooltipsLogic::m_EquipDisableSprite
	GameObject_t9 * ___m_EquipDisableSprite;
	// UILabel EquipTooltipsLogic::m_RemainTimeLable
	UILabel_t1176 * ___m_RemainTimeLable;
	// UnityEngine.GameObject EquipTooltipsLogic::m_PutInQianKunDaiButton
	GameObject_t9 * ___m_PutInQianKunDaiButton;
	// UIGrid EquipTooltipsLogic::m_OpButtonGrid
	UIGrid_t1199 * ___m_OpButtonGrid;
	// UnityEngine.GameObject EquipTooltipsLogic::m_AbsorbButton
	GameObject_t9 * ___m_AbsorbButton;
	// Games.Item.GameItem EquipTooltipsLogic::m_Equip
	GameItem_t1172 * ___m_Equip;
	// EquipTooltipsLogic/ShowType EquipTooltipsLogic::m_Type
	int32_t ___m_Type;
};
struct EquipTooltipsLogic_t1399_StaticFields{
	// EquipTooltipsLogic/VoidBuyDelegate EquipTooltipsLogic::delBuyClick
	VoidBuyDelegate_t1398 * ___delBuyClick;
	// EquipTooltipsLogic/VoidBuyDelegate EquipTooltipsLogic::delBuyBatchClick
	VoidBuyDelegate_t1398 * ___delBuyBatchClick;
	// EquipTooltipsLogic EquipTooltipsLogic::m_Instance
	EquipTooltipsLogic_t1399 * ___m_Instance;
	// Games.Item.GameItem EquipTooltipsLogic::m_curItem
	GameItem_t1172 * ___m_curItem;
	// EquipTooltipsLogic/ShowType EquipTooltipsLogic::m_curType
	int32_t ___m_curType;
	// ItemSlotLogic EquipTooltipsLogic::m_curItemSlot
	ItemSlotLogic_t1237 * ___m_curItemSlot;
};
