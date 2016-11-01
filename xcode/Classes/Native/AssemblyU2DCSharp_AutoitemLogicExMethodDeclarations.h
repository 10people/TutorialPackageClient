#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoitemLogicEx
struct AutoitemLogicEx_t1222;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_CommonItem
struct Tab_CommonItem_t407;
// Games.Item.GameItem
struct GameItem_t1172;

// System.Void AutoitemLogicEx::.ctor()
 void AutoitemLogicEx__ctor_m12315 (AutoitemLogicEx_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoitemLogicEx::Start()
 void AutoitemLogicEx_Start_m12316 (AutoitemLogicEx_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoitemLogicEx AutoitemLogicEx::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.Int32,GCGame.Table.Tab_CommonItem)
 AutoitemLogicEx_t1222 * AutoitemLogicEx_CreateItem_m12317 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, int32_t ___type, Tab_CommonItem_t407 * ___CommonItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoitemLogicEx AutoitemLogicEx::CreateEquip(UnityEngine.GameObject,UnityEngine.GameObject,System.Int32,Games.Item.GameItem)
 AutoitemLogicEx_t1222 * AutoitemLogicEx_CreateEquip_m12318 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, int32_t ___type, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoitemLogicEx::OnItemClick()
 void AutoitemLogicEx_OnItemClick_m12319 (AutoitemLogicEx_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoitemLogicEx::OnClickMedicneItem()
 void AutoitemLogicEx_OnClickMedicneItem_m12320 (AutoitemLogicEx_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoitemLogicEx::OnCancelChoose()
 void AutoitemLogicEx_OnCancelChoose_m12321 (AutoitemLogicEx_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoitemLogicEx::_showChoose()
 void AutoitemLogicEx__showChoose_m12322 (AutoitemLogicEx_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoitemLogicEx::_hideChoose()
 void AutoitemLogicEx__hideChoose_m12323 (AutoitemLogicEx_t1222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
