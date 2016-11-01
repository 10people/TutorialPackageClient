#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UICamera>
struct List_1_t5404;
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t5403;
// UICamera
struct UICamera_t5405;
// UnityEngine.Camera
struct Camera_t38;
// UICamera/MouseOrTouch
struct MouseOrTouch_t5399;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<UICamera/Highlighted>
struct List_1_t5406;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t5407;
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t5408;
// BetterList`1<UICamera/DepthEntry>
struct BetterList_1_t5409;
// System.Comparison`1<UICamera/DepthEntry>
struct Comparison_1_t5410;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICamera/EventType
#include "AssemblyU2DCSharp_UICamera_EventType.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UICamera/DepthEntry
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"
// UICamera
struct UICamera_t5405  : public MonoBehaviour_t18
{
	// UICamera/EventType UICamera::eventType
	int32_t ___eventType;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t39  ___eventReceiverMask;
	// System.Boolean UICamera::debug
	bool ___debug;
	// System.Boolean UICamera::useMouse
	bool ___useMouse;
	// System.Boolean UICamera::useTouch
	bool ___useTouch;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard;
	// System.Boolean UICamera::useController
	bool ___useController;
	// System.Boolean UICamera::stickyPress
	bool ___stickyPress;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t9 * ___mTooltip;
	// UnityEngine.Camera UICamera::mCam
	Camera_t38 * ___mCam;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime;
	// System.Boolean UICamera::mIsEditor
	bool ___mIsEditor;
	// System.Int32 UICamera::m_TouchFingerID
	int32_t ___m_TouchFingerID;
};
struct UICamera_t5405_StaticFields{
	// System.Collections.Generic.List`1<UICamera> UICamera::list
	List_1_t5404 * ___list;
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t5403 * ___onCustomInput;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t12  ___lastTouchPosition;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t11  ___lastHit;
	// UICamera UICamera::current
	UICamera_t5405 * ___current;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t38 * ___currentCamera;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t5399 * ___currentTouch;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus;
	// UnityEngine.GameObject UICamera::genericEventHandler
	GameObject_t9 * ___genericEventHandler;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t9 * ___fallThrough;
	// System.Collections.Generic.List`1<UICamera/Highlighted> UICamera::mHighlighted
	List_1_t5406 * ___mHighlighted;
	// UnityEngine.GameObject UICamera::mSel
	GameObject_t9 * ___mSel;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t5407* ___mMouse;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t9 * ___mHover;
	// UICamera/MouseOrTouch UICamera::mController
	MouseOrTouch_t5399 * ___mController;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent;
	// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch> UICamera::mTouches
	Dictionary_2_t5408 * ___mTouches;
	// System.Boolean UICamera::isDragging
	bool ___isDragging;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t9 * ___hoveredObject;
	// UICamera/DepthEntry UICamera::mHit
	DepthEntry_t5402  ___mHit;
	// BetterList`1<UICamera/DepthEntry> UICamera::mHits
	BetterList_1_t5409 * ___mHits;
	// UnityEngine.RaycastHit UICamera::mEmpty
	RaycastHit_t11  ___mEmpty;
	// System.Comparison`1<UICamera/DepthEntry> UICamera::<>f__am$cache34
	Comparison_1_t5410 * ___U3CU3Ef__am$cache34;
};
