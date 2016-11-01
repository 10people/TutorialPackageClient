#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_KICK
struct CG_GUILD_KICK_t3248;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_KICK::.ctor()
 void CG_GUILD_KICK__ctor_m22084 (CG_GUILD_KICK_t3248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_KICK::get_HasKicked()
 bool CG_GUILD_KICK_get_HasKicked_m22085 (CG_GUILD_KICK_t3248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_KICK::get_Kicked()
 uint64_t CG_GUILD_KICK_get_Kicked_m22086 (CG_GUILD_KICK_t3248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_KICK::set_Kicked(System.UInt64)
 void CG_GUILD_KICK_set_Kicked_m22087 (CG_GUILD_KICK_t3248 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_KICK::SetKicked(System.UInt64)
 void CG_GUILD_KICK_SetKicked_m22088 (CG_GUILD_KICK_t3248 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_KICK::SerializedSize()
 int32_t CG_GUILD_KICK_SerializedSize_m22089 (CG_GUILD_KICK_t3248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_KICK::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_KICK_WriteTo_m22090 (CG_GUILD_KICK_t3248 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_KICK::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_KICK_MergeFrom_m22091 (CG_GUILD_KICK_t3248 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_KICK::IsInitialized()
 bool CG_GUILD_KICK_IsInitialized_m22092 (CG_GUILD_KICK_t3248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
