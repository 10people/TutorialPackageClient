#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>
struct Predicate_1_t21171;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m154460 (Predicate_1_t21171 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::Invoke(T)
 bool Predicate_1_Invoke_m154461 (Predicate_1_t21171 * __this, KeyValuePair_2_t4736  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m154462 (Predicate_1_t21171 * __this, KeyValuePair_2_t4736  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m154463 (Predicate_1_t21171 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
