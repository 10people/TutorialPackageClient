#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_REQ_TEAM_LEAVE
struct CG_REQ_TEAM_LEAVE_t2965;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_REQ_TEAM_LEAVE::.ctor()
 void CG_REQ_TEAM_LEAVE__ctor_m17026 (CG_REQ_TEAM_LEAVE_t2965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_LEAVE::get_HasTeamID()
 bool CG_REQ_TEAM_LEAVE_get_HasTeamID_m17027 (CG_REQ_TEAM_LEAVE_t2965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQ_TEAM_LEAVE::get_TeamID()
 int32_t CG_REQ_TEAM_LEAVE_get_TeamID_m17028 (CG_REQ_TEAM_LEAVE_t2965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_LEAVE::set_TeamID(System.Int32)
 void CG_REQ_TEAM_LEAVE_set_TeamID_m17029 (CG_REQ_TEAM_LEAVE_t2965 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_LEAVE::SetTeamID(System.Int32)
 void CG_REQ_TEAM_LEAVE_SetTeamID_m17030 (CG_REQ_TEAM_LEAVE_t2965 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_LEAVE::get_HasNewTeamMember()
 bool CG_REQ_TEAM_LEAVE_get_HasNewTeamMember_m17031 (CG_REQ_TEAM_LEAVE_t2965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_REQ_TEAM_LEAVE::get_NewTeamMember()
 uint64_t CG_REQ_TEAM_LEAVE_get_NewTeamMember_m17032 (CG_REQ_TEAM_LEAVE_t2965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_LEAVE::set_NewTeamMember(System.UInt64)
 void CG_REQ_TEAM_LEAVE_set_NewTeamMember_m17033 (CG_REQ_TEAM_LEAVE_t2965 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_LEAVE::SetNewTeamMember(System.UInt64)
 void CG_REQ_TEAM_LEAVE_SetNewTeamMember_m17034 (CG_REQ_TEAM_LEAVE_t2965 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQ_TEAM_LEAVE::SerializedSize()
 int32_t CG_REQ_TEAM_LEAVE_SerializedSize_m17035 (CG_REQ_TEAM_LEAVE_t2965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_LEAVE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_REQ_TEAM_LEAVE_WriteTo_m17036 (CG_REQ_TEAM_LEAVE_t2965 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_REQ_TEAM_LEAVE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_REQ_TEAM_LEAVE_MergeFrom_m17037 (CG_REQ_TEAM_LEAVE_t2965 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_LEAVE::IsInitialized()
 bool CG_REQ_TEAM_LEAVE_IsInitialized_m17038 (CG_REQ_TEAM_LEAVE_t2965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
