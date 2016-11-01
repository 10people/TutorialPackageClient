#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t5838;
// UnityEngine.GUISkin
struct GUISkin_t5886;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t5135;
// UnityEngine.GUIContent
struct GUIContent_t6238;
// UnityEngine.TextEditor
struct TextEditor_t6237;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t5885;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
 void GUI__cctor_m52117 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
 void GUI_set_nextScrollStepTime_m52118 (Object_t * __this/* static, unused */, DateTime_t1171  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
 void GUI_set_skin_m52119 (Object_t * __this/* static, unused */, GUISkin_t5886 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
 GUISkin_t5886 * GUI_get_skin_m41699 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
 void GUI_INTERNAL_set_color_m52120 (Object_t * __this/* static, unused */, Color_t939 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
 void GUI_set_color_m41705 (Object_t * __this/* static, unused */, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_backgroundColor(UnityEngine.Color&)
 void GUI_INTERNAL_set_backgroundColor_m52121 (Object_t * __this/* static, unused */, Color_t939 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
 void GUI_set_backgroundColor_m52122 (Object_t * __this/* static, unused */, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
 void GUI_set_changed_m52123 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
 void GUI_Label_m42392 (Object_t * __this/* static, unused */, Rect_t5068  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
 void GUI_Label_m41709 (Object_t * __this/* static, unused */, Rect_t5068  ___position, String_t* ___text, GUIStyle_t5135 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUI_Label_m52124 (Object_t * __this/* static, unused */, Rect_t5068  ___position, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 void GUI_DoLabel_m52125 (Object_t * __this/* static, unused */, Rect_t5068  ___position, GUIContent_t6238 * ___content, IntPtr_t24 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 void GUI_INTERNAL_CALL_DoLabel_m52126 (Object_t * __this/* static, unused */, Rect_t5068 * ___position, GUIContent_t6238 * ___content, IntPtr_t24 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUI_Box_m52127 (Object_t * __this/* static, unused */, Rect_t5068  ___position, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 bool GUI_Button_m52128 (Object_t * __this/* static, unused */, Rect_t5068  ___position, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_DoButton_m52129 (Object_t * __this/* static, unused */, Rect_t5068  ___position, GUIContent_t6238 * ___content, IntPtr_t24 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_INTERNAL_CALL_DoButton_m52130 (Object_t * __this/* static, unused */, Rect_t5068 * ___position, GUIContent_t6238 * ___content, IntPtr_t24 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String,System.Int32)
 String_t* GUI_TextField_m41352 (Object_t * __this/* static, unused */, Rect_t5068  ___position, String_t* ___text, int32_t ___maxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
 String_t* GUI_PasswordFieldGetStrToShow_m52131 (Object_t * __this/* static, unused */, String_t* ___password, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
 void GUI_DoTextField_m52132 (Object_t * __this/* static, unused */, Rect_t5068  ___position, int32_t ___id, GUIContent_t6238 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t5135 * ___style, String_t* ___secureText, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
 void GUI_HandleTextFieldEventForTouchscreen_m52133 (Object_t * __this/* static, unused */, Rect_t5068  ___position, int32_t ___id, GUIContent_t6238 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t5135 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t6237 * ___editor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
 Rect_t5068  GUI_Window_m41708 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t5068  ___clientRect, WindowFunction_t5885 * ___func, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUI_CallWindowDelegate_m52134 (Object_t * __this/* static, unused */, WindowFunction_t5885 * ___func, int32_t ___id, GUISkin_t5886 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t5135 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
 Rect_t5068  GUI_DoWindow_m52135 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t5068  ___clientRect, WindowFunction_t5885 * ___func, GUIContent_t6238 * ___title, GUIStyle_t5135 * ___style, GUISkin_t5886 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
 Rect_t5068  GUI_INTERNAL_CALL_DoWindow_m52136 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t5068 * ___clientRect, WindowFunction_t5885 * ___func, GUIContent_t6238 * ___title, GUIStyle_t5135 * ___style, GUISkin_t5886 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow(UnityEngine.Rect)
 void GUI_DragWindow_m41710 (Object_t * __this/* static, unused */, Rect_t5068  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DragWindow(UnityEngine.Rect&)
 void GUI_INTERNAL_CALL_DragWindow_m52137 (Object_t * __this/* static, unused */, Rect_t5068 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
