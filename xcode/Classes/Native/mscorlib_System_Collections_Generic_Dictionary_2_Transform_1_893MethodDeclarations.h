#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<ActivityController/TabIndex,System.String,ActivityController/TabIndex>
struct Transform_1_t18788;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ActivityController/TabIndex
#include "AssemblyU2DCSharp_ActivityController_TabIndex.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ActivityController/TabIndex,System.String,ActivityController/TabIndex>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m137986 (Transform_1_t18788 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ActivityController/TabIndex,System.String,ActivityController/TabIndex>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m137987 (Transform_1_t18788 * __this, int32_t ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ActivityController/TabIndex,System.String,ActivityController/TabIndex>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m137988 (Transform_1_t18788 * __this, int32_t ___key, String_t* ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ActivityController/TabIndex,System.String,ActivityController/TabIndex>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m137989 (Transform_1_t18788 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
