#pragma once
#include <stdint.h>
// MUISelectPerson/SelectDelegate
struct SelectDelegate_t5200;
// MUISelectPerson/VoidDelegate
struct VoidDelegate_t5201;
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// System.Single[]
struct SingleU5BU5D_t744;
// MUIBezierValue
struct MUIBezierValue_t5192;
// MUITweenValue
struct MUITweenValue_t5189;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MUISelectPerson
struct MUISelectPerson_t1695  : public MonoBehaviour_t18
{
	// MUISelectPerson/SelectDelegate MUISelectPerson::onSelectOneItem
	SelectDelegate_t5200 * ___onSelectOneItem;
	// MUISelectPerson/VoidDelegate MUISelectPerson::onSpringFinished
	VoidDelegate_t5201 * ___onSpringFinished;
	// MUISelectPerson/VoidDelegate MUISelectPerson::onBeginRotation
	VoidDelegate_t5201 * ___onBeginRotation;
	// UnityEngine.AnimationCurve MUISelectPerson::posCurve
	AnimationCurve_t4583 * ___posCurve;
	// UnityEngine.AnimationCurve MUISelectPerson::scaleCurve
	AnimationCurve_t4583 * ___scaleCurve;
	// System.Single[] MUISelectPerson::itemScale
	SingleU5BU5D_t744* ___itemScale;
	// System.Single[] MUISelectPerson::itemAlpha
	SingleU5BU5D_t744* ___itemAlpha;
	// System.Single[] MUISelectPerson::itemDuration
	SingleU5BU5D_t744* ___itemDuration;
	// MUIBezierValue MUISelectPerson::m_bezier
	MUIBezierValue_t5192 * ___m_bezier;
	// MUITweenValue MUISelectPerson::tweenValue
	MUITweenValue_t5189 * ___tweenValue;
	// System.Single MUISelectPerson::bezierValue
	float ___bezierValue;
	// System.Single MUISelectPerson::preBezierValue
	float ___preBezierValue;
	// System.Single MUISelectPerson::checkItemAmount
	float ___checkItemAmount;
	// System.Single MUISelectPerson::mDelta
	float ___mDelta;
	// System.Boolean MUISelectPerson::isDragOut
	bool ___isDragOut;
	// System.Boolean MUISelectPerson::isDrag
	bool ___isDrag;
};
