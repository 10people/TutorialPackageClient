#pragma once
#include <stdint.h>
// System.String
struct String_t;
// LoudSpeakerLogic
struct LoudSpeakerLogic_t1303;
// UnityEngine.GameObject
struct GameObject_t9;
// GameUIInput
struct GameUIInput_t1185;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UIFont
struct UIFont_t1286;
// Games.Item.GameItem
struct GameItem_t1172;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// LoudSpeakerLogic/TEXT_STATE
#include "AssemblyU2DCSharp_LoudSpeakerLogic_TEXT_STATE.h"
// ChatInfoLogic/LINK_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_LINK_TYPE.h"
// ChatLinkLogic/MissonLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_MissonLinkInfo.h"
// LoudSpeakerLogic
struct LoudSpeakerLogic_t1303  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject LoudSpeakerLogic::m_LoudSpeakerWindow
	GameObject_t9 * ___m_LoudSpeakerWindow;
	// GameUIInput LoudSpeakerLogic::m_LoudSpeakerInput
	GameUIInput_t1185 * ___m_LoudSpeakerInput;
	// UILabel LoudSpeakerLogic::m_NumLabel
	UILabel_t1176 * ___m_NumLabel;
	// UnityEngine.GameObject LoudSpeakerLogic::m_EmotionWindow
	GameObject_t9 * ___m_EmotionWindow;
	// UnityEngine.GameObject LoudSpeakerLogic::m_EmotionWindowGrid
	GameObject_t9 * ___m_EmotionWindowGrid;
	// UILabel LoudSpeakerLogic::m_TitleLabel
	UILabel_t1176 * ___m_TitleLabel;
	// UILabel LoudSpeakerLogic::m_inputLabelNum
	UILabel_t1176 * ___m_inputLabelNum;
	// UILabel LoudSpeakerLogic::m_LoudSpeakerItemCount
	UILabel_t1176 * ___m_LoudSpeakerItemCount;
	// UnityEngine.GameObject LoudSpeakerLogic::m_Text1
	GameObject_t9 * ___m_Text1;
	// UILabel LoudSpeakerLogic::labelChatText1
	UILabel_t1176 * ___labelChatText1;
	// UnityEngine.GameObject LoudSpeakerLogic::m_LinkRoot1
	GameObject_t9 * ___m_LinkRoot1;
	// UnityEngine.GameObject LoudSpeakerLogic::m_EmotionRoot1
	GameObject_t9 * ___m_EmotionRoot1;
	// UnityEngine.GameObject LoudSpeakerLogic::m_Text2
	GameObject_t9 * ___m_Text2;
	// UILabel LoudSpeakerLogic::labelChatText2
	UILabel_t1176 * ___labelChatText2;
	// UnityEngine.GameObject LoudSpeakerLogic::m_LinkRoot2
	GameObject_t9 * ___m_LinkRoot2;
	// UnityEngine.GameObject LoudSpeakerLogic::m_EmotionRoot2
	GameObject_t9 * ___m_EmotionRoot2;
	// UnityEngine.GameObject LoudSpeakerLogic::m_VIPIcon
	GameObject_t9 * ___m_VIPIcon;
	// UILabel LoudSpeakerLogic::labelChatText
	UILabel_t1176 * ___labelChatText;
	// UnityEngine.GameObject LoudSpeakerLogic::m_LinkRoot
	GameObject_t9 * ___m_LinkRoot;
	// UnityEngine.GameObject LoudSpeakerLogic::m_EmotionRoot
	GameObject_t9 * ___m_EmotionRoot;
	// UnityEngine.Vector3 LoudSpeakerLogic::m_TextReadyPos
	Vector3_t121  ___m_TextReadyPos;
	// UnityEngine.Vector3 LoudSpeakerLogic::m_TextShowPos
	Vector3_t121  ___m_TextShowPos;
	// UISprite LoudSpeakerLogic::m_anoymousButton
	UISprite_t1202 * ___m_anoymousButton;
	// UISprite LoudSpeakerLogic::m_normalButton
	UISprite_t1202 * ___m_normalButton;
	// System.Int32 LoudSpeakerLogic::m_curSelect
	int32_t ___m_curSelect;
	// UnityEngine.GameObject LoudSpeakerLogic::m_anBtn
	GameObject_t9 * ___m_anBtn;
	// UnityEngine.GameObject LoudSpeakerLogic::m_norBtn
	GameObject_t9 * ___m_norBtn;
	// LoudSpeakerLogic/TEXT_STATE LoudSpeakerLogic::m_eTextStateCur
	int32_t ___m_eTextStateCur;
	// System.Boolean LoudSpeakerLogic::m_ChangeText
	bool ___m_ChangeText;
	// UnityEngine.Vector3 LoudSpeakerLogic::m_ChangeTextSpeed
	Vector3_t121  ___m_ChangeTextSpeed;
	// UIFont LoudSpeakerLogic::m_Font
	UIFont_t1286 * ___m_Font;
	// System.Single LoudSpeakerLogic::m_ChatTextHeight
	float ___m_ChatTextHeight;
	// System.Int32 LoudSpeakerLogic::MaxLines
	int32_t ___MaxLines;
	// System.Int32 LoudSpeakerLogic::m_LoudSpeakerNum
	int32_t ___m_LoudSpeakerNum;
	// ChatInfoLogic/LINK_TYPE LoudSpeakerLogic::m_eChatLinkType
	int32_t ___m_eChatLinkType;
	// System.String LoudSpeakerLogic::m_LinkText
	String_t* ___m_LinkText;
	// Games.Item.GameItem LoudSpeakerLogic::m_EquipBuffer
	GameItem_t1172 * ___m_EquipBuffer;
	// Games.Item.GameItem LoudSpeakerLogic::m_ItemBuffer
	GameItem_t1172 * ___m_ItemBuffer;
	// System.UInt64 LoudSpeakerLogic::m_guildIdBuffer
	uint64_t ___m_guildIdBuffer;
	// ChatLinkLogic/MissonLinkInfo LoudSpeakerLogic::m_missionBuffer
	MissonLinkInfo_t1182  ___m_missionBuffer;
	// System.Single LoudSpeakerLogic::m_fClearTimer
	float ___m_fClearTimer;
	// System.Single LoudSpeakerLogic::SPACE_WIDTH
	float ___SPACE_WIDTH;
	// System.Boolean LoudSpeakerLogic::m_bIsYaoHe
	bool ___m_bIsYaoHe;
};
struct LoudSpeakerLogic_t1303_StaticFields{
	// System.String LoudSpeakerLogic::NORMAL_STR
	String_t* ___NORMAL_STR;
	// System.String LoudSpeakerLogic::PRESS_STR
	String_t* ___PRESS_STR;
	// System.Int32 LoudSpeakerLogic::PerSubmitMax
	int32_t ___PerSubmitMax;
	// System.Int32 LoudSpeakerLogic::MaxShowTime
	int32_t ___MaxShowTime;
	// System.String LoudSpeakerLogic::TEXT_COLOR
	String_t* ___TEXT_COLOR;
	// System.Int32 LoudSpeakerLogic::EMOTIONITEM_WIDTH
	int32_t ___EMOTIONITEM_WIDTH;
	// LoudSpeakerLogic LoudSpeakerLogic::m_Instance
	LoudSpeakerLogic_t1303 * ___m_Instance;
	// System.Int32 LoudSpeakerLogic::MAX_TEXTNUM
	int32_t ___MAX_TEXTNUM;
};
