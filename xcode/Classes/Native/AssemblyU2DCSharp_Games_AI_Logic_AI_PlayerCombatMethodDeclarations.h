#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.AI_Logic.AI_PlayerCombat
struct AI_PlayerCombat_t4524;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Games.AI_Logic.AI_PlayerCombat::.ctor()
 void AI_PlayerCombat__ctor_m32431 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::IsPlayerCombatAI()
 bool AI_PlayerCombat_IsPlayerCombatAI_m32432 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::get_CurUseSkillId()
 int32_t AI_PlayerCombat_get_CurUseSkillId_m32433 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::set_CurUseSkillId(System.Int32)
 void AI_PlayerCombat_set_CurUseSkillId_m32434 (AI_PlayerCombat_t4524 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::get_CurUseSkillStartTime()
 int32_t AI_PlayerCombat_get_CurUseSkillStartTime_m32435 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::set_CurUseSkillStartTime(System.Int32)
 void AI_PlayerCombat_set_CurUseSkillStartTime_m32436 (AI_PlayerCombat_t4524 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::get_IsPlayerControlMove()
 bool AI_PlayerCombat_get_IsPlayerControlMove_m32437 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::set_IsPlayerControlMove(System.Boolean)
 void AI_PlayerCombat_set_IsPlayerControlMove_m32438 (AI_PlayerCombat_t4524 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::get_PlayerUseSkillId()
 int32_t AI_PlayerCombat_get_PlayerUseSkillId_m32439 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::set_PlayerUseSkillId(System.Int32)
 void AI_PlayerCombat_set_PlayerUseSkillId_m32440 (AI_PlayerCombat_t4524 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::Start()
 void AI_PlayerCombat_Start_m32441 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::OnActive()
 void AI_PlayerCombat_OnActive_m32442 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::UpdateAI()
 void AI_PlayerCombat_UpdateAI_m32443 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::IsDisStartPointTooFar(System.Single,UnityEngine.Vector3)
 bool AI_PlayerCombat_IsDisStartPointTooFar_m32444 (AI_PlayerCombat_t4524 * __this, float ___fSkillRadius, Vector3_t121  ___targetObjPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_Character Games.AI_Logic.AI_PlayerCombat::SeleCanAttackTar(System.Single)
 Obj_Character_t1772 * AI_PlayerCombat_SeleCanAttackTar_m32445 (AI_PlayerCombat_t4524 * __this, float ___fSkillRadius, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::SeleSkill()
 int32_t AI_PlayerCombat_SeleSkill_m32446 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::SeleSkillByPriority()
 int32_t AI_PlayerCombat_SeleSkillByPriority_m32447 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::IsNormalSkill(System.Int32)
 bool AI_PlayerCombat_IsNormalSkill_m32448 (AI_PlayerCombat_t4524 * __this, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::GetChangeStateNormalSkillID()
 int32_t AI_PlayerCombat_GetChangeStateNormalSkillID_m32449 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::GetRepeatSkillFirstID(System.Int32)
 int32_t AI_PlayerCombat_GetRepeatSkillFirstID_m32450 (AI_PlayerCombat_t4524 * __this, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_PlayerCombat::GetNextContinueSkillId()
 int32_t AI_PlayerCombat_GetNextContinueSkillId_m32451 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::IsUsingRepeatSkillWithNext()
 bool AI_PlayerCombat_IsUsingRepeatSkillWithNext_m32452 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::CheckTimeUsingNextContinueSkill()
 bool AI_PlayerCombat_CheckTimeUsingNextContinueSkill_m32453 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::CheckNextSkillEffectTimeOver()
 bool AI_PlayerCombat_CheckNextSkillEffectTimeOver_m32454 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_PlayerCombat::IsPlayerBreakRepeatSkill()
 bool AI_PlayerCombat_IsPlayerBreakRepeatSkill_m32455 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_PlayerCombat::ClearPlayerBreakRepeatSkill()
 void AI_PlayerCombat_ClearPlayerBreakRepeatSkill_m32456 (AI_PlayerCombat_t4524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
