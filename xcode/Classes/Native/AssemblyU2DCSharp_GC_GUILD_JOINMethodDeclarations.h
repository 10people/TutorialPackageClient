#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_JOIN
struct GC_GUILD_JOIN_t3245;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_JOIN::.ctor()
 void GC_GUILD_JOIN__ctor_m22057 (GC_GUILD_JOIN_t3245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_JOIN::get_HasGuildGuid()
 bool GC_GUILD_JOIN_get_HasGuildGuid_m22058 (GC_GUILD_JOIN_t3245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_JOIN::get_GuildGuid()
 uint64_t GC_GUILD_JOIN_get_GuildGuid_m22059 (GC_GUILD_JOIN_t3245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_JOIN::set_GuildGuid(System.UInt64)
 void GC_GUILD_JOIN_set_GuildGuid_m22060 (GC_GUILD_JOIN_t3245 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_JOIN::SetGuildGuid(System.UInt64)
 void GC_GUILD_JOIN_SetGuildGuid_m22061 (GC_GUILD_JOIN_t3245 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_JOIN::SerializedSize()
 int32_t GC_GUILD_JOIN_SerializedSize_m22062 (GC_GUILD_JOIN_t3245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_JOIN::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_JOIN_WriteTo_m22063 (GC_GUILD_JOIN_t3245 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_JOIN::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_JOIN_MergeFrom_m22064 (GC_GUILD_JOIN_t3245 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_JOIN::IsInitialized()
 bool GC_GUILD_JOIN_IsInitialized_m22065 (GC_GUILD_JOIN_t3245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
