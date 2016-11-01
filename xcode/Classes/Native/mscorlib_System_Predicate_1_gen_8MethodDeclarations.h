#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t8617;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m58132_gshared (Predicate_1_t8617 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define Predicate_1__ctor_m58132(__this, ___object, ___method, method) (void)Predicate_1__ctor_m58132_gshared((Predicate_1_t8617 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
 bool Predicate_1_Invoke_m58133_gshared (Predicate_1_t8617 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m58133(__this, ___obj, method) (bool)Predicate_1_Invoke_m58133_gshared((Predicate_1_t8617 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m58134_gshared (Predicate_1_t8617 * __this, Object_t * ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m58134(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m58134_gshared((Predicate_1_t8617 *)__this, (Object_t *)___obj, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m58135_gshared (Predicate_1_t8617 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m58135(__this, ___result, method) (bool)Predicate_1_EndInvoke_m58135_gshared((Predicate_1_t8617 *)__this, (Object_t *)___result, method)
