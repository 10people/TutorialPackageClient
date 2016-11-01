#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MUITweenValue/Style
#include "AssemblyU2DCSharp_MUITweenValue_Style.h"
// MUITweenValue
struct MUITweenValue_t5189  : public MonoBehaviour_t18
{
	// UnityEngine.AnimationCurve MUITweenValue::animationCurve
	AnimationCurve_t4583 * ___animationCurve;
	// MUITweenValue/Style MUITweenValue::style
	int32_t ___style;
	// System.Single MUITweenValue::duration
	float ___duration;
	// System.Single MUITweenValue::startDelay
	float ___startDelay;
	// System.Single MUITweenValue::startValue
	float ___startValue;
	// System.Single MUITweenValue::endValue
	float ___endValue;
	// System.Collections.Generic.List`1<EventDelegate> MUITweenValue::onFinished
	List_1_t1193 * ___onFinished;
	// System.Single MUITweenValue::mStartTime
	float ___mStartTime;
	// System.Single MUITweenValue::mFactor
	float ___mFactor;
	// System.Boolean MUITweenValue::mStarted
	bool ___mStarted;
	// System.Single MUITweenValue::mAmountPerDelta
	float ___mAmountPerDelta;
	// System.Single MUITweenValue::finalValue
	float ___finalValue;
};
