#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UIButtonRotation
struct UIButtonRotation_t5292  : public MonoBehaviour_t18
{
	// UnityEngine.Transform UIButtonRotation::tweenTarget
	Transform_t78 * ___tweenTarget;
	// UnityEngine.Vector3 UIButtonRotation::hover
	Vector3_t121  ___hover;
	// UnityEngine.Vector3 UIButtonRotation::pressed
	Vector3_t121  ___pressed;
	// System.Single UIButtonRotation::duration
	float ___duration;
	// UnityEngine.Quaternion UIButtonRotation::mRot
	Quaternion_t120  ___mRot;
	// System.Boolean UIButtonRotation::mStarted
	bool ___mStarted;
	// System.Boolean UIButtonRotation::mHighlighted
	bool ___mHighlighted;
};
