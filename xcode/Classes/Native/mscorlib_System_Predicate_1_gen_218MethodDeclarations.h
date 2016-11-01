#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PropertyMetadata>
struct Predicate_1_t16448;
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

// System.Void System.Predicate`1<PropertyMetadata>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m122940 (Predicate_1_t16448 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PropertyMetadata>::Invoke(T)
 bool Predicate_1_Invoke_m122941 (Predicate_1_t16448 * __this, PropertyMetadata_t1070  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<PropertyMetadata>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m122942 (Predicate_1_t16448 * __this, PropertyMetadata_t1070  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PropertyMetadata>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m122943 (Predicate_1_t16448 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
