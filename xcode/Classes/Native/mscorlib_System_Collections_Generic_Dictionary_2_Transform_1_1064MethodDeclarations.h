#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UICamera/MouseOrTouch,System.Collections.Generic.KeyValuePair`2<System.Int32,UICamera/MouseOrTouch>>
struct Transform_1_t22883;
// System.Object
struct Object_t;
// UICamera/MouseOrTouch
struct MouseOrTouch_t5399;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UICamera/MouseOrTouch>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UICamera/MouseOrTouch,System.Collections.Generic.KeyValuePair`2<System.Int32,UICamera/MouseOrTouch>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m166117 (Transform_1_t22883 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UICamera/MouseOrTouch,System.Collections.Generic.KeyValuePair`2<System.Int32,UICamera/MouseOrTouch>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5945  Transform_1_Invoke_m166118 (Transform_1_t22883 * __this, int32_t ___key, MouseOrTouch_t5399 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UICamera/MouseOrTouch,System.Collections.Generic.KeyValuePair`2<System.Int32,UICamera/MouseOrTouch>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m166119 (Transform_1_t22883 * __this, int32_t ___key, MouseOrTouch_t5399 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UICamera/MouseOrTouch,System.Collections.Generic.KeyValuePair`2<System.Int32,UICamera/MouseOrTouch>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5945  Transform_1_EndInvoke_m166120 (Transform_1_t22883 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
