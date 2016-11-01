#pragma once
#include <stdint.h>
// SpringPanel/OnFinished
struct OnFinished_t1963;
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UITopGrid
struct UITopGrid_t1343  : public MonoBehaviour_t18
{
	// System.Single UITopGrid::springStrength
	float ___springStrength;
	// System.Single UITopGrid::cellSize
	float ___cellSize;
	// System.Boolean UITopGrid::IsResetOnEnable
	bool ___IsResetOnEnable;
	// System.Boolean UITopGrid::IsRecenterOnDragFinished
	bool ___IsRecenterOnDragFinished;
	// System.Boolean UITopGrid::recenterTopNow
	bool ___recenterTopNow;
	// System.Boolean UITopGrid::IsTopOnDragWhenCellNoFull
	bool ___IsTopOnDragWhenCellNoFull;
	// SpringPanel/OnFinished UITopGrid::onFinished
	OnFinished_t1963 * ___onFinished;
	// UIDraggablePanel UITopGrid::mDrag
	UIDraggablePanel_t1165 * ___mDrag;
	// UnityEngine.GameObject UITopGrid::mCenteredObject
	GameObject_t9 * ___mCenteredObject;
	// UnityEngine.Vector3 UITopGrid::mPanelStartPos
	Vector3_t121  ___mPanelStartPos;
	// UnityEngine.Vector2 UITopGrid::mClipStartCenter
	Vector2_t12  ___mClipStartCenter;
};
