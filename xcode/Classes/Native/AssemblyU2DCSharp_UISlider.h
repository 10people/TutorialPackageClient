#pragma once
#include <stdint.h>
// UISlider
struct UISlider_t1219;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UIWidget
struct UIWidget_t5195;
// UISprite
struct UISprite_t1202;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UISlider/Direction
#include "AssemblyU2DCSharp_UISlider_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UISlider
struct UISlider_t1219  : public UIWidgetContainer_t1195
{
	// UnityEngine.Transform UISlider::foreground
	Transform_t78 * ___foreground;
	// UnityEngine.Transform UISlider::thumb
	Transform_t78 * ___thumb;
	// UISlider/Direction UISlider::direction
	int32_t ___direction;
	// System.Int32 UISlider::numberOfSteps
	int32_t ___numberOfSteps;
	// System.Collections.Generic.List`1<EventDelegate> UISlider::onChange
	List_1_t1193 * ___onChange;
	// System.Single UISlider::rawValue
	float ___rawValue;
	// UnityEngine.GameObject UISlider::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UISlider::functionName
	String_t* ___functionName;
	// UnityEngine.BoxCollider UISlider::mCol
	BoxCollider_t128 * ___mCol;
	// UnityEngine.Transform UISlider::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Transform UISlider::mFGTrans
	Transform_t78 * ___mFGTrans;
	// UIWidget UISlider::mFGWidget
	UIWidget_t5195 * ___mFGWidget;
	// UISprite UISlider::mFGFilled
	UISprite_t1202 * ___mFGFilled;
	// System.Boolean UISlider::mInitDone
	bool ___mInitDone;
	// UnityEngine.Vector2 UISlider::mSize
	Vector2_t12  ___mSize;
	// UnityEngine.Vector2 UISlider::mCenter
	Vector2_t12  ___mCenter;
};
struct UISlider_t1219_StaticFields{
	// UISlider UISlider::current
	UISlider_t1219 * ___current;
};
