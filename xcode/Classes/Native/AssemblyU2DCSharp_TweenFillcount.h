#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"
// TweenFillcount
struct TweenFillcount_t5382  : public UITweener_t5320
{
	// System.Single TweenFillcount::from
	float ___from;
	// System.Single TweenFillcount::to
	float ___to;
	// System.Boolean TweenFillcount::invertFill
	bool ___invertFill;
	// UISprite/FillDirection TweenFillcount::fillDir
	int32_t ___fillDir;
	// UISprite TweenFillcount::mSprite
	UISprite_t1202 * ___mSprite;
	// System.Boolean TweenFillcount::bInit
	bool ___bInit;
};
