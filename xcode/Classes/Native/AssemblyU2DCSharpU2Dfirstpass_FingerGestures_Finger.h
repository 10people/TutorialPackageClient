#pragma once
#include <stdint.h>
// UnityEngine.Collider
struct Collider_t62;
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t63;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t64;
// System.Object
#include "mscorlib_System_Object.h"
// FingerGestures/FingerPhase
#include "AssemblyU2DCSharpU2Dfirstpass_FingerGestures_FingerPhase.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// FingerGestures/Finger
struct Finger_t8  : public Object_t
{
	// System.Int32 FingerGestures/Finger::index
	int32_t ___index;
	// FingerGestures/FingerPhase FingerGestures/Finger::phase
	int32_t ___phase;
	// FingerGestures/FingerPhase FingerGestures/Finger::prevPhase
	int32_t ___prevPhase;
	// UnityEngine.Vector2 FingerGestures/Finger::pos
	Vector2_t12  ___pos;
	// UnityEngine.Vector2 FingerGestures/Finger::startPos
	Vector2_t12  ___startPos;
	// UnityEngine.Vector2 FingerGestures/Finger::prevPos
	Vector2_t12  ___prevPos;
	// UnityEngine.Vector2 FingerGestures/Finger::deltaPos
	Vector2_t12  ___deltaPos;
	// System.Single FingerGestures/Finger::startTime
	float ___startTime;
	// System.Single FingerGestures/Finger::lastMoveTime
	float ___lastMoveTime;
	// System.Single FingerGestures/Finger::distFromStart
	float ___distFromStart;
	// System.Boolean FingerGestures/Finger::moved
	bool ___moved;
	// System.Boolean FingerGestures/Finger::filteredOut
	bool ___filteredOut;
	// UnityEngine.Collider FingerGestures/Finger::collider
	Collider_t62 * ___collider;
	// UnityEngine.Collider FingerGestures/Finger::prevCollider
	Collider_t62 * ___prevCollider;
	// System.Single FingerGestures/Finger::elapsedTimeStationary
	float ___elapsedTimeStationary;
	// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures/Finger::gestureRecognizers
	List_1_t63 * ___gestureRecognizers;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> FingerGestures/Finger::extendedProperties
	Dictionary_2_t64 * ___extendedProperties;
};
