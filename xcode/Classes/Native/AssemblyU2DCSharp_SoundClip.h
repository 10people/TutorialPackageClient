#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t2147;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// SoundClip
struct SoundClip_t4411  : public Object_t
{
	// UnityEngine.AudioClip SoundClip::m_Audioclip
	AudioClip_t2147 * ___m_Audioclip;
	// System.Int16 SoundClip::m_priority
	int16_t ___m_priority;
	// System.String SoundClip::m_name
	String_t* ___m_name;
	// System.String SoundClip::m_path
	String_t* ___m_path;
	// System.Single SoundClip::m_minDistance
	float ___m_minDistance;
	// System.Single SoundClip::m_volume
	float ___m_volume;
	// System.Single SoundClip::m_delay
	float ___m_delay;
	// System.Single SoundClip::m_panLevel
	float ___m_panLevel;
	// System.Single SoundClip::m_spread
	float ___m_spread;
	// System.Boolean SoundClip::m_isLoop
	bool ___m_isLoop;
	// System.Int16 SoundClip::m_curMaxPlayingCount
	int16_t ___m_curMaxPlayingCount;
	// System.Int16 SoundClip::m_uID
	int16_t ___m_uID;
	// System.Single SoundClip::m_LastActiveTime
	float ___m_LastActiveTime;
};
