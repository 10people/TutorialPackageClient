#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UISpriteAnimation
struct UISpriteAnimation_t1331;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// SkillBarInfo
struct SkillBarInfo_t1721 
{
	// UnityEngine.GameObject SkillBarInfo::buttonInfo
	GameObject_t9 * ___buttonInfo;
	// UISprite SkillBarInfo::CDPicInfo
	UISprite_t1202 * ___CDPicInfo;
	// UISprite SkillBarInfo::CDPicBk
	UISprite_t1202 * ___CDPicBk;
	// UnityEngine.GameObject SkillBarInfo::RingPic
	GameObject_t9 * ___RingPic;
	// UISprite SkillBarInfo::IconInfo
	UISprite_t1202 * ___IconInfo;
	// UISpriteAnimation SkillBarInfo::CDEffect
	UISpriteAnimation_t1331 * ___CDEffect;
	// System.Int32 SkillBarInfo::SkillIndex
	int32_t ___SkillIndex;
	// System.Boolean SkillBarInfo::IsPress
	bool ___IsPress;
	// System.Int32 SkillBarInfo::SkillCount
	int32_t ___SkillCount;
	// System.Boolean SkillBarInfo::isCompleted
	bool ___isCompleted;
	// System.Int32 SkillBarInfo::CurSkillId
	int32_t ___CurSkillId;
	// System.Single SkillBarInfo::fCurrentStartTime
	float ___fCurrentStartTime;
	// System.Single SkillBarInfo::nCurrentCDTime
	float ___nCurrentCDTime;
	// System.Int32 SkillBarInfo::nPreIndex
	int32_t ___nPreIndex;
	// System.Single SkillBarInfo::fRemainCDTime
	float ___fRemainCDTime;
	// System.Single SkillBarInfo::fDisabledRemTime
	float ___fDisabledRemTime;
	// System.Single SkillBarInfo::fCurDisabledStartTime
	float ___fCurDisabledStartTime;
	// System.Single SkillBarInfo::fCurDisabedTime
	float ___fCurDisabedTime;
	// System.Int32 SkillBarInfo::nPreSkillId
	int32_t ___nPreSkillId;
};
