#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildJobSelectMemberItemLogic
struct GuildJobSelectMemberItemLogic_t1435  : public MonoBehaviour_t18
{
	// UILabel GuildJobSelectMemberItemLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel GuildJobSelectMemberItemLogic::m_CombatLabel
	UILabel_t1176 * ___m_CombatLabel;
	// UILabel GuildJobSelectMemberItemLogic::m_LevelLabel
	UILabel_t1176 * ___m_LevelLabel;
	// UISprite GuildJobSelectMemberItemLogic::m_ProfessionSprite
	UISprite_t1202 * ___m_ProfessionSprite;
	// UnityEngine.GameObject GuildJobSelectMemberItemLogic::m_ChooseBtn
	GameObject_t9 * ___m_ChooseBtn;
	// UnityEngine.GameObject GuildJobSelectMemberItemLogic::m_RemoveBtn
	GameObject_t9 * ___m_RemoveBtn;
	// System.UInt64 GuildJobSelectMemberItemLogic::m_MemberGuid
	uint64_t ___m_MemberGuid;
};
