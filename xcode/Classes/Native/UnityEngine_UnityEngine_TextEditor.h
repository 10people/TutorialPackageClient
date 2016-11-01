#pragma once
#include <stdint.h>
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1194;
// UnityEngine.GUIContent
struct GUIContent_t6238;
// UnityEngine.GUIStyle
struct GUIStyle_t5135;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t7486;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
// UnityEngine.TextEditor
struct TextEditor_t6237  : public Object_t
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t1194 * ___keyboardOnScreen;
	// System.Int32 UnityEngine.TextEditor::pos
	int32_t ___pos;
	// System.Int32 UnityEngine.TextEditor::selectPos
	int32_t ___selectPos;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID;
	// UnityEngine.GUIContent UnityEngine.TextEditor::content
	GUIContent_t6238 * ___content;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t5135 * ___style;
	// UnityEngine.Rect UnityEngine.TextEditor::position
	Rect_t5068  ___position;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t12  ___scrollOffset;
	// System.Boolean UnityEngine.TextEditor::m_TextHeightPotentiallyChanged
	bool ___m_TextHeightPotentiallyChanged;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_t12  ___graphicalCursorPos;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_t12  ___graphicalSelectCursorPos;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos;
};
struct TextEditor_t6237_StaticFields{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t7486 * ___s_Keyactions;
};
