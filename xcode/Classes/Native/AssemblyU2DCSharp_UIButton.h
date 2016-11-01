#pragma once
#include <stdint.h>
// UIButton
struct UIButton_t1578;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;
// UIButtonColor
#include "AssemblyU2DCSharp_UIButtonColor.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIButton
struct UIButton_t1578  : public UIButtonColor_t5286
{
	// UnityEngine.Color UIButton::disabledColor
	Color_t939  ___disabledColor;
	// System.Collections.Generic.List`1<EventDelegate> UIButton::onClick
	List_1_t1193 * ___onClick;
};
struct UIButton_t1578_StaticFields{
	// UIButton UIButton::current
	UIButton_t1578 * ___current;
};
