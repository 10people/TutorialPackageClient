#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PointCloudRegognizer/Point>
struct Comparison_1_t8955;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PointCloudRegognizer/Point
#include "AssemblyU2DCSharpU2Dfirstpass_PointCloudRegognizer_Point.h"

// System.Void System.Comparison`1<PointCloudRegognizer/Point>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m60897 (Comparison_1_t8955 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PointCloudRegognizer/Point>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m60898 (Comparison_1_t8955 * __this, Point_t96  ___x, Point_t96  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<PointCloudRegognizer/Point>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m60899 (Comparison_1_t8955 * __this, Point_t96  ___x, Point_t96  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PointCloudRegognizer/Point>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m60900 (Comparison_1_t8955 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
