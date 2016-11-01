#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TooltipsEquipAttr
struct TooltipsEquipAttr_t1335;
// Games.Item.GameItem
struct GameItem_t1172;
// System.String
struct String_t;

// System.Void TooltipsEquipAttr::.ctor()
 void TooltipsEquipAttr__ctor_m11808 (TooltipsEquipAttr_t1335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TooltipsEquipAttr::Start()
 void TooltipsEquipAttr_Start_m11809 (TooltipsEquipAttr_t1335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TooltipsEquipAttr::ClearInfo()
 void TooltipsEquipAttr_ClearInfo_m11810 (TooltipsEquipAttr_t1335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TooltipsEquipAttr::ShowAttr(Games.Item.GameItem,System.Boolean)
 void TooltipsEquipAttr_ShowAttr_m11811 (TooltipsEquipAttr_t1335 * __this, GameItem_t1172 * ___item, bool ___bUnEquiped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TooltipsEquipAttr::GetAttrColor(System.Boolean,Games.Item.GameItem,System.Single,System.String,System.Int32)
 String_t* TooltipsEquipAttr_GetAttrColor_m11812 (TooltipsEquipAttr_t1335 * __this, bool ___bUnEquiped, GameItem_t1172 * ___compareEquip, float ___newEquipAttrValue, String_t* ___attrName, int32_t ___AddAttrIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TooltipsEquipAttr::ShowEquipSetAttr(Games.Item.GameItem)
 void TooltipsEquipAttr_ShowEquipSetAttr_m11813 (TooltipsEquipAttr_t1335 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TooltipsEquipAttr::SetEnchanceAndStarAttr(Games.Item.GameItem,System.Int32,System.Single,System.Boolean)
 void TooltipsEquipAttr_SetEnchanceAndStarAttr_m11814 (TooltipsEquipAttr_t1335 * __this, GameItem_t1172 * ___item, int32_t ___index, float ___attr, bool ___extraAddAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TooltipsEquipAttr::SetStarAttr(Games.Item.GameItem,System.Int32,System.Single)
 void TooltipsEquipAttr_SetStarAttr_m11815 (TooltipsEquipAttr_t1335 * __this, GameItem_t1172 * ___item, int32_t ___index, float ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TooltipsEquipAttr::GetStarAttr(Games.Item.GameItem,System.Single)
 int32_t TooltipsEquipAttr_GetStarAttr_m11816 (TooltipsEquipAttr_t1335 * __this, GameItem_t1172 * ___item, float ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
