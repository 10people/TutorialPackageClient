﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<LitJson.PropertyMetadata>
struct Comparison_1_t23860;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// LitJson.PropertyMetadata
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Comparison`1<LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m173581 (Comparison_1_t23860 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m173582 (Comparison_1_t23860 * __this, PropertyMetadata_t6294  ___x, PropertyMetadata_t6294  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<LitJson.PropertyMetadata>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m173583 (Comparison_1_t23860 * __this, PropertyMetadata_t6294  ___x, PropertyMetadata_t6294  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m173584 (Comparison_1_t23860 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
