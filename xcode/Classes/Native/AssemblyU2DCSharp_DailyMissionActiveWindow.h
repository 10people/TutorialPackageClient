#pragma once
#include <stdint.h>
// TabController
struct TabController_t1209;
// DailyMissionWindow
struct DailyMissionWindow_t1980;
// ActiveAwardWindow
struct ActiveAwardWindow_t1965;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DailyMissionActiveWindow
struct DailyMissionActiveWindow_t1787  : public MonoBehaviour_t18
{
	// TabController DailyMissionActiveWindow::m_TabController
	TabController_t1209 * ___m_TabController;
	// DailyMissionWindow DailyMissionActiveWindow::m_DailyMissionWindow
	DailyMissionWindow_t1980 * ___m_DailyMissionWindow;
	// ActiveAwardWindow DailyMissionActiveWindow::m_ActivenessWindow
	ActiveAwardWindow_t1965 * ___m_ActivenessWindow;
	// System.Int32 DailyMissionActiveWindow::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
