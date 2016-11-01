#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RESTAURANT_VISITFRIENDINFO
struct GC_RESTAURANT_VISITFRIENDINFO_t3427;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RESTAURANT_VISITFRIENDINFO::.ctor()
 void GC_RESTAURANT_VISITFRIENDINFO__ctor_m25145 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RESTAURANT_VISITFRIENDINFO::get_friendGuidList()
 Object_t* GC_RESTAURANT_VISITFRIENDINFO_get_friendGuidList_m25146 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RESTAURANT_VISITFRIENDINFO::get_friendGuidCount()
 int32_t GC_RESTAURANT_VISITFRIENDINFO_get_friendGuidCount_m25147 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RESTAURANT_VISITFRIENDINFO::GetFriendGuid(System.Int32)
 uint64_t GC_RESTAURANT_VISITFRIENDINFO_GetFriendGuid_m25148 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RESTAURANT_VISITFRIENDINFO::AddFriendGuid(System.UInt64)
 void GC_RESTAURANT_VISITFRIENDINFO_AddFriendGuid_m25149 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RESTAURANT_VISITFRIENDINFO::get_HasVisitfriendcount()
 bool GC_RESTAURANT_VISITFRIENDINFO_get_HasVisitfriendcount_m25150 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RESTAURANT_VISITFRIENDINFO::get_Visitfriendcount()
 int32_t GC_RESTAURANT_VISITFRIENDINFO_get_Visitfriendcount_m25151 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RESTAURANT_VISITFRIENDINFO::set_Visitfriendcount(System.Int32)
 void GC_RESTAURANT_VISITFRIENDINFO_set_Visitfriendcount_m25152 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RESTAURANT_VISITFRIENDINFO::SetVisitfriendcount(System.Int32)
 void GC_RESTAURANT_VISITFRIENDINFO_SetVisitfriendcount_m25153 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RESTAURANT_VISITFRIENDINFO::SerializedSize()
 int32_t GC_RESTAURANT_VISITFRIENDINFO_SerializedSize_m25154 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RESTAURANT_VISITFRIENDINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RESTAURANT_VISITFRIENDINFO_WriteTo_m25155 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RESTAURANT_VISITFRIENDINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RESTAURANT_VISITFRIENDINFO_MergeFrom_m25156 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RESTAURANT_VISITFRIENDINFO::IsInitialized()
 bool GC_RESTAURANT_VISITFRIENDINFO_IsInitialized_m25157 (GC_RESTAURANT_VISITFRIENDINFO_t3427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
