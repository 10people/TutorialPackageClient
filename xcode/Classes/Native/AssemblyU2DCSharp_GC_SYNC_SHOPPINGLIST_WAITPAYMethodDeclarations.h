#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYNC_SHOPPINGLIST_WAITPAY
struct GC_SYNC_SHOPPINGLIST_WAITPAY_t3483;
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

// System.Void GC_SYNC_SHOPPINGLIST_WAITPAY::.ctor()
 void GC_SYNC_SHOPPINGLIST_WAITPAY__ctor_m26189 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_SYNC_SHOPPINGLIST_WAITPAY::get_GuidList()
 Object_t* GC_SYNC_SHOPPINGLIST_WAITPAY_get_GuidList_m26190 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::get_GuidCount()
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_get_GuidCount_m26191 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_SYNC_SHOPPINGLIST_WAITPAY::GetGuid(System.Int32)
 uint64_t GC_SYNC_SHOPPINGLIST_WAITPAY_GetGuid_m26192 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_WAITPAY::AddGuid(System.UInt64)
 void GC_SYNC_SHOPPINGLIST_WAITPAY_AddGuid_m26193 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_SYNC_SHOPPINGLIST_WAITPAY::get_SenderNameList()
 Object_t* GC_SYNC_SHOPPINGLIST_WAITPAY_get_SenderNameList_m26194 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::get_SenderNameCount()
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_get_SenderNameCount_m26195 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_SYNC_SHOPPINGLIST_WAITPAY::GetSenderName(System.Int32)
 String_t* GC_SYNC_SHOPPINGLIST_WAITPAY_GetSenderName_m26196 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_WAITPAY::AddSenderName(System.String)
 void GC_SYNC_SHOPPINGLIST_WAITPAY_AddSenderName_m26197 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_SHOPPINGLIST_WAITPAY::get_CreateTimeList()
 Object_t* GC_SYNC_SHOPPINGLIST_WAITPAY_get_CreateTimeList_m26198 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::get_CreateTimeCount()
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_get_CreateTimeCount_m26199 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::GetCreateTime(System.Int32)
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_GetCreateTime_m26200 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_WAITPAY::AddCreateTime(System.Int32)
 void GC_SYNC_SHOPPINGLIST_WAITPAY_AddCreateTime_m26201 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_SHOPPINGLIST_WAITPAY::get_GoodsIDList()
 Object_t* GC_SYNC_SHOPPINGLIST_WAITPAY_get_GoodsIDList_m26202 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::get_GoodsIDCount()
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_get_GoodsIDCount_m26203 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::GetGoodsID(System.Int32)
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_GetGoodsID_m26204 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_WAITPAY::AddGoodsID(System.Int32)
 void GC_SYNC_SHOPPINGLIST_WAITPAY_AddGoodsID_m26205 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_SHOPPINGLIST_WAITPAY::get_GoodsCountList()
 Object_t* GC_SYNC_SHOPPINGLIST_WAITPAY_get_GoodsCountList_m26206 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::get_GoodsCountCount()
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_get_GoodsCountCount_m26207 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::GetGoodsCount(System.Int32)
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_GetGoodsCount_m26208 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_WAITPAY::AddGoodsCount(System.Int32)
 void GC_SYNC_SHOPPINGLIST_WAITPAY_AddGoodsCount_m26209 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_SHOPPINGLIST_WAITPAY::SerializedSize()
 int32_t GC_SYNC_SHOPPINGLIST_WAITPAY_SerializedSize_m26210 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_SHOPPINGLIST_WAITPAY::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYNC_SHOPPINGLIST_WAITPAY_WriteTo_m26211 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYNC_SHOPPINGLIST_WAITPAY::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYNC_SHOPPINGLIST_WAITPAY_MergeFrom_m26212 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNC_SHOPPINGLIST_WAITPAY::IsInitialized()
 bool GC_SYNC_SHOPPINGLIST_WAITPAY_IsInitialized_m26213 (GC_SYNC_SHOPPINGLIST_WAITPAY_t3483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
