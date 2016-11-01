#pragma once
#include <stdint.h>
// UIDraggablePanel/PanelDragDelegate
struct PanelDragDelegate_t5305;
// UIScrollBar
struct UIScrollBar_t1190;
// UIDraggablePanel/OnDragFinished
struct OnDragFinished_t5306;
// UnityEngine.Transform
struct Transform_t78;
// UIPanel
struct UIPanel_t1364;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIDraggablePanel/DragEffect
#include "AssemblyU2DCSharp_UIDraggablePanel_DragEffect.h"
// UIDraggablePanel/ShowCondition
#include "AssemblyU2DCSharp_UIDraggablePanel_ShowCondition.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDraggablePanel
struct UIDraggablePanel_t1165  : public MonoBehaviour_t18
{
	// UIDraggablePanel/PanelDragDelegate UIDraggablePanel::OnPanelDrag
	PanelDragDelegate_t5305 * ___OnPanelDrag;
	// UIDraggablePanel/DragEffect UIDraggablePanel::dragEffect
	int32_t ___dragEffect;
	// System.Boolean UIDraggablePanel::restrictWithinPanel
	bool ___restrictWithinPanel;
	// System.Boolean UIDraggablePanel::disableDragIfFits
	bool ___disableDragIfFits;
	// System.Boolean UIDraggablePanel::smoothDragStart
	bool ___smoothDragStart;
	// System.Boolean UIDraggablePanel::repositionClipping
	bool ___repositionClipping;
	// System.Boolean UIDraggablePanel::iOSDragEmulation
	bool ___iOSDragEmulation;
	// System.Single UIDraggablePanel::scrollWheelFactor
	float ___scrollWheelFactor;
	// System.Single UIDraggablePanel::momentumAmount
	float ___momentumAmount;
	// UIScrollBar UIDraggablePanel::horizontalScrollBar
	UIScrollBar_t1190 * ___horizontalScrollBar;
	// UIScrollBar UIDraggablePanel::verticalScrollBar
	UIScrollBar_t1190 * ___verticalScrollBar;
	// UIDraggablePanel/ShowCondition UIDraggablePanel::showScrollBars
	int32_t ___showScrollBars;
	// UnityEngine.Vector3 UIDraggablePanel::scale
	Vector3_t121  ___scale;
	// UnityEngine.Vector2 UIDraggablePanel::relativePositionOnReset
	Vector2_t12  ___relativePositionOnReset;
	// UIDraggablePanel/OnDragFinished UIDraggablePanel::onDragFinished
	OnDragFinished_t5306 * ___onDragFinished;
	// UnityEngine.Transform UIDraggablePanel::mTrans
	Transform_t78 * ___mTrans;
	// UIPanel UIDraggablePanel::mPanel
	UIPanel_t1364 * ___mPanel;
	// UnityEngine.Plane UIDraggablePanel::mPlane
	Plane_t1006  ___mPlane;
	// UnityEngine.Vector3 UIDraggablePanel::mLastPos
	Vector3_t121  ___mLastPos;
	// System.Boolean UIDraggablePanel::mPressed
	bool ___mPressed;
	// UnityEngine.Vector3 UIDraggablePanel::mMomentum
	Vector3_t121  ___mMomentum;
	// System.Single UIDraggablePanel::mScroll
	float ___mScroll;
	// UnityEngine.Bounds UIDraggablePanel::mBounds
	Bounds_t1005  ___mBounds;
	// System.Boolean UIDraggablePanel::mCalculatedBounds
	bool ___mCalculatedBounds;
	// System.Boolean UIDraggablePanel::mShouldMove
	bool ___mShouldMove;
	// System.Boolean UIDraggablePanel::mIgnoreCallbacks
	bool ___mIgnoreCallbacks;
	// System.Int32 UIDraggablePanel::mDragID
	int32_t ___mDragID;
	// UnityEngine.Vector2 UIDraggablePanel::mDragStartOffset
	Vector2_t12  ___mDragStartOffset;
	// System.Boolean UIDraggablePanel::mDragStarted
	bool ___mDragStarted;
};
