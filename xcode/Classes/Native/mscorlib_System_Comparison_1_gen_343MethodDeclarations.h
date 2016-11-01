#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Color>
struct Comparison_1_t22699;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Comparison`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m164924 (Comparison_1_t22699 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UnityEngine.Color>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m164925 (Comparison_1_t22699 * __this, Color_t939  ___x, Color_t939  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m164926 (Comparison_1_t22699 * __this, Color_t939  ___x, Color_t939  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m164927 (Comparison_1_t22699 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
