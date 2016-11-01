#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PropertyMetadata>
struct Comparison_1_t16450;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PropertyMetadata
#include "AssemblyU2DCSharp_PropertyMetadata.h"

// System.Void System.Comparison`1<PropertyMetadata>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m122950 (Comparison_1_t16450 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PropertyMetadata>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m122951 (Comparison_1_t16450 * __this, PropertyMetadata_t1070  ___x, PropertyMetadata_t1070  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<PropertyMetadata>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m122952 (Comparison_1_t16450 * __this, PropertyMetadata_t1070  ___x, PropertyMetadata_t1070  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PropertyMetadata>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m122953 (Comparison_1_t16450 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
