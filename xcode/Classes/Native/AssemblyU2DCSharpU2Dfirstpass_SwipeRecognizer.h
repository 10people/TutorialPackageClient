#pragma once
#include <stdint.h>
// DiscreteGestureRecognizer`1<SwipeGesture>
#include "AssemblyU2DCSharpU2Dfirstpass_DiscreteGestureRecognizer_1_ge_1.h"
// FingerGestures/SwipeDirection
#include "AssemblyU2DCSharpU2Dfirstpass_FingerGestures_SwipeDirection.h"
// SwipeRecognizer
struct SwipeRecognizer_t106  : public DiscreteGestureRecognizer_1_t107
{
	// FingerGestures/SwipeDirection SwipeRecognizer::ValidDirections
	int32_t ___ValidDirections;
	// System.Single SwipeRecognizer::MinDistance
	float ___MinDistance;
	// System.Single SwipeRecognizer::MaxDistance
	float ___MaxDistance;
	// System.Single SwipeRecognizer::MinVelocity
	float ___MinVelocity;
	// System.Single SwipeRecognizer::MaxDeviation
	float ___MaxDeviation;
};
