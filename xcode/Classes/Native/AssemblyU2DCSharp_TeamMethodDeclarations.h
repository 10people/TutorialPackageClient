#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Team
struct Team_t4832;
// TeamMember[]
struct TeamMemberU5BU5D_t4831;
// GC_TEAM_SYNC_TEAMINFO
struct GC_TEAM_SYNC_TEAMINFO_t2969;
// TeamMember
struct TeamMember_t1543;

// System.Void Team::.ctor()
 void Team__ctor_m34380 (Team_t4832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Team::CleanUp()
 void Team_CleanUp_m34381 (Team_t4832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Team::UpdateTeamInfo(GC_TEAM_SYNC_TEAMINFO)
 void Team_UpdateTeamInfo_m34382 (Team_t4832 * __this, GC_TEAM_SYNC_TEAMINFO_t2969 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Team::UpdateMember(System.Int32,TeamMember,System.Boolean)
 void Team_UpdateMember_m34383 (Team_t4832 * __this, int32_t ___nIndex, TeamMember_t1543 * ___member, bool ___bJustUpdateHP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TeamMember Team::GetTeamMember(System.Int32)
 TeamMember_t1543 * Team_GetTeamMember_m34384 (Team_t4832 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Team::IsFull()
 bool Team_IsFull_m34385 (Team_t4832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Team::GetTeamMemberCount()
 int32_t Team_GetTeamMemberCount_m34386 (Team_t4832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Team::get_TeamID()
 int32_t Team_get_TeamID_m34387 (Team_t4832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Team::set_TeamID(System.Int32)
 void Team_set_TeamID_m34388 (Team_t4832 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TeamMember[] Team::get_teamMember()
 TeamMemberU5BU5D_t4831* Team_get_teamMember_m34389 (Team_t4832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Team::set_teamMember(TeamMember[])
 void Team_set_teamMember_m34390 (Team_t4832 * __this, TeamMemberU5BU5D_t4831* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
