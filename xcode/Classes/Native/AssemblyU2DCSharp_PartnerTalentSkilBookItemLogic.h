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
// PartnerTalentSkilBookItemLogic
struct PartnerTalentSkilBookItemLogic_t1647  : public MonoBehaviour_t18
{
	// ItemSlotLogic PartnerTalentSkilBookItemLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel PartnerTalentSkilBookItemLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel PartnerTalentSkilBookItemLogic::m_OwnCountLabel
	UILabel_t1176 * ___m_OwnCountLabel;
	// UILabel PartnerTalentSkilBookItemLogic::m_UseCountLabel
	UILabel_t1176 * ___m_UseCountLabel;
	// UnityEngine.GameObject PartnerTalentSkilBookItemLogic::m_MinusButton
	GameObject_t9 * ___m_MinusButton;
	// UnityEngine.GameObject PartnerTalentSkilBookItemLogic::m_AddButton
	GameObject_t9 * ___m_AddButton;
	// System.Int32 PartnerTalentSkilBookItemLogic::m_SkillBookId
	int32_t ___m_SkillBookId;
	// System.Int32 PartnerTalentSkilBookItemLogic::m_UseCount
	int32_t ___m_UseCount;
};
