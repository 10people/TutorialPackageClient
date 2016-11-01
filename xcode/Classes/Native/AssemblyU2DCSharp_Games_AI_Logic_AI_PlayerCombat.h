#pragma once
#include <stdint.h>
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// Games.SkillModle.OwnSkillData[]
struct OwnSkillDataU5BU5D_t4488;
// Games.AI_Logic.AI_BaseCombat
#include "AssemblyU2DCSharp_Games_AI_Logic_AI_BaseCombat.h"
// Games.AI_Logic.AI_PlayerCombat
struct AI_PlayerCombat_t4524  : public AI_BaseCombat_t4520
{
	// Games.LogicObj.Obj_MainPlayer Games.AI_Logic.AI_PlayerCombat::m_player
	Obj_MainPlayer_t1732 * ___m_player;
	// System.Int32 Games.AI_Logic.AI_PlayerCombat::m_nCurUseSkillId
	int32_t ___m_nCurUseSkillId;
	// System.Int32 Games.AI_Logic.AI_PlayerCombat::m_nCurUseSkillStartTime
	int32_t ___m_nCurUseSkillStartTime;
	// System.Boolean Games.AI_Logic.AI_PlayerCombat::m_bIsPlayerControlMove
	bool ___m_bIsPlayerControlMove;
	// System.Int32 Games.AI_Logic.AI_PlayerCombat::m_nPlayerUseSkillId
	int32_t ___m_nPlayerUseSkillId;
	// System.Int32 Games.AI_Logic.AI_PlayerCombat::m_nNormalSkillInterval
	int32_t ___m_nNormalSkillInterval;
	// Games.SkillModle.OwnSkillData[] Games.AI_Logic.AI_PlayerCombat::m_canSeleSkill
	OwnSkillDataU5BU5D_t4488* ___m_canSeleSkill;
	// System.Single Games.AI_Logic.AI_PlayerCombat::m_fLastUseEndTime
	float ___m_fLastUseEndTime;
};
