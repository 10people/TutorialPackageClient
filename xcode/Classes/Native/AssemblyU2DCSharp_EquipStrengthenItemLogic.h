#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// Games.Item.GameItem
struct GameItem_t1172;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EquipStrengthenItemLogic/Type
#include "AssemblyU2DCSharp_EquipStrengthenItemLogic_Type.h"
// EquipStrengthenItemLogic/Status
#include "AssemblyU2DCSharp_EquipStrengthenItemLogic_Status.h"
// EquipStrengthenItemLogic
struct EquipStrengthenItemLogic_t1389  : public MonoBehaviour_t18
{
	// UISprite EquipStrengthenItemLogic::m_itemSprite
	UISprite_t1202 * ___m_itemSprite;
	// UISprite EquipStrengthenItemLogic::m_itemChooseSprite
	UISprite_t1202 * ___m_itemChooseSprite;
	// UISprite EquipStrengthenItemLogic::m_itemQualitySprite
	UISprite_t1202 * ___m_itemQualitySprite;
	// UILabel EquipStrengthenItemLogic::m_itemStackCount
	UILabel_t1176 * ___m_itemStackCount;
	// UISprite EquipStrengthenItemLogic::m_ArrowUpSprite
	UISprite_t1202 * ___m_ArrowUpSprite;
	// UISprite EquipStrengthenItemLogic::m_ArrowDownSprite
	UISprite_t1202 * ___m_ArrowDownSprite;
	// UISprite EquipStrengthenItemLogic::m_DisableSprite
	UISprite_t1202 * ___m_DisableSprite;
	// UILabel EquipStrengthenItemLogic::m_StarLvlLabel
	UILabel_t1176 * ___m_StarLvlLabel;
	// UILabel EquipStrengthenItemLogic::m_EnchanceLvlLabel
	UILabel_t1176 * ___m_EnchanceLvlLabel;
	// Games.Item.GameItem EquipStrengthenItemLogic::m_item
	GameItem_t1172 * ___m_item;
	// EquipStrengthenItemLogic/Type EquipStrengthenItemLogic::m_type
	int32_t ___m_type;
	// EquipStrengthenItemLogic/Status EquipStrengthenItemLogic::m_Status
	int32_t ___m_Status;
	// System.Int32 EquipStrengthenItemLogic::m_NewPlayerGuideFlag_Step
	int32_t ___m_NewPlayerGuideFlag_Step;
	// System.Int32 EquipStrengthenItemLogic::selectedCount
	int32_t ___selectedCount;
};
