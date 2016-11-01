#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIButtonOffset
struct UIButtonOffset_t5291  : public MonoBehaviour_t18
{
	// UnityEngine.Transform UIButtonOffset::tweenTarget
	Transform_t78 * ___tweenTarget;
	// UnityEngine.Vector3 UIButtonOffset::hover
	Vector3_t121  ___hover;
	// UnityEngine.Vector3 UIButtonOffset::pressed
	Vector3_t121  ___pressed;
	// System.Single UIButtonOffset::duration
	float ___duration;
	// UnityEngine.Vector3 UIButtonOffset::mPos
	Vector3_t121  ___mPos;
	// System.Boolean UIButtonOffset::mStarted
	bool ___mStarted;
	// System.Boolean UIButtonOffset::mHighlighted
	bool ___mHighlighted;
};
