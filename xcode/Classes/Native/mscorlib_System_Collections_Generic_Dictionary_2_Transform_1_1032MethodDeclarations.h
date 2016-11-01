#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo>>
struct Transform_1_t21405;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Games.JuQingCopySceneData.StoryCopySceneChapterInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneCh.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m156238 (Transform_1_t21405 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5812  Transform_1_Invoke_m156239 (Transform_1_t21405 * __this, int32_t ___key, StoryCopySceneChapterInfo_t4907  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m156240 (Transform_1_t21405 * __this, int32_t ___key, StoryCopySceneChapterInfo_t4907  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5812  Transform_1_EndInvoke_m156241 (Transform_1_t21405 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
