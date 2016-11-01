#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TweenRotation
struct TweenRotation_t1257  : public UITweener_t5320
{
	// UnityEngine.Vector3 TweenRotation::from
	Vector3_t121  ___from;
	// UnityEngine.Vector3 TweenRotation::to
	Vector3_t121  ___to;
	// UnityEngine.Transform TweenRotation::mTrans
	Transform_t78 * ___mTrans;
};
