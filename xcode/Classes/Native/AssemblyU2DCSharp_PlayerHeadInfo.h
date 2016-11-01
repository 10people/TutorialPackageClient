#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// ChatBubbleLogic
struct ChatBubbleLogic_t1287;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerHeadInfo
struct PlayerHeadInfo_t1654  : public MonoBehaviour_t18
{
	// UILabel PlayerHeadInfo::m_LabelTitleBoard
	UILabel_t1176 * ___m_LabelTitleBoard;
	// UISprite PlayerHeadInfo::m_SprVip
	UISprite_t1202 * ___m_SprVip;
	// UILabel PlayerHeadInfo::m_LabelName
	UILabel_t1176 * ___m_LabelName;
	// UISprite PlayerHeadInfo::m_SprPaoShang
	UISprite_t1202 * ___m_SprPaoShang;
	// UISprite PlayerHeadInfo::m_ZiDongXunLuSprite
	UISprite_t1202 * ___m_ZiDongXunLuSprite;
	// UISprite PlayerHeadInfo::m_ZiDongZhanDouSprite
	UISprite_t1202 * ___m_ZiDongZhanDouSprite;
	// UnityEngine.GameObject PlayerHeadInfo::m_ObjChatBubble
	GameObject_t9 * ___m_ObjChatBubble;
	// UnityEngine.GameObject PlayerHeadInfo::m_ObjOriginalHeadInfo
	GameObject_t9 * ___m_ObjOriginalHeadInfo;
	// ChatBubbleLogic PlayerHeadInfo::m_ChatBubbleLogic
	ChatBubbleLogic_t1287 * ___m_ChatBubbleLogic;
	// System.Boolean PlayerHeadInfo::m_bIsMainPlayer
	bool ___m_bIsMainPlayer;
};
