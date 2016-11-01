#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>
struct Comparison_1_t4734;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m40921 (Comparison_1_t4734 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m154327 (Comparison_1_t4734 * __this, KeyValuePair_2_t4736  ___x, KeyValuePair_2_t4736  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m154328 (Comparison_1_t4734 * __this, KeyValuePair_2_t4736  ___x, KeyValuePair_2_t4736  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m154329 (Comparison_1_t4734 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
