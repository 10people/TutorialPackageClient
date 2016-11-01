#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// FGInputProvider
#include "AssemblyU2DCSharpU2Dfirstpass_FGInputProvider.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// FGMouseInputProvider
struct FGMouseInputProvider_t115  : public FGInputProvider_t60
{
	// System.Int32 FGMouseInputProvider::maxButtons
	int32_t ___maxButtons;
	// System.String FGMouseInputProvider::pinchAxis
	String_t* ___pinchAxis;
	// System.Single FGMouseInputProvider::pinchAxisScale
	float ___pinchAxisScale;
	// System.Single FGMouseInputProvider::pinchResetTimeDelay
	float ___pinchResetTimeDelay;
	// System.Single FGMouseInputProvider::initialPinchDistance
	float ___initialPinchDistance;
	// System.String FGMouseInputProvider::twistAxis
	String_t* ___twistAxis;
	// System.Single FGMouseInputProvider::twistAxisScale
	float ___twistAxisScale;
	// UnityEngine.KeyCode FGMouseInputProvider::twistKey
	int32_t ___twistKey;
	// System.Single FGMouseInputProvider::twistResetTimeDelay
	float ___twistResetTimeDelay;
	// UnityEngine.KeyCode FGMouseInputProvider::twistAndPinchKey
	int32_t ___twistAndPinchKey;
	// UnityEngine.Vector2 FGMouseInputProvider::pivot
	Vector2_t12  ___pivot;
	// UnityEngine.Vector2[] FGMouseInputProvider::pos
	Vector2U5BU5D_t114* ___pos;
	// System.Boolean FGMouseInputProvider::pinching
	bool ___pinching;
	// System.Single FGMouseInputProvider::pinchResetTime
	float ___pinchResetTime;
	// System.Single FGMouseInputProvider::pinchDistance
	float ___pinchDistance;
	// System.Boolean FGMouseInputProvider::twisting
	bool ___twisting;
	// System.Single FGMouseInputProvider::twistAngle
	float ___twistAngle;
	// System.Single FGMouseInputProvider::twistResetTime
	float ___twistResetTime;
};
