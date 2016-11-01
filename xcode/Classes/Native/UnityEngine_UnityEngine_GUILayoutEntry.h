#pragma once
#include <stdint.h>
// UnityEngine.GUIStyle
struct GUIStyle_t5135;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t7591  : public Object_t
{
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t5068  ___rect;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t5135 * ___m_Style;
};
struct GUILayoutEntry_t7591_StaticFields{
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t5068  ___kDummyRect;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent;
};
