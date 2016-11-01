#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_INVITE_CONFIRM
struct GC_GUILD_INVITE_CONFIRM_t3373;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_INVITE_CONFIRM::.ctor()
 void GC_GUILD_INVITE_CONFIRM__ctor_m24295 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_INVITE_CONFIRM::get_HasInviterGuid()
 bool GC_GUILD_INVITE_CONFIRM_get_HasInviterGuid_m24296 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_INVITE_CONFIRM::get_InviterGuid()
 uint64_t GC_GUILD_INVITE_CONFIRM_get_InviterGuid_m24297 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::set_InviterGuid(System.UInt64)
 void GC_GUILD_INVITE_CONFIRM_set_InviterGuid_m24298 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::SetInviterGuid(System.UInt64)
 void GC_GUILD_INVITE_CONFIRM_SetInviterGuid_m24299 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_INVITE_CONFIRM::get_HasInviterGuildGuid()
 bool GC_GUILD_INVITE_CONFIRM_get_HasInviterGuildGuid_m24300 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_INVITE_CONFIRM::get_InviterGuildGuid()
 uint64_t GC_GUILD_INVITE_CONFIRM_get_InviterGuildGuid_m24301 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::set_InviterGuildGuid(System.UInt64)
 void GC_GUILD_INVITE_CONFIRM_set_InviterGuildGuid_m24302 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::SetInviterGuildGuid(System.UInt64)
 void GC_GUILD_INVITE_CONFIRM_SetInviterGuildGuid_m24303 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_INVITE_CONFIRM::get_HasInviterName()
 bool GC_GUILD_INVITE_CONFIRM_get_HasInviterName_m24304 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_INVITE_CONFIRM::get_InviterName()
 String_t* GC_GUILD_INVITE_CONFIRM_get_InviterName_m24305 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::set_InviterName(System.String)
 void GC_GUILD_INVITE_CONFIRM_set_InviterName_m24306 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::SetInviterName(System.String)
 void GC_GUILD_INVITE_CONFIRM_SetInviterName_m24307 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_INVITE_CONFIRM::get_HasInviterGuidName()
 bool GC_GUILD_INVITE_CONFIRM_get_HasInviterGuidName_m24308 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_INVITE_CONFIRM::get_InviterGuidName()
 String_t* GC_GUILD_INVITE_CONFIRM_get_InviterGuidName_m24309 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::set_InviterGuidName(System.String)
 void GC_GUILD_INVITE_CONFIRM_set_InviterGuidName_m24310 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::SetInviterGuidName(System.String)
 void GC_GUILD_INVITE_CONFIRM_SetInviterGuidName_m24311 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_INVITE_CONFIRM::SerializedSize()
 int32_t GC_GUILD_INVITE_CONFIRM_SerializedSize_m24312 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_INVITE_CONFIRM::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_INVITE_CONFIRM_WriteTo_m24313 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_INVITE_CONFIRM::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_INVITE_CONFIRM_MergeFrom_m24314 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_INVITE_CONFIRM::IsInitialized()
 bool GC_GUILD_INVITE_CONFIRM_IsInitialized_m24315 (GC_GUILD_INVITE_CONFIRM_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
