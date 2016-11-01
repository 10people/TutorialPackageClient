#pragma once
#include <stdint.h>
// DiscreteGesture
#include "AssemblyU2DCSharpU2Dfirstpass_DiscreteGesture.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// FingerGestures/SwipeDirection
#include "AssemblyU2DCSharpU2Dfirstpass_FingerGestures_SwipeDirection.h"
// SwipeGesture
struct SwipeGesture_t105  : public DiscreteGesture_t5
{
	// UnityEngine.Vector2 SwipeGesture::move
	Vector2_t12  ___move;
	// System.Single SwipeGesture::velocity
	float ___velocity;
	// FingerGestures/SwipeDirection SwipeGesture::direction
	int32_t ___direction;
	// System.Int32 SwipeGesture::MoveCounter
	int32_t ___MoveCounter;
	// System.Single SwipeGesture::Deviation
	float ___Deviation;
};
