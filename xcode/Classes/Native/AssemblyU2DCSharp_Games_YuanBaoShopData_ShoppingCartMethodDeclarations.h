#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.YuanBaoShopData.ShoppingCart
struct ShoppingCart_t4955;
// System.Collections.Generic.List`1<Games.YuanBaoShopData.ShoppingCartItem>
struct List_1_t5003;
// System.String
struct String_t;
// Games.YuanBaoShopData.ShoppingCart/SUBMIT_TYPE
#include "AssemblyU2DCSharp_Games_YuanBaoShopData_ShoppingCart_SUBMIT_.h"

// System.Void Games.YuanBaoShopData.ShoppingCart::.ctor()
 void ShoppingCart__ctor_m35785 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::CleanUp()
 void ShoppingCart_CleanUp_m35786 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.YuanBaoShopData.ShoppingCart::IsCanAdd(System.Int32,System.Int32)
 bool ShoppingCart_IsCanAdd_m35787 (ShoppingCart_t4955 * __this, int32_t ___goodsid, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.YuanBaoShopData.ShoppingCart::IsInCountDown()
 bool ShoppingCart_IsInCountDown_m35788 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::AddGoods(System.Int32,System.Int32)
 void ShoppingCart_AddGoods_m35789 (ShoppingCart_t4955 * __this, int32_t ___goodsid, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::DelGoods(System.Int32)
 void ShoppingCart_DelGoods_m35790 (ShoppingCart_t4955 * __this, int32_t ___goodsindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::TickCountDown()
 void ShoppingCart_TickCountDown_m35791 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::WriteShoppingCartInfo()
 void ShoppingCart_WriteShoppingCartInfo_m35792 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::ReadShoppingCartInfo()
 void ShoppingCart_ReadShoppingCartInfo_m35793 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingCart::GetRemainTime()
 int32_t ShoppingCart_GetRemainTime_m35794 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingCart::GetCostYuanBao()
 int32_t ShoppingCart_GetCostYuanBao_m35795 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::Submit(System.UInt64,System.String,Games.YuanBaoShopData.ShoppingCart/SUBMIT_TYPE)
 void ShoppingCart_Submit_m35796 (ShoppingCart_t4955 * __this, uint64_t ___receiver, String_t* ___name, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.YuanBaoShopData.ShoppingCartItem> Games.YuanBaoShopData.ShoppingCart::get_GoodsInfo()
 List_1_t5003 * ShoppingCart_get_GoodsInfo_m35797 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::set_GoodsInfo(System.Collections.Generic.List`1<Games.YuanBaoShopData.ShoppingCartItem>)
 void ShoppingCart_set_GoodsInfo_m35798 (ShoppingCart_t4955 * __this, List_1_t5003 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.YuanBaoShopData.ShoppingCart::get_CreateTime()
 int32_t ShoppingCart_get_CreateTime_m35799 (ShoppingCart_t4955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.YuanBaoShopData.ShoppingCart::set_CreateTime(System.Int32)
 void ShoppingCart_set_CreateTime_m35800 (ShoppingCart_t4955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
