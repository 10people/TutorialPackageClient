#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t5195;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Light
struct Light_t5379;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// TweenColor
struct TweenColor_t5380  : public UITweener_t5320
{
	// UnityEngine.Color TweenColor::from
	Color_t939  ___from;
	// UnityEngine.Color TweenColor::to
	Color_t939  ___to;
	// UIWidget TweenColor::mWidget
	UIWidget_t5195 * ___mWidget;
	// UnityEngine.Material TweenColor::mMat
	Material_t133 * ___mMat;
	// UnityEngine.Light TweenColor::mLight
	Light_t5379 * ___mLight;
};
