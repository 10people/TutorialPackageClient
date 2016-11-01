#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_SHOP_ITEM_LIST
struct GC_GUILD_SHOP_ITEM_LIST_t3445;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_SHOP_ITEM_LIST::.ctor()
 void GC_GUILD_SHOP_ITEM_LIST__ctor_m25543 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_LIST::get_GoodIdList()
 Object_t* GC_GUILD_SHOP_ITEM_LIST_get_GoodIdList_m25544 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_LIST::get_GoodIdCount()
 int32_t GC_GUILD_SHOP_ITEM_LIST_get_GoodIdCount_m25545 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_LIST::GetGoodId(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_LIST_GetGoodId_m25546 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_LIST::AddGoodId(System.Int32)
 void GC_GUILD_SHOP_ITEM_LIST_AddGoodId_m25547 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_LIST::get_LeftCountList()
 Object_t* GC_GUILD_SHOP_ITEM_LIST_get_LeftCountList_m25548 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_LIST::get_LeftCountCount()
 int32_t GC_GUILD_SHOP_ITEM_LIST_get_LeftCountCount_m25549 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_LIST::GetLeftCount(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_LIST_GetLeftCount_m25550 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_LIST::AddLeftCount(System.Int32)
 void GC_GUILD_SHOP_ITEM_LIST_AddLeftCount_m25551 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_LIST::SerializedSize()
 int32_t GC_GUILD_SHOP_ITEM_LIST_SerializedSize_m25552 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_SHOP_ITEM_LIST_WriteTo_m25553 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_SHOP_ITEM_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_SHOP_ITEM_LIST_MergeFrom_m25554 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_SHOP_ITEM_LIST::IsInitialized()
 bool GC_GUILD_SHOP_ITEM_LIST_IsInitialized_m25555 (GC_GUILD_SHOP_ITEM_LIST_t3445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
