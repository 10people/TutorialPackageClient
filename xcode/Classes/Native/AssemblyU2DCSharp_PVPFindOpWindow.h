#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// PVPOpListItem
struct PVPOpListItem_t1909;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PVPData/OpponentInfo
#include "AssemblyU2DCSharp_PVPData_OpponentInfo.h"
// PVPFindOpWindow
struct PVPFindOpWindow_t1908  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PVPFindOpWindow::m_PVPFindList
	GameObject_t9 * ___m_PVPFindList;
	// UILabel PVPFindOpWindow::LableShowFindTip
	UILabel_t1176 * ___LableShowFindTip;
	// UnityEngine.GameObject PVPFindOpWindow::FindTips
	GameObject_t9 * ___FindTips;
	// UnityEngine.GameObject PVPFindOpWindow::m_OpListGrid
	GameObject_t9 * ___m_OpListGrid;
	// PVPData/OpponentInfo PVPFindOpWindow::m_curData
	OpponentInfo_t1910  ___m_curData;
	// PVPOpListItem PVPFindOpWindow::m_curSelectItem
	PVPOpListItem_t1909 * ___m_curSelectItem;
	// UnityEngine.GameObject PVPFindOpWindow::m_RandWindow
	GameObject_t9 * ___m_RandWindow;
	// UnityEngine.GameObject PVPFindOpWindow::m_RecordWindow
	GameObject_t9 * ___m_RecordWindow;
	// UnityEngine.GameObject PVPFindOpWindow::m_ShowRule
	GameObject_t9 * ___m_ShowRule;
	// UnityEngine.GameObject PVPFindOpWindow::m_BrushBtn
	GameObject_t9 * ___m_BrushBtn;
	// UILabel PVPFindOpWindow::m_TimeLable
	UILabel_t1176 * ___m_TimeLable;
};
