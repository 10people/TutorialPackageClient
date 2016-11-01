#pragma once
#include <stdint.h>
// FingerEvent
#include "AssemblyU2DCSharpU2Dfirstpass_FingerEvent.h"
// FingerMotionPhase
#include "AssemblyU2DCSharpU2Dfirstpass_FingerMotionPhase.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// FingerMotionEvent
struct FingerMotionEvent_t50  : public FingerEvent_t10
{
	// FingerMotionPhase FingerMotionEvent::phase
	int32_t ___phase;
	// UnityEngine.Vector2 FingerMotionEvent::position
	Vector2_t12  ___position;
	// System.Single FingerMotionEvent::StartTime
	float ___StartTime;
};
