#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenVolume
struct TweenVolume_t5386;
// UnityEngine.AudioSource
struct AudioSource_t4416;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void TweenVolume::.ctor()
 void TweenVolume__ctor_m38190 (TweenVolume_t5386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource TweenVolume::get_audioSource()
 AudioSource_t4416 * TweenVolume_get_audioSource_m38191 (TweenVolume_t5386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_volume()
 float TweenVolume_get_volume_m38192 (TweenVolume_t5386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_volume(System.Single)
 void TweenVolume_set_volume_m38193 (TweenVolume_t5386 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::OnUpdate(System.Single,System.Boolean)
 void TweenVolume_OnUpdate_m38194 (TweenVolume_t5386 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenVolume TweenVolume::Begin(UnityEngine.GameObject,System.Single,System.Single)
 TweenVolume_t5386 * TweenVolume_Begin_m38195 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, float ___targetVolume, MethodInfo* method) IL2CPP_METHOD_ATTR;
