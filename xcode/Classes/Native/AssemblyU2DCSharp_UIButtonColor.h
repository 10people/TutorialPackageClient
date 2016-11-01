#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIButtonColor
struct UIButtonColor_t5286  : public UIWidgetContainer_t1195
{
	// UnityEngine.GameObject UIButtonColor::tweenTarget
	GameObject_t9 * ___tweenTarget;
	// UnityEngine.Color UIButtonColor::hover
	Color_t939  ___hover;
	// UnityEngine.Color UIButtonColor::pressed
	Color_t939  ___pressed;
	// System.Single UIButtonColor::duration
	float ___duration;
	// UnityEngine.Color UIButtonColor::mColor
	Color_t939  ___mColor;
	// System.Boolean UIButtonColor::mStarted
	bool ___mStarted;
	// System.Boolean UIButtonColor::mHighlighted
	bool ___mHighlighted;
};
