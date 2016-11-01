#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UpdateHelper/FileInfo,System.Collections.Generic.KeyValuePair`2<System.String,UpdateHelper/FileInfo>>
struct Transform_1_t16679;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UpdateHelper/FileInfo
struct FileInfo_t4511;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UpdateHelper/FileInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UpdateHelper/FileInfo,System.Collections.Generic.KeyValuePair`2<System.String,UpdateHelper/FileInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m124734 (Transform_1_t16679 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UpdateHelper/FileInfo,System.Collections.Generic.KeyValuePair`2<System.String,UpdateHelper/FileInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5746  Transform_1_Invoke_m124735 (Transform_1_t16679 * __this, String_t* ___key, FileInfo_t4511 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UpdateHelper/FileInfo,System.Collections.Generic.KeyValuePair`2<System.String,UpdateHelper/FileInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m124736 (Transform_1_t16679 * __this, String_t* ___key, FileInfo_t4511 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UpdateHelper/FileInfo,System.Collections.Generic.KeyValuePair`2<System.String,UpdateHelper/FileInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5746  Transform_1_EndInvoke_m124737 (Transform_1_t16679 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
