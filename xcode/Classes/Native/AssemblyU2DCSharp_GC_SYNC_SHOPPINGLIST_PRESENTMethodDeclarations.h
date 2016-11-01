#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYNC_SHOPPINGLIST_PRESENT
struct GC_SYNC_SHOPPINGLIST_PRESENT_t3478;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SYNC_SHOPPINGLIST_PRESENT::.ctor()
 void GC_SYNC_SHOPPINGLIST_PRESENT__ctor_m26100 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_SYNC_SHOPPINGLIST_PRESENT::get_GuidList()
 Object_t* GC_SYNC_SHOPPINGLIST_PRESENT_get_GuidList_m26101 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::get_GuidCount()
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_get_GuidCount_m26102 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_SYNC_SHOPPINGLIST_PRESENT::GetGuid(System.Int32)
 uint64_t GC_SYNC_SHOPPINGLIST_PRESENT_GetGuid_m26103 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_PRESENT::AddGuid(System.UInt64)
 void GC_SYNC_SHOPPINGLIST_PRESENT_AddGuid_m26104 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_SYNC_SHOPPINGLIST_PRESENT::get_SenderNameList()
 Object_t* GC_SYNC_SHOPPINGLIST_PRESENT_get_SenderNameList_m26105 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::get_SenderNameCount()
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_get_SenderNameCount_m26106 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_SYNC_SHOPPINGLIST_PRESENT::GetSenderName(System.Int32)
 String_t* GC_SYNC_SHOPPINGLIST_PRESENT_GetSenderName_m26107 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_PRESENT::AddSenderName(System.String)
 void GC_SYNC_SHOPPINGLIST_PRESENT_AddSenderName_m26108 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_SHOPPINGLIST_PRESENT::get_CreateTimeList()
 Object_t* GC_SYNC_SHOPPINGLIST_PRESENT_get_CreateTimeList_m26109 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::get_CreateTimeCount()
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_get_CreateTimeCount_m26110 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::GetCreateTime(System.Int32)
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_GetCreateTime_m26111 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_PRESENT::AddCreateTime(System.Int32)
 void GC_SYNC_SHOPPINGLIST_PRESENT_AddCreateTime_m26112 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_SHOPPINGLIST_PRESENT::get_GoodsIDList()
 Object_t* GC_SYNC_SHOPPINGLIST_PRESENT_get_GoodsIDList_m26113 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::get_GoodsIDCount()
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_get_GoodsIDCount_m26114 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::GetGoodsID(System.Int32)
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_GetGoodsID_m26115 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_PRESENT::AddGoodsID(System.Int32)
 void GC_SYNC_SHOPPINGLIST_PRESENT_AddGoodsID_m26116 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_SHOPPINGLIST_PRESENT::get_GoodsCountList()
 Object_t* GC_SYNC_SHOPPINGLIST_PRESENT_get_GoodsCountList_m26117 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::get_GoodsCountCount()
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_get_GoodsCountCount_m26118 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::GetGoodsCount(System.Int32)
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_GetGoodsCount_m26119 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_PRESENT::AddGoodsCount(System.Int32)
 void GC_SYNC_SHOPPINGLIST_PRESENT_AddGoodsCount_m26120 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_PRESENT::SerializedSize()
 int32_t GC_SYNC_SHOPPINGLIST_PRESENT_SerializedSize_m26121 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_PRESENT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYNC_SHOPPINGLIST_PRESENT_WriteTo_m26122 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYNC_SHOPPINGLIST_PRESENT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYNC_SHOPPINGLIST_PRESENT_MergeFrom_m26123 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNC_SHOPPINGLIST_PRESENT::IsInitialized()
 bool GC_SYNC_SHOPPINGLIST_PRESENT_IsInitialized_m26124 (GC_SYNC_SHOPPINGLIST_PRESENT_t3478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
