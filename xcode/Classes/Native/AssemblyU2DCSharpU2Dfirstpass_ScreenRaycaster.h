#pragma once
#include <stdint.h>
// UnityEngine.Camera[]
struct CameraU5BU5D_t37;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// ScreenRaycaster
struct ScreenRaycaster_t17  : public MonoBehaviour_t18
{
	// UnityEngine.Camera[] ScreenRaycaster::Cameras
	CameraU5BU5D_t37* ___Cameras;
	// UnityEngine.LayerMask ScreenRaycaster::IgnoreLayerMask
	LayerMask_t39  ___IgnoreLayerMask;
	// System.Single ScreenRaycaster::RayThickness
	float ___RayThickness;
	// System.Boolean ScreenRaycaster::VisualizeRaycasts
	bool ___VisualizeRaycasts;
};
