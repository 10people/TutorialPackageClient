#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// MissionRewardItem[]
struct MissionRewardItemU5BU5D_t1555;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DailyMissionItem
struct DailyMissionItem_t1557  : public MonoBehaviour_t18
{
	// UILabel DailyMissionItem::lblMissionName
	UILabel_t1176 * ___lblMissionName;
	// UISprite DailyMissionItem::sprIcon
	UISprite_t1202 * ___sprIcon;
	// UILabel DailyMissionItem::lblProgress
	UILabel_t1176 * ___lblProgress;
	// UILabel DailyMissionItem::lblDesc
	UILabel_t1176 * ___lblDesc;
	// UILabel DailyMissionItem::lblActive
	UILabel_t1176 * ___lblActive;
	// UISprite DailyMissionItem::sprProgressBarFore
	UISprite_t1202 * ___sprProgressBarFore;
	// UISprite DailyMissionItem::sprProgressBarBack
	UISprite_t1202 * ___sprProgressBarBack;
	// UISprite DailyMissionItem::sprProgressBarLight
	UISprite_t1202 * ___sprProgressBarLight;
	// UnityEngine.GameObject DailyMissionItem::rewardArea
	GameObject_t9 * ___rewardArea;
	// MissionRewardItem[] DailyMissionItem::rewards
	MissionRewardItemU5BU5D_t1555* ___rewards;
	// UnityEngine.GameObject DailyMissionItem::btnClaim
	GameObject_t9 * ___btnClaim;
	// UnityEngine.GameObject DailyMissionItem::doneArea
	GameObject_t9 * ___doneArea;
	// System.Int32 DailyMissionItem::mMissionId
	int32_t ___mMissionId;
	// System.Int32 DailyMissionItem::mRewardIndex
	int32_t ___mRewardIndex;
};
