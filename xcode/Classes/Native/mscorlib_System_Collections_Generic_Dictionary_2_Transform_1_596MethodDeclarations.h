#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>>
struct Transform_1_t14427;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>
struct List_1_t630;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m106560 (Transform_1_t14427 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>>::Invoke(TKey,TValue)
 List_1_t630 * Transform_1_Invoke_m106561 (Transform_1_t14427 * __this, int32_t ___key, List_1_t630 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m106562 (Transform_1_t14427 * __this, int32_t ___key, List_1_t630 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>>::EndInvoke(System.IAsyncResult)
 List_1_t630 * Transform_1_EndInvoke_m106563 (Transform_1_t14427 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
