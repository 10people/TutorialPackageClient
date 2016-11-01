#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>>
struct Transform_1_t14603;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>
struct List_1_t640;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m108052 (Transform_1_t14603 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>>::Invoke(TKey,TValue)
 List_1_t640 * Transform_1_Invoke_m108053 (Transform_1_t14603 * __this, int32_t ___key, List_1_t640 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m108054 (Transform_1_t14603 * __this, int32_t ___key, List_1_t640 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>>::EndInvoke(System.IAsyncResult)
 List_1_t640 * Transform_1_EndInvoke_m108055 (Transform_1_t14603 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
