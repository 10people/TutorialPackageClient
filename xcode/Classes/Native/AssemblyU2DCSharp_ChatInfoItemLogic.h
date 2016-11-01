#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// System.String
struct String_t;
// UIFont
struct UIFont_t1286;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// ChatInfoLogic
struct ChatInfoLogic_t1294;
// LastSpeakerChatLogic
struct LastSpeakerChatLogic_t1295;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChatInfoItemLogic
struct ChatInfoItemLogic_t1296  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject ChatInfoItemLogic::FY_templateOther
	GameObject_t9 * ___FY_templateOther;
	// UISprite ChatInfoItemLogic::m_HeadOther
	UISprite_t1202 * ___m_HeadOther;
	// UILabel ChatInfoItemLogic::m_LevelOther
	UILabel_t1176 * ___m_LevelOther;
	// UISprite ChatInfoItemLogic::m_BackgroundOthers
	UISprite_t1202 * ___m_BackgroundOthers;
	// UILabel ChatInfoItemLogic::m_LabelChatTitleOthers
	UILabel_t1176 * ___m_LabelChatTitleOthers;
	// UILabel ChatInfoItemLogic::m_LabelChatDetailOthers
	UILabel_t1176 * ___m_LabelChatDetailOthers;
	// System.Int32 ChatInfoItemLogic::m_Profession
	int32_t ___m_Profession;
	// UISprite[] ChatInfoItemLogic::ProfessionSpritesOthers
	UISpriteU5BU5D_t1201* ___ProfessionSpritesOthers;
	// UnityEngine.GameObject ChatInfoItemLogic::m_LinkRootOthers
	GameObject_t9 * ___m_LinkRootOthers;
	// UnityEngine.GameObject ChatInfoItemLogic::m_ChatEmotionRootOthers
	GameObject_t9 * ___m_ChatEmotionRootOthers;
	// UnityEngine.GameObject ChatInfoItemLogic::m_LabelEmotionRootOthers
	GameObject_t9 * ___m_LabelEmotionRootOthers;
	// UnityEngine.GameObject ChatInfoItemLogic::FY_templateMe
	GameObject_t9 * ___FY_templateMe;
	// UISprite ChatInfoItemLogic::m_HeadMe
	UISprite_t1202 * ___m_HeadMe;
	// UILabel ChatInfoItemLogic::m_LevelMe
	UILabel_t1176 * ___m_LevelMe;
	// UISprite ChatInfoItemLogic::m_BackgroundMe
	UISprite_t1202 * ___m_BackgroundMe;
	// UILabel ChatInfoItemLogic::m_LabelChatTitleMe
	UILabel_t1176 * ___m_LabelChatTitleMe;
	// UILabel ChatInfoItemLogic::m_LabelChatDetailMe
	UILabel_t1176 * ___m_LabelChatDetailMe;
	// UISprite[] ChatInfoItemLogic::ProfessionSpritesMe
	UISpriteU5BU5D_t1201* ___ProfessionSpritesMe;
	// UnityEngine.GameObject ChatInfoItemLogic::m_LinkRootMe
	GameObject_t9 * ___m_LinkRootMe;
	// UnityEngine.GameObject ChatInfoItemLogic::m_ChatEmotionRootMe
	GameObject_t9 * ___m_ChatEmotionRootMe;
	// UnityEngine.GameObject ChatInfoItemLogic::m_LabelEmotionRootMe
	GameObject_t9 * ___m_LabelEmotionRootMe;
	// System.String ChatInfoItemLogic::Str_Space
	String_t* ___Str_Space;
	// System.Int32 ChatInfoItemLogic::SPACE_WIDTH
	int32_t ___SPACE_WIDTH;
	// System.Int32 ChatInfoItemLogic::m_ChatInfoItemWidth
	int32_t ___m_ChatInfoItemWidth;
	// System.Int32 ChatInfoItemLogic::m_ChatSpaceCount
	int32_t ___m_ChatSpaceCount;
	// UnityEngine.GameObject ChatInfoItemLogic::m_PlayVoiceChatBtn
	GameObject_t9 * ___m_PlayVoiceChatBtn;
	// UnityEngine.GameObject ChatInfoItemLogic::VoiceEmotion
	GameObject_t9 * ___VoiceEmotion;
	// UIFont ChatInfoItemLogic::m_Font
	UIFont_t1286 * ___m_Font;
	// UILabel ChatInfoItemLogic::m_LabelChat
	UILabel_t1176 * ___m_LabelChat;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoItemLogic::clearItemList
	List_1_t1289 * ___clearItemList;
	// System.Single ChatInfoItemLogic::m_Space_Height
	float ___m_Space_Height;
	// System.Single ChatInfoItemLogic::m_Space_Width
	float ___m_Space_Width;
	// System.Single ChatInfoItemLogic::m_ChatMaxHeight
	float ___m_ChatMaxHeight;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoItemLogic::m_LinkList
	List_1_t1289 * ___m_LinkList;
	// ChatInfoLogic ChatInfoItemLogic::m_ChatInfoLogic
	ChatInfoLogic_t1294 * ___m_ChatInfoLogic;
	// LastSpeakerChatLogic ChatInfoItemLogic::m_LastSpeakerChatLogic
	LastSpeakerChatLogic_t1295 * ___m_LastSpeakerChatLogic;
	// System.UInt64 ChatInfoItemLogic::m_SpeakerGuid
	uint64_t ___m_SpeakerGuid;
	// System.String ChatInfoItemLogic::m_SpeakerName
	String_t* ___m_SpeakerName;
	// System.Int32 ChatInfoItemLogic::m_SpeakerLevel
	int32_t ___m_SpeakerLevel;
	// System.Int32 ChatInfoItemLogic::m_SpeakerProfession
	int32_t ___m_SpeakerProfession;
};
