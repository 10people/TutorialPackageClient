#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WindowAutoYaw
struct WindowAutoYaw_t5283  : public MonoBehaviour_t18
{
	// System.Int32 WindowAutoYaw::updateOrder
	int32_t ___updateOrder;
	// UnityEngine.Camera WindowAutoYaw::uiCamera
	Camera_t38 * ___uiCamera;
	// System.Single WindowAutoYaw::yawAmount
	float ___yawAmount;
	// UnityEngine.Transform WindowAutoYaw::mTrans
	Transform_t78 * ___mTrans;
};
