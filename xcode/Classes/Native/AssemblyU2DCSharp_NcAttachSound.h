#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t2147;
// UnityEngine.AudioSource
struct AudioSource_t4416;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcAttachSound/PLAY_TYPE
#include "AssemblyU2DCSharp_NcAttachSound_PLAY_TYPE.h"
// NcAttachSound
struct NcAttachSound_t5054  : public NcEffectBehaviour_t5021
{
	// NcAttachSound/PLAY_TYPE NcAttachSound::m_PlayType
	int32_t ___m_PlayType;
	// System.Boolean NcAttachSound::m_bPlayOnActive
	bool ___m_bPlayOnActive;
	// System.Single NcAttachSound::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single NcAttachSound::m_fRepeatTime
	float ___m_fRepeatTime;
	// System.Int32 NcAttachSound::m_nRepeatCount
	int32_t ___m_nRepeatCount;
	// UnityEngine.AudioClip NcAttachSound::m_AudioClip
	AudioClip_t2147 * ___m_AudioClip;
	// System.Int32 NcAttachSound::m_nPriority
	int32_t ___m_nPriority;
	// System.Boolean NcAttachSound::m_bLoop
	bool ___m_bLoop;
	// System.Single NcAttachSound::m_fVolume
	float ___m_fVolume;
	// System.Single NcAttachSound::m_fPitch
	float ___m_fPitch;
	// UnityEngine.AudioSource NcAttachSound::m_AudioSource
	AudioSource_t4416 * ___m_AudioSource;
	// System.Single NcAttachSound::m_fStartTime
	float ___m_fStartTime;
	// System.Int32 NcAttachSound::m_nCreateCount
	int32_t ___m_nCreateCount;
	// System.Boolean NcAttachSound::m_bStartAttach
	bool ___m_bStartAttach;
	// System.Boolean NcAttachSound::m_bEnable
	bool ___m_bEnable;
};
