#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TBPinchZoom/ZoomMethod
#include "AssemblyU2DCSharpU2Dfirstpass_TBPinchZoom_ZoomMethod.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TBPinchZoom
struct TBPinchZoom_t130  : public MonoBehaviour_t18
{
	// TBPinchZoom/ZoomMethod TBPinchZoom::zoomMethod
	int32_t ___zoomMethod;
	// System.Single TBPinchZoom::zoomSpeed
	float ___zoomSpeed;
	// System.Single TBPinchZoom::minZoomAmount
	float ___minZoomAmount;
	// System.Single TBPinchZoom::maxZoomAmount
	float ___maxZoomAmount;
	// UnityEngine.Vector3 TBPinchZoom::defaultPos
	Vector3_t121  ___defaultPos;
	// System.Single TBPinchZoom::defaultFov
	float ___defaultFov;
	// System.Single TBPinchZoom::defaultOrthoSize
	float ___defaultOrthoSize;
	// System.Single TBPinchZoom::zoomAmount
	float ___zoomAmount;
};
