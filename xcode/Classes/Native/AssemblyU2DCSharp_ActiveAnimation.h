#pragma once
#include <stdint.h>
// ActiveAnimation
struct ActiveAnimation_t5335;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t1252;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// ActiveAnimation
struct ActiveAnimation_t5335  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<EventDelegate> ActiveAnimation::onFinished
	List_1_t1193 * ___onFinished;
	// UnityEngine.GameObject ActiveAnimation::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String ActiveAnimation::callWhenFinished
	String_t* ___callWhenFinished;
	// UnityEngine.Animation ActiveAnimation::mAnim
	Animation_t1252 * ___mAnim;
	// AnimationOrTween.Direction ActiveAnimation::mLastDirection
	int32_t ___mLastDirection;
	// AnimationOrTween.Direction ActiveAnimation::mDisableDirection
	int32_t ___mDisableDirection;
	// System.Boolean ActiveAnimation::mNotify
	bool ___mNotify;
};
struct ActiveAnimation_t5335_StaticFields{
	// ActiveAnimation ActiveAnimation::current
	ActiveAnimation_t5335 * ___current;
};
