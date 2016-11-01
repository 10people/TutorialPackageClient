#pragma once
#include <stdint.h>
// UnityEngine.GUIStyleState
struct GUIStyleState_t5887;
// UnityEngine.RectOffset
struct RectOffset_t6174;
// UnityEngine.Font
struct Font_t5414;
// UnityEngine.GUIStyle
struct GUIStyle_t5135;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.GUIStyle
struct GUIStyle_t5135  : public Object_t
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	IntPtr_t24 ___m_Ptr;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t5887 * ___m_Normal;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t5887 * ___m_Hover;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t5887 * ___m_Active;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t5887 * ___m_Focused;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t5887 * ___m_OnNormal;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t5887 * ___m_OnHover;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t5887 * ___m_OnActive;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t5887 * ___m_OnFocused;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6174 * ___m_Border;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6174 * ___m_Padding;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6174 * ___m_Margin;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6174 * ___m_Overflow;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t5414 * ___m_FontInternal;
};
struct GUIStyle_t5135_StaticFields{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t5135 * ___s_None;
};
