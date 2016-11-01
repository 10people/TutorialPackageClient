#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>>
struct Transform_1_t14885;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>
struct List_1_t656;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m110440 (Transform_1_t14885 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>>::Invoke(TKey,TValue)
 List_1_t656 * Transform_1_Invoke_m110441 (Transform_1_t14885 * __this, int32_t ___key, List_1_t656 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m110442 (Transform_1_t14885 * __this, int32_t ___key, List_1_t656 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>>::EndInvoke(System.IAsyncResult)
 List_1_t656 * Transform_1_EndInvoke_m110443 (Transform_1_t14885 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
