#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// System.Predicate`1<GestureRecognizer>
struct Predicate_1_t124;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TBOrbit
struct TBOrbit_t125  : public MonoBehaviour_t18
{
	// UnityEngine.Transform TBOrbit::target
	Transform_t78 * ___target;
	// System.Single TBOrbit::initialDistance
	float ___initialDistance;
	// System.Single TBOrbit::minDistance
	float ___minDistance;
	// System.Single TBOrbit::maxDistance
	float ___maxDistance;
	// System.Single TBOrbit::yawSensitivity
	float ___yawSensitivity;
	// System.Single TBOrbit::pitchSensitivity
	float ___pitchSensitivity;
	// System.Boolean TBOrbit::clampYawAngle
	bool ___clampYawAngle;
	// System.Single TBOrbit::minYaw
	float ___minYaw;
	// System.Single TBOrbit::maxYaw
	float ___maxYaw;
	// System.Boolean TBOrbit::clampPitchAngle
	bool ___clampPitchAngle;
	// System.Single TBOrbit::minPitch
	float ___minPitch;
	// System.Single TBOrbit::maxPitch
	float ___maxPitch;
	// System.Boolean TBOrbit::allowPinchZoom
	bool ___allowPinchZoom;
	// System.Single TBOrbit::pinchZoomSensitivity
	float ___pinchZoomSensitivity;
	// System.Boolean TBOrbit::smoothMotion
	bool ___smoothMotion;
	// System.Single TBOrbit::smoothZoomSpeed
	float ___smoothZoomSpeed;
	// System.Single TBOrbit::smoothOrbitSpeed
	float ___smoothOrbitSpeed;
	// System.Boolean TBOrbit::allowPanning
	bool ___allowPanning;
	// System.Boolean TBOrbit::invertPanningDirections
	bool ___invertPanningDirections;
	// System.Single TBOrbit::panningSensitivity
	float ___panningSensitivity;
	// UnityEngine.Transform TBOrbit::panningPlane
	Transform_t78 * ___panningPlane;
	// System.Boolean TBOrbit::smoothPanning
	bool ___smoothPanning;
	// System.Single TBOrbit::smoothPanningSpeed
	float ___smoothPanningSpeed;
	// System.Single TBOrbit::distance
	float ___distance;
	// System.Single TBOrbit::yaw
	float ___yaw;
	// System.Single TBOrbit::pitch
	float ___pitch;
	// System.Single TBOrbit::idealDistance
	float ___idealDistance;
	// System.Single TBOrbit::idealYaw
	float ___idealYaw;
	// System.Single TBOrbit::idealPitch
	float ___idealPitch;
	// UnityEngine.Vector3 TBOrbit::idealPanOffset
	Vector3_t121  ___idealPanOffset;
	// UnityEngine.Vector3 TBOrbit::panOffset
	Vector3_t121  ___panOffset;
	// System.Single TBOrbit::nextDragTime
	float ___nextDragTime;
};
struct TBOrbit_t125_StaticFields{
	// System.Predicate`1<GestureRecognizer> TBOrbit::<>f__am$cache20
	Predicate_1_t124 * ___U3CU3Ef__am$cache20;
	// System.Predicate`1<GestureRecognizer> TBOrbit::<>f__am$cache21
	Predicate_1_t124 * ___U3CU3Ef__am$cache21;
	// System.Predicate`1<GestureRecognizer> TBOrbit::<>f__am$cache22
	Predicate_1_t124 * ___U3CU3Ef__am$cache22;
};
