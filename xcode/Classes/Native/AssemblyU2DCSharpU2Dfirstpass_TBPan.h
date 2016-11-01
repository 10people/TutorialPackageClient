#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// DragGesture
struct DragGesture_t81;
// TBPan/PanEventHandler
struct PanEventHandler_t127;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TBPan
struct TBPan_t126  : public MonoBehaviour_t18
{
	// UnityEngine.Transform TBPan::cachedTransform
	Transform_t78 * ___cachedTransform;
	// System.Single TBPan::sensitivity
	float ___sensitivity;
	// System.Single TBPan::smoothSpeed
	float ___smoothSpeed;
	// UnityEngine.BoxCollider TBPan::moveArea
	BoxCollider_t128 * ___moveArea;
	// UnityEngine.Vector3 TBPan::idealPos
	Vector3_t121  ___idealPos;
	// DragGesture TBPan::dragGesture
	DragGesture_t81 * ___dragGesture;
	// TBPan/PanEventHandler TBPan::OnPan
	PanEventHandler_t127 * ___OnPan;
};
