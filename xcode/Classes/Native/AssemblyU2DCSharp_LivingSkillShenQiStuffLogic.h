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
// LivingSkillShenQiStuffLogic
struct LivingSkillShenQiStuffLogic_t1513  : public MonoBehaviour_t18
{
	// ItemSlotLogic LivingSkillShenQiStuffLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel LivingSkillShenQiStuffLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel LivingSkillShenQiStuffLogic::m_CountLabel
	UILabel_t1176 * ___m_CountLabel;
	// UnityEngine.GameObject LivingSkillShenQiStuffLogic::m_SelBtGameObj
	GameObject_t9 * ___m_SelBtGameObj;
	// System.Int32 LivingSkillShenQiStuffLogic::m_ItemID
	int32_t ___m_ItemID;
	// System.UInt64 LivingSkillShenQiStuffLogic::m_ItemGuid
	uint64_t ___m_ItemGuid;
	// System.Int32 LivingSkillShenQiStuffLogic::m_RequireCount
	int32_t ___m_RequireCount;
};
