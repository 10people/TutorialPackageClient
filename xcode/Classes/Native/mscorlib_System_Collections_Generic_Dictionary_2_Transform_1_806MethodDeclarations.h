#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.String>
struct Transform_1_t16440;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PropertyMetadata
#include "AssemblyU2DCSharp_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.String>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m122763 (Transform_1_t16440 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.String>::Invoke(TKey,TValue)
 String_t* Transform_1_Invoke_m122764 (Transform_1_t16440 * __this, String_t* ___key, PropertyMetadata_t1070  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m122765 (Transform_1_t16440 * __this, String_t* ___key, PropertyMetadata_t1070  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PropertyMetadata,System.String>::EndInvoke(System.IAsyncResult)
 String_t* Transform_1_EndInvoke_m122766 (Transform_1_t16440 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
