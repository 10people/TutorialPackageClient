#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIRoot
struct UIRoot_t5259;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UIRoot::.ctor()
 void UIRoot__ctor_m38486 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::.cctor()
 void UIRoot__cctor_m38487 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIRoot::get_activeHeight()
 int32_t UIRoot_get_activeHeight_m38488 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::get_pixelSizeAdjustment()
 float UIRoot_get_pixelSizeAdjustment_m38489 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(UnityEngine.GameObject)
 float UIRoot_GetPixelSizeAdjustment_m38490 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(System.Int32)
 float UIRoot_GetPixelSizeAdjustment_m38491 (UIRoot_t5259 * __this, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Awake()
 void UIRoot_Awake_m38492 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnEnable()
 void UIRoot_OnEnable_m38493 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnDisable()
 void UIRoot_OnDisable_m38494 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Start()
 void UIRoot_Start_m38495 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Update()
 void UIRoot_Update_m38496 (UIRoot_t5259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String)
 void UIRoot_Broadcast_m38497 (Object_t * __this/* static, unused */, String_t* ___funcName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String,System.Object)
 void UIRoot_Broadcast_m38498 (Object_t * __this/* static, unused */, String_t* ___funcName, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
