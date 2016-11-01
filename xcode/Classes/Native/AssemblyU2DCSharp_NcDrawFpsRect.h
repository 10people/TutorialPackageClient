#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t5135;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// NcDrawFpsRect
struct NcDrawFpsRect_t5133  : public MonoBehaviour_t18
{
	// System.Boolean NcDrawFpsRect::centerTop
	bool ___centerTop;
	// UnityEngine.Rect NcDrawFpsRect::startRect
	Rect_t5068  ___startRect;
	// System.Boolean NcDrawFpsRect::updateColor
	bool ___updateColor;
	// System.Boolean NcDrawFpsRect::allowDrag
	bool ___allowDrag;
	// System.Single NcDrawFpsRect::frequency
	float ___frequency;
	// System.Int32 NcDrawFpsRect::nbDecimal
	int32_t ___nbDecimal;
	// System.Single NcDrawFpsRect::accum
	float ___accum;
	// System.Int32 NcDrawFpsRect::frames
	int32_t ___frames;
	// UnityEngine.Color NcDrawFpsRect::color
	Color_t939  ___color;
	// System.String NcDrawFpsRect::sFPS
	String_t* ___sFPS;
	// UnityEngine.GUIStyle NcDrawFpsRect::style
	GUIStyle_t5135 * ___style;
	// System.Boolean NcDrawFpsRect::m_bUpdate
	bool ___m_bUpdate;
	// System.Single NcDrawFpsRect::m_AndroidFPS
	float ___m_AndroidFPS;
	// System.Single NcDrawFpsRect::tempNetSpeed
	float ___tempNetSpeed;
};
