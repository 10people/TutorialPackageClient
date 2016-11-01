#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>>
struct Transform_1_t15709;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>
struct List_1_t702;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m117332 (Transform_1_t15709 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>>::Invoke(TKey,TValue)
 List_1_t702 * Transform_1_Invoke_m117333 (Transform_1_t15709 * __this, int32_t ___key, List_1_t702 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m117334 (Transform_1_t15709 * __this, int32_t ___key, List_1_t702 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>>::EndInvoke(System.IAsyncResult)
 List_1_t702 * Transform_1_EndInvoke_m117335 (Transform_1_t15709 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
