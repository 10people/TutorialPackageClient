#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Int32>
struct Transform_1_t21402;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.JuQingCopySceneData.StoryCopySceneChapterInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneCh.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m156206 (Transform_1_t21402 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Int32>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m156207 (Transform_1_t21402 * __this, int32_t ___key, StoryCopySceneChapterInfo_t4907  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m156208 (Transform_1_t21402 * __this, int32_t ___key, StoryCopySceneChapterInfo_t4907  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m156209 (Transform_1_t21402 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
