#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// UnityEngine.Transform
struct Transform_t78;
// MUIBlurredSprite
struct MUIBlurredSprite_t5193;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChangePerson
struct ChangePerson_t1694  : public MonoBehaviour_t18
{
	// UnityEngine.AnimationCurve ChangePerson::reverseHeightCurve
	AnimationCurve_t4583 * ___reverseHeightCurve;
	// UnityEngine.AnimationCurve ChangePerson::reverseAlphaCurve
	AnimationCurve_t4583 * ___reverseAlphaCurve;
	// UnityEngine.AnimationCurve ChangePerson::forwardHeightCurve
	AnimationCurve_t4583 * ___forwardHeightCurve;
	// UnityEngine.AnimationCurve ChangePerson::forwardAlphaCurve
	AnimationCurve_t4583 * ___forwardAlphaCurve;
	// UnityEngine.Transform ChangePerson::select1
	Transform_t78 * ___select1;
	// UnityEngine.Transform ChangePerson::select2
	Transform_t78 * ___select2;
	// MUIBlurredSprite ChangePerson::callBackBlurred
	MUIBlurredSprite_t5193 * ___callBackBlurred;
	// System.Boolean ChangePerson::IsMotion
	bool ___IsMotion;
};
