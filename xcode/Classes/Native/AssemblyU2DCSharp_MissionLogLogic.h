#pragma once
#include <stdint.h>
// TabController
struct TabController_t1209;
// MissionView_Main
struct MissionView_Main_t1560;
// MissionView_Daily
struct MissionView_Daily_t1561;
// MissionView_Guild
struct MissionView_Guild_t1562;
// UILabel
struct UILabel_t1176;
// MissionLogLogic
struct MissionLogLogic_t1563;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionLogLogic
struct MissionLogLogic_t1563  : public MonoBehaviour_t18
{
	// TabController MissionLogLogic::tabController
	TabController_t1209 * ___tabController;
	// MissionView_Main MissionLogLogic::mainView
	MissionView_Main_t1560 * ___mainView;
	// MissionView_Daily MissionLogLogic::dailyView
	MissionView_Daily_t1561 * ___dailyView;
	// MissionView_Guild MissionLogLogic::guildView
	MissionView_Guild_t1562 * ___guildView;
	// UILabel MissionLogLogic::lblCoin
	UILabel_t1176 * ___lblCoin;
	// UILabel MissionLogLogic::lblRuby
	UILabel_t1176 * ___lblRuby;
};
struct MissionLogLogic_t1563_StaticFields{
	// MissionLogLogic MissionLogLogic::m_Instance
	MissionLogLogic_t1563 * ___m_Instance;
};
