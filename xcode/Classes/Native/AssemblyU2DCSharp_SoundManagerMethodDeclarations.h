#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundManager
struct SoundManager_t2177;
// SoundClip
struct SoundClip_t4411;
// SoundClipPools/SoundClipParam
struct SoundClipParam_t4412;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// SoundManager/MyAudioSource
struct MyAudioSource_t4417;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SoundManager::.ctor()
 void SoundManager__ctor_m31188 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::.cctor()
 void SoundManager__cctor_m31189 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundManager::get_EnableSFX()
 bool SoundManager_get_EnableSFX_m31190 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::set_EnableSFX(System.Boolean)
 void SoundManager_set_EnableSFX_m31191 (SoundManager_t2177 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundManager::get_EnableBGM()
 bool SoundManager_get_EnableBGM_m31192 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::set_EnableBGM(System.Boolean)
 void SoundManager_set_EnableBGM_m31193 (SoundManager_t2177 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Awake()
 void SoundManager_Awake_m31194 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::OnEnable()
 void SoundManager_OnEnable_m31195 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Start()
 void SoundManager_Start_m31196 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::FixedUpdate()
 void SoundManager_FixedUpdate_m31197 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::ChangeSoundState()
 void SoundManager_ChangeSoundState_m31198 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::UpdateBGMusic()
 void SoundManager_UpdateBGMusic_m31199 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayBGMWithFade(System.Int32,System.Single,System.Single)
 void SoundManager_PlayBGMWithFade_m31200 (SoundManager_t2177 * __this, int32_t ___nSoundclipId, float ___fadeOutTime, float ___fadeInTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::OnPlayBGMWithFade(SoundClip,SoundClipPools/SoundClipParam)
 void SoundManager_OnPlayBGMWithFade_m31201 (SoundManager_t2177 * __this, SoundClip_t4411 * ___bgSoundClip, SoundClipParam_t4412 * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayBGMusic(System.Int32,System.Single,System.Single)
 void SoundManager_PlayBGMusic_m31202 (SoundManager_t2177 * __this, int32_t ___nClipID, float ___fadeOutTime, float ___fadeInTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::StopBGM(System.Single)
 void SoundManager_StopBGM_m31203 (SoundManager_t2177 * __this, float ____fadeTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SoundManager::StopBGMWithFade(System.Single)
 Object_t * SoundManager_StopBGMWithFade_m31204 (SoundManager_t2177 * __this, float ____fadeTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::StopSoundEffect(System.Int32)
 void SoundManager_StopSoundEffect_m31205 (SoundManager_t2177 * __this, int32_t ___nSoundID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::StopAllSoundEffect()
 void SoundManager_StopAllSoundEffect_m31206 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::MusicRecover()
 void SoundManager_MusicRecover_m31207 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::MusicDown()
 void SoundManager_MusicDown_m31208 (SoundManager_t2177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySoundEffectAtPos(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3)
 void SoundManager_PlaySoundEffectAtPos_m31209 (SoundManager_t2177 * __this, int32_t ___nSoundID, Vector3_t121  ___playSoundPos, Vector3_t121  ___listenerPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySoundEffectAtPos2(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3)
 void SoundManager_PlaySoundEffectAtPos2_m31210 (SoundManager_t2177 * __this, int32_t ___nSoundID, Vector3_t121  ___playSoundPos, Vector3_t121  ___listenerPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySoundEffect(System.Int32,System.Single)
 void SoundManager_PlaySoundEffect_m31211 (SoundManager_t2177 * __this, int32_t ___nSoundID, float ___volumeFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::OnPlaySoundEffect(SoundClip,SoundClipPools/SoundClipParam)
 void SoundManager_OnPlaySoundEffect_m31212 (SoundManager_t2177 * __this, SoundClip_t4411 * ___soundClip, SoundClipParam_t4412 * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySoundEffect(SoundClip,System.Single)
 void SoundManager_PlaySoundEffect_m31213 (SoundManager_t2177 * __this, SoundClip_t4411 * ___soundClip, float ___volumeFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::SetAudioSource(SoundManager/MyAudioSource&,SoundClip,System.Single)
 void SoundManager_SetAudioSource_m31214 (SoundManager_t2177 * __this, MyAudioSource_t4417 ** ___audioSource, SoundClip_t4411 * ___clip, float ___volumeFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
