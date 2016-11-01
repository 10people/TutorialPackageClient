#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_RESERVE_LIST
struct GC_GUILD_RESERVE_LIST_t3612;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_RESERVE_LIST::.ctor()
 void GC_GUILD_RESERVE_LIST__ctor_m28153 (GC_GUILD_RESERVE_LIST_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_GUILD_RESERVE_LIST::get_ReserveGuildGuidList()
 Object_t* GC_GUILD_RESERVE_LIST_get_ReserveGuildGuidList_m28154 (GC_GUILD_RESERVE_LIST_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RESERVE_LIST::get_ReserveGuildGuidCount()
 int32_t GC_GUILD_RESERVE_LIST_get_ReserveGuildGuidCount_m28155 (GC_GUILD_RESERVE_LIST_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_RESERVE_LIST::GetReserveGuildGuid(System.Int32)
 uint64_t GC_GUILD_RESERVE_LIST_GetReserveGuildGuid_m28156 (GC_GUILD_RESERVE_LIST_t3612 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RESERVE_LIST::AddReserveGuildGuid(System.UInt64)
 void GC_GUILD_RESERVE_LIST_AddReserveGuildGuid_m28157 (GC_GUILD_RESERVE_LIST_t3612 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RESERVE_LIST::SerializedSize()
 int32_t GC_GUILD_RESERVE_LIST_SerializedSize_m28158 (GC_GUILD_RESERVE_LIST_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RESERVE_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_RESERVE_LIST_WriteTo_m28159 (GC_GUILD_RESERVE_LIST_t3612 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_RESERVE_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_RESERVE_LIST_MergeFrom_m28160 (GC_GUILD_RESERVE_LIST_t3612 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RESERVE_LIST::IsInitialized()
 bool GC_GUILD_RESERVE_LIST_IsInitialized_m28161 (GC_GUILD_RESERVE_LIST_t3612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
