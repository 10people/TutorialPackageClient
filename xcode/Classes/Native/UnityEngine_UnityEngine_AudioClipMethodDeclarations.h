#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip
struct AudioClip_t2147;
// System.Single[]
struct SingleU5BU5D_t744;

// System.Single UnityEngine.AudioClip::get_length()
 float AudioClip_get_length_m41757 (AudioClip_t2147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::get_isReadyToPlay()
 bool AudioClip_get_isReadyToPlay_m40543 (AudioClip_t2147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
 void AudioClip_InvokePCMReaderCallback_Internal_m51763 (AudioClip_t2147 * __this, SingleU5BU5D_t744* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
 void AudioClip_InvokePCMSetPositionCallback_Internal_m51764 (AudioClip_t2147 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
