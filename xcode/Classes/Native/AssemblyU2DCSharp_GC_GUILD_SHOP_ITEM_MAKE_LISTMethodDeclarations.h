#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_SHOP_ITEM_MAKE_LIST
struct GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::.ctor()
 void GC_GUILD_SHOP_ITEM_MAKE_LIST__ctor_m25617 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_SHOP_ITEM_MAKE_LIST::get_HasGuildWealth()
 bool GC_GUILD_SHOP_ITEM_MAKE_LIST_get_HasGuildWealth_m25618 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::get_GuildWealth()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_get_GuildWealth_m25619 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::set_GuildWealth(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_set_GuildWealth_m25620 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::SetGuildWealth(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_SetGuildWealth_m25621 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_MAKE_LIST::get_ItemIDList()
 Object_t* GC_GUILD_SHOP_ITEM_MAKE_LIST_get_ItemIDList_m25622 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::get_ItemIDCount()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_get_ItemIDCount_m25623 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::GetItemID(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_GetItemID_m25624 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::AddItemID(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_AddItemID_m25625 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_MAKE_LIST::get_MakeNumList()
 Object_t* GC_GUILD_SHOP_ITEM_MAKE_LIST_get_MakeNumList_m25626 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::get_MakeNumCount()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_get_MakeNumCount_m25627 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::GetMakeNum(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_GetMakeNum_m25628 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::AddMakeNum(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_AddMakeNum_m25629 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_MAKE_LIST::get_PriceList()
 Object_t* GC_GUILD_SHOP_ITEM_MAKE_LIST_get_PriceList_m25630 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::get_PriceCount()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_get_PriceCount_m25631 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::GetPrice(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_GetPrice_m25632 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::AddPrice(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_AddPrice_m25633 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_MAKE_LIST::get_MaxHoldList()
 Object_t* GC_GUILD_SHOP_ITEM_MAKE_LIST_get_MaxHoldList_m25634 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::get_MaxHoldCount()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_get_MaxHoldCount_m25635 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::GetMaxHold(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_GetMaxHold_m25636 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::AddMaxHold(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_AddMaxHold_m25637 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_MAKE_LIST::get_DictIDList()
 Object_t* GC_GUILD_SHOP_ITEM_MAKE_LIST_get_DictIDList_m25638 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::get_DictIDCount()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_get_DictIDCount_m25639 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::GetDictID(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_GetDictID_m25640 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::AddDictID(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_AddDictID_m25641 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SHOP_ITEM_MAKE_LIST::get_DictIDDescList()
 Object_t* GC_GUILD_SHOP_ITEM_MAKE_LIST_get_DictIDDescList_m25642 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::get_DictIDDescCount()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_get_DictIDDescCount_m25643 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::GetDictIDDesc(System.Int32)
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_GetDictIDDesc_m25644 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::AddDictIDDesc(System.Int32)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_AddDictIDDesc_m25645 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SHOP_ITEM_MAKE_LIST::SerializedSize()
 int32_t GC_GUILD_SHOP_ITEM_MAKE_LIST_SerializedSize_m25646 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SHOP_ITEM_MAKE_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_SHOP_ITEM_MAKE_LIST_WriteTo_m25647 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_SHOP_ITEM_MAKE_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_SHOP_ITEM_MAKE_LIST_MergeFrom_m25648 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_SHOP_ITEM_MAKE_LIST::IsInitialized()
 bool GC_GUILD_SHOP_ITEM_MAKE_LIST_IsInitialized_m25649 (GC_GUILD_SHOP_ITEM_MAKE_LIST_t3451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
