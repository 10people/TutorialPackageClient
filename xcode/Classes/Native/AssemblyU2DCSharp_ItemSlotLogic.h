#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// ItemSlotLogic/OnClick
struct OnClick_t1493;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"
// ItemSlotLogic
struct ItemSlotLogic_t1237  : public MonoBehaviour_t18
{
	// UISprite ItemSlotLogic::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UISprite ItemSlotLogic::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UILabel ItemSlotLogic::m_NumLabel
	UILabel_t1176 * ___m_NumLabel;
	// UISprite ItemSlotLogic::m_DisableSprite
	UISprite_t1202 * ___m_DisableSprite;
	// UISprite ItemSlotLogic::m_ChooseSprite
	UISprite_t1202 * ___m_ChooseSprite;
	// System.Boolean ItemSlotLogic::UseStaticItem
	bool ___UseStaticItem;
	// System.Int32 ItemSlotLogic::StaticItemID
	int32_t ___StaticItemID;
	// System.Int32 ItemSlotLogic::StaticItemType
	int32_t ___StaticItemType;
	// System.Int32 ItemSlotLogic::StaticItemCount
	int32_t ___StaticItemCount;
	// System.Int32 ItemSlotLogic::m_ItemID
	int32_t ___m_ItemID;
	// ItemSlotLogic/SLOT_TYPE ItemSlotLogic::m_eItemType
	int32_t ___m_eItemType;
	// ItemSlotLogic/OnClick ItemSlotLogic::m_delSlotOnClick
	OnClick_t1493 * ___m_delSlotOnClick;
};
