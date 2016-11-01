#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_INVITE_CONFIRM
struct CG_GUILD_INVITE_CONFIRM_t3374;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_INVITE_CONFIRM::.ctor()
 void CG_GUILD_INVITE_CONFIRM__ctor_m24316 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE_CONFIRM::get_HasInviterGuid()
 bool CG_GUILD_INVITE_CONFIRM_get_HasInviterGuid_m24317 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_INVITE_CONFIRM::get_InviterGuid()
 uint64_t CG_GUILD_INVITE_CONFIRM_get_InviterGuid_m24318 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::set_InviterGuid(System.UInt64)
 void CG_GUILD_INVITE_CONFIRM_set_InviterGuid_m24319 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::SetInviterGuid(System.UInt64)
 void CG_GUILD_INVITE_CONFIRM_SetInviterGuid_m24320 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE_CONFIRM::get_HasInviterGuildGuid()
 bool CG_GUILD_INVITE_CONFIRM_get_HasInviterGuildGuid_m24321 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_INVITE_CONFIRM::get_InviterGuildGuid()
 uint64_t CG_GUILD_INVITE_CONFIRM_get_InviterGuildGuid_m24322 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::set_InviterGuildGuid(System.UInt64)
 void CG_GUILD_INVITE_CONFIRM_set_InviterGuildGuid_m24323 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::SetInviterGuildGuid(System.UInt64)
 void CG_GUILD_INVITE_CONFIRM_SetInviterGuildGuid_m24324 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE_CONFIRM::get_HasAgree()
 bool CG_GUILD_INVITE_CONFIRM_get_HasAgree_m24325 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_INVITE_CONFIRM::get_Agree()
 int32_t CG_GUILD_INVITE_CONFIRM_get_Agree_m24326 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::set_Agree(System.Int32)
 void CG_GUILD_INVITE_CONFIRM_set_Agree_m24327 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::SetAgree(System.Int32)
 void CG_GUILD_INVITE_CONFIRM_SetAgree_m24328 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE_CONFIRM::get_HasInviterName()
 bool CG_GUILD_INVITE_CONFIRM_get_HasInviterName_m24329 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_GUILD_INVITE_CONFIRM::get_InviterName()
 String_t* CG_GUILD_INVITE_CONFIRM_get_InviterName_m24330 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::set_InviterName(System.String)
 void CG_GUILD_INVITE_CONFIRM_set_InviterName_m24331 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::SetInviterName(System.String)
 void CG_GUILD_INVITE_CONFIRM_SetInviterName_m24332 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_INVITE_CONFIRM::SerializedSize()
 int32_t CG_GUILD_INVITE_CONFIRM_SerializedSize_m24333 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_CONFIRM::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_INVITE_CONFIRM_WriteTo_m24334 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_INVITE_CONFIRM::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_INVITE_CONFIRM_MergeFrom_m24335 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE_CONFIRM::IsInitialized()
 bool CG_GUILD_INVITE_CONFIRM_IsInitialized_m24336 (CG_GUILD_INVITE_CONFIRM_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
