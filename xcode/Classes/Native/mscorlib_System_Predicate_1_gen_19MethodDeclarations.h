#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PointCloudRegognizer/Point>
struct Predicate_1_t8953;
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

// System.Void System.Predicate`1<PointCloudRegognizer/Point>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m60887 (Predicate_1_t8953 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PointCloudRegognizer/Point>::Invoke(T)
 bool Predicate_1_Invoke_m60888 (Predicate_1_t8953 * __this, Point_t96  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<PointCloudRegognizer/Point>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m60889 (Predicate_1_t8953 * __this, Point_t96  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PointCloudRegognizer/Point>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m60890 (Predicate_1_t8953 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
