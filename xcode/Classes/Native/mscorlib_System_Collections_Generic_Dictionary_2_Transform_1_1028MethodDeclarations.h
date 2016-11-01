#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo>>
struct Transform_1_t21391;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_267.h"
// Games.JuQingCopySceneData.StoryCopySceneLevelInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneLe.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m156099 (Transform_1_t21391 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t21381  Transform_1_Invoke_m156100 (Transform_1_t21391 * __this, int32_t ___key, StoryCopySceneLevelInfo_t4905  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m156101 (Transform_1_t21391 * __this, int32_t ___key, StoryCopySceneLevelInfo_t4905  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t21381  Transform_1_EndInvoke_m156102 (Transform_1_t21391 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
