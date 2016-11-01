#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,System.UInt64>
struct Transform_1_t17837;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MasterMember
#include "AssemblyU2DCSharp_MasterMember.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,System.UInt64>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m132252 (Transform_1_t17837 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,System.UInt64>::Invoke(TKey,TValue)
 uint64_t Transform_1_Invoke_m132253 (Transform_1_t17837 * __this, uint64_t ___key, MasterMember_t1536  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m132254 (Transform_1_t17837 * __this, uint64_t ___key, MasterMember_t1536  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,System.UInt64>::EndInvoke(System.IAsyncResult)
 uint64_t Transform_1_EndInvoke_m132255 (Transform_1_t17837 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
