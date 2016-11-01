#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SwordsManShopItem
struct SwordsManShopItem_t1945;
// UnityEngine.GameObject
struct GameObject_t9;
// SwordsManShop
struct SwordsManShop_t1944;
// GCGame.Table.Tab_SwordsManScoreShop
struct Tab_SwordsManScoreShop_t677;

// System.Void SwordsManShopItem::.ctor()
 void SwordsManShopItem__ctor_m12658 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SwordsManShopItem::get_Price()
 int32_t SwordsManShopItem_get_Price_m12659 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SwordsManShopItem::get_SwordsManDataID()
 int32_t SwordsManShopItem_get_SwordsManDataID_m12660 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SwordsManShopItem SwordsManShopItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,SwordsManShop)
 SwordsManShopItem_t1945 * SwordsManShopItem_CreateItem_m12661 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, SwordsManShop_t1944 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManShopItem::SetParent(SwordsManShop)
 void SwordsManShopItem_SetParent_m12662 (SwordsManShopItem_t1945 * __this, SwordsManShop_t1944 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManShopItem::SetShopSwordsMan(GCGame.Table.Tab_SwordsManScoreShop)
 void SwordsManShopItem_SetShopSwordsMan_m12663 (SwordsManShopItem_t1945 * __this, Tab_SwordsManScoreShop_t677 * ___ShopSwordsManTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManShopItem::OnClickShopItem()
 void SwordsManShopItem_OnClickShopItem_m12664 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManShopItem::OnSelectShopItem()
 void SwordsManShopItem_OnSelectShopItem_m12665 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManShopItem::OnCancelSelectShopItem()
 void SwordsManShopItem_OnCancelSelectShopItem_m12666 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManShopItem::OnClickExchange()
 void SwordsManShopItem_OnClickExchange_m12667 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManShopItem::ExchangeSwordsmanOK()
 void SwordsManShopItem_ExchangeSwordsmanOK_m12668 (SwordsManShopItem_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
