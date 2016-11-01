#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t2147;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIPlaySound/Trigger
#include "AssemblyU2DCSharp_UIPlaySound_Trigger.h"
// UIPlaySound
struct UIPlaySound_t5318  : public MonoBehaviour_t18
{
	// UnityEngine.AudioClip UIPlaySound::audioClip
	AudioClip_t2147 * ___audioClip;
	// UIPlaySound/Trigger UIPlaySound::trigger
	int32_t ___trigger;
	// System.Single UIPlaySound::volume
	float ___volume;
	// System.Single UIPlaySound::pitch
	float ___pitch;
};
