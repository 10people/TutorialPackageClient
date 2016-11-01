#pragma once
#include <stdint.h>
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TestDragPanel
struct TestDragPanel_t1166  : public MonoBehaviour_t18
{
	// System.Boolean TestDragPanel::bCheck
	bool ___bCheck;
	// UIDraggablePanel TestDragPanel::dragPanel
	UIDraggablePanel_t1165 * ___dragPanel;
	// UnityEngine.Transform TestDragPanel::topCheckTrans
	Transform_t78 * ___topCheckTrans;
	// UnityEngine.Transform TestDragPanel::topTargetTrans
	Transform_t78 * ___topTargetTrans;
	// UnityEngine.Transform TestDragPanel::TopMarkTrans
	Transform_t78 * ___TopMarkTrans;
	// System.Single TestDragPanel::topItemOffsetForPanel
	float ___topItemOffsetForPanel;
	// UnityEngine.Transform TestDragPanel::bottomCheckTrans
	Transform_t78 * ___bottomCheckTrans;
	// UnityEngine.Transform TestDragPanel::bottomTargetTrans
	Transform_t78 * ___bottomTargetTrans;
	// UnityEngine.Transform TestDragPanel::bottomMarkTrans
	Transform_t78 * ___bottomMarkTrans;
	// System.Single TestDragPanel::bottomItemOffsetForPanel
	float ___bottomItemOffsetForPanel;
};
