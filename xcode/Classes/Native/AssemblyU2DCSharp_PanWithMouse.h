#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PanWithMouse
struct PanWithMouse_t5267  : public MonoBehaviour_t18
{
	// UnityEngine.Vector2 PanWithMouse::degrees
	Vector2_t12  ___degrees;
	// System.Single PanWithMouse::range
	float ___range;
	// UnityEngine.Transform PanWithMouse::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Quaternion PanWithMouse::mStart
	Quaternion_t120  ___mStart;
	// UnityEngine.Vector2 PanWithMouse::mRot
	Vector2_t12  ___mRot;
};
