#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_CREATE
struct CG_GUILD_CREATE_t3242;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_CREATE::.ctor()
 void CG_GUILD_CREATE__ctor_m22022 (CG_GUILD_CREATE_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_CREATE::get_HasGuildName()
 bool CG_GUILD_CREATE_get_HasGuildName_m22023 (CG_GUILD_CREATE_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_GUILD_CREATE::get_GuildName()
 String_t* CG_GUILD_CREATE_get_GuildName_m22024 (CG_GUILD_CREATE_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_CREATE::set_GuildName(System.String)
 void CG_GUILD_CREATE_set_GuildName_m22025 (CG_GUILD_CREATE_t3242 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_CREATE::SetGuildName(System.String)
 void CG_GUILD_CREATE_SetGuildName_m22026 (CG_GUILD_CREATE_t3242 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_CREATE::get_HasGuildDeclaration()
 bool CG_GUILD_CREATE_get_HasGuildDeclaration_m22027 (CG_GUILD_CREATE_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_GUILD_CREATE::get_GuildDeclaration()
 String_t* CG_GUILD_CREATE_get_GuildDeclaration_m22028 (CG_GUILD_CREATE_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_CREATE::set_GuildDeclaration(System.String)
 void CG_GUILD_CREATE_set_GuildDeclaration_m22029 (CG_GUILD_CREATE_t3242 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_CREATE::SetGuildDeclaration(System.String)
 void CG_GUILD_CREATE_SetGuildDeclaration_m22030 (CG_GUILD_CREATE_t3242 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_CREATE::SerializedSize()
 int32_t CG_GUILD_CREATE_SerializedSize_m22031 (CG_GUILD_CREATE_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_CREATE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_CREATE_WriteTo_m22032 (CG_GUILD_CREATE_t3242 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_CREATE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_CREATE_MergeFrom_m22033 (CG_GUILD_CREATE_t3242 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_CREATE::IsInitialized()
 bool CG_GUILD_CREATE_IsInitialized_m22034 (CG_GUILD_CREATE_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
