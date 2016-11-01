#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_BLACKMARKETITEMINFO
struct GC_RET_BLACKMARKETITEMINFO_t1249;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_BLACKMARKETITEMINFO::.ctor()
 void GC_RET_BLACKMARKETITEMINFO__ctor_m24731 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACKMARKETITEMINFO::get_ItemIndexList()
 Object_t* GC_RET_BLACKMARKETITEMINFO_get_ItemIndexList_m24732 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::get_ItemIndexCount()
 int32_t GC_RET_BLACKMARKETITEMINFO_get_ItemIndexCount_m24733 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::GetItemIndex(System.Int32)
 int32_t GC_RET_BLACKMARKETITEMINFO_GetItemIndex_m24734 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::AddItemIndex(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_AddItemIndex_m24735 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACKMARKETITEMINFO::get_ItemDataIdList()
 Object_t* GC_RET_BLACKMARKETITEMINFO_get_ItemDataIdList_m24736 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::get_ItemDataIdCount()
 int32_t GC_RET_BLACKMARKETITEMINFO_get_ItemDataIdCount_m24737 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::GetItemDataId(System.Int32)
 int32_t GC_RET_BLACKMARKETITEMINFO_GetItemDataId_m24738 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::AddItemDataId(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_AddItemDataId_m24739 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACKMARKETITEMINFO::get_ItemCountList()
 Object_t* GC_RET_BLACKMARKETITEMINFO_get_ItemCountList_m24740 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::get_ItemCountCount()
 int32_t GC_RET_BLACKMARKETITEMINFO_get_ItemCountCount_m24741 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::GetItemCount(System.Int32)
 int32_t GC_RET_BLACKMARKETITEMINFO_GetItemCount_m24742 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::AddItemCount(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_AddItemCount_m24743 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACKMARKETITEMINFO::get_ItemPriceList()
 Object_t* GC_RET_BLACKMARKETITEMINFO_get_ItemPriceList_m24744 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::get_ItemPriceCount()
 int32_t GC_RET_BLACKMARKETITEMINFO_get_ItemPriceCount_m24745 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::GetItemPrice(System.Int32)
 int32_t GC_RET_BLACKMARKETITEMINFO_GetItemPrice_m24746 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::AddItemPrice(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_AddItemPrice_m24747 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACKMARKETITEMINFO::get_ItemMoneyTypeList()
 Object_t* GC_RET_BLACKMARKETITEMINFO_get_ItemMoneyTypeList_m24748 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::get_ItemMoneyTypeCount()
 int32_t GC_RET_BLACKMARKETITEMINFO_get_ItemMoneyTypeCount_m24749 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::GetItemMoneyType(System.Int32)
 int32_t GC_RET_BLACKMARKETITEMINFO_GetItemMoneyType_m24750 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::AddItemMoneyType(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_AddItemMoneyType_m24751 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACKMARKETITEMINFO::get_IsBindList()
 Object_t* GC_RET_BLACKMARKETITEMINFO_get_IsBindList_m24752 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::get_IsBindCount()
 int32_t GC_RET_BLACKMARKETITEMINFO_get_IsBindCount_m24753 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::GetIsBind(System.Int32)
 int32_t GC_RET_BLACKMARKETITEMINFO_GetIsBind_m24754 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::AddIsBind(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_AddIsBind_m24755 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_BLACKMARKETITEMINFO::get_HasMaxPage()
 bool GC_RET_BLACKMARKETITEMINFO_get_HasMaxPage_m24756 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::get_MaxPage()
 int32_t GC_RET_BLACKMARKETITEMINFO_get_MaxPage_m24757 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::set_MaxPage(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_set_MaxPage_m24758 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::SetMaxPage(System.Int32)
 void GC_RET_BLACKMARKETITEMINFO_SetMaxPage_m24759 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACKMARKETITEMINFO::SerializedSize()
 int32_t GC_RET_BLACKMARKETITEMINFO_SerializedSize_m24760 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACKMARKETITEMINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_BLACKMARKETITEMINFO_WriteTo_m24761 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_BLACKMARKETITEMINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_BLACKMARKETITEMINFO_MergeFrom_m24762 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_BLACKMARKETITEMINFO::IsInitialized()
 bool GC_RET_BLACKMARKETITEMINFO_IsInitialized_m24763 (GC_RET_BLACKMARKETITEMINFO_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
