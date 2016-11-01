#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_JOIN
struct CG_GUILD_JOIN_t3244;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_JOIN::.ctor()
 void CG_GUILD_JOIN__ctor_m22048 (CG_GUILD_JOIN_t3244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOIN::get_HasGuildGuid()
 bool CG_GUILD_JOIN_get_HasGuildGuid_m22049 (CG_GUILD_JOIN_t3244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_JOIN::get_GuildGuid()
 uint64_t CG_GUILD_JOIN_get_GuildGuid_m22050 (CG_GUILD_JOIN_t3244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN::set_GuildGuid(System.UInt64)
 void CG_GUILD_JOIN_set_GuildGuid_m22051 (CG_GUILD_JOIN_t3244 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN::SetGuildGuid(System.UInt64)
 void CG_GUILD_JOIN_SetGuildGuid_m22052 (CG_GUILD_JOIN_t3244 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_JOIN::SerializedSize()
 int32_t CG_GUILD_JOIN_SerializedSize_m22053 (CG_GUILD_JOIN_t3244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_JOIN_WriteTo_m22054 (CG_GUILD_JOIN_t3244 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_JOIN::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_JOIN_MergeFrom_m22055 (CG_GUILD_JOIN_t3244 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOIN::IsInitialized()
 bool CG_GUILD_JOIN_IsInitialized_m22056 (CG_GUILD_JOIN_t3244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
