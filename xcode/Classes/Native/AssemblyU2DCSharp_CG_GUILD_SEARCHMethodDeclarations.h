#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_SEARCH
struct CG_GUILD_SEARCH_t3616;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_SEARCH::.ctor()
 void CG_GUILD_SEARCH__ctor_m28189 (CG_GUILD_SEARCH_t3616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_SEARCH::get_HasGuildName()
 bool CG_GUILD_SEARCH_get_HasGuildName_m28190 (CG_GUILD_SEARCH_t3616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_GUILD_SEARCH::get_GuildName()
 String_t* CG_GUILD_SEARCH_get_GuildName_m28191 (CG_GUILD_SEARCH_t3616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_SEARCH::set_GuildName(System.String)
 void CG_GUILD_SEARCH_set_GuildName_m28192 (CG_GUILD_SEARCH_t3616 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_SEARCH::SetGuildName(System.String)
 void CG_GUILD_SEARCH_SetGuildName_m28193 (CG_GUILD_SEARCH_t3616 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_SEARCH::SerializedSize()
 int32_t CG_GUILD_SEARCH_SerializedSize_m28194 (CG_GUILD_SEARCH_t3616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_SEARCH::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_SEARCH_WriteTo_m28195 (CG_GUILD_SEARCH_t3616 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_SEARCH::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_SEARCH_MergeFrom_m28196 (CG_GUILD_SEARCH_t3616 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_SEARCH::IsInitialized()
 bool CG_GUILD_SEARCH_IsInitialized_m28197 (CG_GUILD_SEARCH_t3616 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
