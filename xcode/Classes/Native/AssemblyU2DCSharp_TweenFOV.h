#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// TweenFOV
struct TweenFOV_t5381  : public UITweener_t5320
{
	// System.Single TweenFOV::from
	float ___from;
	// System.Single TweenFOV::to
	float ___to;
	// UnityEngine.Camera TweenFOV::mCam
	Camera_t38 * ___mCam;
};
