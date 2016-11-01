#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t1004;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Spin
struct Spin_t5272  : public MonoBehaviour_t18
{
	// UnityEngine.Vector3 Spin::rotationsPerSecond
	Vector3_t121  ___rotationsPerSecond;
	// UnityEngine.Rigidbody Spin::mRb
	Rigidbody_t1004 * ___mRb;
	// UnityEngine.Transform Spin::mTrans
	Transform_t78 * ___mTrans;
};
