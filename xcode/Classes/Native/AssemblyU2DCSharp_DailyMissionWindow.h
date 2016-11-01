#pragma once
#include <stdint.h>
// DailyMissionWindow
struct DailyMissionWindow_t1980;
// UnityEngine.GameObject
struct GameObject_t9;
// UIGrid
struct UIGrid_t1199;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DailyMissionWindow
struct DailyMissionWindow_t1980  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject DailyMissionWindow::m_DailyMissionRefresh
	GameObject_t9 * ___m_DailyMissionRefresh;
	// UIGrid DailyMissionWindow::m_ItemGrid
	UIGrid_t1199 * ___m_ItemGrid;
	// UILabel DailyMissionWindow::m_ActivenessTip
	UILabel_t1176 * ___m_ActivenessTip;
	// UILabel DailyMissionWindow::m_DoneCountTip
	UILabel_t1176 * ___m_DoneCountTip;
	// UnityEngine.GameObject DailyMissionWindow::m_DailyMissionItem
	GameObject_t9 * ___m_DailyMissionItem;
	// System.Int32 DailyMissionWindow::m_nDoneCount
	int32_t ___m_nDoneCount;
	// System.Int32 DailyMissionWindow::m_nActiveness
	int32_t ___m_nActiveness;
	// System.Int32 DailyMissionWindow::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct DailyMissionWindow_t1980_StaticFields{
	// DailyMissionWindow DailyMissionWindow::m_Instance
	DailyMissionWindow_t1980 * ___m_Instance;
};
