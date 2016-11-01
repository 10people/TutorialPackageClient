#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SkillRootButtonItemLogic
struct SkillRootButtonItemLogic_t1745  : public MonoBehaviour_t18
{
	// UILabel SkillRootButtonItemLogic::m_SkillNameLabel
	UILabel_t1176 * ___m_SkillNameLabel;
	// UILabel SkillRootButtonItemLogic::m_SkillLevLabel
	UILabel_t1176 * ___m_SkillLevLabel;
	// UISprite SkillRootButtonItemLogic::m_SkillIconSprite
	UISprite_t1202 * ___m_SkillIconSprite;
	// UISprite SkillRootButtonItemLogic::m_SkillBakSprite
	UISprite_t1202 * ___m_SkillBakSprite;
	// System.Int32 SkillRootButtonItemLogic::m_nSkillIndex
	int32_t ___m_nSkillIndex;
	// UnityEngine.GameObject SkillRootButtonItemLogic::m_LevelTipsIcon
	GameObject_t9 * ___m_LevelTipsIcon;
	// System.Int32 SkillRootButtonItemLogic::m_nSkillID
	int32_t ___m_nSkillID;
	// System.Int32 SkillRootButtonItemLogic::m_nSkillBaseId
	int32_t ___m_nSkillBaseId;
};
