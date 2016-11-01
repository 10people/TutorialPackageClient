#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BundleManager/LoadSoundFinish
struct LoadSoundFinish_t2148;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t2147;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BundleManager/LoadSoundFinish::.ctor(System.Object,System.IntPtr)
 void LoadSoundFinish__ctor_m14477 (LoadSoundFinish_t2148 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadSoundFinish::Invoke(System.String,UnityEngine.AudioClip,System.Object,System.Object,System.Object)
 void LoadSoundFinish_Invoke_m14478 (LoadSoundFinish_t2148 * __this, String_t* ___modelName, AudioClip_t2147 * ___audioClip, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BundleManager/LoadSoundFinish::BeginInvoke(System.String,UnityEngine.AudioClip,System.Object,System.Object,System.Object,System.AsyncCallback,System.Object)
 Object_t * LoadSoundFinish_BeginInvoke_m14479 (LoadSoundFinish_t2148 * __this, String_t* ___modelName, AudioClip_t2147 * ___audioClip, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/LoadSoundFinish::EndInvoke(System.IAsyncResult)
 void LoadSoundFinish_EndInvoke_m14480 (LoadSoundFinish_t2148 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
