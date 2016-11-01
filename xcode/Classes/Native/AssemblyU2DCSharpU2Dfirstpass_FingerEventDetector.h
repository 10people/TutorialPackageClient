#pragma once
#include <stdint.h>
// ScreenRaycaster
struct ScreenRaycaster_t17;
// UnityEngine.GameObject
struct GameObject_t9;
// FingerGestures/Finger
struct Finger_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// FingerEventDetector
struct FingerEventDetector_t7  : public MonoBehaviour_t18
{
	// System.Int32 FingerEventDetector::FingerIndexFilter
	int32_t ___FingerIndexFilter;
	// ScreenRaycaster FingerEventDetector::Raycaster
	ScreenRaycaster_t17 * ___Raycaster;
	// System.Boolean FingerEventDetector::UseSendMessage
	bool ___UseSendMessage;
	// System.Boolean FingerEventDetector::SendMessageToSelection
	bool ___SendMessageToSelection;
	// UnityEngine.GameObject FingerEventDetector::MessageTarget
	GameObject_t9 * ___MessageTarget;
	// FingerGestures/Finger FingerEventDetector::activeFinger
	Finger_t8 * ___activeFinger;
	// UnityEngine.RaycastHit FingerEventDetector::lastHit
	RaycastHit_t11  ___lastHit;
};
