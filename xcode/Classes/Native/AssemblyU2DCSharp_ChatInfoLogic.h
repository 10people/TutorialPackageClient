#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UIGrid
struct UIGrid_t1199;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// GameUIInput
struct GameUIInput_t1185;
// GameChatInput
struct GameChatInput_t1186;
// UnityEngine.GameObject
struct GameObject_t9;
// TweenPosition
struct TweenPosition_t1255;
// UILabel
struct UILabel_t1176;
// ChatInfoSetupLogic
struct ChatInfoSetupLogic_t1302;
// LoudSpeakerLogic
struct LoudSpeakerLogic_t1303;
// LastSpeakerChatLogic
struct LastSpeakerChatLogic_t1295;
// FastReplyLogic
struct FastReplyLogic_t1304;
// SpeechLogic
struct SpeechLogic_t1291;
// Games.Item.GameItem
struct GameItem_t1172;
// UIFont
struct UIFont_t1286;
// System.Collections.Generic.List`1<UISprite>
struct List_1_t1305;
// UITable
struct UITable_t1306;
// UIControllerBase`1<ChatInfoLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_3.h"
// ChatInfoLogic/CHANNEL_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_CHANNEL_TYPE.h"
// ChatInfoLogic/LINK_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_LINK_TYPE.h"
// ChatLinkLogic/MissonLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_MissonLinkInfo.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ChatInfoLogic
struct ChatInfoLogic_t1294  : public UIControllerBase_1_t1307
{
	// UIGrid ChatInfoLogic::m_ChannelGrid
	UIGrid_t1199 * ___m_ChannelGrid;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoLogic::m_Channels
	List_1_t1289 * ___m_Channels;
	// GameUIInput ChatInfoLogic::m_Input
	GameUIInput_t1185 * ___m_Input;
	// GameChatInput ChatInfoLogic::m_GameChatInput
	GameChatInput_t1186 * ___m_GameChatInput;
	// UnityEngine.GameObject ChatInfoLogic::m_ChatInfoLinkRoot
	GameObject_t9 * ___m_ChatInfoLinkRoot;
	// UnityEngine.GameObject ChatInfoLogic::m_EmotionRoot
	GameObject_t9 * ___m_EmotionRoot;
	// UnityEngine.GameObject ChatInfoLogic::m_EmotionGrid
	GameObject_t9 * ___m_EmotionGrid;
	// UnityEngine.GameObject ChatInfoLogic::m_EmotionItemRoot
	GameObject_t9 * ___m_EmotionItemRoot;
	// TweenPosition ChatInfoLogic::m_TouchKeyboardTween
	TweenPosition_t1255 * ___m_TouchKeyboardTween;
	// UnityEngine.GameObject ChatInfoLogic::m_OpButtons
	GameObject_t9 * ___m_OpButtons;
	// UnityEngine.GameObject ChatInfoLogic::m_ChatSetupRoot
	GameObject_t9 * ___m_ChatSetupRoot;
	// UnityEngine.GameObject ChatInfoLogic::m_TellChatTitle
	GameObject_t9 * ___m_TellChatTitle;
	// UILabel ChatInfoLogic::m_TellPlayerNameLabel
	UILabel_t1176 * ___m_TellPlayerNameLabel;
	// UnityEngine.GameObject ChatInfoLogic::m_FastReplyButton
	GameObject_t9 * ___m_FastReplyButton;
	// UnityEngine.GameObject ChatInfoLogic::m_FriendInformSprite
	GameObject_t9 * ___m_FriendInformSprite;
	// UnityEngine.GameObject ChatInfoLogic::m_TellInformSprite
	GameObject_t9 * ___m_TellInformSprite;
	// UnityEngine.GameObject ChatInfoLogic::m_TeamInfoSprite
	GameObject_t9 * ___m_TeamInfoSprite;
	// ChatInfoSetupLogic ChatInfoLogic::m_ChatInfoSetupLogic
	ChatInfoSetupLogic_t1302 * ___m_ChatInfoSetupLogic;
	// LoudSpeakerLogic ChatInfoLogic::m_LoudSpeakerLogic
	LoudSpeakerLogic_t1303 * ___m_LoudSpeakerLogic;
	// LastSpeakerChatLogic ChatInfoLogic::m_LastSpeakerChatLogic
	LastSpeakerChatLogic_t1295 * ___m_LastSpeakerChatLogic;
	// FastReplyLogic ChatInfoLogic::m_FastReplyLogic
	FastReplyLogic_t1304 * ___m_FastReplyLogic;
	// SpeechLogic ChatInfoLogic::m_SpeeachLogic
	SpeechLogic_t1291 * ___m_SpeeachLogic;
	// UnityEngine.GameObject ChatInfoLogic::m_VoiceTitle
	GameObject_t9 * ___m_VoiceTitle;
	// UnityEngine.GameObject ChatInfoLogic::m_VIPIcon
	GameObject_t9 * ___m_VIPIcon;
	// UnityEngine.GameObject ChatInfoLogic::m_PlayVoiceChatBtn
	GameObject_t9 * ___m_PlayVoiceChatBtn;
	// UnityEngine.GameObject ChatInfoLogic::m_SetupObj
	GameObject_t9 * ___m_SetupObj;
	// ChatInfoLogic/CHANNEL_TYPE ChatInfoLogic::m_eCurChannelType
	int32_t ___m_eCurChannelType;
	// System.UInt64 ChatInfoLogic::m_TellChatReceiverGuid
	uint64_t ___m_TellChatReceiverGuid;
	// System.String ChatInfoLogic::m_TellChatReceiverName
	String_t* ___m_TellChatReceiverName;
	// System.UInt64 ChatInfoLogic::m_FriendChatReceiverGuid
	uint64_t ___m_FriendChatReceiverGuid;
	// System.String ChatInfoLogic::m_FriendChatReceiverName
	String_t* ___m_FriendChatReceiverName;
	// ChatInfoLogic/LINK_TYPE ChatInfoLogic::m_eChatLinkType
	int32_t ___m_eChatLinkType;
	// System.String ChatInfoLogic::m_LinkText
	String_t* ___m_LinkText;
	// Games.Item.GameItem ChatInfoLogic::m_ItemBuffer
	GameItem_t1172 * ___m_ItemBuffer;
	// Games.Item.GameItem ChatInfoLogic::m_EquipBuffer
	GameItem_t1172 * ___m_EquipBuffer;
	// System.UInt64 ChatInfoLogic::m_guildIdBuffer
	uint64_t ___m_guildIdBuffer;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoLogic::m_LinkList
	List_1_t1289 * ___m_LinkList;
	// ChatLinkLogic/MissonLinkInfo ChatInfoLogic::m_missionBuffer
	MissonLinkInfo_t1182  ___m_missionBuffer;
	// System.UInt64 ChatInfoLogic::m_guidFellow
	uint64_t ___m_guidFellow;
	// System.Boolean ChatInfoLogic::m_WaitRefresh
	bool ___m_WaitRefresh;
	// UIFont ChatInfoLogic::m_Font
	UIFont_t1286 * ___m_Font;
	// System.Single ChatInfoLogic::m_ChatTextHeight
	float ___m_ChatTextHeight;
	// System.Boolean ChatInfoLogic::m_bKeyboardTweenOrigin
	bool ___m_bKeyboardTweenOrigin;
	// System.Collections.Generic.List`1<UISprite> ChatInfoLogic::deletrans
	List_1_t1305 * ___deletrans;
	// System.Single ChatInfoLogic::SPACE_WIDTH
	float ___SPACE_WIDTH;
	// UnityEngine.Vector3 ChatInfoLogic::m_TouchVoiceChatPos
	Vector3_t121  ___m_TouchVoiceChatPos;
	// System.Boolean ChatInfoLogic::m_ForceStopRecord
	bool ___m_ForceStopRecord;
	// System.Boolean ChatInfoLogic::m_CanSendVoice
	bool ___m_CanSendVoice;
	// System.Int32 ChatInfoLogic::m_VoiceChatCountDown
	int32_t ___m_VoiceChatCountDown;
	// System.Boolean ChatInfoLogic::m_bIsYaoHe
	bool ___m_bIsYaoHe;
	// UILabel ChatInfoLogic::chatTextInfo
	UILabel_t1176 * ___chatTextInfo;
	// UILabel ChatInfoLogic::m_Vitality
	UILabel_t1176 * ___m_Vitality;
	// UITable ChatInfoLogic::m_ChatInfoItemGrid
	UITable_t1306 * ___m_ChatInfoItemGrid;
	// UnityEngine.GameObject ChatInfoLogic::m_ChatInfoItem
	GameObject_t9 * ___m_ChatInfoItem;
	// TweenPosition ChatInfoLogic::m_setUpTween
	TweenPosition_t1255 * ___m_setUpTween;
	// System.Boolean ChatInfoLogic::isOpenSetUp
	bool ___isOpenSetUp;
	// TweenPosition ChatInfoLogic::m_setUpBtnTween
	TweenPosition_t1255 * ___m_setUpBtnTween;
	// System.Boolean ChatInfoLogic::isOpenBtnSetup
	bool ___isOpenBtnSetup;
	// System.String ChatInfoLogic::SelectFellowName
	String_t* ___SelectFellowName;
	// UILabel ChatInfoLogic::m_speechTime
	UILabel_t1176 * ___m_speechTime;
	// System.Int32 ChatInfoLogic::m_nSpeechTime
	int32_t ___m_nSpeechTime;
	// System.Single ChatInfoLogic::m_fUpdteTimes
	float ___m_fUpdteTimes;
	// System.Boolean ChatInfoLogic::m_isSpeech
	bool ___m_isSpeech;
	// UnityEngine.GameObject ChatInfoLogic::m_beginReordObj
	GameObject_t9 * ___m_beginReordObj;
	// UnityEngine.GameObject ChatInfoLogic::m_endRecordObj
	GameObject_t9 * ___m_endRecordObj;
};
struct ChatInfoLogic_t1294_StaticFields{
	// System.Int32 ChatInfoLogic::MAX_TEXTNUM
	int32_t ___MAX_TEXTNUM;
	// System.Int32 ChatInfoLogic::EMOTIONITEM_WIDTH
	int32_t ___EMOTIONITEM_WIDTH;
	// System.String ChatInfoLogic::NORMAL_STR
	String_t* ___NORMAL_STR;
	// System.String ChatInfoLogic::PRESSED_STR
	String_t* ___PRESSED_STR;
	// System.String ChatInfoLogic::TIME_STR
	String_t* ___TIME_STR;
	// System.Int32 ChatInfoLogic::m_nStartTime
	int32_t ___m_nStartTime;
	// System.Int32 ChatInfoLogic::m_CurChatInfoItemIndex
	int32_t ___m_CurChatInfoItemIndex;
	// System.Int32 ChatInfoLogic::ChatInfoItemMaxNum
	int32_t ___ChatInfoItemMaxNum;
};
