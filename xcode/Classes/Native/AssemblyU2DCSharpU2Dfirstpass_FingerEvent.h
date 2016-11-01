#pragma once
#include <stdint.h>
// FingerEventDetector
struct FingerEventDetector_t7;
// FingerGestures/Finger
struct Finger_t8;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// FingerEvent
struct FingerEvent_t10  : public Object_t
{
	// FingerEventDetector FingerEvent::detector
	FingerEventDetector_t7 * ___detector;
	// FingerGestures/Finger FingerEvent::finger
	Finger_t8 * ___finger;
	// System.String FingerEvent::name
	String_t* ___name;
	// UnityEngine.GameObject FingerEvent::selection
	GameObject_t9 * ___selection;
	// UnityEngine.RaycastHit FingerEvent::hit
	RaycastHit_t11  ___hit;
};
