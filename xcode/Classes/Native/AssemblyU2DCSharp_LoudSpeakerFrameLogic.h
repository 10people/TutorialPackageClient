#pragma once
#include <stdint.h>
// System.String
struct String_t;
// LoudSpeakerFrameLogic
struct LoudSpeakerFrameLogic_t1526;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIFont
struct UIFont_t1286;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// LoudSpeakerFrameLogic/TEXT_STATE
#include "AssemblyU2DCSharp_LoudSpeakerFrameLogic_TEXT_STATE.h"
// LoudSpeakerFrameLogic
struct LoudSpeakerFrameLogic_t1526  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_Text1
	GameObject_t9 * ___m_Text1;
	// UILabel LoudSpeakerFrameLogic::labelChatText1
	UILabel_t1176 * ___labelChatText1;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_LinkRoot1
	GameObject_t9 * ___m_LinkRoot1;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_EmotionRoot1
	GameObject_t9 * ___m_EmotionRoot1;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_Text2
	GameObject_t9 * ___m_Text2;
	// UILabel LoudSpeakerFrameLogic::labelChatText2
	UILabel_t1176 * ___labelChatText2;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_LinkRoot2
	GameObject_t9 * ___m_LinkRoot2;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_EmotionRoot2
	GameObject_t9 * ___m_EmotionRoot2;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_VIPIcon
	GameObject_t9 * ___m_VIPIcon;
	// UILabel LoudSpeakerFrameLogic::labelChatText
	UILabel_t1176 * ___labelChatText;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_LinkRoot
	GameObject_t9 * ___m_LinkRoot;
	// UnityEngine.GameObject LoudSpeakerFrameLogic::m_EmotionRoot
	GameObject_t9 * ___m_EmotionRoot;
	// UnityEngine.Vector3 LoudSpeakerFrameLogic::m_TextReadyPos
	Vector3_t121  ___m_TextReadyPos;
	// UnityEngine.Vector3 LoudSpeakerFrameLogic::m_TextShowPos
	Vector3_t121  ___m_TextShowPos;
	// LoudSpeakerFrameLogic/TEXT_STATE LoudSpeakerFrameLogic::m_eTextStateCur
	int32_t ___m_eTextStateCur;
	// System.Boolean LoudSpeakerFrameLogic::m_ChangeText
	bool ___m_ChangeText;
	// UnityEngine.Vector3 LoudSpeakerFrameLogic::m_ChangeTextSpeed
	Vector3_t121  ___m_ChangeTextSpeed;
	// UIFont LoudSpeakerFrameLogic::m_Font
	UIFont_t1286 * ___m_Font;
	// System.Single LoudSpeakerFrameLogic::m_ChatTextHeight
	float ___m_ChatTextHeight;
	// System.Int32 LoudSpeakerFrameLogic::MaxLines
	int32_t ___MaxLines;
	// System.Single LoudSpeakerFrameLogic::m_fClearTimer
	float ___m_fClearTimer;
	// System.Single LoudSpeakerFrameLogic::SPACE_WIDTH
	float ___SPACE_WIDTH;
};
struct LoudSpeakerFrameLogic_t1526_StaticFields{
	// System.Int32 LoudSpeakerFrameLogic::MaxShowTime
	int32_t ___MaxShowTime;
	// System.String LoudSpeakerFrameLogic::TEXT_COLOR
	String_t* ___TEXT_COLOR;
	// System.Int32 LoudSpeakerFrameLogic::MAX_TEXTNUM
	int32_t ___MAX_TEXTNUM;
	// System.Int32 LoudSpeakerFrameLogic::EMOTIONITEM_WIDTH
	int32_t ___EMOTIONITEM_WIDTH;
	// LoudSpeakerFrameLogic LoudSpeakerFrameLogic::m_Instance
	LoudSpeakerFrameLogic_t1526 * ___m_Instance;
};
