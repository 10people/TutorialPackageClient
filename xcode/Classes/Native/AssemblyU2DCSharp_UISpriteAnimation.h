#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UISprite
struct UISprite_t1202;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UISpriteAnimation
struct UISpriteAnimation_t1331  : public MonoBehaviour_t18
{
	// System.Int32 UISpriteAnimation::mFPS
	int32_t ___mFPS;
	// System.String UISpriteAnimation::mPrefix
	String_t* ___mPrefix;
	// System.Boolean UISpriteAnimation::mLoop
	bool ___mLoop;
	// UISprite UISpriteAnimation::mSprite
	UISprite_t1202 * ___mSprite;
	// System.Single UISpriteAnimation::mDelta
	float ___mDelta;
	// System.Int32 UISpriteAnimation::mIndex
	int32_t ___mIndex;
	// System.Boolean UISpriteAnimation::mActive
	bool ___mActive;
	// System.Collections.Generic.List`1<System.String> UISpriteAnimation::mSpriteNames
	List_1_t1333 * ___mSpriteNames;
};
