#pragma once
#include <stdint.h>
// BetterList`1<UIToggle>
struct BetterList_1_t5331;
// UIToggle
struct UIToggle_t1220;
// UIWidget
struct UIWidget_t5195;
// UnityEngine.Animation
struct Animation_t1252;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UnityEngine.Transform
struct Transform_t78;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIToggle
struct UIToggle_t1220  : public UIWidgetContainer_t1195
{
	// System.Int32 UIToggle::group
	int32_t ___group;
	// UIWidget UIToggle::activeSprite
	UIWidget_t5195 * ___activeSprite;
	// UnityEngine.Animation UIToggle::activeAnimation
	Animation_t1252 * ___activeAnimation;
	// System.Boolean UIToggle::startsActive
	bool ___startsActive;
	// System.Boolean UIToggle::instantTween
	bool ___instantTween;
	// System.Boolean UIToggle::optionCanBeNone
	bool ___optionCanBeNone;
	// System.Collections.Generic.List`1<EventDelegate> UIToggle::onChange
	List_1_t1193 * ___onChange;
	// UnityEngine.Transform UIToggle::radioButtonRoot
	Transform_t78 * ___radioButtonRoot;
	// System.Boolean UIToggle::startsChecked
	bool ___startsChecked;
	// UISprite UIToggle::checkSprite
	UISprite_t1202 * ___checkSprite;
	// UnityEngine.Animation UIToggle::checkAnimation
	Animation_t1252 * ___checkAnimation;
	// UnityEngine.GameObject UIToggle::eventReceiver
	GameObject_t9 * ___eventReceiver;
	// System.String UIToggle::functionName
	String_t* ___functionName;
	// System.Boolean UIToggle::mIsActive
	bool ___mIsActive;
	// System.Boolean UIToggle::mStarted
	bool ___mStarted;
};
struct UIToggle_t1220_StaticFields{
	// BetterList`1<UIToggle> UIToggle::list
	BetterList_1_t5331 * ___list;
	// UIToggle UIToggle::current
	UIToggle_t1220 * ___current;
};
