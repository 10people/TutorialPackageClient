#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// System.Collections.Generic.List`1<MUIBezierPoint>
struct List_1_t5188;
// MUITweenValue
struct MUITweenValue_t5189;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MUITweenValue/Style
#include "AssemblyU2DCSharp_MUITweenValue_Style.h"
// MUIBezier
struct MUIBezier_t5190  : public MonoBehaviour_t18
{
	// MUITweenValue/Style MUIBezier::style
	int32_t ___style;
	// UnityEngine.AnimationCurve MUIBezier::animationCurve
	AnimationCurve_t4583 * ___animationCurve;
	// System.Single MUIBezier::duration
	float ___duration;
	// System.Single MUIBezier::startDelay
	float ___startDelay;
	// System.Collections.Generic.List`1<MUIBezierPoint> MUIBezier::bezierPoints
	List_1_t5188 * ___bezierPoints;
	// MUITweenValue MUIBezier::tween
	MUITweenValue_t5189 * ___tween;
	// System.Collections.Generic.List`1<EventDelegate> MUIBezier::onFinished
	List_1_t1193 * ___onFinished;
};
