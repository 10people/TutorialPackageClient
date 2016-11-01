#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t4416;
// UnityEngine.AudioClip
struct AudioClip_t2147;

// System.Single UnityEngine.AudioSource::get_volume()
 float AudioSource_get_volume_m41450 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
 void AudioSource_set_volume_m40551 (AudioSource_t4416 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
 float AudioSource_get_pitch_m41451 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
 void AudioSource_set_pitch_m41455 (AudioSource_t4416 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
 AudioClip_t2147 * AudioSource_get_clip_m40558 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
 void AudioSource_set_clip_m40561 (AudioSource_t4416 * __this, AudioClip_t2147 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
 void AudioSource_Play_m51765 (AudioSource_t4416 * __this, uint64_t ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
 void AudioSource_Play_m40554 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
 void AudioSource_PlayDelayed_m40560 (AudioSource_t4416 * __this, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
 void AudioSource_Stop_m40552 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
 void AudioSource_Pause_m40556 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
 void AudioSource_INTERNAL_CALL_Pause_m51766 (Object_t * __this/* static, unused */, AudioSource_t4416 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
 bool AudioSource_get_isPlaying_m40550 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
 void AudioSource_PlayOneShot_m42093 (AudioSource_t4416 * __this, AudioClip_t2147 * ___clip, float ___volumeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
 void AudioSource_PlayOneShot_m41764 (AudioSource_t4416 * __this, AudioClip_t2147 * ___clip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_loop()
 bool AudioSource_get_loop_m41452 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
 void AudioSource_set_loop_m40566 (AudioSource_t4416 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
 void AudioSource_set_playOnAwake_m41456 (AudioSource_t4416 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_panLevel(System.Single)
 void AudioSource_set_panLevel_m40564 (AudioSource_t4416 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spread(System.Single)
 void AudioSource_set_spread_m40562 (AudioSource_t4416 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioSource::get_priority()
 int32_t AudioSource_get_priority_m40559 (AudioSource_t4416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
 void AudioSource_set_priority_m40563 (AudioSource_t4416 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
 void AudioSource_set_minDistance_m40565 (AudioSource_t4416 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
