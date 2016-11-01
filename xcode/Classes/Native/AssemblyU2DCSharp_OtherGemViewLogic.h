#pragma once
#include <stdint.h>
// UISprite[]
struct UISpriteU5BU5D_t1201;
// System.Int32[]
struct Int32U5BU5D_t116;
// OtherGemViewLogic
struct OtherGemViewLogic_t1615;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OtherGemViewLogic
struct OtherGemViewLogic_t1615  : public MonoBehaviour_t18
{
	// UISprite[] OtherGemViewLogic::m_GemSlotSprite
	UISpriteU5BU5D_t1201* ___m_GemSlotSprite;
	// UISprite[] OtherGemViewLogic::m_GemSlotChooseSprite
	UISpriteU5BU5D_t1201* ___m_GemSlotChooseSprite;
	// UISprite[] OtherGemViewLogic::m_GemItemQualitySprite
	UISpriteU5BU5D_t1201* ___m_GemItemQualitySprite;
	// System.Int32[] OtherGemViewLogic::m_GemSlotId
	Int32U5BU5D_t116* ___m_GemSlotId;
	// System.Int32 OtherGemViewLogic::m_CurEquipSlot
	int32_t ___m_CurEquipSlot;
	// System.Int32 OtherGemViewLogic::m_CurGemSlot
	int32_t ___m_CurGemSlot;
	// UILabel[] OtherGemViewLogic::m_GemName
	UILabelU5BU5D_t1203* ___m_GemName;
	// UILabel[] OtherGemViewLogic::m_GemdDes
	UILabelU5BU5D_t1203* ___m_GemdDes;
	// UISprite OtherGemViewLogic::m_CurEquipIcon
	UISprite_t1202 * ___m_CurEquipIcon;
};
struct OtherGemViewLogic_t1615_StaticFields{
	// OtherGemViewLogic OtherGemViewLogic::m_Instance
	OtherGemViewLogic_t1615 * ___m_Instance;
};
