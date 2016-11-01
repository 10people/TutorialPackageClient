#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.YuanBaoShopData.ShoppingListRecord
struct ShoppingListRecord_t1673;
// System.Collections.Generic.Dictionary`2<System.UInt64,Games.YuanBaoShopData.ShoppingList>
struct Dictionary_2_t5004;
// Games.YuanBaoShopData.ShoppingList
struct ShoppingList_t1669;
// System.String
struct String_t;

// System.Void Games.YuanBaoShopData.ShoppingListRecord::.ctor(System.Int32,System.Int32)
 void ShoppingListRecord__ctor_m35820 (ShoppingListRecord_t1673 * __this, int32_t ___nMaxCount, int32_t ___nItemLife, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingListRecord::CleanUp()
 void ShoppingListRecord_CleanUp_m35821 (ShoppingListRecord_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingListRecord::AddShoppingList(Games.YuanBaoShopData.ShoppingList)
 void ShoppingListRecord_AddShoppingList_m35822 (ShoppingListRecord_t1673 * __this, ShoppingList_t1669 * ___shoppinglist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingListRecord::DelShoppingList(System.UInt64)
 void ShoppingListRecord_DelShoppingList_m35823 (ShoppingListRecord_t1673 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.YuanBaoShopData.ShoppingList Games.YuanBaoShopData.ShoppingListRecord::GetShoppingList(System.UInt64)
 ShoppingList_t1669 * ShoppingListRecord_GetShoppingList_m35824 (ShoppingListRecord_t1673 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingListRecord::GetAliveTime(System.UInt64)
 int32_t ShoppingListRecord_GetAliveTime_m35825 (ShoppingListRecord_t1673 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingListRecord::GetRemainTime(System.UInt64)
 int32_t ShoppingListRecord_GetRemainTime_m35826 (ShoppingListRecord_t1673 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingListRecord::GetRemainDay(System.UInt64)
 int32_t ShoppingListRecord_GetRemainDay_m35827 (ShoppingListRecord_t1673 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingListRecord::GetRecordCount()
 int32_t ShoppingListRecord_GetRecordCount_m35828 (ShoppingListRecord_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingListRecord::GetCostYuanBao(System.UInt64)
 int32_t ShoppingListRecord_GetCostYuanBao_m35829 (ShoppingListRecord_t1673 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.YuanBaoShopData.ShoppingListRecord::GetSenderName(System.UInt64)
 String_t* ShoppingListRecord_GetSenderName_m35830 (ShoppingListRecord_t1673 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,Games.YuanBaoShopData.ShoppingList> Games.YuanBaoShopData.ShoppingListRecord::get_Record()
 Dictionary_2_t5004 * ShoppingListRecord_get_Record_m35831 (ShoppingListRecord_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingListRecord::set_Record(System.Collections.Generic.Dictionary`2<System.UInt64,Games.YuanBaoShopData.ShoppingList>)
 void ShoppingListRecord_set_Record_m35832 (ShoppingListRecord_t1673 * __this, Dictionary_2_t5004 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingListRecord::get_MaxCount()
 int32_t ShoppingListRecord_get_MaxCount_m35833 (ShoppingListRecord_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingListRecord::set_MaxCount(System.Int32)
 void ShoppingListRecord_set_MaxCount_m35834 (ShoppingListRecord_t1673 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingListRecord::get_ItemLife()
 int32_t ShoppingListRecord_get_ItemLife_m35835 (ShoppingListRecord_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingListRecord::set_ItemLife(System.Int32)
 void ShoppingListRecord_set_ItemLife_m35836 (ShoppingListRecord_t1673 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
