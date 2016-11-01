#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SysShopPage
struct SysShopPage_t1845;
// SysShopPageItem
struct SysShopPageItem_t1846;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_SystemShop
struct Tab_SystemShop_t679;

// System.Void SysShopPage::.ctor()
 void SysShopPage__ctor_m12669 (SysShopPage_t1845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::Start()
 void SysShopPage_Start_m12670 (SysShopPage_t1845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::OnDisable()
 void SysShopPage_OnDisable_m12671 (SysShopPage_t1845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SysShopPageItem SysShopPage::GetCurHighLightItem()
 SysShopPageItem_t1846 * SysShopPage_GetCurHighLightItem_m12672 (SysShopPage_t1845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::AddItem(UnityEngine.GameObject,System.Int32,System.Int32,GCGame.Table.Tab_SystemShop)
 void SysShopPage_AddItem_m12673 (SysShopPage_t1845 * __this, GameObject_t9 * ___curItem, int32_t ___index, int32_t ___shopIndex, Tab_SystemShop_t679 * ___tabSysShop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::ChildItemClick(SysShopPageItem)
 void SysShopPage_ChildItemClick_m12674 (SysShopPage_t1845 * __this, SysShopPageItem_t1846 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::ChildItemDoubleClick(SysShopPageItem)
 void SysShopPage_ChildItemDoubleClick_m12675 (SysShopPage_t1845 * __this, SysShopPageItem_t1846 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::ChildItemIconClick(SysShopPageItem)
 void SysShopPage_ChildItemIconClick_m12676 (SysShopPage_t1845 * __this, SysShopPageItem_t1846 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::HighLightItem(SysShopPageItem)
 void SysShopPage_HighLightItem_m12677 (SysShopPage_t1845 * __this, SysShopPageItem_t1846 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPage::SetPageNum(System.Int32)
 void SysShopPage_SetPageNum_m12678 (SysShopPage_t1845 * __this, int32_t ___pageNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SysShopPage::GetPageNum()
 int32_t SysShopPage_GetPageNum_m12679 (SysShopPage_t1845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
