#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UIPanel
struct UIPanel_t1364;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDragObject
struct UIDragObject_t5301  : public MonoBehaviour_t18
{
	// UnityEngine.Transform UIDragObject::target
	Transform_t78 * ___target;
	// UnityEngine.Vector3 UIDragObject::scale
	Vector3_t121  ___scale;
	// System.Single UIDragObject::scrollWheelFactor
	float ___scrollWheelFactor;
	// System.Boolean UIDragObject::restrictWithinPanel
	bool ___restrictWithinPanel;
	// UIDragObject/DragEffect UIDragObject::dragEffect
	int32_t ___dragEffect;
	// System.Single UIDragObject::momentumAmount
	float ___momentumAmount;
	// UnityEngine.Plane UIDragObject::mPlane
	Plane_t1006  ___mPlane;
	// UnityEngine.Vector3 UIDragObject::mLastPos
	Vector3_t121  ___mLastPos;
	// UIPanel UIDragObject::mPanel
	UIPanel_t1364 * ___mPanel;
	// System.Boolean UIDragObject::mPressed
	bool ___mPressed;
	// UnityEngine.Vector3 UIDragObject::mMomentum
	Vector3_t121  ___mMomentum;
	// System.Single UIDragObject::mScroll
	float ___mScroll;
	// UnityEngine.Bounds UIDragObject::mBounds
	Bounds_t1005  ___mBounds;
	// System.Int32 UIDragObject::mTouchID
	int32_t ___mTouchID;
	// System.Boolean UIDragObject::mStarted
	bool ___mStarted;
};
