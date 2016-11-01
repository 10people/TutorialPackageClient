#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TweenPosition
struct TweenPosition_t1255  : public UITweener_t5320
{
	// UnityEngine.Vector3 TweenPosition::from
	Vector3_t121  ___from;
	// UnityEngine.Vector3 TweenPosition::to
	Vector3_t121  ___to;
	// UnityEngine.Transform TweenPosition::mTrans
	Transform_t78 * ___mTrans;
};
