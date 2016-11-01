#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SysShopPageItem
struct SysShopPageItem_t1846;
// SysShopPageItem/ItemClickDelegate
struct ItemClickDelegate_t1946;
// GCGame.Table.Tab_SystemShop
struct Tab_SystemShop_t679;
// Games.Item.GameItem
struct GameItem_t1172;

// System.Void SysShopPageItem::.ctor()
 void SysShopPageItem__ctor_m12684 (SysShopPageItem_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem::Start()
 void SysShopPageItem_Start_m12685 (SysShopPageItem_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem::OnItemClick()
 void SysShopPageItem_OnItemClick_m12686 (SysShopPageItem_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem::OnItemDoubleClick()
 void SysShopPageItem_OnItemDoubleClick_m12687 (SysShopPageItem_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem::OnItemIconClick()
 void SysShopPageItem_OnItemIconClick_m12688 (SysShopPageItem_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem::OnItemButtomClick()
 void SysShopPageItem_OnItemButtomClick_m12689 (SysShopPageItem_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem::EnableHighLight(System.Boolean)
 void SysShopPageItem_EnableHighLight_m12690 (SysShopPageItem_t1846 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem::SetData(SysShopPageItem/ItemClickDelegate,SysShopPageItem/ItemClickDelegate,SysShopPageItem/ItemClickDelegate,System.Int32,GCGame.Table.Tab_SystemShop)
 void SysShopPageItem_SetData_m12691 (SysShopPageItem_t1846 * __this, ItemClickDelegate_t1946 * ___clickFun, ItemClickDelegate_t1946 * ___doubleClickFun, ItemClickDelegate_t1946 * ___iconClickFun, int32_t ___shopIndex, Tab_SystemShop_t679 * ___tabSysShop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItem SysShopPageItem::GetGameItem()
 GameItem_t1172 * SysShopPageItem_GetGameItem_m12692 (SysShopPageItem_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
