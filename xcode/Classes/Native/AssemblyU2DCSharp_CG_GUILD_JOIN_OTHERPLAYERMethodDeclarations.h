#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_JOIN_OTHERPLAYER
struct CG_GUILD_JOIN_OTHERPLAYER_t3417;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_JOIN_OTHERPLAYER::.ctor()
 void CG_GUILD_JOIN_OTHERPLAYER__ctor_m25031 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOIN_OTHERPLAYER::get_HasUserGuid()
 bool CG_GUILD_JOIN_OTHERPLAYER_get_HasUserGuid_m25032 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_JOIN_OTHERPLAYER::get_UserGuid()
 uint64_t CG_GUILD_JOIN_OTHERPLAYER_get_UserGuid_m25033 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN_OTHERPLAYER::set_UserGuid(System.UInt64)
 void CG_GUILD_JOIN_OTHERPLAYER_set_UserGuid_m25034 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN_OTHERPLAYER::SetUserGuid(System.UInt64)
 void CG_GUILD_JOIN_OTHERPLAYER_SetUserGuid_m25035 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOIN_OTHERPLAYER::get_HasUserName()
 bool CG_GUILD_JOIN_OTHERPLAYER_get_HasUserName_m25036 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_GUILD_JOIN_OTHERPLAYER::get_UserName()
 String_t* CG_GUILD_JOIN_OTHERPLAYER_get_UserName_m25037 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN_OTHERPLAYER::set_UserName(System.String)
 void CG_GUILD_JOIN_OTHERPLAYER_set_UserName_m25038 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN_OTHERPLAYER::SetUserName(System.String)
 void CG_GUILD_JOIN_OTHERPLAYER_SetUserName_m25039 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_JOIN_OTHERPLAYER::SerializedSize()
 int32_t CG_GUILD_JOIN_OTHERPLAYER_SerializedSize_m25040 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOIN_OTHERPLAYER::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_JOIN_OTHERPLAYER_WriteTo_m25041 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_JOIN_OTHERPLAYER::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_JOIN_OTHERPLAYER_MergeFrom_m25042 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOIN_OTHERPLAYER::IsInitialized()
 bool CG_GUILD_JOIN_OTHERPLAYER_IsInitialized_m25043 (CG_GUILD_JOIN_OTHERPLAYER_t3417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
