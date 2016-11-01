#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t7590;
// UnityEngine.GUIStyle
struct GUIStyle_t5135;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t7588;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t5725;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t7587;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t6238;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
 void GUILayoutUtility__cctor_m52149 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
 LayoutCache_t7588 * GUILayoutUtility_SelectIDList_m52150 (Object_t * __this/* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
 void GUILayoutUtility_Begin_m52151 (Object_t * __this/* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutUtility_BeginWindow_m52152 (Object_t * __this/* static, unused */, int32_t ___windowID, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
 void GUILayoutUtility_EndGroup_m52153 (Object_t * __this/* static, unused */, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
 void GUILayoutUtility_Layout_m52154 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
 void GUILayoutUtility_LayoutFromEditorWindow_m52155 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutFreeGroup_m52156 (Object_t * __this/* static, unused */, GUILayoutGroup_t7587 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutSingleGroup_m52157 (Object_t * __this/* static, unused */, GUILayoutGroup_t7587 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
 Rect_t5068  GUILayoutUtility_Internal_GetWindowRect_m52158 (Object_t * __this/* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
 void GUILayoutUtility_Internal_MoveWindow_m52159 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t5068  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
 void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m52160 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t5068 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
 GUILayoutGroup_t7587 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m52161 (Object_t * __this/* static, unused */, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
 GUILayoutGroup_t7587 * GUILayoutUtility_BeginLayoutGroup_m52162 (Object_t * __this/* static, unused */, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
 void GUILayoutUtility_EndLayoutGroup_m52163 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t5068  GUILayoutUtility_GetRect_m52164 (Object_t * __this/* static, unused */, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t5068  GUILayoutUtility_DoGetRect_m52165 (Object_t * __this/* static, unused */, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t5068  GUILayoutUtility_GetRect_m52166 (Object_t * __this/* static, unused */, float ___width, float ___height, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t5068  GUILayoutUtility_DoGetRect_m52167 (Object_t * __this/* static, unused */, float ___minWidth, float ___maxWidth, float ___minHeight, float ___maxHeight, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
 GUIStyle_t5135 * GUILayoutUtility_get_spaceStyle_m52168 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
