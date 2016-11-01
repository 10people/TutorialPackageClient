#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,GuildMember>
struct Transform_1_t17529;
// System.Object
struct Object_t;
// GuildMember
struct GuildMember_t1444;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,GuildMember>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m130269 (Transform_1_t17529 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,GuildMember>::Invoke(TKey,TValue)
 GuildMember_t1444 * Transform_1_Invoke_m130270 (Transform_1_t17529 * __this, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,GuildMember>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m130271 (Transform_1_t17529 * __this, uint64_t ___key, GuildMember_t1444 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,GuildMember>::EndInvoke(System.IAsyncResult)
 GuildMember_t1444 * Transform_1_EndInvoke_m130272 (Transform_1_t17529 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
