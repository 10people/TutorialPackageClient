#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,System.Collections.Generic.KeyValuePair`2<System.Int32,SoundClip>>
struct Transform_1_t20645;
// System.Object
struct Object_t;
// SoundClip
struct SoundClip_t4411;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,SoundClip>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_258.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,System.Collections.Generic.KeyValuePair`2<System.Int32,SoundClip>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m150559 (Transform_1_t20645 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,System.Collections.Generic.KeyValuePair`2<System.Int32,SoundClip>>::Invoke(TKey,TValue)
 KeyValuePair_2_t20636  Transform_1_Invoke_m150560 (Transform_1_t20645 * __this, int32_t ___key, SoundClip_t4411 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,System.Collections.Generic.KeyValuePair`2<System.Int32,SoundClip>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m150561 (Transform_1_t20645 * __this, int32_t ___key, SoundClip_t4411 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,System.Collections.Generic.KeyValuePair`2<System.Int32,SoundClip>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t20636  Transform_1_EndInvoke_m150562 (Transform_1_t20645 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
