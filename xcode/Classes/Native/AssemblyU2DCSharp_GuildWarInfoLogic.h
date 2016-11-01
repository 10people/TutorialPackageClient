#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UIGrid
struct UIGrid_t1199;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// GuildWarPonitItemLogic[]
struct GuildWarPonitItemLogicU5BU5D_t1467;
// GuildWarScoreRankItemLogic[]
struct GuildWarScoreRankItemLogicU5BU5D_t1469;
// GuildWarKillRankItemLogic[]
struct GuildWarKillRankItemLogicU5BU5D_t1471;
// GuildWarFightGroupItemLogic[]
struct GuildWarFightGroupItemLogicU5BU5D_t1473;
// GuildWarWinGroupItemLogic[]
struct GuildWarWinGroupItemLogicU5BU5D_t1474;
// GuildWarRankItemLogic[]
struct GuildWarRankItemLogicU5BU5D_t1476;
// GuildWarInfoLogic
struct GuildWarInfoLogic_t1478;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildWarInfoLogic
struct GuildWarInfoLogic_t1478  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject GuildWarInfoLogic::m_PreminaryRoot
	GameObject_t9 * ___m_PreminaryRoot;
	// UnityEngine.GameObject GuildWarInfoLogic::m_FinalRoot
	GameObject_t9 * ___m_FinalRoot;
	// UnityEngine.GameObject GuildWarInfoLogic::m_NoWarRoot
	GameObject_t9 * ___m_NoWarRoot;
	// UnityEngine.GameObject GuildWarInfoLogic::m_SaiChengBiao
	GameObject_t9 * ___m_SaiChengBiao;
	// UnityEngine.GameObject GuildWarInfoLogic::m_PreminaryRankRoot
	GameObject_t9 * ___m_PreminaryRankRoot;
	// UnityEngine.GameObject GuildWarInfoLogic::m_ShowFinalGroupInfoBt
	GameObject_t9 * ___m_ShowFinalGroupInfoBt;
	// UnityEngine.Transform GuildWarInfoLogic::m_GroupSpriteTran
	Transform_t78 * ___m_GroupSpriteTran;
	// UnityEngine.GameObject GuildWarInfoLogic::m_FightGroupItem
	GameObject_t9 * ___m_FightGroupItem;
	// UnityEngine.GameObject GuildWarInfoLogic::m_WinGroupItem
	GameObject_t9 * ___m_WinGroupItem;
	// UnityEngine.GameObject GuildWarInfoLogic::m_PreliminaryScoreItem
	GameObject_t9 * ___m_PreliminaryScoreItem;
	// UnityEngine.GameObject GuildWarInfoLogic::m_PreliminaryKillItem
	GameObject_t9 * ___m_PreliminaryKillItem;
	// UnityEngine.GameObject GuildWarInfoLogic::m_PreliminaryRankItem
	GameObject_t9 * ___m_PreliminaryRankItem;
	// UnityEngine.GameObject GuildWarInfoLogic::m_GuidWarScoreRankGird
	GameObject_t9 * ___m_GuidWarScoreRankGird;
	// UnityEngine.GameObject GuildWarInfoLogic::m_GuidWarKillRankGird
	GameObject_t9 * ___m_GuidWarKillRankGird;
	// UnityEngine.GameObject GuildWarInfoLogic::m_FightGird
	GameObject_t9 * ___m_FightGird;
	// UnityEngine.GameObject GuildWarInfoLogic::m_WinGird
	GameObject_t9 * ___m_WinGird;
	// UnityEngine.GameObject GuildWarInfoLogic::m_PreliminaryRankGird
	GameObject_t9 * ___m_PreliminaryRankGird;
	// UIGrid GuildWarInfoLogic::m_GroupFightGird
	UIGrid_t1199 * ___m_GroupFightGird;
	// UIGrid GuildWarInfoLogic::m_GroupWinGird
	UIGrid_t1199 * ___m_GroupWinGird;
	// UILabel GuildWarInfoLogic::m_GuildWarScoreLable
	UILabel_t1176 * ___m_GuildWarScoreLable;
	// UILabel GuildWarInfoLogic::m_GuildWarTimesLable
	UILabel_t1176 * ___m_GuildWarTimesLable;
	// UILabel GuildWarInfoLogic::m_GuildWarKillerNumLable
	UILabel_t1176 * ___m_GuildWarKillerNumLable;
	// UILabel GuildWarInfoLogic::m_MyGuildPointScoreLable
	UILabel_t1176 * ___m_MyGuildPointScoreLable;
	// UILabel GuildWarInfoLogic::m_FightGuildPointScoreLable
	UILabel_t1176 * ___m_FightGuildPointScoreLable;
	// UILabel GuildWarInfoLogic::m_MyGuildNameLabel
	UILabel_t1176 * ___m_MyGuildNameLabel;
	// UILabel GuildWarInfoLogic::m_FightGuildNameLabel
	UILabel_t1176 * ___m_FightGuildNameLabel;
	// UnityEngine.GameObject GuildWarInfoLogic::m_PointHelpInfo
	GameObject_t9 * ___m_PointHelpInfo;
	// UILabel GuildWarInfoLogic::m_RoundInfoLable
	UILabel_t1176 * ___m_RoundInfoLable;
	// UnityEngine.GameObject[] GuildWarInfoLogic::m_PointGameObj
	GameObjectU5BU5D_t1200* ___m_PointGameObj;
	// GuildWarPonitItemLogic[] GuildWarInfoLogic::m_PointItem
	GuildWarPonitItemLogicU5BU5D_t1467* ___m_PointItem;
	// GuildWarScoreRankItemLogic[] GuildWarInfoLogic::m_ScoreRankItemLogic
	GuildWarScoreRankItemLogicU5BU5D_t1469* ___m_ScoreRankItemLogic;
	// GuildWarKillRankItemLogic[] GuildWarInfoLogic::m_KillRankItemLoigc
	GuildWarKillRankItemLogicU5BU5D_t1471* ___m_KillRankItemLoigc;
	// GuildWarFightGroupItemLogic[] GuildWarInfoLogic::m_FightGroupItemLogic
	GuildWarFightGroupItemLogicU5BU5D_t1473* ___m_FightGroupItemLogic;
	// GuildWarWinGroupItemLogic[] GuildWarInfoLogic::m_WinGroupItemLogic
	GuildWarWinGroupItemLogicU5BU5D_t1474* ___m_WinGroupItemLogic;
	// GuildWarRankItemLogic[] GuildWarInfoLogic::m_GuildWarRankItemLogic
	GuildWarRankItemLogicU5BU5D_t1476* ___m_GuildWarRankItemLogic;
	// System.Int32 GuildWarInfoLogic::m_curWarType
	int32_t ___m_curWarType;
	// System.Int32 GuildWarInfoLogic::m_curWarSchedule
	int32_t ___m_curWarSchedule;
	// System.Single GuildWarInfoLogic::m_fLastPointInfoUpdateTime
	float ___m_fLastPointInfoUpdateTime;
	// System.Boolean GuildWarInfoLogic::m_bIsLoadItem
	bool ___m_bIsLoadItem;
};
struct GuildWarInfoLogic_t1478_StaticFields{
	// GuildWarInfoLogic GuildWarInfoLogic::m_Instance
	GuildWarInfoLogic_t1478 * ___m_Instance;
};
