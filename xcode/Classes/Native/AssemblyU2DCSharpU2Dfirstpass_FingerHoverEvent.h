#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// FingerEvent
#include "AssemblyU2DCSharpU2Dfirstpass_FingerEvent.h"
// FingerHoverPhase
#include "AssemblyU2DCSharpU2Dfirstpass_FingerHoverPhase.h"
// FingerHoverEvent
struct FingerHoverEvent_t45  : public FingerEvent_t10
{
	// FingerHoverPhase FingerHoverEvent::phase
	int32_t ___phase;
	// UnityEngine.GameObject FingerHoverEvent::PreviousSelection
	GameObject_t9 * ___PreviousSelection;
};
