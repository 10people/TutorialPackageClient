#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,AutoSearchAgent/PathNodeInfo>
struct Transform_1_t20992;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,AutoSearchAgent/PathNodeInfo>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m152960 (Transform_1_t20992 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,AutoSearchAgent/PathNodeInfo>::Invoke(TKey,TValue)
 PathNodeInfo_t4535 * Transform_1_Invoke_m152961 (Transform_1_t20992 * __this, int32_t ___key, PathNodeInfo_t4535 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,AutoSearchAgent/PathNodeInfo>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m152962 (Transform_1_t20992 * __this, int32_t ___key, PathNodeInfo_t4535 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,AutoSearchAgent/PathNodeInfo,AutoSearchAgent/PathNodeInfo>::EndInvoke(System.IAsyncResult)
 PathNodeInfo_t4535 * Transform_1_EndInvoke_m152963 (Transform_1_t20992 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
