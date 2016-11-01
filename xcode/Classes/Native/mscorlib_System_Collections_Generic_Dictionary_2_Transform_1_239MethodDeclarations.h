#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>,System.Int32>
struct Transform_1_t11250;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>
struct List_1_t452;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m79899 (Transform_1_t11250 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>,System.Int32>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m79900 (Transform_1_t11250 * __this, int32_t ___key, List_1_t452 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m79901 (Transform_1_t11250 * __this, int32_t ___key, List_1_t452 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m79902 (Transform_1_t11250 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
