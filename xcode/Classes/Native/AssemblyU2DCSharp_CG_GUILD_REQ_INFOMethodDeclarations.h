#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_REQ_INFO
struct CG_GUILD_REQ_INFO_t3239;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_REQ_INFO::.ctor()
 void CG_GUILD_REQ_INFO__ctor_m21883 (CG_GUILD_REQ_INFO_t3239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_REQ_INFO::get_HasRequester()
 bool CG_GUILD_REQ_INFO_get_HasRequester_m21884 (CG_GUILD_REQ_INFO_t3239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_REQ_INFO::get_Requester()
 uint64_t CG_GUILD_REQ_INFO_get_Requester_m21885 (CG_GUILD_REQ_INFO_t3239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_REQ_INFO::set_Requester(System.UInt64)
 void CG_GUILD_REQ_INFO_set_Requester_m21886 (CG_GUILD_REQ_INFO_t3239 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_REQ_INFO::SetRequester(System.UInt64)
 void CG_GUILD_REQ_INFO_SetRequester_m21887 (CG_GUILD_REQ_INFO_t3239 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_REQ_INFO::SerializedSize()
 int32_t CG_GUILD_REQ_INFO_SerializedSize_m21888 (CG_GUILD_REQ_INFO_t3239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_REQ_INFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_REQ_INFO_WriteTo_m21889 (CG_GUILD_REQ_INFO_t3239 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_REQ_INFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_REQ_INFO_MergeFrom_m21890 (CG_GUILD_REQ_INFO_t3239 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_REQ_INFO::IsInitialized()
 bool CG_GUILD_REQ_INFO_IsInitialized_m21891 (CG_GUILD_REQ_INFO_t3239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
