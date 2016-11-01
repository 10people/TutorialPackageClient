#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// DragGesture
struct DragGesture_t81;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// TBDragView
struct TBDragView_t119  : public MonoBehaviour_t18
{
	// System.Boolean TBDragView::allowUserInput
	bool ___allowUserInput;
	// System.Single TBDragView::sensitivity
	float ___sensitivity;
	// System.Single TBDragView::dragAcceleration
	float ___dragAcceleration;
	// System.Single TBDragView::dragDeceleration
	float ___dragDeceleration;
	// System.Boolean TBDragView::reverseControls
	bool ___reverseControls;
	// System.Single TBDragView::minPitchAngle
	float ___minPitchAngle;
	// System.Single TBDragView::maxPitchAngle
	float ___maxPitchAngle;
	// System.Single TBDragView::idealRotationSmoothingSpeed
	float ___idealRotationSmoothingSpeed;
	// UnityEngine.Transform TBDragView::cachedTransform
	Transform_t78 * ___cachedTransform;
	// UnityEngine.Vector2 TBDragView::angularVelocity
	Vector2_t12  ___angularVelocity;
	// UnityEngine.Quaternion TBDragView::idealRotation
	Quaternion_t120  ___idealRotation;
	// System.Boolean TBDragView::useAngularVelocity
	bool ___useAngularVelocity;
	// DragGesture TBDragView::dragGesture
	DragGesture_t81 * ___dragGesture;
};
