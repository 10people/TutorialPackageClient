#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// TweenTransform
struct TweenTransform_t5385  : public UITweener_t5320
{
	// UnityEngine.Transform TweenTransform::from
	Transform_t78 * ___from;
	// UnityEngine.Transform TweenTransform::to
	Transform_t78 * ___to;
	// System.Boolean TweenTransform::parentWhenFinished
	bool ___parentWhenFinished;
	// UnityEngine.Transform TweenTransform::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Vector3 TweenTransform::mPos
	Vector3_t121  ___mPos;
	// UnityEngine.Quaternion TweenTransform::mRot
	Quaternion_t120  ___mRot;
	// UnityEngine.Vector3 TweenTransform::mScale
	Vector3_t121  ___mScale;
};
