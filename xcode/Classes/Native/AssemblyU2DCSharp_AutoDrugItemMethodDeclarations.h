#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoDrugItem
struct AutoDrugItem_t1860;
// UnityEngine.GameObject
struct GameObject_t9;
// AutoDrugWindow
struct AutoDrugWindow_t1215;
// GCGame.Table.Tab_CommonItem
struct Tab_CommonItem_t407;
// Games.Item.GameItem
struct GameItem_t1172;

// System.Void AutoDrugItem::.ctor()
 void AutoDrugItem__ctor_m12306 (AutoDrugItem_t1860 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoDrugItem::Start()
 void AutoDrugItem_Start_m12307 (AutoDrugItem_t1860 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoDrugItem AutoDrugItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,AutoDrugWindow,GCGame.Table.Tab_CommonItem)
 AutoDrugItem_t1860 * AutoDrugItem_CreateItem_m12308 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, AutoDrugWindow_t1215 * ___parent, Tab_CommonItem_t407 * ___CommonItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoDrugItem AutoDrugItem::CreateEquip(UnityEngine.GameObject,UnityEngine.GameObject,AutoDrugWindow,Games.Item.GameItem)
 AutoDrugItem_t1860 * AutoDrugItem_CreateEquip_m12309 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, AutoDrugWindow_t1215 * ___parent, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoDrugItem::OnItemClick()
 void AutoDrugItem_OnItemClick_m12310 (AutoDrugItem_t1860 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
