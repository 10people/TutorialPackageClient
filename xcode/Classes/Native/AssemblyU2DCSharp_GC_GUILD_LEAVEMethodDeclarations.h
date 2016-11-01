#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_LEAVE
struct GC_GUILD_LEAVE_t3247;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_LEAVE::.ctor()
 void GC_GUILD_LEAVE__ctor_m22075 (GC_GUILD_LEAVE_t3247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_LEAVE::get_HasGuildGuid()
 bool GC_GUILD_LEAVE_get_HasGuildGuid_m22076 (GC_GUILD_LEAVE_t3247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_LEAVE::get_GuildGuid()
 uint64_t GC_GUILD_LEAVE_get_GuildGuid_m22077 (GC_GUILD_LEAVE_t3247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_LEAVE::set_GuildGuid(System.UInt64)
 void GC_GUILD_LEAVE_set_GuildGuid_m22078 (GC_GUILD_LEAVE_t3247 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_LEAVE::SetGuildGuid(System.UInt64)
 void GC_GUILD_LEAVE_SetGuildGuid_m22079 (GC_GUILD_LEAVE_t3247 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_LEAVE::SerializedSize()
 int32_t GC_GUILD_LEAVE_SerializedSize_m22080 (GC_GUILD_LEAVE_t3247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_LEAVE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_LEAVE_WriteTo_m22081 (GC_GUILD_LEAVE_t3247 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_LEAVE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_LEAVE_MergeFrom_m22082 (GC_GUILD_LEAVE_t3247 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_LEAVE::IsInitialized()
 bool GC_GUILD_LEAVE_IsInitialized_m22083 (GC_GUILD_LEAVE_t3247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
