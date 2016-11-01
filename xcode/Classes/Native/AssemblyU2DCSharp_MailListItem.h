#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// MailRecvWindow
struct MailRecvWindow_t1899;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MailListItem
struct MailListItem_t1900  : public MonoBehaviour_t18
{
	// UISprite MailListItem::SprState
	UISprite_t1202 * ___SprState;
	// UILabel MailListItem::LabelSender
	UILabel_t1176 * ___LabelSender;
	// UILabel MailListItem::labelTime
	UILabel_t1176 * ___labelTime;
	// UnityEngine.GameObject MailListItem::SprHightlight
	GameObject_t9 * ___SprHightlight;
	// UnityEngine.GameObject MailListItem::SprNormal
	GameObject_t9 * ___SprNormal;
	// UILabel MailListItem::ObjOfficialText
	UILabel_t1176 * ___ObjOfficialText;
	// MailRecvWindow MailListItem::m_mailRecvWindow
	MailRecvWindow_t1899 * ___m_mailRecvWindow;
};
