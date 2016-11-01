#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIButtonScale
struct UIButtonScale_t5293  : public MonoBehaviour_t18
{
	// UnityEngine.Transform UIButtonScale::tweenTarget
	Transform_t78 * ___tweenTarget;
	// UnityEngine.Vector3 UIButtonScale::hover
	Vector3_t121  ___hover;
	// UnityEngine.Vector3 UIButtonScale::pressed
	Vector3_t121  ___pressed;
	// System.Single UIButtonScale::duration
	float ___duration;
	// UnityEngine.Vector3 UIButtonScale::mScale
	Vector3_t121  ___mScale;
	// System.Boolean UIButtonScale::mStarted
	bool ___mStarted;
	// System.Boolean UIButtonScale::mHighlighted
	bool ___mHighlighted;
};
