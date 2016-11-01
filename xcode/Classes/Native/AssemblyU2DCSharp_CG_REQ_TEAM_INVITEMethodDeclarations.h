#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_REQ_TEAM_INVITE
struct CG_REQ_TEAM_INVITE_t2963;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_REQ_TEAM_INVITE::.ctor()
 void CG_REQ_TEAM_INVITE__ctor_m17008 (CG_REQ_TEAM_INVITE_t2963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_INVITE::get_HasGuid()
 bool CG_REQ_TEAM_INVITE_get_HasGuid_m17009 (CG_REQ_TEAM_INVITE_t2963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_REQ_TEAM_INVITE::get_Guid()
 uint64_t CG_REQ_TEAM_INVITE_get_Guid_m17010 (CG_REQ_TEAM_INVITE_t2963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_INVITE::set_Guid(System.UInt64)
 void CG_REQ_TEAM_INVITE_set_Guid_m17011 (CG_REQ_TEAM_INVITE_t2963 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_INVITE::SetGuid(System.UInt64)
 void CG_REQ_TEAM_INVITE_SetGuid_m17012 (CG_REQ_TEAM_INVITE_t2963 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQ_TEAM_INVITE::SerializedSize()
 int32_t CG_REQ_TEAM_INVITE_SerializedSize_m17013 (CG_REQ_TEAM_INVITE_t2963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_TEAM_INVITE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_REQ_TEAM_INVITE_WriteTo_m17014 (CG_REQ_TEAM_INVITE_t2963 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_REQ_TEAM_INVITE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_REQ_TEAM_INVITE_MergeFrom_m17015 (CG_REQ_TEAM_INVITE_t2963 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_TEAM_INVITE::IsInitialized()
 bool CG_REQ_TEAM_INVITE_IsInitialized_m17016 (CG_REQ_TEAM_INVITE_t2963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
