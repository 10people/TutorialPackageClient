#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// TweenPosition
struct TweenPosition_t1255;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIAtlas
struct UIAtlas_t1593;
// System.Collections.Generic.List`1<NewItemGetLogic/InitDataInfo>
struct List_1_t1594;
// System.String
struct String_t;
// UIControllerBase`1<NewItemGetLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_15.h"
// NewItemGetLogic/NEWITEMTYPE
#include "AssemblyU2DCSharp_NewItemGetLogic_NEWITEMTYPE.h"
// NewItemGetLogic
struct NewItemGetLogic_t1595  : public UIControllerBase_1_t1596
{
	// NewItemGetLogic/NEWITEMTYPE NewItemGetLogic::m_ItemType
	int32_t ___m_ItemType;
	// UISprite NewItemGetLogic::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// TweenPosition NewItemGetLogic::m_ItemTween
	TweenPosition_t1255 * ___m_ItemTween;
	// UnityEngine.GameObject NewItemGetLogic::m_NoticeLabel
	GameObject_t9 * ___m_NoticeLabel;
	// UILabel NewItemGetLogic::m_ItemName
	UILabel_t1176 * ___m_ItemName;
	// UnityEngine.GameObject NewItemGetLogic::m_destGameObject
	GameObject_t9 * ___m_destGameObject;
	// System.Int32 NewItemGetLogic::m_IntParam
	int32_t ___m_IntParam;
	// System.Int32 NewItemGetLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UIAtlas NewItemGetLogic::SkillAtlas
	UIAtlas_t1593 * ___SkillAtlas;
	// UIAtlas NewItemGetLogic::MainMenuBarAtlas
	UIAtlas_t1593 * ___MainMenuBarAtlas;
	// UIAtlas NewItemGetLogic::MainUIAtlas
	UIAtlas_t1593 * ___MainUIAtlas;
	// UILabel NewItemGetLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel NewItemGetLogic::m_DescLabel
	UILabel_t1176 * ___m_DescLabel;
	// UISprite NewItemGetLogic::m_AttachItemIcon
	UISprite_t1202 * ___m_AttachItemIcon;
	// TweenPosition NewItemGetLogic::m_AttachItemTween
	TweenPosition_t1255 * ___m_AttachItemTween;
	// UILabel NewItemGetLogic::m_AttachNameLabel
	UILabel_t1176 * ___m_AttachNameLabel;
	// UILabel NewItemGetLogic::m_AttachDescLabel
	UILabel_t1176 * ___m_AttachDescLabel;
	// UnityEngine.GameObject NewItemGetLogic::m_MainItem
	GameObject_t9 * ___m_MainItem;
	// UnityEngine.GameObject NewItemGetLogic::m_AttachItem
	GameObject_t9 * ___m_AttachItem;
	// System.Boolean NewItemGetLogic::m_NeedToShow
	bool ___m_NeedToShow;
	// System.Boolean NewItemGetLogic::hasAttachSkill
	bool ___hasAttachSkill;
	// UnityEngine.GameObject NewItemGetLogic::m_rotationSpriteObj
	GameObject_t9 * ___m_rotationSpriteObj;
	// UnityEngine.GameObject NewItemGetLogic::m_rotationAttachSpriteObj
	GameObject_t9 * ___m_rotationAttachSpriteObj;
	// UnityEngine.GameObject NewItemGetLogic::m_Texture
	GameObject_t9 * ___m_Texture;
	// UnityEngine.GameObject NewItemGetLogic::m_BGobj
	GameObject_t9 * ___m_BGobj;
	// UnityEngine.GameObject NewItemGetLogic::m_TitleLine
	GameObject_t9 * ___m_TitleLine;
	// System.Int32 NewItemGetLogic::m_openServerId
	int32_t ___m_openServerId;
	// System.Boolean NewItemGetLogic::m_isCloseOpenServer
	bool ___m_isCloseOpenServer;
	// System.Single NewItemGetLogic::m_TimePass
	float ___m_TimePass;
	// System.Single NewItemGetLogic::m_TimeNeed
	float ___m_TimeNeed;
	// System.String NewItemGetLogic::m_spritName
	String_t* ___m_spritName;
};
struct NewItemGetLogic_t1595_StaticFields{
	// System.Single NewItemGetLogic::m_continueShowTime
	float ___m_continueShowTime;
	// System.Single NewItemGetLogic::m_firstShowTime
	float ___m_firstShowTime;
	// System.Collections.Generic.List`1<NewItemGetLogic/InitDataInfo> NewItemGetLogic::m_ItemListBuffer
	List_1_t1594 * ___m_ItemListBuffer;
	// System.Boolean NewItemGetLogic::m_bShow
	bool ___m_bShow;
};
