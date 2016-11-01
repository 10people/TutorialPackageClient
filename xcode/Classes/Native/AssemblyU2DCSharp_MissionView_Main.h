#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// MissionLogItem
struct MissionLogItem_t1559;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionView_Main
struct MissionView_Main_t1560  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject MissionView_Main::missionList
	GameObject_t9 * ___missionList;
	// UnityEngine.GameObject MissionView_Main::missionItemTemplate
	GameObject_t9 * ___missionItemTemplate;
	// UILabel MissionView_Main::lblMissionName
	UILabel_t1176 * ___lblMissionName;
	// UILabel MissionView_Main::lblMissionDesc
	UILabel_t1176 * ___lblMissionDesc;
	// UnityEngine.GameObject MissionView_Main::rewardList
	GameObject_t9 * ___rewardList;
	// UnityEngine.GameObject MissionView_Main::rewardItemTemplate
	GameObject_t9 * ___rewardItemTemplate;
	// UnityEngine.GameObject MissionView_Main::btnAbandon
	GameObject_t9 * ___btnAbandon;
	// System.Int32 MissionView_Main::mMissionId
	int32_t ___mMissionId;
	// MissionLogItem MissionView_Main::mLastSelectedItem
	MissionLogItem_t1559 * ___mLastSelectedItem;
};
