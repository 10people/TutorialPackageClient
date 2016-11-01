#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundClipPools
struct SoundClipPools_t4415;
// SoundClipPools/GetSoundClipDelegate
struct GetSoundClipDelegate_t4413;
// SoundClipPools/SoundClipParam
struct SoundClipParam_t4412;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t2147;
// System.Object
struct Object_t;

// System.Void SoundClipPools::.ctor()
 void SoundClipPools__ctor_m31176 (SoundClipPools_t4415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundClipPools::GetSoundClip(System.Int32,SoundClipPools/GetSoundClipDelegate,SoundClipPools/SoundClipParam)
 void SoundClipPools_GetSoundClip_m31177 (SoundClipPools_t4415 * __this, int32_t ___nSoundId, GetSoundClipDelegate_t4413 * ___delFun, SoundClipParam_t4412 * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundClipPools::OnLoadSound(System.String,UnityEngine.AudioClip,System.Object,System.Object,System.Object)
 void SoundClipPools_OnLoadSound_m31178 (SoundClipPools_t4415 * __this, String_t* ___soundPath, AudioClip_t2147 * ___curAudioClip, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundClipPools::RemoveLastUnUsedClip()
 void SoundClipPools_RemoveLastUnUsedClip_m31179 (SoundClipPools_t4415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundClipPools::ForceRemoveClipByID(System.Int16)
 void SoundClipPools_ForceRemoveClipByID_m31180 (SoundClipPools_t4415 * __this, int16_t ___uid, MethodInfo* method) IL2CPP_METHOD_ATTR;
