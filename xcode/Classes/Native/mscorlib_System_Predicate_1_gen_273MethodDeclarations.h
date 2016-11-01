#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PVPData/HistroyData>
struct Predicate_1_t19785;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PVPData/HistroyData
#include "AssemblyU2DCSharp_PVPData_HistroyData.h"

// System.Void System.Predicate`1<PVPData/HistroyData>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m144280 (Predicate_1_t19785 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PVPData/HistroyData>::Invoke(T)
 bool Predicate_1_Invoke_m144281 (Predicate_1_t19785 * __this, HistroyData_t4925  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<PVPData/HistroyData>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m144282 (Predicate_1_t19785 * __this, HistroyData_t4925  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PVPData/HistroyData>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m144283 (Predicate_1_t19785 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
