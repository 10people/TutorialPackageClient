#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// SpringPosition/OnFinished
struct OnFinished_t5378;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpringPosition
struct SpringPosition_t5377  : public MonoBehaviour_t18
{
	// UnityEngine.Vector3 SpringPosition::target
	Vector3_t121  ___target;
	// System.Single SpringPosition::strength
	float ___strength;
	// System.Boolean SpringPosition::worldSpace
	bool ___worldSpace;
	// System.Boolean SpringPosition::ignoreTimeScale
	bool ___ignoreTimeScale;
	// UnityEngine.GameObject SpringPosition::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String SpringPosition::callWhenFinished
	String_t* ___callWhenFinished;
	// SpringPosition/OnFinished SpringPosition::onFinished
	OnFinished_t5378 * ___onFinished;
	// UnityEngine.Transform SpringPosition::mTrans
	Transform_t78 * ___mTrans;
	// System.Single SpringPosition::mThreshold
	float ___mThreshold;
};
