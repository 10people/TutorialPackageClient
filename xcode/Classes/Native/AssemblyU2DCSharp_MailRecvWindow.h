#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// RewardItem
struct RewardItem_t1842;
// MailWindow
struct MailWindow_t2017;
// MailListItem
struct MailListItem_t1900;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MailRecvWindow
struct MailRecvWindow_t1899  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject MailRecvWindow::MailListGrid
	GameObject_t9 * ___MailListGrid;
	// UnityEngine.GameObject MailRecvWindow::CurMailGroup
	GameObject_t9 * ___CurMailGroup;
	// UILabel MailRecvWindow::LabelCurMailText
	UILabel_t1176 * ___LabelCurMailText;
	// RewardItem MailRecvWindow::CurRewardItem
	RewardItem_t1842 * ___CurRewardItem;
	// UnityEngine.GameObject MailRecvWindow::BtnReplay
	GameObject_t9 * ___BtnReplay;
	// UnityEngine.GameObject MailRecvWindow::BtnGetItem
	GameObject_t9 * ___BtnGetItem;
	// UnityEngine.GameObject MailRecvWindow::BtnBtnReport
	GameObject_t9 * ___BtnBtnReport;
	// MailWindow MailRecvWindow::TopMailWindow
	MailWindow_t2017 * ___TopMailWindow;
	// UnityEngine.GameObject MailRecvWindow::MoneyCountLabel
	GameObject_t9 * ___MoneyCountLabel;
	// UnityEngine.GameObject MailRecvWindow::MoneyIcon
	GameObject_t9 * ___MoneyIcon;
	// UILabel MailRecvWindow::BtnLabelDelAll
	UILabel_t1176 * ___BtnLabelDelAll;
	// UILabel MailRecvWindow::BtnLabelGetAll
	UILabel_t1176 * ___BtnLabelGetAll;
	// UILabel MailRecvWindow::BtnLabelDelCur
	UILabel_t1176 * ___BtnLabelDelCur;
	// UILabel MailRecvWindow::BtnLabelGetCur
	UILabel_t1176 * ___BtnLabelGetCur;
	// UILabel MailRecvWindow::BtnLabelReply
	UILabel_t1176 * ___BtnLabelReply;
	// MailListItem MailRecvWindow::m_curSelectItem
	MailListItem_t1900 * ___m_curSelectItem;
	// System.Boolean MailRecvWindow::m_bFirstUpdate
	bool ___m_bFirstUpdate;
	// UnityEngine.GameObject MailRecvWindow::m_curItemResObj
	GameObject_t9 * ___m_curItemResObj;
	// System.Single MailRecvWindow::m_UpdateTimer
	float ___m_UpdateTimer;
	// UILabel MailRecvWindow::m_playerName
	UILabel_t1176 * ___m_playerName;
	// UILabel MailRecvWindow::m_awardText
	UILabel_t1176 * ___m_awardText;
	// UISprite MailRecvWindow::m_MoneyBack
	UISprite_t1202 * ___m_MoneyBack;
};
struct MailRecvWindow_t1899_StaticFields{
	// System.Collections.Generic.List`1<System.UInt64> MailRecvWindow::m_sortMailList
	List_1_t1393 * ___m_sortMailList;
};
