#pragma once
#include <stdint.h>
// WeekdayActivityWindow
struct WeekdayActivityWindow_t2093;
// MonthActivityWeekdayLogic[]
struct MonthActivityWeekdayLogicU5BU5D_t2094;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WeekdayActivityWindow
struct WeekdayActivityWindow_t2093  : public MonoBehaviour_t18
{
	// MonthActivityWeekdayLogic[] WeekdayActivityWindow::m_DayItem
	MonthActivityWeekdayLogicU5BU5D_t2094* ___m_DayItem;
	// TabController WeekdayActivityWindow::m_TabController
	TabController_t1209 * ___m_TabController;
	// UnityEngine.GameObject WeekdayActivityWindow::m_WeekdayActivityOpen
	GameObject_t9 * ___m_WeekdayActivityOpen;
	// UnityEngine.GameObject WeekdayActivityWindow::m_WeekdayActivityClose
	GameObject_t9 * ___m_WeekdayActivityClose;
};
struct WeekdayActivityWindow_t2093_StaticFields{
	// WeekdayActivityWindow WeekdayActivityWindow::m_Instance
	WeekdayActivityWindow_t2093 * ___m_Instance;
};
