#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GCGame.Table.Tab_Animation,GCGame.Table.Tab_Animation>
struct Transform_1_t20950;
// System.Object
struct Object_t;
// GCGame.Table.Tab_Animation
struct Tab_Animation_t341;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GCGame.Table.Tab_Animation,GCGame.Table.Tab_Animation>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m152611 (Transform_1_t20950 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GCGame.Table.Tab_Animation,GCGame.Table.Tab_Animation>::Invoke(TKey,TValue)
 Tab_Animation_t341 * Transform_1_Invoke_m152612 (Transform_1_t20950 * __this, int32_t ___key, Tab_Animation_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GCGame.Table.Tab_Animation,GCGame.Table.Tab_Animation>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m152613 (Transform_1_t20950 * __this, int32_t ___key, Tab_Animation_t341 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GCGame.Table.Tab_Animation,GCGame.Table.Tab_Animation>::EndInvoke(System.IAsyncResult)
 Tab_Animation_t341 * Transform_1_EndInvoke_m152614 (Transform_1_t20950 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
