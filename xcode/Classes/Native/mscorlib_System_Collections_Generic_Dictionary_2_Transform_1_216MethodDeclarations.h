﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>>
struct Transform_1_t11043;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>
struct List_1_t440;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m78135 (Transform_1_t11043 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>>::Invoke(TKey,TValue)
 List_1_t440 * Transform_1_Invoke_m78136 (Transform_1_t11043 * __this, int32_t ___key, List_1_t440 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m78137 (Transform_1_t11043 * __this, int32_t ___key, List_1_t440 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>>::EndInvoke(System.IAsyncResult)
 List_1_t440 * Transform_1_EndInvoke_m78138 (Transform_1_t11043 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
