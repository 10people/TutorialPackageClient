#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UIGrid
struct UIGrid_t1199;
// MissionRewardItem[]
struct MissionRewardItemU5BU5D_t1555;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionView_Daily
struct MissionView_Daily_t1561  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject MissionView_Daily::missionList
	GameObject_t9 * ___missionList;
	// UnityEngine.GameObject MissionView_Daily::dailyMissionItemTemplate
	GameObject_t9 * ___dailyMissionItemTemplate;
	// UISprite MissionView_Daily::sprProgressBarFore
	UISprite_t1202 * ___sprProgressBarFore;
	// UISprite MissionView_Daily::sprProgressBarBack
	UISprite_t1202 * ___sprProgressBarBack;
	// UISprite MissionView_Daily::sprProgressBarLight
	UISprite_t1202 * ___sprProgressBarLight;
	// UILabel MissionView_Daily::lblActivePoint
	UILabel_t1176 * ___lblActivePoint;
	// UnityEngine.GameObject[] MissionView_Daily::chests
	GameObjectU5BU5D_t1200* ___chests;
	// UnityEngine.GameObject MissionView_Daily::chestDialog
	GameObject_t9 * ___chestDialog;
	// UIGrid MissionView_Daily::rewardGrid
	UIGrid_t1199 * ___rewardGrid;
	// MissionRewardItem[] MissionView_Daily::rewards
	MissionRewardItemU5BU5D_t1555* ___rewards;
	// UnityEngine.GameObject MissionView_Daily::btnClaim
	GameObject_t9 * ___btnClaim;
	// UnityEngine.GameObject MissionView_Daily::btnCloseDialog
	GameObject_t9 * ___btnCloseDialog;
	// System.Int32 MissionView_Daily::mOpenChestId
	int32_t ___mOpenChestId;
	// System.Int32 MissionView_Daily::mRewardIndex
	int32_t ___mRewardIndex;
};
