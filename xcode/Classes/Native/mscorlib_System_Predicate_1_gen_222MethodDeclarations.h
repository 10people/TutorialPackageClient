#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<EventDelegate>
struct Predicate_1_t16720;
// System.Object
struct Object_t;
// EventDelegate
struct EventDelegate_t5350;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<EventDelegate>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_8MethodDeclarations.h"
#define Predicate_1__ctor_m125109(__this, ___object, ___method, method) (void)Predicate_1__ctor_m58132_gshared((Predicate_1_t8617 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Boolean System.Predicate`1<EventDelegate>::Invoke(T)
#define Predicate_1_Invoke_m125110(__this, ___obj, method) (bool)Predicate_1_Invoke_m58133_gshared((Predicate_1_t8617 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<EventDelegate>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m125111(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m58134_gshared((Predicate_1_t8617 *)__this, (Object_t *)___obj, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<EventDelegate>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m125112(__this, ___result, method) (bool)Predicate_1_EndInvoke_m58135_gshared((Predicate_1_t8617 *)__this, (Object_t *)___result, method)
