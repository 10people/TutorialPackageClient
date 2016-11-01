#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<BePowerData/BePowerUpData>
struct Predicate_1_t19339;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// BePowerData/BePowerUpData
#include "AssemblyU2DCSharp_BePowerData_BePowerUpData.h"

// System.Void System.Predicate`1<BePowerData/BePowerUpData>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m141162 (Predicate_1_t19339 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<BePowerData/BePowerUpData>::Invoke(T)
 bool Predicate_1_Invoke_m141163 (Predicate_1_t19339 * __this, BePowerUpData_t4846  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<BePowerData/BePowerUpData>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m141164 (Predicate_1_t19339 * __this, BePowerUpData_t4846  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<BePowerData/BePowerUpData>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m141165 (Predicate_1_t19339 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
