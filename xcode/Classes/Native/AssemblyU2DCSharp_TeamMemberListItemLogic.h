#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UIImageButton
struct UIImageButton_t1204;
// TeamMember
struct TeamMember_t1543;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// TeamMemberListItemLogic
struct TeamMemberListItemLogic_t1775  : public MonoBehaviour_t18
{
	// UISprite TeamMemberListItemLogic::m_PlayerProPic
	UISprite_t1202 * ___m_PlayerProPic;
	// UISprite TeamMemberListItemLogic::m_PlayerHeadPic
	UISprite_t1202 * ___m_PlayerHeadPic;
	// UILabel TeamMemberListItemLogic::m_PlayerNameLabel
	UILabel_t1176 * ___m_PlayerNameLabel;
	// UILabel TeamMemberListItemLogic::m_PlayerLevelLabel
	UILabel_t1176 * ___m_PlayerLevelLabel;
	// UILabel TeamMemberListItemLogic::m_PlayerCombatNumLabel
	UILabel_t1176 * ___m_PlayerCombatNumLabel;
	// UnityEngine.GameObject TeamMemberListItemLogic::m_TeamLeaderPic
	GameObject_t9 * ___m_TeamLeaderPic;
	// UIImageButton TeamMemberListItemLogic::m_KickImageButton
	UIImageButton_t1204 * ___m_KickImageButton;
	// UIImageButton TeamMemberListItemLogic::m_LeaveImageButton
	UIImageButton_t1204 * ___m_LeaveImageButton;
	// UIImageButton TeamMemberListItemLogic::m_MenuImageButton
	UIImageButton_t1204 * ___m_MenuImageButton;
	// UnityEngine.GameObject TeamMemberListItemLogic::m_ChooseSprite
	GameObject_t9 * ___m_ChooseSprite;
	// TeamMember TeamMemberListItemLogic::m_selfTeamMember
	TeamMember_t1543 * ___m_selfTeamMember;
	// System.Int32 TeamMemberListItemLogic::m_nTeamPosIndex
	int32_t ___m_nTeamPosIndex;
};
struct TeamMemberListItemLogic_t1775_StaticFields{
	// UnityEngine.Color TeamMemberListItemLogic::m_SelfColor
	Color_t939  ___m_SelfColor;
};
