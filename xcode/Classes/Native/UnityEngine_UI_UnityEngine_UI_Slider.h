#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t6142;
// UnityEngine.UI.Image
struct Image_t6101;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.Slider
struct Slider_t6144  : public Selectable_t6064
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6078 * ___m_FillRect;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6078 * ___m_HandleRect;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t6142 * ___m_OnValueChanged;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t6101 * ___m_FillImage;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t78 * ___m_FillTransform;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6078 * ___m_FillContainerRect;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t78 * ___m_HandleTransform;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6078 * ___m_HandleContainerRect;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t12  ___m_Offset;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t6129  ___m_Tracker;
};
