#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_CREATE
struct GC_GUILD_CREATE_t3243;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_CREATE::.ctor()
 void GC_GUILD_CREATE__ctor_m22035 (GC_GUILD_CREATE_t3243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_CREATE::get_HasGuildGuid()
 bool GC_GUILD_CREATE_get_HasGuildGuid_m22036 (GC_GUILD_CREATE_t3243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_CREATE::get_GuildGuid()
 uint64_t GC_GUILD_CREATE_get_GuildGuid_m22037 (GC_GUILD_CREATE_t3243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_CREATE::set_GuildGuid(System.UInt64)
 void GC_GUILD_CREATE_set_GuildGuid_m22038 (GC_GUILD_CREATE_t3243 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_CREATE::SetGuildGuid(System.UInt64)
 void GC_GUILD_CREATE_SetGuildGuid_m22039 (GC_GUILD_CREATE_t3243 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_CREATE::get_HasGuildName()
 bool GC_GUILD_CREATE_get_HasGuildName_m22040 (GC_GUILD_CREATE_t3243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_CREATE::get_GuildName()
 String_t* GC_GUILD_CREATE_get_GuildName_m22041 (GC_GUILD_CREATE_t3243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_CREATE::set_GuildName(System.String)
 void GC_GUILD_CREATE_set_GuildName_m22042 (GC_GUILD_CREATE_t3243 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_CREATE::SetGuildName(System.String)
 void GC_GUILD_CREATE_SetGuildName_m22043 (GC_GUILD_CREATE_t3243 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_CREATE::SerializedSize()
 int32_t GC_GUILD_CREATE_SerializedSize_m22044 (GC_GUILD_CREATE_t3243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_CREATE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_CREATE_WriteTo_m22045 (GC_GUILD_CREATE_t3243 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_CREATE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_CREATE_MergeFrom_m22046 (GC_GUILD_CREATE_t3243 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_CREATE::IsInitialized()
 bool GC_GUILD_CREATE_IsInitialized_m22047 (GC_GUILD_CREATE_t3243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
