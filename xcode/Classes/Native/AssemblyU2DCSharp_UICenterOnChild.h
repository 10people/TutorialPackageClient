#pragma once
#include <stdint.h>
// SpringPanel/OnFinished
struct OnFinished_t1963;
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// UnityEngine.GameObject
struct GameObject_t9;
// UICenterOnChild/OnCenterFinished
struct OnCenterFinished_t5295;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICenterOnChild
struct UICenterOnChild_t5296  : public MonoBehaviour_t18
{
	// System.Single UICenterOnChild::springStrength
	float ___springStrength;
	// System.Single UICenterOnChild::nextPageThreshold
	float ___nextPageThreshold;
	// SpringPanel/OnFinished UICenterOnChild::onFinished
	OnFinished_t1963 * ___onFinished;
	// UIDraggablePanel UICenterOnChild::mDrag
	UIDraggablePanel_t1165 * ___mDrag;
	// UnityEngine.GameObject UICenterOnChild::mCenteredObject
	GameObject_t9 * ___mCenteredObject;
	// UICenterOnChild/OnCenterFinished UICenterOnChild::onCenterFinished
	OnCenterFinished_t5295 * ___onCenterFinished;
};
