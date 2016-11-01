#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_INVITE
struct CG_GUILD_INVITE_t3372;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_INVITE::.ctor()
 void CG_GUILD_INVITE__ctor_m24286 (CG_GUILD_INVITE_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE::get_HasInvitedGuid()
 bool CG_GUILD_INVITE_get_HasInvitedGuid_m24287 (CG_GUILD_INVITE_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_INVITE::get_InvitedGuid()
 uint64_t CG_GUILD_INVITE_get_InvitedGuid_m24288 (CG_GUILD_INVITE_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE::set_InvitedGuid(System.UInt64)
 void CG_GUILD_INVITE_set_InvitedGuid_m24289 (CG_GUILD_INVITE_t3372 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE::SetInvitedGuid(System.UInt64)
 void CG_GUILD_INVITE_SetInvitedGuid_m24290 (CG_GUILD_INVITE_t3372 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_INVITE::SerializedSize()
 int32_t CG_GUILD_INVITE_SerializedSize_m24291 (CG_GUILD_INVITE_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_INVITE_WriteTo_m24292 (CG_GUILD_INVITE_t3372 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_INVITE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_INVITE_MergeFrom_m24293 (CG_GUILD_INVITE_t3372 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE::IsInitialized()
 bool CG_GUILD_INVITE_IsInitialized_m24294 (CG_GUILD_INVITE_t3372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
