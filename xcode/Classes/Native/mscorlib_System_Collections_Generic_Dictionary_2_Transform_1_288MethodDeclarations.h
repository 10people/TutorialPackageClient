#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>>
struct Transform_1_t11681;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>
struct List_1_t476;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m83516 (Transform_1_t11681 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>>::Invoke(TKey,TValue)
 List_1_t476 * Transform_1_Invoke_m83517 (Transform_1_t11681 * __this, int32_t ___key, List_1_t476 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m83518 (Transform_1_t11681 * __this, int32_t ___key, List_1_t476 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>>::EndInvoke(System.IAsyncResult)
 List_1_t476 * Transform_1_EndInvoke_m83519 (Transform_1_t11681 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
