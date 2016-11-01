#pragma once
#include <stdint.h>
// TabButton
struct TabButton_t1210;
// UnityEngine.Transform
struct Transform_t78;
// TabController/TabChangedDelegate
struct TabChangedDelegate_t1847;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TabController
struct TabController_t1209  : public MonoBehaviour_t18
{
	// System.Int32 TabController::startSelectTab
	int32_t ___startSelectTab;
	// TabButton TabController::curHighLightTab
	TabButton_t1210 * ___curHighLightTab;
	// UnityEngine.Transform TabController::m_grid
	Transform_t78 * ___m_grid;
	// System.Boolean TabController::m_bEnableClick
	bool ___m_bEnableClick;
	// TabController/TabChangedDelegate TabController::delTabChanged
	TabChangedDelegate_t1847 * ___delTabChanged;
};
