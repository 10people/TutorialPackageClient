#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff>>
struct Transform_1_t21492;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_270.h"
// Games.UserCommonData.UserCommonData/CopySceneActivityOnOff
#include "AssemblyU2DCSharp_Games_UserCommonData_UserCommonData_CopySc_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m156922 (Transform_1_t21492 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff>>::Invoke(TKey,TValue)
 KeyValuePair_2_t21482  Transform_1_Invoke_m156923 (Transform_1_t21492 * __this, int32_t ___key, CopySceneActivityOnOff_t4971  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m156924 (Transform_1_t21492 * __this, int32_t ___key, CopySceneActivityOnOff_t4971  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t21482  Transform_1_EndInvoke_m156925 (Transform_1_t21492 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
