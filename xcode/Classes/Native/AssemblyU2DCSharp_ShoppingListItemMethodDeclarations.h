#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShoppingListItem
struct ShoppingListItem_t1719;
// System.String
struct String_t;
// PresentRootLogic/TAB_INDEX
#include "AssemblyU2DCSharp_PresentRootLogic_TAB_INDEX.h"
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"

// System.Void ShoppingListItem::.ctor()
 void ShoppingListItem__ctor_m11208 (ShoppingListItem_t1719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShoppingListItem::Start()
 void ShoppingListItem_Start_m11209 (ShoppingListItem_t1719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShoppingListItem::Update()
 void ShoppingListItem_Update_m11210 (ShoppingListItem_t1719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShoppingListItem::Init(System.Int32,System.Int32,PresentRootLogic/TAB_INDEX,System.Int32)
 void ShoppingListItem_Init_m11211 (ShoppingListItem_t1719 * __this, int32_t ___goodsid, int32_t ___count, int32_t ___tab, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShoppingListItem::GoodsOnClick(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void ShoppingListItem_GoodsOnClick_m11212 (ShoppingListItem_t1719 * __this, int32_t ___nItemID, int32_t ___eSlotType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShoppingListItem::DelFromShoppingCart()
 void ShoppingListItem_DelFromShoppingCart_m11213 (ShoppingListItem_t1719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShoppingListItem::DelOK()
 void ShoppingListItem_DelOK_m11214 (ShoppingListItem_t1719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
