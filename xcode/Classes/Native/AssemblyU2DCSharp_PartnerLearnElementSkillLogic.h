#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerLearnElementSkillLogic
struct PartnerLearnElementSkillLogic_t1643  : public MonoBehaviour_t18
{
	// UISprite PartnerLearnElementSkillLogic::m_SkillIcon
	UISprite_t1202 * ___m_SkillIcon;
	// UISprite PartnerLearnElementSkillLogic::m_QualityPic
	UISprite_t1202 * ___m_QualityPic;
	// UnityEngine.GameObject PartnerLearnElementSkillLogic::m_LockButton
	GameObject_t9 * ___m_LockButton;
	// UnityEngine.GameObject PartnerLearnElementSkillLogic::m_UnLockButton
	GameObject_t9 * ___m_UnLockButton;
	// UnityEngine.GameObject PartnerLearnElementSkillLogic::m_NoHoldSprite
	GameObject_t9 * ___m_NoHoldSprite;
	// UILabel PartnerLearnElementSkillLogic::m_Level
	UILabel_t1176 * ___m_Level;
	// System.Boolean PartnerLearnElementSkillLogic::m_bLocked
	bool ___m_bLocked;
	// System.Boolean PartnerLearnElementSkillLogic::m_bValidSlot
	bool ___m_bValidSlot;
};
