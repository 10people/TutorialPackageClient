#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionRewardItem
struct MissionRewardItem_t1556  : public MonoBehaviour_t18
{
	// UISprite MissionRewardItem::sprIcon
	UISprite_t1202 * ___sprIcon;
	// UISprite MissionRewardItem::sprQualityFrame
	UISprite_t1202 * ___sprQualityFrame;
	// UILabel MissionRewardItem::lblCount
	UILabel_t1176 * ___lblCount;
	// System.Int32 MissionRewardItem::itemType
	int32_t ___itemType;
	// System.Int32 MissionRewardItem::itemId
	int32_t ___itemId;
	// System.Int32 MissionRewardItem::itemCount
	int32_t ___itemCount;
};
