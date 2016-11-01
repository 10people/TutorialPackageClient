#pragma once
#include <stdint.h>
// UITweener
struct UITweener_t5320;
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UITweener/Method
#include "AssemblyU2DCSharp_UITweener_Method.h"
// UITweener/Style
#include "AssemblyU2DCSharp_UITweener_Style.h"
// UITweener
struct UITweener_t5320  : public MonoBehaviour_t18
{
	// UITweener/Method UITweener::method
	int32_t ___method;
	// UITweener/Style UITweener::style
	int32_t ___style;
	// UnityEngine.AnimationCurve UITweener::animationCurve
	AnimationCurve_t4583 * ___animationCurve;
	// System.Boolean UITweener::ignoreTimeScale
	bool ___ignoreTimeScale;
	// System.Single UITweener::delay
	float ___delay;
	// System.Single UITweener::duration
	float ___duration;
	// System.Boolean UITweener::steeperCurves
	bool ___steeperCurves;
	// System.Int32 UITweener::tweenGroup
	int32_t ___tweenGroup;
	// System.Collections.Generic.List`1<EventDelegate> UITweener::onFinished
	List_1_t1193 * ___onFinished;
	// UnityEngine.GameObject UITweener::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UITweener::callWhenFinished
	String_t* ___callWhenFinished;
	// System.Boolean UITweener::mStarted
	bool ___mStarted;
	// System.Single UITweener::mStartTime
	float ___mStartTime;
	// System.Single UITweener::mDuration
	float ___mDuration;
	// System.Single UITweener::mAmountPerDelta
	float ___mAmountPerDelta;
	// System.Single UITweener::mFactor
	float ___mFactor;
};
struct UITweener_t5320_StaticFields{
	// UITweener UITweener::current
	UITweener_t5320 * ___current;
};
