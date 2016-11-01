#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIViewport
struct UIViewport_t1631  : public MonoBehaviour_t18
{
	// UnityEngine.Camera UIViewport::sourceCamera
	Camera_t38 * ___sourceCamera;
	// UnityEngine.Transform UIViewport::topLeft
	Transform_t78 * ___topLeft;
	// UnityEngine.Transform UIViewport::bottomRight
	Transform_t78 * ___bottomRight;
	// System.Single UIViewport::fullSize
	float ___fullSize;
	// UnityEngine.Camera UIViewport::mCam
	Camera_t38 * ___mCam;
};
