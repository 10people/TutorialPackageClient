#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Int32>
struct Transform_1_t21387;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.JuQingCopySceneData.StoryCopySceneLevelInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneLe.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m156067 (Transform_1_t21387 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Int32>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m156068 (Transform_1_t21387 * __this, int32_t ___key, StoryCopySceneLevelInfo_t4905  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m156069 (Transform_1_t21387 * __this, int32_t ___key, StoryCopySceneLevelInfo_t4905  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m156070 (Transform_1_t21387 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
