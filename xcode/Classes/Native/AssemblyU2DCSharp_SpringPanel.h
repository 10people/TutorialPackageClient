#pragma once
#include <stdint.h>
// SpringPanel/OnFinished
struct OnFinished_t1963;
// UIPanel
struct UIPanel_t1364;
// UnityEngine.Transform
struct Transform_t78;
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpringPanel
struct SpringPanel_t5360  : public MonoBehaviour_t18
{
	// UnityEngine.Vector3 SpringPanel::target
	Vector3_t121  ___target;
	// System.Single SpringPanel::strength
	float ___strength;
	// SpringPanel/OnFinished SpringPanel::onFinished
	OnFinished_t1963 * ___onFinished;
	// UIPanel SpringPanel::mPanel
	UIPanel_t1364 * ___mPanel;
	// UnityEngine.Transform SpringPanel::mTrans
	Transform_t78 * ___mTrans;
	// System.Single SpringPanel::mThreshold
	float ___mThreshold;
	// UIDraggablePanel SpringPanel::mDrag
	UIDraggablePanel_t1165 * ___mDrag;
};
