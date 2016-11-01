#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundClipPools/GetSoundClipDelegate
struct GetSoundClipDelegate_t4413;
// System.Object
struct Object_t;
// SoundClip
struct SoundClip_t4411;
// SoundClipPools/SoundClipParam
struct SoundClipParam_t4412;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SoundClipPools/GetSoundClipDelegate::.ctor(System.Object,System.IntPtr)
 void GetSoundClipDelegate__ctor_m31172 (GetSoundClipDelegate_t4413 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundClipPools/GetSoundClipDelegate::Invoke(SoundClip,SoundClipPools/SoundClipParam)
 void GetSoundClipDelegate_Invoke_m31173 (GetSoundClipDelegate_t4413 * __this, SoundClip_t4411 * ___soundClip, SoundClipParam_t4412 * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SoundClipPools/GetSoundClipDelegate::BeginInvoke(SoundClip,SoundClipPools/SoundClipParam,System.AsyncCallback,System.Object)
 Object_t * GetSoundClipDelegate_BeginInvoke_m31174 (GetSoundClipDelegate_t4413 * __this, SoundClip_t4411 * ___soundClip, SoundClipParam_t4412 * ___param, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundClipPools/GetSoundClipDelegate::EndInvoke(System.IAsyncResult)
 void GetSoundClipDelegate_EndInvoke_m31175 (GetSoundClipDelegate_t4413 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
