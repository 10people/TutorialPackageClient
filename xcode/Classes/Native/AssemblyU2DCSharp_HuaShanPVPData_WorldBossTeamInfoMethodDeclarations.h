#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HuaShanPVPData/WorldBossTeamInfo
struct WorldBossTeamInfo_t1950;
struct WorldBossTeamInfo_t1950_marshaled;
// System.String
struct String_t;

// System.Void HuaShanPVPData/WorldBossTeamInfo::.ctor(System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void WorldBossTeamInfo__ctor_m34695 (WorldBossTeamInfo_t1950 * __this, int32_t ____id, String_t* ____name, int32_t ____score, int32_t ____pos, int32_t ____cd, int32_t ____per, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WorldBossTeamInfo_t1950_marshal(const WorldBossTeamInfo_t1950& unmarshaled, WorldBossTeamInfo_t1950_marshaled& marshaled);
void WorldBossTeamInfo_t1950_marshal_back(const WorldBossTeamInfo_t1950_marshaled& marshaled, WorldBossTeamInfo_t1950& unmarshaled);
void WorldBossTeamInfo_t1950_marshal_cleanup(WorldBossTeamInfo_t1950_marshaled& marshaled);
