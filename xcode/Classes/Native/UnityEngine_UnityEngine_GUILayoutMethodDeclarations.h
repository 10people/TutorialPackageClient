#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t7586;
// UnityEngine.Texture
struct Texture_t937;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t5725;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t6238;
// UnityEngine.GUIStyle
struct GUIStyle_t5135;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t5726;

// System.Void UnityEngine.GUILayout::Label(UnityEngine.Texture,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m52138 (Object_t * __this/* static, unused */, Texture_t937 * ___image, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m40532 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_DoLabel_m52139 (Object_t * __this/* static, unused */, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
 bool GUILayout_Button_m41350 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 bool GUILayout_DoButton_m52140 (Object_t * __this/* static, unused */, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
 void GUILayout_Space_m52141 (Object_t * __this/* static, unused */, float ___pixels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
 void GUILayout_FlexibleSpace_m52142 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
 void GUILayout_BeginHorizontal_m40531 (Object_t * __this/* static, unused */, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_BeginHorizontal_m52143 (Object_t * __this/* static, unused */, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_BeginHorizontal_m52144 (Object_t * __this/* static, unused */, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
 void GUILayout_EndHorizontal_m40533 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
 void GUILayout_BeginVertical_m40530 (Object_t * __this/* static, unused */, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_BeginVertical_m52145 (Object_t * __this/* static, unused */, GUIContent_t6238 * ___content, GUIStyle_t5135 * ___style, GUILayoutOptionU5BU5D_t5725* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
 void GUILayout_EndVertical_m40534 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
 GUILayoutOption_t5726 * GUILayout_Width_m41349 (Object_t * __this/* static, unused */, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
 GUILayoutOption_t5726 * GUILayout_Height_m41348 (Object_t * __this/* static, unused */, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
 GUILayoutOption_t5726 * GUILayout_ExpandWidth_m52146 (Object_t * __this/* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
 GUILayoutOption_t5726 * GUILayout_ExpandHeight_m52147 (Object_t * __this/* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
