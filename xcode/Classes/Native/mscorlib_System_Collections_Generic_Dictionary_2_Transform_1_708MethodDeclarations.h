#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>>
struct Transform_1_t15421;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>
struct List_1_t686;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m114932 (Transform_1_t15421 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>>::Invoke(TKey,TValue)
 List_1_t686 * Transform_1_Invoke_m114933 (Transform_1_t15421 * __this, int32_t ___key, List_1_t686 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m114934 (Transform_1_t15421 * __this, int32_t ___key, List_1_t686 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>>::EndInvoke(System.IAsyncResult)
 List_1_t686 * Transform_1_EndInvoke_m114935 (Transform_1_t15421 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
