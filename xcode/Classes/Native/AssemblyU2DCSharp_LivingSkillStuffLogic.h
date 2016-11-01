#pragma once
#include <stdint.h>
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LivingSkillStuffLogic
struct LivingSkillStuffLogic_t1514  : public MonoBehaviour_t18
{
	// ItemSlotLogic LivingSkillStuffLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel LivingSkillStuffLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel LivingSkillStuffLogic::m_CountLabel
	UILabel_t1176 * ___m_CountLabel;
	// UnityEngine.GameObject LivingSkillStuffLogic::m_EquipFlag
	GameObject_t9 * ___m_EquipFlag;
	// UnityEngine.GameObject LivingSkillStuffLogic::m_Content
	GameObject_t9 * ___m_Content;
	// System.Int32 LivingSkillStuffLogic::m_ItemID
	int32_t ___m_ItemID;
	// System.Int32 LivingSkillStuffLogic::m_RequireCount
	int32_t ___m_RequireCount;
};
