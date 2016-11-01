#pragma once
#include <stdint.h>
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UIInput
struct UIInput_t1231;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"
// CG_BUY_YUANBAOGOODS/DEADLINE_TYPE
#include "AssemblyU2DCSharp_CG_BUY_YUANBAOGOODS_DEADLINE_TYPE.h"
// YBShopNumChooseLogic
struct YBShopNumChooseLogic_t2095  : public MonoBehaviour_t18
{
	// ItemSlotLogic YBShopNumChooseLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UIInput YBShopNumChooseLogic::m_NumInput
	UIInput_t1231 * ___m_NumInput;
	// UILabel YBShopNumChooseLogic::m_SumPriceLabel
	UILabel_t1176 * ___m_SumPriceLabel;
	// UILabel YBShopNumChooseLogic::m_ItemNameLabel
	UILabel_t1176 * ___m_ItemNameLabel;
	// UnityEngine.GameObject YBShopNumChooseLogic::m_ButtonGrid
	GameObject_t9 * ___m_ButtonGrid;
	// UnityEngine.GameObject YBShopNumChooseLogic::m_PresentButton
	GameObject_t9 * ___m_PresentButton;
	// UnityEngine.BoxCollider YBShopNumChooseLogic::m_InputBoxCollider
	BoxCollider_t128 * ___m_InputBoxCollider;
	// System.Int32 YBShopNumChooseLogic::m_CurNum
	int32_t ___m_CurNum;
	// System.Int32 YBShopNumChooseLogic::m_SumPrice
	int32_t ___m_SumPrice;
	// System.Int32 YBShopNumChooseLogic::m_GoodsId
	int32_t ___m_GoodsId;
	// ItemSlotLogic/SLOT_TYPE YBShopNumChooseLogic::m_eSlotType
	int32_t ___m_eSlotType;
	// System.Int32 YBShopNumChooseLogic::m_ItemID
	int32_t ___m_ItemID;
	// System.Int32 YBShopNumChooseLogic::m_ItemPrice
	int32_t ___m_ItemPrice;
	// System.Boolean YBShopNumChooseLogic::m_bChooseBind
	bool ___m_bChooseBind;
	// CG_BUY_YUANBAOGOODS/DEADLINE_TYPE YBShopNumChooseLogic::m_eDeadlineType
	int32_t ___m_eDeadlineType;
};
