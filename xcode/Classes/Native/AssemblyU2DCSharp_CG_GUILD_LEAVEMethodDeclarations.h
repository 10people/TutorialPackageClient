#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_LEAVE
struct CG_GUILD_LEAVE_t3246;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_LEAVE::.ctor()
 void CG_GUILD_LEAVE__ctor_m22066 (CG_GUILD_LEAVE_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_LEAVE::get_HasRequester()
 bool CG_GUILD_LEAVE_get_HasRequester_m22067 (CG_GUILD_LEAVE_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_LEAVE::get_Requester()
 uint64_t CG_GUILD_LEAVE_get_Requester_m22068 (CG_GUILD_LEAVE_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_LEAVE::set_Requester(System.UInt64)
 void CG_GUILD_LEAVE_set_Requester_m22069 (CG_GUILD_LEAVE_t3246 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_LEAVE::SetRequester(System.UInt64)
 void CG_GUILD_LEAVE_SetRequester_m22070 (CG_GUILD_LEAVE_t3246 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_LEAVE::SerializedSize()
 int32_t CG_GUILD_LEAVE_SerializedSize_m22071 (CG_GUILD_LEAVE_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_LEAVE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_LEAVE_WriteTo_m22072 (CG_GUILD_LEAVE_t3246 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_LEAVE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_LEAVE_MergeFrom_m22073 (CG_GUILD_LEAVE_t3246 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_LEAVE::IsInitialized()
 bool CG_GUILD_LEAVE_IsInitialized_m22074 (CG_GUILD_LEAVE_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
