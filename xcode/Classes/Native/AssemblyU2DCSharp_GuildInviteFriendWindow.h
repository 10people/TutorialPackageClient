#pragma once
#include <stdint.h>
// GuildInviteFriendWindow
struct GuildInviteFriendWindow_t1443;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildInviteFriendWindow
struct GuildInviteFriendWindow_t1443  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject GuildInviteFriendWindow::m_GuildInviteFriendItem
	GameObject_t9 * ___m_GuildInviteFriendItem;
	// UnityEngine.GameObject GuildInviteFriendWindow::m_GuildInviteFriendGrid
	GameObject_t9 * ___m_GuildInviteFriendGrid;
	// UILabel GuildInviteFriendWindow::m_MailTitleLabel
	UILabel_t1176 * ___m_MailTitleLabel;
	// UILabel GuildInviteFriendWindow::m_SendMailBtnLabel
	UILabel_t1176 * ___m_SendMailBtnLabel;
	// System.Collections.Generic.List`1<System.UInt64> GuildInviteFriendWindow::m_ChooseGuid
	List_1_t1393 * ___m_ChooseGuid;
};
struct GuildInviteFriendWindow_t1443_StaticFields{
	// GuildInviteFriendWindow GuildInviteFriendWindow::m_Instance
	GuildInviteFriendWindow_t1443 * ___m_Instance;
};
