#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Camera
struct Camera_t38;
// UIRoot
struct UIRoot_t5259;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDraggableCamera
struct UIDraggableCamera_t5298  : public MonoBehaviour_t18
{
	// UnityEngine.Transform UIDraggableCamera::rootForBounds
	Transform_t78 * ___rootForBounds;
	// UnityEngine.Vector2 UIDraggableCamera::scale
	Vector2_t12  ___scale;
	// System.Single UIDraggableCamera::scrollWheelFactor
	float ___scrollWheelFactor;
	// UIDragObject/DragEffect UIDraggableCamera::dragEffect
	int32_t ___dragEffect;
	// System.Boolean UIDraggableCamera::smoothDragStart
	bool ___smoothDragStart;
	// System.Single UIDraggableCamera::momentumAmount
	float ___momentumAmount;
	// UnityEngine.Camera UIDraggableCamera::mCam
	Camera_t38 * ___mCam;
	// UnityEngine.Transform UIDraggableCamera::mTrans
	Transform_t78 * ___mTrans;
	// System.Boolean UIDraggableCamera::mPressed
	bool ___mPressed;
	// UnityEngine.Vector2 UIDraggableCamera::mMomentum
	Vector2_t12  ___mMomentum;
	// UnityEngine.Bounds UIDraggableCamera::mBounds
	Bounds_t1005  ___mBounds;
	// System.Single UIDraggableCamera::mScroll
	float ___mScroll;
	// UIRoot UIDraggableCamera::mRoot
	UIRoot_t5259 * ___mRoot;
	// System.Boolean UIDraggableCamera::mDragStarted
	bool ___mDragStarted;
};
