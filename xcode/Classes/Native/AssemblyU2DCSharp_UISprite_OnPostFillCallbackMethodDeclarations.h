#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISprite/OnPostFillCallback
struct OnPostFillCallback_t5433;
// System.Object
struct Object_t;
// UIWidget
struct UIWidget_t5195;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t5196;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t5197;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t5198;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UISprite/OnPostFillCallback::.ctor(System.Object,System.IntPtr)
 void OnPostFillCallback__ctor_m38499 (OnPostFillCallback_t5433 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite/OnPostFillCallback::Invoke(UIWidget,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
 void OnPostFillCallback_Invoke_m38500 (OnPostFillCallback_t5433 * __this, UIWidget_t5195 * ___widget, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UISprite/OnPostFillCallback::BeginInvoke(UIWidget,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.AsyncCallback,System.Object)
 Object_t * OnPostFillCallback_BeginInvoke_m38501 (OnPostFillCallback_t5433 * __this, UIWidget_t5195 * ___widget, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite/OnPostFillCallback::EndInvoke(System.IAsyncResult)
 void OnPostFillCallback_EndInvoke_m38502 (OnPostFillCallback_t5433 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
