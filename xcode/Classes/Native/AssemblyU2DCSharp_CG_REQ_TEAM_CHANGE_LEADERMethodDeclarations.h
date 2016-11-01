#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_REQ_TEAM_CHANGE_LEADER
struct CG_REQ_TEAM_CHANGE_LEADER_t2967;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_REQ_TEAM_CHANGE_LEADER::.ctor()
 void CG_REQ_TEAM_CHANGE_LEADER__ctor_m17048 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_CHANGE_LEADER::get_HasTeamMemberGuid()
 bool CG_REQ_TEAM_CHANGE_LEADER_get_HasTeamMemberGuid_m17049 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_REQ_TEAM_CHANGE_LEADER::get_TeamMemberGuid()
 uint64_t CG_REQ_TEAM_CHANGE_LEADER_get_TeamMemberGuid_m17050 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_CHANGE_LEADER::set_TeamMemberGuid(System.UInt64)
 void CG_REQ_TEAM_CHANGE_LEADER_set_TeamMemberGuid_m17051 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_CHANGE_LEADER::SetTeamMemberGuid(System.UInt64)
 void CG_REQ_TEAM_CHANGE_LEADER_SetTeamMemberGuid_m17052 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQ_TEAM_CHANGE_LEADER::SerializedSize()
 int32_t CG_REQ_TEAM_CHANGE_LEADER_SerializedSize_m17053 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_CHANGE_LEADER::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_REQ_TEAM_CHANGE_LEADER_WriteTo_m17054 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_REQ_TEAM_CHANGE_LEADER::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_REQ_TEAM_CHANGE_LEADER_MergeFrom_m17055 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_CHANGE_LEADER::IsInitialized()
 bool CG_REQ_TEAM_CHANGE_LEADER_IsInitialized_m17056 (CG_REQ_TEAM_CHANGE_LEADER_t2967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
