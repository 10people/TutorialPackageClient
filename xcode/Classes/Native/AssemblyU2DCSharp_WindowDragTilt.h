#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// WindowDragTilt
struct WindowDragTilt_t5284  : public MonoBehaviour_t18
{
	// System.Int32 WindowDragTilt::updateOrder
	int32_t ___updateOrder;
	// System.Single WindowDragTilt::degrees
	float ___degrees;
	// UnityEngine.Vector3 WindowDragTilt::mLastPos
	Vector3_t121  ___mLastPos;
	// UnityEngine.Transform WindowDragTilt::mTrans
	Transform_t78 * ___mTrans;
	// System.Single WindowDragTilt::mAngle
	float ___mAngle;
	// System.Boolean WindowDragTilt::mInit
	bool ___mInit;
};
