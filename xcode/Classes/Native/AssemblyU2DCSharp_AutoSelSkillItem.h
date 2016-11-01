#pragma once
#include <stdint.h>
// UIToggle
struct UIToggle_t1220;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoSelSkillItem
struct AutoSelSkillItem_t1861  : public MonoBehaviour_t18
{
	// UIToggle AutoSelSkillItem::m_AutoSkillToggle
	UIToggle_t1220 * ___m_AutoSkillToggle;
	// UISprite AutoSelSkillItem::m_AutoSkillSprite
	UISprite_t1202 * ___m_AutoSkillSprite;
	// System.Int32 AutoSelSkillItem::m_nSkillID
	int32_t ___m_nSkillID;
	// System.Int32 AutoSelSkillItem::m_nOwnIndex
	int32_t ___m_nOwnIndex;
};
