#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>
struct Transform_1_t17530;
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
// System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m130277 (Transform_1_t17530 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::Invoke(TKey,TValue)
 KeyValuePair_2_t4736  Transform_1_Invoke_m130278 (Transform_1_t17530 * __this, uint64_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m130279 (Transform_1_t17530 * __this, uint64_t ___key, GuildMember_t1444 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,GuildMember,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4736  Transform_1_EndInvoke_m130280 (Transform_1_t17530 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
