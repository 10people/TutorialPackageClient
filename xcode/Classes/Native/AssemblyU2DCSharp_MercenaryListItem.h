#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UIToggle
struct UIToggle_t1220;
// MercenaryWindow
struct MercenaryWindow_t1902;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HuaShanPVPData/MercenaryInfo
#include "AssemblyU2DCSharp_HuaShanPVPData_MercenaryInfo.h"
// MercenaryListItem
struct MercenaryListItem_t1903  : public MonoBehaviour_t18
{
	// UILabel MercenaryListItem::LabelName
	UILabel_t1176 * ___LabelName;
	// UILabel MercenaryListItem::LabelCost
	UILabel_t1176 * ___LabelCost;
	// UILabel MercenaryListItem::LabelProfession
	UILabel_t1176 * ___LabelProfession;
	// UILabel MercenaryListItem::LabelCombat
	UILabel_t1176 * ___LabelCombat;
	// UILabel MercenaryListItem::LabelRelationShip
	UILabel_t1176 * ___LabelRelationShip;
	// UIToggle MercenaryListItem::UIToggleSel
	UIToggle_t1220 * ___UIToggleSel;
	// MercenaryWindow MercenaryListItem::m_parent
	MercenaryWindow_t1902 * ___m_parent;
	// HuaShanPVPData/MercenaryInfo MercenaryListItem::m_data
	MercenaryInfo_t1904  ___m_data;
};
