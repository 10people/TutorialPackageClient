﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,SoundClip>
struct Transform_1_t20644;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,SoundClip>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m150551 (Transform_1_t20644 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,SoundClip>::Invoke(TKey,TValue)
 SoundClip_t4411 * Transform_1_Invoke_m150552 (Transform_1_t20644 * __this, int32_t ___key, SoundClip_t4411 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,SoundClip>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m150553 (Transform_1_t20644 * __this, int32_t ___key, SoundClip_t4411 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,SoundClip,SoundClip>::EndInvoke(System.IAsyncResult)
 SoundClip_t4411 * Transform_1_EndInvoke_m150554 (Transform_1_t20644 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
