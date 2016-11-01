#pragma once
#include <stdint.h>
// ThirdPersonController
struct ThirdPersonController_t4487;
// PlayerData
struct PlayerData_t2179;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.LogicObj.Obj_Client
struct Obj_Client_t4473;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// Games.LogicObj.Obj_OtherPlayer
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_OtherPlayer.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732  : public Obj_OtherPlayer_t1655
{
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_BeforeChangeModeAnimId
	int32_t ___m_BeforeChangeModeAnimId;
	// ThirdPersonController Games.LogicObj.Obj_MainPlayer::m_Thirdcontroller
	ThirdPersonController_t4487 * ___m_Thirdcontroller;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::m_CurUseMountItemGuid
	uint64_t ___m_CurUseMountItemGuid;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::isJoyMoving
	bool ___isJoyMoving;
	// System.Single Games.LogicObj.Obj_MainPlayer::LastHeartBeatTime
	float ___LastHeartBeatTime;
	// System.Single Games.LogicObj.Obj_MainPlayer::SendNetTime
	float ___SendNetTime;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_NetDelayTime
	float ___m_NetDelayTime;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_IntervalTime
	float ___m_IntervalTime;
	// System.Single Games.LogicObj.Obj_MainPlayer::NetSpeed
	float ___NetSpeed;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::isFirstUseCrash
	bool ___isFirstUseCrash;
	// System.Single Games.LogicObj.Obj_MainPlayer::tempTime
	float ___tempTime;
	// UnityEngine.Vector3 Games.LogicObj.Obj_MainPlayer::tempVector3
	Vector3_t121  ___tempVector3;
	// PlayerData Games.LogicObj.Obj_MainPlayer::m_playDataTool
	PlayerData_t2179 * ___m_playDataTool;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fLastSyncPosTime
	float ___m_fLastSyncPosTime;
	// UnityEngine.Vector3 Games.LogicObj.Obj_MainPlayer::m_fLastSyncPos
	Vector3_t121  ___m_fLastSyncPos;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::hasSendPos
	bool ___hasSendPos;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_flastforceSynPosTime
	float ___m_flastforceSynPosTime;
	// Games.LogicObj.Obj_Character Games.LogicObj.Obj_MainPlayer::m_selectTarget
	Obj_Character_t1772 * ___m_selectTarget;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nCurFellowObjId
	int32_t ___m_nCurFellowObjId;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::m_nCurrFellowGuid
	uint64_t ___m_nCurrFellowGuid;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_lastLevel
	int32_t ___m_lastLevel;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nReliveEntryTime
	int32_t ___m_nReliveEntryTime;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bIsInModelStory
	bool ___m_bIsInModelStory;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bIsNoMove
	bool ___m_bIsNoMove;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_ModelStoryID
	int32_t ___m_ModelStoryID;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_SpcialAnimationID
	int32_t ___m_SpcialAnimationID;
	// Games.LogicObj.Obj_Client Games.LogicObj.Obj_MainPlayer::m_SpcicalClient1
	Obj_Client_t4473 * ___m_SpcicalClient1;
	// Games.LogicObj.Obj_Client Games.LogicObj.Obj_MainPlayer::m_SpcicalClient2
	Obj_Client_t4473 * ___m_SpcicalClient2;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nCopySceneId
	int32_t ___m_nCopySceneId;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nCopySceneSingle
	int32_t ___m_nCopySceneSingle;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nCopySceneDifficult
	int32_t ___m_nCopySceneDifficult;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_StaminaCoutDownTimer
	float ___m_StaminaCoutDownTimer;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bNeedRequestMonthMultiple
	bool ___m_bNeedRequestMonthMultiple;
	// UnityEngine.Vector2 Games.LogicObj.Obj_MainPlayer::m_FourVillainAutoCombatTargetPos
	Vector2_t12  ___m_FourVillainAutoCombatTargetPos;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_curMountSoundId
	int32_t ___m_curMountSoundId;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_isPlayerMountStartMoveSound
	bool ___m_isPlayerMountStartMoveSound;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nAutoPickUp
	int32_t ___m_nAutoPickUp;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bAutoInviteTeamAccept
	bool ___m_bAutoInviteTeamAccept;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bAutoJoinTeamAccept
	bool ___m_bAutoJoinTeamAccept;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bAutoActivityAccept
	bool ___m_bAutoActivityAccept;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fAutoHpPercent
	float ___m_fAutoHpPercent;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nAutoHpID
	int32_t ___m_nAutoHpID;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fAutoMpPercent
	float ___m_fAutoMpPercent;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nAutoMpID
	int32_t ___m_nAutoMpID;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bAutoBuyDrug
	bool ___m_bAutoBuyDrug;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bIsSelectDrug
	bool ___m_bIsSelectDrug;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::m_nAutoEquipGuid
	uint64_t ___m_nAutoEquipGuid;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nAutoNotice
	int32_t ___m_nAutoNotice;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nAutoMovetoQGPointId
	int32_t ___m_nAutoMovetoQGPointId;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::m_nMpDrugGUID
	uint64_t ___m_nMpDrugGUID;
	// UnityEngine.Vector3 Games.LogicObj.Obj_MainPlayer::m_AutoFightPointVec
	Vector3_t121  ___m_AutoFightPointVec;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nCopySceneExitTime
	int32_t ___m_nCopySceneExitTime;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nAutoSceneId
	int32_t ___m_nAutoSceneId;
	// UnityEngine.Vector3 Games.LogicObj.Obj_MainPlayer::m_AutoPos
	Vector3_t121  ___m_AutoPos;
	// System.Int32[] Games.LogicObj.Obj_MainPlayer::m_AutoSelSkillID
	Int32U5BU5D_t116* ___m_AutoSelSkillID;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bInCombat
	bool ___m_bInCombat;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fLastLeaveCombatTime
	float ___m_fLastLeaveCombatTime;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nCurPressSkillId
	int32_t ___m_nCurPressSkillId;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nHitPoint
	int32_t ___m_nHitPoint;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fLastHitPointTime
	float ___m_fLastHitPointTime;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fLastClickAttackBtTime
	float ___m_fLastClickAttackBtTime;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bNeedRequestGuildInfo
	bool ___m_bNeedRequestGuildInfo;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bNeedRequestGuildList
	bool ___m_bNeedRequestGuildList;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bShowGuildNewReserveFlag
	bool ___m_bShowGuildNewReserveFlag;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::m_CacheChangeMasterGuid
	uint64_t ___m_CacheChangeMasterGuid;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::m_CacheKickMemberGuid
	uint64_t ___m_CacheKickMemberGuid;
	// System.Collections.Generic.List`1<System.UInt64> Games.LogicObj.Obj_MainPlayer::m_approverGuid
	List_1_t1393 * ___m_approverGuid;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_jobID
	int32_t ___m_jobID;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bNeedRequestMasterInfo
	bool ___m_bNeedRequestMasterInfo;
	// System.Boolean Games.LogicObj.Obj_MainPlayer::m_bNeedRequestMasterList
	bool ___m_bNeedRequestMasterList;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::m_NewTeamMemberBuffer
	uint64_t ___m_NewTeamMemberBuffer;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_nFollowServerID
	int32_t ___m_nFollowServerID;
	// Games.LogicObj.Obj_Character Games.LogicObj.Obj_MainPlayer::m_followObjChar
	Obj_Character_t1772 * ___m_followObjChar;
	// System.UInt64 Games.LogicObj.Obj_MainPlayer::<DuelTargetGuid>k__BackingField
	uint64_t ___U3CDuelTargetGuidU3Ek__BackingField;
};
struct Obj_MainPlayer_t1732_StaticFields{
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fSyncPosTimeInterval
	float ___m_fSyncPosTimeInterval;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::c_MultipleRequestCoolDown
	int32_t ___c_MultipleRequestCoolDown;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::c_GuildRequestCoolDown
	int32_t ___c_GuildRequestCoolDown;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::c_MasterRequestCoolDown
	int32_t ___c_MasterRequestCoolDown;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_originalModelID
	int32_t ___m_originalModelID;
	// System.Int32 Games.LogicObj.Obj_MainPlayer::m_changeModelID
	int32_t ___m_changeModelID;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fTimeSecond
	float ___m_fTimeSecond;
	// System.Single Games.LogicObj.Obj_MainPlayer::m_fAutoTimeSecond
	float ___m_fAutoTimeSecond;
};
