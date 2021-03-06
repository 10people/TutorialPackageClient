﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>
struct Transform_1_t23787;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_285.h"
// LitJson.ObjectMetadata
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m172882 (Transform_1_t23787 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::Invoke(TKey,TValue)
 KeyValuePair_2_t23751  Transform_1_Invoke_m172883 (Transform_1_t23787 * __this, Type_t * ___key, ObjectMetadata_t6297  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m172884 (Transform_1_t23787 * __this, Type_t * ___key, ObjectMetadata_t6297  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t23751  Transform_1_EndInvoke_m172885 (Transform_1_t23787 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
