#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// UpdateEdgeGlow
struct UpdateEdgeGlow_t4464;
// Games.LogicObj.Obj_Character/FlyStateData
struct FlyStateData_t4463;
// Games.SkillModle.SkillCore
struct SkillCore_t4465;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<Games.SkillModle.MultiShowDamageBoard>
struct List_1_t4466;
// Games.AI_Logic.AIController
struct AIController_t4467;
// AutoMove
struct AutoMove_t4468;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t4469;
// UniformAcceleratedMotion
struct UniformAcceleratedMotion_t1369;
// Games.Events.GameEvent
struct GameEvent_t2137;
// UnityEngine.Transform
struct Transform_t78;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t1252;
// Games.Animation_Modle.AnimationLogic
struct AnimationLogic_t4470;
// BaseAttr
struct BaseAttr_t4471;
// BattleSoulMaker
struct BattleSoulMaker_t4472;
// Games.LogicObj.Obj
#include "AssemblyU2DCSharp_Games_LogicObj_Obj.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_ANI.h"
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772  : public Obj_t2130
{
	// UpdateEdgeGlow Games.LogicObj.Obj_Character::NpcEdgeGlow
	UpdateEdgeGlow_t4464 * ___NpcEdgeGlow;
	// System.Boolean Games.LogicObj.Obj_Character::IsSkillHurt
	bool ___IsSkillHurt;
	// System.Boolean Games.LogicObj.Obj_Character::IsHitPoint
	bool ___IsHitPoint;
	// Games.LogicObj.Obj_Character/FlyStateData Games.LogicObj.Obj_Character::flyStateData
	FlyStateData_t4463 * ___flyStateData;
	// System.Int32 Games.LogicObj.Obj_Character::m_BindParent
	int32_t ___m_BindParent;
	// System.Collections.Generic.List`1<System.Int32> Games.LogicObj.Obj_Character::m_BindChildren
	List_1_t90 * ___m_BindChildren;
	// Games.SkillModle.SkillCore Games.LogicObj.Obj_Character::m_SkillCore
	SkillCore_t4465 * ___m_SkillCore;
	// System.Int32 Games.LogicObj.Obj_Character::m_curUseSkillId
	int32_t ___m_curUseSkillId;
	// System.Boolean Games.LogicObj.Obj_Character::m_isAutoLife
	bool ___m_isAutoLife;
	// System.Int16 Games.LogicObj.Obj_Character::m_nAutoLifeTime
	int16_t ___m_nAutoLifeTime;
	// UnityEngine.GameObject Games.LogicObj.Obj_Character::m_HeadInfoBoard
	GameObject_t9 * ___m_HeadInfoBoard;
	// UILabel Games.LogicObj.Obj_Character::m_NameBoard
	UILabel_t1176 * ___m_NameBoard;
	// System.Int32 Games.LogicObj.Obj_Character::m_NameBoardIndex
	int32_t ___m_NameBoardIndex;
	// System.Single Games.LogicObj.Obj_Character::m_DeltaHeight
	float ___m_DeltaHeight;
	// System.Collections.Generic.List`1<Games.SkillModle.MultiShowDamageBoard> Games.LogicObj.Obj_Character::m_MultiShowDamageInfo
	List_1_t4466 * ___m_MultiShowDamageInfo;
	// System.Boolean Games.LogicObj.Obj_Character::m_bCanMove
	bool ___m_bCanMove;
	// System.Int32 Games.LogicObj.Obj_Character::m_nReputation
	int32_t ___m_nReputation;
	// Games.AI_Logic.AIController Games.LogicObj.Obj_Character::m_aiController
	AIController_t4467 * ___m_aiController;
	// AutoMove Games.LogicObj.Obj_Character::m_autoMoveCache
	AutoMove_t4468 * ___m_autoMoveCache;
	// System.Boolean Games.LogicObj.Obj_Character::IsChangingMainPlayer
	bool ___IsChangingMainPlayer;
	// System.Boolean Games.LogicObj.Obj_Character::IsChangedMainPlayer
	bool ___IsChangedMainPlayer;
	// System.Boolean Games.LogicObj.Obj_Character::m_bVisible
	bool ___m_bVisible;
	// System.Boolean Games.LogicObj.Obj_Character::m_bModelInViewPort
	bool ___m_bModelInViewPort;
	// System.Single Games.LogicObj.Obj_Character::m_fMoveSpeed
	float ___m_fMoveSpeed;
	// System.Boolean Games.LogicObj.Obj_Character::m_bIsMoving
	bool ___m_bIsMoving;
	// System.Boolean Games.LogicObj.Obj_Character::m_bIsTracing
	bool ___m_bIsTracing;
	// UnityEngine.Vector3 Games.LogicObj.Obj_Character::m_vecTargetPos
	Vector3_t121  ___m_vecTargetPos;
	// UnityEngine.NavMeshAgent Games.LogicObj.Obj_Character::m_NavAgent
	NavMeshAgent_t4469 * ___m_NavAgent;
	// System.Boolean Games.LogicObj.Obj_Character::m_bIsMoveToNoFaceTo
	bool ___m_bIsMoveToNoFaceTo;
	// UniformAcceleratedMotion Games.LogicObj.Obj_Character::m_AcceleratedMotion
	UniformAcceleratedMotion_t1369 * ___m_AcceleratedMotion;
	// System.Boolean Games.LogicObj.Obj_Character::m_EnableMovingRotation
	bool ___m_EnableMovingRotation;
	// UnityEngine.GameObject Games.LogicObj.Obj_Character::m_MoveTarget
	GameObject_t9 * ___m_MoveTarget;
	// System.Single Games.LogicObj.Obj_Character::m_fStopRange
	float ___m_fStopRange;
	// Games.Events.GameEvent Games.LogicObj.Obj_Character::m_MoveOverEvent
	GameEvent_t2137 * ___m_MoveOverEvent;
	// UnityEngine.Vector3 Games.LogicObj.Obj_Character::m_LastPosition
	Vector3_t121  ___m_LastPosition;
	// System.Single Games.LogicObj.Obj_Character::m_LastPositionTime
	float ___m_LastPositionTime;
	// UnityEngine.Transform Games.LogicObj.Obj_Character::m_moveTargetTrans
	Transform_t78 * ___m_moveTargetTrans;
	// System.Int32 Games.LogicObj.Obj_Character::m_Tag
	int32_t ___m_Tag;
	// System.Boolean Games.LogicObj.Obj_Character::m_bInDizzy
	bool ___m_bInDizzy;
	// Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE Games.LogicObj.Obj_Character::m_CurObjAnimState
	int32_t ___m_CurObjAnimState;
	// System.String Games.LogicObj.Obj_Character::m_AnimationFilePath
	String_t* ___m_AnimationFilePath;
	// System.Single Games.LogicObj.Obj_Character::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed;
	// UnityEngine.Animation Games.LogicObj.Obj_Character::m_Objanimation
	Animation_t1252 * ___m_Objanimation;
	// Games.Animation_Modle.AnimationLogic Games.LogicObj.Obj_Character::m_AnimLogic
	AnimationLogic_t4470 * ___m_AnimLogic;
	// System.Single Games.LogicObj.Obj_Character::m_fLastPlayHitSoundTime
	float ___m_fLastPlayHitSoundTime;
	// System.Single Games.LogicObj.Obj_Character::m_fLastPlayDamageSoundTime
	float ___m_fLastPlayDamageSoundTime;
	// System.Single Games.LogicObj.Obj_Character::m_fAttackFlySpeed
	float ___m_fAttackFlySpeed;
	// System.Single Games.LogicObj.Obj_Character::m_fAttackFlyTime
	float ___m_fAttackFlyTime;
	// System.Single Games.LogicObj.Obj_Character::m_fAttackFlyMaxHight
	float ___m_fAttackFlyMaxHight;
	// System.Single Games.LogicObj.Obj_Character::m_fAttckFlyBeginTime
	float ___m_fAttckFlyBeginTime;
	// UnityEngine.Vector3 Games.LogicObj.Obj_Character::m_VecAttcakFlySrc
	Vector3_t121  ___m_VecAttcakFlySrc;
	// UnityEngine.Vector3 Games.LogicObj.Obj_Character::m_VecAttcakFlyDst
	Vector3_t121  ___m_VecAttcakFlyDst;
	// System.Boolean Games.LogicObj.Obj_Character::m_bIsCanAttckFly
	bool ___m_bIsCanAttckFly;
	// BaseAttr Games.LogicObj.Obj_Character::m_BaseAttr
	BaseAttr_t4471 * ___m_BaseAttr;
	// System.Boolean Games.LogicObj.Obj_Character::m_bIsLightState
	bool ___m_bIsLightState;
	// System.Single Games.LogicObj.Obj_Character::m_fLightStartTime
	float ___m_fLightStartTime;
	// System.Single Games.LogicObj.Obj_Character::m_fLightLastTime
	float ___m_fLightLastTime;
	// BattleSoulMaker Games.LogicObj.Obj_Character::m_battleSoul
	BattleSoulMaker_t4472 * ___m_battleSoul;
	// System.Single Games.LogicObj.Obj_Character::m_fTotalLightHightRefix
	float ___m_fTotalLightHightRefix;
	// System.Single Games.LogicObj.Obj_Character::m_fLightWantHight
	float ___m_fLightWantHight;
	// System.Boolean Games.LogicObj.Obj_Character::m_bTeleMoveInLight
	bool ___m_bTeleMoveInLight;
	// UnityEngine.Vector3 Games.LogicObj.Obj_Character::m_vecLightTelePos
	Vector3_t121  ___m_vecLightTelePos;
	// UnityEngine.Vector3 Games.LogicObj.Obj_Character::m_LightSkillTargetPos
	Vector3_t121  ___m_LightSkillTargetPos;
};
struct Obj_Character_t1772_StaticFields{
	// System.Collections.Generic.List`1<System.Int32> Games.LogicObj.Obj_Character::s_hasPlayedBornEffectObjIdList
	List_1_t90 * ___s_hasPlayedBornEffectObjIdList;
	// System.Single Games.LogicObj.Obj_Character::s_MovingCheckInterval
	float ___s_MovingCheckInterval;
};
