#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PVPData/HistroyData>
struct Comparison_1_t19787;
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

// System.Void System.Comparison`1<PVPData/HistroyData>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m144290 (Comparison_1_t19787 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PVPData/HistroyData>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m144291 (Comparison_1_t19787 * __this, HistroyData_t4925  ___x, HistroyData_t4925  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<PVPData/HistroyData>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m144292 (Comparison_1_t19787 * __this, HistroyData_t4925  ___x, HistroyData_t4925  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PVPData/HistroyData>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m144293 (Comparison_1_t19787 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
