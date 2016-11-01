#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.DictionaryEntry>
struct Transform_1_t21376;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// Games.JuQingCopySceneData.StoryCopySceneLevelInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneLe.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m156095 (Transform_1_t21376 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1066  Transform_1_Invoke_m156096 (Transform_1_t21376 * __this, int32_t ___key, StoryCopySceneLevelInfo_t4905  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m156097 (Transform_1_t21376 * __this, int32_t ___key, StoryCopySceneLevelInfo_t4905  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1066  Transform_1_EndInvoke_m156098 (Transform_1_t21376 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
