#pragma once
#include <stdint.h>
// GameUIInput
struct GameUIInput_t1185;
// UILabel
struct UILabel_t1176;
// MailWindow
struct MailWindow_t2017;
// RelationNamePopController
struct RelationNamePopController_t1821;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MailSendWindow
struct MailSendWindow_t2018  : public MonoBehaviour_t18
{
	// GameUIInput MailSendWindow::inputText
	GameUIInput_t1185 * ___inputText;
	// UILabel MailSendWindow::labelReceiverName
	UILabel_t1176 * ___labelReceiverName;
	// MailWindow MailSendWindow::TopMailWindow
	MailWindow_t2017 * ___TopMailWindow;
	// UILabel MailSendWindow::LabelInput
	UILabel_t1176 * ___LabelInput;
	// System.UInt64 MailSendWindow::m_curReceiver
	uint64_t ___m_curReceiver;
	// UILabel MailSendWindow::BtnLabelSendMail
	UILabel_t1176 * ___BtnLabelSendMail;
	// RelationNamePopController MailSendWindow::FriendNameWindow
	RelationNamePopController_t1821 * ___FriendNameWindow;
};
