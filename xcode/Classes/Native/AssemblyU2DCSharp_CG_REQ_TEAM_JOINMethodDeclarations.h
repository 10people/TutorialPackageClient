#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_REQ_TEAM_JOIN
struct CG_REQ_TEAM_JOIN_t2964;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_REQ_TEAM_JOIN::.ctor()
 void CG_REQ_TEAM_JOIN__ctor_m17017 (CG_REQ_TEAM_JOIN_t2964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_JOIN::get_HasTeamMemberGuid()
 bool CG_REQ_TEAM_JOIN_get_HasTeamMemberGuid_m17018 (CG_REQ_TEAM_JOIN_t2964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_REQ_TEAM_JOIN::get_TeamMemberGuid()
 uint64_t CG_REQ_TEAM_JOIN_get_TeamMemberGuid_m17019 (CG_REQ_TEAM_JOIN_t2964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_JOIN::set_TeamMemberGuid(System.UInt64)
 void CG_REQ_TEAM_JOIN_set_TeamMemberGuid_m17020 (CG_REQ_TEAM_JOIN_t2964 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_JOIN::SetTeamMemberGuid(System.UInt64)
 void CG_REQ_TEAM_JOIN_SetTeamMemberGuid_m17021 (CG_REQ_TEAM_JOIN_t2964 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQ_TEAM_JOIN::SerializedSize()
 int32_t CG_REQ_TEAM_JOIN_SerializedSize_m17022 (CG_REQ_TEAM_JOIN_t2964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_JOIN::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_REQ_TEAM_JOIN_WriteTo_m17023 (CG_REQ_TEAM_JOIN_t2964 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_REQ_TEAM_JOIN::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_REQ_TEAM_JOIN_MergeFrom_m17024 (CG_REQ_TEAM_JOIN_t2964 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_JOIN::IsInitialized()
 bool CG_REQ_TEAM_JOIN_IsInitialized_m17025 (CG_REQ_TEAM_JOIN_t2964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
