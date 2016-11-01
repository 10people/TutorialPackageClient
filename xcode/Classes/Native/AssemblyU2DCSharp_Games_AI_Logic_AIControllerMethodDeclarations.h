#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.AI_Logic.AIController
struct AIController_t4467;
// Games.AI_Logic.BaseAI
struct BaseAI_t4518;
// Games.AI_Logic.Threat
struct Threat_t4519;

// System.Void Games.AI_Logic.AIController::.ctor()
 void AIController__ctor_m32393 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::.cctor()
 void AIController__cctor_m32394 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::get_NormalAI()
 BaseAI_t4518 * AIController_get_NormalAI_m32395 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::set_NormalAI(Games.AI_Logic.BaseAI)
 void AIController_set_NormalAI_m32396 (AIController_t4467 * __this, BaseAI_t4518 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::get_CombatAI()
 BaseAI_t4518 * AIController_get_CombatAI_m32397 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::set_CombatAI(Games.AI_Logic.BaseAI)
 void AIController_set_CombatAI_m32398 (AIController_t4467 * __this, BaseAI_t4518 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::get_DeadAI()
 BaseAI_t4518 * AIController_get_DeadAI_m32399 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::set_DeadAI(Games.AI_Logic.BaseAI)
 void AIController_set_DeadAI_m32400 (AIController_t4467 * __this, BaseAI_t4518 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.BaseAI Games.AI_Logic.AIController::get_CurrentAIState()
 BaseAI_t4518 * AIController_get_CurrentAIState_m32401 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::set_CurrentAIState(Games.AI_Logic.BaseAI)
 void AIController_set_CurrentAIState_m32402 (AIController_t4467 * __this, BaseAI_t4518 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AIController::get_CombatFlag()
 bool AIController_get_CombatFlag_m32403 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::set_CombatFlag(System.Boolean)
 void AIController_set_CombatFlag_m32404 (AIController_t4467 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.Threat Games.AI_Logic.AIController::get_ThreadInfo()
 Threat_t4519 * AIController_get_ThreadInfo_m32405 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::set_ThreadInfo(Games.AI_Logic.Threat)
 void AIController_set_ThreadInfo_m32406 (AIController_t4467 * __this, Threat_t4519 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::Awake()
 void AIController_Awake_m32407 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::FixedUpdate()
 void AIController_FixedUpdate_m32408 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::SwitchCurrentAI(Games.AI_Logic.BaseAI)
 void AIController_SwitchCurrentAI_m32409 (AIController_t4467 * __this, BaseAI_t4518 * ___ai, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::EnterCombat()
 void AIController_EnterCombat_m32410 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::LeaveCombat()
 void AIController_LeaveCombat_m32411 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::OnAlive()
 void AIController_OnAlive_m32412 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::OnDie()
 void AIController_OnDie_m32413 (AIController_t4467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AIController::OnRest(System.Boolean)
 void AIController_OnRest_m32414 (AIController_t4467 * __this, bool ___bFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AIController::AddAIByStateType(Games.AI_Logic.BaseAI)
 bool AIController_AddAIByStateType_m32415 (AIController_t4467 * __this, BaseAI_t4518 * ___ai, MethodInfo* method) IL2CPP_METHOD_ATTR;
