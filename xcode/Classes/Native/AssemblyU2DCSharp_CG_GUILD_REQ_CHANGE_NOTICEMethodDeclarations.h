#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_REQ_CHANGE_NOTICE
struct CG_GUILD_REQ_CHANGE_NOTICE_t3241;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_REQ_CHANGE_NOTICE::.ctor()
 void CG_GUILD_REQ_CHANGE_NOTICE__ctor_m22013 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_REQ_CHANGE_NOTICE::get_HasGuildNotice()
 bool CG_GUILD_REQ_CHANGE_NOTICE_get_HasGuildNotice_m22014 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_GUILD_REQ_CHANGE_NOTICE::get_GuildNotice()
 String_t* CG_GUILD_REQ_CHANGE_NOTICE_get_GuildNotice_m22015 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_REQ_CHANGE_NOTICE::set_GuildNotice(System.String)
 void CG_GUILD_REQ_CHANGE_NOTICE_set_GuildNotice_m22016 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_REQ_CHANGE_NOTICE::SetGuildNotice(System.String)
 void CG_GUILD_REQ_CHANGE_NOTICE_SetGuildNotice_m22017 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_REQ_CHANGE_NOTICE::SerializedSize()
 int32_t CG_GUILD_REQ_CHANGE_NOTICE_SerializedSize_m22018 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_REQ_CHANGE_NOTICE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_REQ_CHANGE_NOTICE_WriteTo_m22019 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_REQ_CHANGE_NOTICE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_REQ_CHANGE_NOTICE_MergeFrom_m22020 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_REQ_CHANGE_NOTICE::IsInitialized()
 bool CG_GUILD_REQ_CHANGE_NOTICE_IsInitialized_m22021 (CG_GUILD_REQ_CHANGE_NOTICE_t3241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
