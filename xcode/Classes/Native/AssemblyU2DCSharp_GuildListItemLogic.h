#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UIImageButton
struct UIImageButton_t1204;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildListItemLogic
struct GuildListItemLogic_t1445  : public MonoBehaviour_t18
{
	// UILabel GuildListItemLogic::m_GuildNameLabel
	UILabel_t1176 * ___m_GuildNameLabel;
	// UILabel GuildListItemLogic::m_GuildLevelLabel
	UILabel_t1176 * ___m_GuildLevelLabel;
	// UILabel GuildListItemLogic::m_GuildChiefNameLabel
	UILabel_t1176 * ___m_GuildChiefNameLabel;
	// UILabel GuildListItemLogic::m_GuildMemberNumLabel
	UILabel_t1176 * ___m_GuildMemberNumLabel;
	// UILabel GuildListItemLogic::m_GuildCombatLable
	UILabel_t1176 * ___m_GuildCombatLable;
	// UISprite GuildListItemLogic::m_EnemyGuildSpirit
	UISprite_t1202 * ___m_EnemyGuildSpirit;
	// UIImageButton GuildListItemLogic::m_GuildJoinButton
	UIImageButton_t1204 * ___m_GuildJoinButton;
	// UILabel GuildListItemLogic::m_GuildJoinLabel
	UILabel_t1176 * ___m_GuildJoinLabel;
	// UILabel GuildListItemLogic::m_DeclarationLabel
	UILabel_t1176 * ___m_DeclarationLabel;
	// UIImageButton GuildListItemLogic::m_GuildChallengeButton
	UIImageButton_t1204 * ___m_GuildChallengeButton;
	// UnityEngine.GameObject GuildListItemLogic::m_WholeDeclaration
	GameObject_t9 * ___m_WholeDeclaration;
	// UILabel GuildListItemLogic::m_WholeDeclarationLabel
	UILabel_t1176 * ___m_WholeDeclarationLabel;
	// System.UInt64 GuildListItemLogic::m_GuildGuid
	uint64_t ___m_GuildGuid;
	// System.Boolean GuildListItemLogic::m_canBeJoined
	bool ___m_canBeJoined;
	// System.Boolean GuildListItemLogic::m_applyListIsFull
	bool ___m_applyListIsFull;
};
