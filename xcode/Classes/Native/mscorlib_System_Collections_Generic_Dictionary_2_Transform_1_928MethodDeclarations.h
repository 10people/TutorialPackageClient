#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>>
struct Transform_1_t19749;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_252.h"
// PVPData/OpponentInfo
#include "AssemblyU2DCSharp_PVPData_OpponentInfo.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m143945 (Transform_1_t19749 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t19736  Transform_1_Invoke_m143946 (Transform_1_t19749 * __this, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m143947 (Transform_1_t19749 * __this, uint64_t ___key, OpponentInfo_t1910  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,System.Collections.Generic.KeyValuePair`2<System.UInt64,PVPData/OpponentInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t19736  Transform_1_EndInvoke_m143948 (Transform_1_t19749 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
