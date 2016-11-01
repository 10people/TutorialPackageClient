#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,System.Collections.Generic.KeyValuePair`2<System.Int32,Belle>>
struct Transform_1_t19060;
// System.Object
struct Object_t;
// Belle
struct Belle_t1881;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Belle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,System.Collections.Generic.KeyValuePair`2<System.Int32,Belle>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m139826 (Transform_1_t19060 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,System.Collections.Generic.KeyValuePair`2<System.Int32,Belle>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5629  Transform_1_Invoke_m139827 (Transform_1_t19060 * __this, int32_t ___key, Belle_t1881 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,System.Collections.Generic.KeyValuePair`2<System.Int32,Belle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m139828 (Transform_1_t19060 * __this, int32_t ___key, Belle_t1881 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,System.Collections.Generic.KeyValuePair`2<System.Int32,Belle>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5629  Transform_1_EndInvoke_m139829 (Transform_1_t19060 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
