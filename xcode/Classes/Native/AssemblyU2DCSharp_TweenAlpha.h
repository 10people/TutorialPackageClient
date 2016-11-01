#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t5195;
// UIPanel
struct UIPanel_t1364;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// TweenAlpha
struct TweenAlpha_t1261  : public UITweener_t5320
{
	// System.Single TweenAlpha::from
	float ___from;
	// System.Single TweenAlpha::to
	float ___to;
	// UIWidget TweenAlpha::mWidget
	UIWidget_t5195 * ___mWidget;
	// UIPanel TweenAlpha::mPanel
	UIPanel_t1364 * ___mPanel;
};
