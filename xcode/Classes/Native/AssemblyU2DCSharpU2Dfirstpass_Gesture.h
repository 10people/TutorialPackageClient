#pragma once
#include <stdint.h>
// GestureRecognizer
struct GestureRecognizer_t25;
// FingerGestures/FingerList
struct FingerList_t26;
// UnityEngine.GameObject
struct GameObject_t9;
// Gesture/EventHandler
struct EventHandler_t22;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// Gesture
struct Gesture_t3  : public Object_t
{
	// System.Int32 Gesture::ClusterId
	int32_t ___ClusterId;
	// GestureRecognizer Gesture::recognizer
	GestureRecognizer_t25 * ___recognizer;
	// System.Single Gesture::startTime
	float ___startTime;
	// UnityEngine.Vector2 Gesture::startPosition
	Vector2_t12  ___startPosition;
	// UnityEngine.Vector2 Gesture::position
	Vector2_t12  ___position;
	// GestureRecognitionState Gesture::state
	int32_t ___state;
	// GestureRecognitionState Gesture::prevState
	int32_t ___prevState;
	// FingerGestures/FingerList Gesture::fingers
	FingerList_t26 * ___fingers;
	// UnityEngine.GameObject Gesture::startSelection
	GameObject_t9 * ___startSelection;
	// UnityEngine.GameObject Gesture::selection
	GameObject_t9 * ___selection;
	// UnityEngine.RaycastHit Gesture::lastHit
	RaycastHit_t11  ___lastHit;
	// Gesture/EventHandler Gesture::OnStateChanged
	EventHandler_t22 * ___OnStateChanged;
};
