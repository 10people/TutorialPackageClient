#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>>
struct Transform_1_t20993;
// System.Object
struct Object_t;
// AutoSearchAgent/PathNodeInfo
struct PathNodeInfo_t4535;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_263.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m152968 (Transform_1_t20993 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t20983  Transform_1_Invoke_m152969 (Transform_1_t20993 * __this, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m152970 (Transform_1_t20993 * __this, int32_t ___key, PathNodeInfo_t4535 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,AutoSearchAgent/PathNodeInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t20983  Transform_1_EndInvoke_m152971 (Transform_1_t20993 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
