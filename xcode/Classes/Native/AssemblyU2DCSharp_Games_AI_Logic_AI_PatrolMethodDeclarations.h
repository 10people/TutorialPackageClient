#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.AI_Logic.AI_Patrol
struct AI_Patrol_t4523;
// Games.AI_Logic.PatrolPoint
struct PatrolPoint_t4522;

// System.Void Games.AI_Logic.AI_Patrol::.ctor()
 void AI_Patrol__ctor_m32421 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_Patrol::get_CurrentPatrolIdx()
 int32_t AI_Patrol_get_CurrentPatrolIdx_m32422 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_Patrol::set_CurrentPatrolIdx(System.Int32)
 void AI_Patrol_set_CurrentPatrolIdx_m32423 (AI_Patrol_t4523 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.PatrolPoint Games.AI_Logic.AI_Patrol::get_patrolPoint()
 PatrolPoint_t4522 * AI_Patrol_get_patrolPoint_m32424 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_Patrol::GotoPatrolPoint(System.Int32)
 int32_t AI_Patrol_GotoPatrolPoint_m32425 (AI_Patrol_t4523 * __this, int32_t ___nPatrolIdx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.AI_Logic.AI_Patrol::GotoNextPatrolPoint()
 int32_t AI_Patrol_GotoNextPatrolPoint_m32426 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.AI_Logic.AI_Patrol::IsReached()
 bool AI_Patrol_IsReached_m32427 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_Patrol::Awake()
 void AI_Patrol_Awake_m32428 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_Patrol::Start()
 void AI_Patrol_Start_m32429 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.AI_Patrol::UpdateAI()
 void AI_Patrol_UpdateAI_m32430 (AI_Patrol_t4523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
