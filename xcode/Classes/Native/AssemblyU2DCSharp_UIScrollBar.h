#pragma once
#include <stdint.h>
// UIScrollBar
struct UIScrollBar_t1190;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UIScrollBar/OnDragFinished
struct OnDragFinished_t5326;
// UISprite
struct UISprite_t1202;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Camera
struct Camera_t38;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIScrollBar/Direction
#include "AssemblyU2DCSharp_UIScrollBar_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIScrollBar
struct UIScrollBar_t1190  : public UIWidgetContainer_t1195
{
	// System.Collections.Generic.List`1<EventDelegate> UIScrollBar::onChange
	List_1_t1193 * ___onChange;
	// UIScrollBar/OnDragFinished UIScrollBar::onDragFinished
	OnDragFinished_t5326 * ___onDragFinished;
	// UISprite UIScrollBar::mBG
	UISprite_t1202 * ___mBG;
	// UISprite UIScrollBar::mFG
	UISprite_t1202 * ___mFG;
	// UIScrollBar/Direction UIScrollBar::mDir
	int32_t ___mDir;
	// System.Boolean UIScrollBar::mInverted
	bool ___mInverted;
	// System.Single UIScrollBar::mScroll
	float ___mScroll;
	// System.Single UIScrollBar::mSize
	float ___mSize;
	// UnityEngine.Transform UIScrollBar::mTrans
	Transform_t78 * ___mTrans;
	// System.Boolean UIScrollBar::mIsDirty
	bool ___mIsDirty;
	// UnityEngine.Camera UIScrollBar::mCam
	Camera_t38 * ___mCam;
	// UnityEngine.Vector2 UIScrollBar::mScreenPos
	Vector2_t12  ___mScreenPos;
};
struct UIScrollBar_t1190_StaticFields{
	// UIScrollBar UIScrollBar::current
	UIScrollBar_t1190 * ___current;
};
