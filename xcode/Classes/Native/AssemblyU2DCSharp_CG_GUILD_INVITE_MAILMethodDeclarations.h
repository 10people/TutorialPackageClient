#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_INVITE_MAIL
struct CG_GUILD_INVITE_MAIL_t3622;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_INVITE_MAIL::.ctor()
 void CG_GUILD_INVITE_MAIL__ctor_m28328 (CG_GUILD_INVITE_MAIL_t3622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> CG_GUILD_INVITE_MAIL::get_ReceiverGuidList()
 Object_t* CG_GUILD_INVITE_MAIL_get_ReceiverGuidList_m28329 (CG_GUILD_INVITE_MAIL_t3622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_INVITE_MAIL::get_ReceiverGuidCount()
 int32_t CG_GUILD_INVITE_MAIL_get_ReceiverGuidCount_m28330 (CG_GUILD_INVITE_MAIL_t3622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_INVITE_MAIL::GetReceiverGuid(System.Int32)
 uint64_t CG_GUILD_INVITE_MAIL_GetReceiverGuid_m28331 (CG_GUILD_INVITE_MAIL_t3622 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_MAIL::AddReceiverGuid(System.UInt64)
 void CG_GUILD_INVITE_MAIL_AddReceiverGuid_m28332 (CG_GUILD_INVITE_MAIL_t3622 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_INVITE_MAIL::SerializedSize()
 int32_t CG_GUILD_INVITE_MAIL_SerializedSize_m28333 (CG_GUILD_INVITE_MAIL_t3622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_INVITE_MAIL::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_INVITE_MAIL_WriteTo_m28334 (CG_GUILD_INVITE_MAIL_t3622 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_INVITE_MAIL::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_INVITE_MAIL_MergeFrom_m28335 (CG_GUILD_INVITE_MAIL_t3622 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_INVITE_MAIL::IsInitialized()
 bool CG_GUILD_INVITE_MAIL_IsInitialized_m28336 (CG_GUILD_INVITE_MAIL_t3622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
