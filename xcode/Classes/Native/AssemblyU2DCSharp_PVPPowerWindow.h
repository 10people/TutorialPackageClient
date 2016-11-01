#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.IDictionary`2<System.String,PVPSkillListItem>
struct IDictionary_2_t2026;
// System.String
struct String_t;
// PVPPowerWindow
struct PVPPowerWindow_t1913;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PVPPowerWindow
struct PVPPowerWindow_t1913  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PVPPowerWindow::m_PVPSkillListGrid
	GameObject_t9 * ___m_PVPSkillListGrid;
	// UnityEngine.GameObject PVPPowerWindow::m_ObjCurSkillInfo
	GameObject_t9 * ___m_ObjCurSkillInfo;
	// UILabel PVPPowerWindow::m_LabelEnergyCost
	UILabel_t1176 * ___m_LabelEnergyCost;
	// UILabel PVPPowerWindow::m_LabelPowerAdd
	UILabel_t1176 * ___m_LabelPowerAdd;
	// UILabel PVPPowerWindow::m_LabelCurSkillName
	UILabel_t1176 * ___m_LabelCurSkillName;
	// UILabel PVPPowerWindow::m_LabelCurSkillLeve
	UILabel_t1176 * ___m_LabelCurSkillLeve;
	// UILabel PVPPowerWindow::m_LableCurSkillInfo
	UILabel_t1176 * ___m_LableCurSkillInfo;
	// UILabel PVPPowerWindow::m_LableNextSkillInfo
	UILabel_t1176 * ___m_LableNextSkillInfo;
	// UILabel PVPPowerWindow::m_LableCombatValue
	UILabel_t1176 * ___m_LableCombatValue;
	// System.Collections.Generic.IDictionary`2<System.String,PVPSkillListItem> PVPPowerWindow::m_ItemInfo
	Object_t* ___m_ItemInfo;
	// System.Int32 PVPPowerWindow::m_nCurSkillId
	int32_t ___m_nCurSkillId;
	// System.String PVPPowerWindow::m_curItemIndexName
	String_t* ___m_curItemIndexName;
};
struct PVPPowerWindow_t1913_StaticFields{
	// PVPPowerWindow PVPPowerWindow::m_Instance
	PVPPowerWindow_t1913 * ___m_Instance;
};
