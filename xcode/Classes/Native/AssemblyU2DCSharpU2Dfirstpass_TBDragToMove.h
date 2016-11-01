#pragma once
#include <stdint.h>
// UnityEngine.Collider
struct Collider_t62;
// UnityEngine.Camera
struct Camera_t38;
// FingerGestures/Finger
struct Finger_t8;
// GestureRecognizer
struct GestureRecognizer_t25;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TBDragToMove
struct TBDragToMove_t132  : public MonoBehaviour_t18
{
	// UnityEngine.Collider TBDragToMove::DragPlaneCollider
	Collider_t62 * ___DragPlaneCollider;
	// System.Single TBDragToMove::DragPlaneOffset
	float ___DragPlaneOffset;
	// UnityEngine.Camera TBDragToMove::RaycastCamera
	Camera_t38 * ___RaycastCamera;
	// System.Boolean TBDragToMove::dragging
	bool ___dragging;
	// FingerGestures/Finger TBDragToMove::draggingFinger
	Finger_t8 * ___draggingFinger;
	// GestureRecognizer TBDragToMove::gestureRecognizer
	GestureRecognizer_t25 * ___gestureRecognizer;
	// System.Boolean TBDragToMove::oldUseGravity
	bool ___oldUseGravity;
	// System.Boolean TBDragToMove::oldIsKinematic
	bool ___oldIsKinematic;
	// UnityEngine.Vector3 TBDragToMove::physxDragMove
	Vector3_t121  ___physxDragMove;
};
