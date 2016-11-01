#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ChatInfoLogic
struct ChatInfoLogic_t1294;
// LastSpeakerChatLogic
struct LastSpeakerChatLogic_t1295;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LastSpeakerItemLogic
struct LastSpeakerItemLogic_t1507  : public MonoBehaviour_t18
{
	// System.UInt64 LastSpeakerItemLogic::m_SpeakerGuid
	uint64_t ___m_SpeakerGuid;
	// System.String LastSpeakerItemLogic::m_SpeakerName
	String_t* ___m_SpeakerName;
	// ChatInfoLogic LastSpeakerItemLogic::m_ChatInfoLogic
	ChatInfoLogic_t1294 * ___m_ChatInfoLogic;
	// LastSpeakerChatLogic LastSpeakerItemLogic::m_LastSpeakerChatLogic
	LastSpeakerChatLogic_t1295 * ___m_LastSpeakerChatLogic;
	// UILabel LastSpeakerItemLogic::m_SpeakerNameLabel
	UILabel_t1176 * ___m_SpeakerNameLabel;
	// UnityEngine.GameObject LastSpeakerItemLogic::m_ChooseFrame
	GameObject_t9 * ___m_ChooseFrame;
	// UnityEngine.GameObject LastSpeakerItemLogic::m_InformSprite
	GameObject_t9 * ___m_InformSprite;
};
