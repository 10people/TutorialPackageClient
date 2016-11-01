#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UILabel
struct UILabel_t1176;
// UIFont
struct UIFont_t1286;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// ChatFrameLogic
struct ChatFrameLogic_t1290;
// SpeechLogic
struct SpeechLogic_t1291;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChatFrameLogic/TEXT_STATE
#include "AssemblyU2DCSharp_ChatFrameLogic_TEXT_STATE.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ChatInfoLogic/CHANNEL_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_CHANNEL_TYPE.h"
// ChatFrameLogic
struct ChatFrameLogic_t1290  : public MonoBehaviour_t18
{
	// ChatFrameLogic/TEXT_STATE ChatFrameLogic::m_eTextStateCur
	int32_t ___m_eTextStateCur;
	// UnityEngine.GameObject ChatFrameLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// UnityEngine.Transform ChatFrameLogic::m_OffsetTrans
	Transform_t78 * ___m_OffsetTrans;
	// UnityEngine.GameObject ChatFrameLogic::m_Text1
	GameObject_t9 * ___m_Text1;
	// UILabel ChatFrameLogic::labelChatText1
	UILabel_t1176 * ___labelChatText1;
	// UnityEngine.GameObject ChatFrameLogic::m_LinkRoot1
	GameObject_t9 * ___m_LinkRoot1;
	// UnityEngine.GameObject ChatFrameLogic::m_EmotionRoot1
	GameObject_t9 * ___m_EmotionRoot1;
	// UnityEngine.GameObject ChatFrameLogic::m_Text2
	GameObject_t9 * ___m_Text2;
	// UILabel ChatFrameLogic::labelChatText2
	UILabel_t1176 * ___labelChatText2;
	// UnityEngine.GameObject ChatFrameLogic::m_LinkRoot2
	GameObject_t9 * ___m_LinkRoot2;
	// UnityEngine.GameObject ChatFrameLogic::m_EmotionRoot2
	GameObject_t9 * ___m_EmotionRoot2;
	// UnityEngine.GameObject ChatFrameLogic::m_InformSprite
	GameObject_t9 * ___m_InformSprite;
	// UnityEngine.GameObject ChatFrameLogic::m_VIPIcon
	GameObject_t9 * ___m_VIPIcon;
	// UnityEngine.GameObject ChatFrameLogic::m_PlayVoiceChatBtn
	GameObject_t9 * ___m_PlayVoiceChatBtn;
	// UILabel ChatFrameLogic::labelChatText
	UILabel_t1176 * ___labelChatText;
	// UnityEngine.GameObject ChatFrameLogic::m_LinkRoot
	GameObject_t9 * ___m_LinkRoot;
	// UnityEngine.GameObject ChatFrameLogic::m_EmotionRoot
	GameObject_t9 * ___m_EmotionRoot;
	// UIFont ChatFrameLogic::m_Font
	UIFont_t1286 * ___m_Font;
	// System.Single ChatFrameLogic::m_ChatTextHeight
	float ___m_ChatTextHeight;
	// UnityEngine.Vector3 ChatFrameLogic::m_TextReadyPos
	Vector3_t121  ___m_TextReadyPos;
	// UnityEngine.Vector3 ChatFrameLogic::m_TextShowPos
	Vector3_t121  ___m_TextShowPos;
	// UnityEngine.Vector3 ChatFrameLogic::m_ChangeTextSpeed
	Vector3_t121  ___m_ChangeTextSpeed;
	// System.Int32 ChatFrameLogic::MaxLines
	int32_t ___MaxLines;
	// System.Single ChatFrameLogic::m_updateCallTime
	float ___m_updateCallTime;
	// UnityEngine.Vector3 ChatFrameLogic::m_LocalPos
	Vector3_t121  ___m_LocalPos;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatFrameLogic::clearItemList
	List_1_t1289 * ___clearItemList;
	// System.Single ChatFrameLogic::SPACE_WIDTH
	float ___SPACE_WIDTH;
	// UnityEngine.GameObject[] ChatFrameLogic::m_playVoiceBtns
	GameObjectU5BU5D_t1200* ___m_playVoiceBtns;
	// System.Boolean ChatFrameLogic::m_ForceStopRecord
	bool ___m_ForceStopRecord;
	// System.Boolean ChatFrameLogic::m_CanSendVoice
	bool ___m_CanSendVoice;
	// System.Int32 ChatFrameLogic::m_VoiceChatCountDown
	int32_t ___m_VoiceChatCountDown;
	// UILabel ChatFrameLogic::m_speechTime
	UILabel_t1176 * ___m_speechTime;
	// System.Int32 ChatFrameLogic::m_nSpeechTime
	int32_t ___m_nSpeechTime;
	// System.Single ChatFrameLogic::m_fUpdteTimes
	float ___m_fUpdteTimes;
	// System.Boolean ChatFrameLogic::m_isSpeech
	bool ___m_isSpeech;
	// UnityEngine.GameObject ChatFrameLogic::m_beginReordObj
	GameObject_t9 * ___m_beginReordObj;
	// UnityEngine.GameObject ChatFrameLogic::m_endRecordObj
	GameObject_t9 * ___m_endRecordObj;
	// SpeechLogic ChatFrameLogic::m_SpeeachLogic
	SpeechLogic_t1291 * ___m_SpeeachLogic;
	// UnityEngine.GameObject ChatFrameLogic::m_VoiceTitle
	GameObject_t9 * ___m_VoiceTitle;
	// UnityEngine.Vector3 ChatFrameLogic::m_TouchVoiceChatPos
	Vector3_t121  ___m_TouchVoiceChatPos;
	// System.String ChatFrameLogic::curData
	String_t* ___curData;
};
struct ChatFrameLogic_t1290_StaticFields{
	// System.Int32 ChatFrameLogic::EMOTIONITEM_WIDTH
	int32_t ___EMOTIONITEM_WIDTH;
	// System.String ChatFrameLogic::TIME_STR
	String_t* ___TIME_STR;
	// System.Int32 ChatFrameLogic::m_nStartTime
	int32_t ___m_nStartTime;
	// System.Int32 ChatFrameLogic::MAX_TEXTNUM
	int32_t ___MAX_TEXTNUM;
	// ChatFrameLogic ChatFrameLogic::m_Instance
	ChatFrameLogic_t1290 * ___m_Instance;
	// System.Boolean ChatFrameLogic::isUpdateChannel
	bool ___isUpdateChannel;
	// ChatInfoLogic/CHANNEL_TYPE ChatFrameLogic::m_eCurChannelType
	int32_t ___m_eCurChannelType;
};
