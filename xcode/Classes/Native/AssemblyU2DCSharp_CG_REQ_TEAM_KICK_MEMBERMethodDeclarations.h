#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_REQ_TEAM_KICK_MEMBER
struct CG_REQ_TEAM_KICK_MEMBER_t2966;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_REQ_TEAM_KICK_MEMBER::.ctor()
 void CG_REQ_TEAM_KICK_MEMBER__ctor_m17039 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_KICK_MEMBER::get_HasTeamMemberGuid()
 bool CG_REQ_TEAM_KICK_MEMBER_get_HasTeamMemberGuid_m17040 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_REQ_TEAM_KICK_MEMBER::get_TeamMemberGuid()
 uint64_t CG_REQ_TEAM_KICK_MEMBER_get_TeamMemberGuid_m17041 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_KICK_MEMBER::set_TeamMemberGuid(System.UInt64)
 void CG_REQ_TEAM_KICK_MEMBER_set_TeamMemberGuid_m17042 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_KICK_MEMBER::SetTeamMemberGuid(System.UInt64)
 void CG_REQ_TEAM_KICK_MEMBER_SetTeamMemberGuid_m17043 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQ_TEAM_KICK_MEMBER::SerializedSize()
 int32_t CG_REQ_TEAM_KICK_MEMBER_SerializedSize_m17044 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_KICK_MEMBER::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_REQ_TEAM_KICK_MEMBER_WriteTo_m17045 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_REQ_TEAM_KICK_MEMBER::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_REQ_TEAM_KICK_MEMBER_MergeFrom_m17046 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_KICK_MEMBER::IsInitialized()
 bool CG_REQ_TEAM_KICK_MEMBER_IsInitialized_m17047 (CG_REQ_TEAM_KICK_MEMBER_t2966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
