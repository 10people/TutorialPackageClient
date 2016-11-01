#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NsSharedManager
struct NsSharedManager_t5046;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.AudioSource
struct AudioSource_t4416;
// UnityEngine.AudioClip
struct AudioClip_t2147;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t5049;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void NsSharedManager::.ctor()
 void NsSharedManager__ctor_m36105 (NsSharedManager_t5046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NsSharedManager NsSharedManager::get_inst()
 NsSharedManager_t5046 * NsSharedManager_get_inst_m36106 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NsSharedManager::GetSharedParticleGameObject(UnityEngine.GameObject)
 GameObject_t9 * NsSharedManager_GetSharedParticleGameObject_m36107 (NsSharedManager_t5046 * __this, GameObject_t9 * ___originalParticlePrefab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsSharedManager::EmitSharedParticleSystem(UnityEngine.GameObject,System.Int32,UnityEngine.Vector3)
 void NsSharedManager_EmitSharedParticleSystem_m36108 (NsSharedManager_t5046 * __this, GameObject_t9 * ___originalParticlePrefab, int32_t ___nEmitCount, Vector3_t121  ___worldPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NsSharedManager::GetSharedAudioSource(UnityEngine.AudioClip,System.Int32,System.Boolean,System.Single,System.Single)
 AudioSource_t4416 * NsSharedManager_GetSharedAudioSource_m36109 (NsSharedManager_t5046 * __this, AudioClip_t2147 * ___audioClip, int32_t ___nPriority, bool ___bLoop, float ___fVolume, float ___fPitch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NsSharedManager::AddAudioSource(System.Collections.Generic.List`1<UnityEngine.AudioSource>,UnityEngine.AudioClip,System.Int32,System.Boolean,System.Single,System.Single)
 AudioSource_t4416 * NsSharedManager_AddAudioSource_m36110 (NsSharedManager_t5046 * __this, List_1_t5049 * ___sourceList, AudioClip_t2147 * ___audioClip, int32_t ___nPriority, bool ___bLoop, float ___fVolume, float ___fPitch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsSharedManager::PlaySharedAudioSource(System.Boolean,UnityEngine.AudioClip,System.Int32,System.Boolean,System.Single,System.Single)
 void NsSharedManager_PlaySharedAudioSource_m36111 (NsSharedManager_t5046 * __this, bool ___bUniquePlay, AudioClip_t2147 * ___audioClip, int32_t ___nPriority, bool ___bLoop, float ___fVolume, float ___fPitch, MethodInfo* method) IL2CPP_METHOD_ATTR;
