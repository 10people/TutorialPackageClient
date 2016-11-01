#pragma once
#include <stdint.h>
// UIToggle
struct UIToggle_t1220;
// UISlider
struct UISlider_t1219;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// VoiceChatSetup
struct VoiceChatSetup_t2092  : public MonoBehaviour_t18
{
	// UIToggle VoiceChatSetup::m_AutoVoiceChatDownload_Friend
	UIToggle_t1220 * ___m_AutoVoiceChatDownload_Friend;
	// UIToggle VoiceChatSetup::m_AutoVoiceChatDownload_Team
	UIToggle_t1220 * ___m_AutoVoiceChatDownload_Team;
	// UIToggle VoiceChatSetup::m_AutoVoiceChatDownload_Guild
	UIToggle_t1220 * ___m_AutoVoiceChatDownload_Guild;
	// UIToggle VoiceChatSetup::m_AutoVoiceChatDownload_Master
	UIToggle_t1220 * ___m_AutoVoiceChatDownload_Master;
	// UIToggle VoiceChatSetup::m_Music
	UIToggle_t1220 * ___m_Music;
	// UISlider VoiceChatSetup::m_MusicSlider
	UISlider_t1219 * ___m_MusicSlider;
	// UILabel VoiceChatSetup::m_Music_Lab
	UILabel_t1176 * ___m_Music_Lab;
	// UILabel VoiceChatSetup::m_Music_Pre
	UILabel_t1176 * ___m_Music_Pre;
	// UIToggle VoiceChatSetup::m_SoundEffect
	UIToggle_t1220 * ___m_SoundEffect;
	// UISlider VoiceChatSetup::m_SoundSlider
	UISlider_t1219 * ___m_SoundSlider;
	// UILabel VoiceChatSetup::m_SoundEffect_Lab
	UILabel_t1176 * ___m_SoundEffect_Lab;
	// UILabel VoiceChatSetup::m_SoundEffect_Pre
	UILabel_t1176 * ___m_SoundEffect_Pre;
	// UnityEngine.Color VoiceChatSetup::m_ChooseColor
	Color_t939  ___m_ChooseColor;
	// UnityEngine.Color VoiceChatSetup::m_NoChooseColor
	Color_t939  ___m_NoChooseColor;
	// UnityEngine.GameObject VoiceChatSetup::m_ThumbMusicHightBack
	GameObject_t9 * ___m_ThumbMusicHightBack;
	// UnityEngine.GameObject VoiceChatSetup::m_ThumbSoundHightBack
	GameObject_t9 * ___m_ThumbSoundHightBack;
};
