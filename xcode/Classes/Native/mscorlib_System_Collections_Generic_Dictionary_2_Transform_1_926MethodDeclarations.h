#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,PVPData/OpponentInfo>
struct Transform_1_t19748;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PVPData/OpponentInfo
#include "AssemblyU2DCSharp_PVPData_OpponentInfo.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,PVPData/OpponentInfo>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m143937 (Transform_1_t19748 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,PVPData/OpponentInfo>::Invoke(TKey,TValue)
 OpponentInfo_t1910  Transform_1_Invoke_m143938 (Transform_1_t19748 * __this, uint64_t ___key, OpponentInfo_t1910  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,PVPData/OpponentInfo>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m143939 (Transform_1_t19748 * __this, uint64_t ___key, OpponentInfo_t1910  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,PVPData/OpponentInfo,PVPData/OpponentInfo>::EndInvoke(System.IAsyncResult)
 OpponentInfo_t1910  Transform_1_EndInvoke_m143940 (Transform_1_t19748 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
