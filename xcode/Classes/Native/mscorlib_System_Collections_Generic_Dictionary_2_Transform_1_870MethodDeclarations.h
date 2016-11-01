#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,MasterMember>
struct Transform_1_t17840;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,MasterMember>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m132276 (Transform_1_t17840 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,MasterMember>::Invoke(TKey,TValue)
 MasterMember_t1536  Transform_1_Invoke_m132277 (Transform_1_t17840 * __this, uint64_t ___key, MasterMember_t1536  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,MasterMember>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m132278 (Transform_1_t17840 * __this, uint64_t ___key, MasterMember_t1536  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MasterMember,MasterMember>::EndInvoke(System.IAsyncResult)
 MasterMember_t1536  Transform_1_EndInvoke_m132279 (Transform_1_t17840 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
