#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// PVPPowerWindow
struct PVPPowerWindow_t1913;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PVPSkillListItem
struct PVPSkillListItem_t1914  : public MonoBehaviour_t18
{
	// UILabel PVPSkillListItem::m_LabelName
	UILabel_t1176 * ___m_LabelName;
	// UILabel PVPSkillListItem::m_LabelLev
	UILabel_t1176 * ___m_LabelLev;
	// UnityEngine.GameObject PVPSkillListItem::m_SprHightlight
	GameObject_t9 * ___m_SprHightlight;
	// System.Int32 PVPSkillListItem::m_nSkillId
	int32_t ___m_nSkillId;
	// PVPPowerWindow PVPSkillListItem::m_parent
	PVPPowerWindow_t1913 * ___m_parent;
};
