#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// PlayerHeadInfo
struct PlayerHeadInfo_t1654;
// System.String
struct String_t;
// Obj_Mount
struct Obj_Mount_t4395;
// Obj_FlyWing
struct Obj_FlyWing_t4493;
// Games.LogicObj.Obj_Character
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_Character.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655  : public Obj_Character_t1772
{
	// UnityEngine.GameObject Games.LogicObj.Obj_OtherPlayer::LWeaponObject
	GameObject_t9 * ___LWeaponObject;
	// UnityEngine.GameObject Games.LogicObj.Obj_OtherPlayer::RWeaponObject
	GameObject_t9 * ___RWeaponObject;
	// System.UInt64 Games.LogicObj.Obj_OtherPlayer::m_GUID
	uint64_t ___m_GUID;
	// System.UInt64 Games.LogicObj.Obj_OtherPlayer::m_GuildGUID
	uint64_t ___m_GuildGUID;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_fellowID
	int32_t ___m_fellowID;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_bIsWildEnemyForMainPlayer
	bool ___m_bIsWildEnemyForMainPlayer;
	// PlayerHeadInfo Games.LogicObj.Obj_OtherPlayer::m_playerHeadInfo
	PlayerHeadInfo_t1654 * ___m_playerHeadInfo;
	// System.String Games.LogicObj.Obj_OtherPlayer::m_strTitleInvestitive
	String_t* ___m_strTitleInvestitive;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_CurTitleID
	int32_t ___m_CurTitleID;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_nProfession
	int32_t ___m_nProfession;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_nVipCost
	int32_t ___m_nVipCost;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_nOtherCombatValue
	int32_t ___m_nOtherCombatValue;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_nPkModle
	int32_t ___m_nPkModle;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_bIsInMainPlayerPKList
	bool ___m_bIsInMainPlayerPKList;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_bShowRideOnEffect
	bool ___m_bShowRideOnEffect;
	// Obj_Mount Games.LogicObj.Obj_OtherPlayer::m_MountObj
	Obj_Mount_t4395 * ___m_MountObj;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_MountID
	int32_t ___m_MountID;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_bIsNeedUnMount
	bool ___m_bIsNeedUnMount;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_ModelVisualID
	int32_t ___m_ModelVisualID;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_CurWeaponDataID
	int32_t ___m_CurWeaponDataID;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_WeaponEffectGem
	int32_t ___m_WeaponEffectGem;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_UpdateModelWait
	bool ___m_UpdateModelWait;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_UpdateWeaponWait
	bool ___m_UpdateWeaponWait;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_UpdateWeaponGemWait
	bool ___m_UpdateWeaponGemWait;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_bQingGongState
	bool ___m_bQingGongState;
	// System.Single Games.LogicObj.Obj_OtherPlayer::m_DistanceValue
	float ___m_DistanceValue;
	// UnityEngine.Vector3 Games.LogicObj.Obj_OtherPlayer::m_QingGongSrc
	Vector3_t121  ___m_QingGongSrc;
	// UnityEngine.Vector3 Games.LogicObj.Obj_OtherPlayer::m_QingGongDst
	Vector3_t121  ___m_QingGongDst;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_nQingGongType
	int32_t ___m_nQingGongType;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_nQingGongPointID
	int32_t ___m_nQingGongPointID;
	// System.Single Games.LogicObj.Obj_OtherPlayer::m_fQingGongMaxHeight
	float ___m_fQingGongMaxHeight;
	// System.Single Games.LogicObj.Obj_OtherPlayer::m_fQingGongTime
	float ___m_fQingGongTime;
	// System.Single Games.LogicObj.Obj_OtherPlayer::m_fQingGongBeginTime
	float ___m_fQingGongBeginTime;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_nPaoShangState
	int32_t ___m_nPaoShangState;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_bIsInTeamFollow
	bool ___m_bIsInTeamFollow;
	// System.String Games.LogicObj.Obj_OtherPlayer::m_lastMainObjUrl
	String_t* ___m_lastMainObjUrl;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::nCurChangeState
	int32_t ___nCurChangeState;
	// UnityEngine.GameObject Games.LogicObj.Obj_OtherPlayer::NormalGameObject
	GameObject_t9 * ___NormalGameObject;
	// UnityEngine.GameObject Games.LogicObj.Obj_OtherPlayer::ChangeGameObject
	GameObject_t9 * ___ChangeGameObject;
	// System.Boolean Games.LogicObj.Obj_OtherPlayer::m_IsLoadingModel
	bool ___m_IsLoadingModel;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_WaitChangeState
	int32_t ___m_WaitChangeState;
	// Obj_FlyWing Games.LogicObj.Obj_OtherPlayer::m_Obj_FlyWing
	Obj_FlyWing_t4493 * ___m_Obj_FlyWing;
	// System.Int32 Games.LogicObj.Obj_OtherPlayer::m_OtherPlayerFlyWingModelId
	int32_t ___m_OtherPlayerFlyWingModelId;
};
