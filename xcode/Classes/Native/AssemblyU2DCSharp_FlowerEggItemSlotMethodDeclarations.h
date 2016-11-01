#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FlowerEggItemSlot
struct FlowerEggItemSlot_t1409;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// FlowerEggWindow
struct FlowerEggWindow_t1408;
// GCGame.Table.Tab_CharmItem
struct Tab_CharmItem_t395;

// System.Void FlowerEggItemSlot::.ctor()
 void FlowerEggItemSlot__ctor_m12417 (FlowerEggItemSlot_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FlowerEggItemSlot FlowerEggItemSlot::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,FlowerEggWindow)
 FlowerEggItemSlot_t1409 * FlowerEggItemSlot_CreateItem_m12418 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, FlowerEggWindow_t1408 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlowerEggItemSlot::SetData(GCGame.Table.Tab_CharmItem)
 void FlowerEggItemSlot_SetData_m12419 (FlowerEggItemSlot_t1409 * __this, Tab_CharmItem_t395 * ___tabCharmItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlowerEggItemSlot::SetParent(FlowerEggWindow)
 void FlowerEggItemSlot_SetParent_m12420 (FlowerEggItemSlot_t1409 * __this, FlowerEggWindow_t1408 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlowerEggItemSlot::ClearInfo()
 void FlowerEggItemSlot_ClearInfo_m12421 (FlowerEggItemSlot_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlowerEggItemSlot::SlotOnClick(UnityEngine.GameObject)
 void FlowerEggItemSlot_SlotOnClick_m12422 (FlowerEggItemSlot_t1409 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlowerEggItemSlot::ItemSlotChoose()
 void FlowerEggItemSlot_ItemSlotChoose_m12423 (FlowerEggItemSlot_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlowerEggItemSlot::ItemSlotChooseCancel()
 void FlowerEggItemSlot_ItemSlotChooseCancel_m12424 (FlowerEggItemSlot_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FlowerEggItemSlot::ItemID()
 int32_t FlowerEggItemSlot_ItemID_m12425 (FlowerEggItemSlot_t1409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
