#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>>
struct Transform_1_t14993;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>
struct List_1_t662;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m111340 (Transform_1_t14993 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>>::Invoke(TKey,TValue)
 List_1_t662 * Transform_1_Invoke_m111341 (Transform_1_t14993 * __this, int32_t ___key, List_1_t662 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m111342 (Transform_1_t14993 * __this, int32_t ___key, List_1_t662 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>>::EndInvoke(System.IAsyncResult)
 List_1_t662 * Transform_1_EndInvoke_m111343 (Transform_1_t14993 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
