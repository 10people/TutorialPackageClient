#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TBTwistToRotate/RotationAxis
#include "AssemblyU2DCSharpU2Dfirstpass_TBTwistToRotate_RotationAxis.h"
// TBTwistToRotate
struct TBTwistToRotate_t139  : public MonoBehaviour_t18
{
	// System.Single TBTwistToRotate::Sensitivity
	float ___Sensitivity;
	// TBTwistToRotate/RotationAxis TBTwistToRotate::Axis
	int32_t ___Axis;
	// UnityEngine.Camera TBTwistToRotate::ReferenceCamera
	Camera_t38 * ___ReferenceCamera;
};
