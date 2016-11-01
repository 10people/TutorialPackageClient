#pragma once
#include <stdint.h>
// SoundClipPools
struct SoundClipPools_t4415;
// SoundManager/MyAudioSource
struct MyAudioSource_t4417;
// SoundManager/MyAudioSource[]
struct MyAudioSourceU5BU5D_t4420;
// SoundClip
struct SoundClip_t4411;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SoundManager/FadeMode
#include "AssemblyU2DCSharp_SoundManager_FadeMode.h"
// SoundManager
struct SoundManager_t2177  : public MonoBehaviour_t18
{
	// SoundClipPools SoundManager::m_SoundClipPools
	SoundClipPools_t4415 * ___m_SoundClipPools;
	// SoundManager/MyAudioSource SoundManager::m_BGAudioSource
	MyAudioSource_t4417 * ___m_BGAudioSource;
	// System.Single SoundManager::m_CurBGVolume
	float ___m_CurBGVolume;
	// SoundManager/MyAudioSource[] SoundManager::m_SFXChannel
	MyAudioSourceU5BU5D_t4420* ___m_SFXChannel;
	// SoundClip SoundManager::m_NextSoundClip
	SoundClip_t4411 * ___m_NextSoundClip;
	// System.Int16 SoundManager::m_lastMusicID
	int16_t ___m_lastMusicID;
	// System.Single SoundManager::m_sfxVolume
	float ___m_sfxVolume;
	// System.Single SoundManager::m_bgmVolume
	float ___m_bgmVolume;
	// SoundManager/FadeMode SoundManager::m_fadeMode
	int32_t ___m_fadeMode;
	// System.Single SoundManager::m_fadeOutTime
	float ___m_fadeOutTime;
	// System.Single SoundManager::m_fadeOutTimer
	float ___m_fadeOutTimer;
	// System.Single SoundManager::m_fadeInTime
	float ___m_fadeInTime;
	// System.Single SoundManager::m_fadeInTimer
	float ___m_fadeInTimer;
	// System.Single SoundManager::m_BGMPauseVolume
	float ___m_BGMPauseVolume;
	// System.Single[] SoundManager::m_SFXPauseVolume
	SingleU5BU5D_t744* ___m_SFXPauseVolume;
	// System.Boolean SoundManager::m_NeedRecoverBGM
	bool ___m_NeedRecoverBGM;
	// System.Boolean SoundManager::m_NeedRecoverSFX
	bool ___m_NeedRecoverSFX;
};
struct SoundManager_t2177_StaticFields{
	// System.Int32 SoundManager::m_SFXChannelsCount
	int32_t ___m_SFXChannelsCount;
	// System.Boolean SoundManager::m_EnableBGM
	bool ___m_EnableBGM;
	// System.Boolean SoundManager::m_EnableSFX
	bool ___m_EnableSFX;
};
