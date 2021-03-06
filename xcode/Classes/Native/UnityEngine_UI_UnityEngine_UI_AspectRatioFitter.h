﻿#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.AspectRatioFitter/AspectMode
#include "UnityEngine_UI_UnityEngine_UI_AspectRatioFitter_AspectMode.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_t6159  : public UIBehaviour_t5983
{
	// UnityEngine.UI.AspectRatioFitter/AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t6078 * ___m_Rect;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_t6129  ___m_Tracker;
};
