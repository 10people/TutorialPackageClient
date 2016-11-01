#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener
struct UIEventListener_t5370;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIEventListener::.ctor()
 void UIEventListener__ctor_m38031 (UIEventListener_t5370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSubmit()
 void UIEventListener_OnSubmit_m38032 (UIEventListener_t5370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnClick()
 void UIEventListener_OnClick_m38033 (UIEventListener_t5370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDoubleClick()
 void UIEventListener_OnDoubleClick_m38034 (UIEventListener_t5370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnHover(System.Boolean)
 void UIEventListener_OnHover_m38035 (UIEventListener_t5370 * __this, bool ___isOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnPress(System.Boolean)
 void UIEventListener_OnPress_m38036 (UIEventListener_t5370 * __this, bool ___isPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSelect(System.Boolean)
 void UIEventListener_OnSelect_m38037 (UIEventListener_t5370 * __this, bool ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnScroll(System.Single)
 void UIEventListener_OnScroll_m38038 (UIEventListener_t5370 * __this, float ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrag(UnityEngine.Vector2)
 void UIEventListener_OnDrag_m38039 (UIEventListener_t5370 * __this, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrop(UnityEngine.GameObject)
 void UIEventListener_OnDrop_m38040 (UIEventListener_t5370 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnInput(System.String)
 void UIEventListener_OnInput_m38041 (UIEventListener_t5370 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnKey(UnityEngine.KeyCode)
 void UIEventListener_OnKey_m38042 (UIEventListener_t5370 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIEventListener UIEventListener::Get(UnityEngine.GameObject)
 UIEventListener_t5370 * UIEventListener_Get_m38043 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
