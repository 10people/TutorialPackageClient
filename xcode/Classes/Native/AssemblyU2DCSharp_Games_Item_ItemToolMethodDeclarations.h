#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Item.ItemTool
struct ItemTool_t4773;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// Games.Item.GameItemContainer
struct GameItemContainer_t1340;
// System.String
struct String_t;
// Games.Item.GameItem
struct GameItem_t1172;
// Games.Item.ItemQuality
#include "AssemblyU2DCSharp_Games_Item_ItemQuality.h"
// COMBATATTE
#include "AssemblyU2DCSharp_COMBATATTE.h"

// System.Void Games.Item.ItemTool::.ctor()
 void ItemTool__ctor_m33783 (ItemTool_t4773 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Item.GameItem> Games.Item.ItemTool::ItemFilter(Games.Item.GameItemContainer,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)
 List_1_t1244 * ItemTool_ItemFilter_m33784 (Object_t * __this/* static, unused */, GameItemContainer_t1340 * ___Container, int32_t ___nClass, int32_t ___nSubClass, bool ___isQianKunDai, int32_t ___nMin, int32_t ___nCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Item.GameItem> Games.Item.ItemTool::ItemFilter(System.Collections.Generic.List`1<Games.Item.GameItem>,System.Int32)
 List_1_t1244 * ItemTool_ItemFilter_m33785 (Object_t * __this/* static, unused */, List_1_t1244 * ___ItemList, int32_t ___nQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Item.GameItem> Games.Item.ItemTool::ItemSort(System.Collections.Generic.List`1<Games.Item.GameItem>)
 List_1_t1244 * ItemTool_ItemSort_m33786 (Object_t * __this/* static, unused */, List_1_t1244 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.ItemTool::GetEnchanceLevelUpExp(System.Int32,Games.Item.ItemQuality)
 int32_t ItemTool_GetEnchanceLevelUpExp_m33787 (Object_t * __this/* static, unused */, int32_t ___level, int32_t ___itemquality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.ItemTool::GetStarColourSprite(System.Int32)
 String_t* ItemTool_GetStarColourSprite_m33788 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.ItemTool::GetEquipStarQuality(System.Int32)
 String_t* ItemTool_GetEquipStarQuality_m33789 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.ItemTool::GetStarColor(System.Int32)
 String_t* ItemTool_GetStarColor_m33790 (Object_t * __this/* static, unused */, int32_t ___starLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.ItemTool::GetColorStarSprite(System.Int32,System.String&,System.String&)
 void ItemTool_GetColorStarSprite_m33791 (Object_t * __this/* static, unused */, int32_t ___starLevel, String_t** ___curSprite, String_t** ___nextSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.ItemTool::GetGemAttr(System.Int32)
 String_t* ItemTool_GetGemAttr_m33792 (Object_t * __this/* static, unused */, int32_t ___GemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Item.ItemTool::ConvertAttrToString(COMBATATTE)
 String_t* ItemTool_ConvertAttrToString_m33793 (Object_t * __this/* static, unused */, int32_t ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.ItemTool::GetEquipSlotType(System.Int32)
 int32_t ItemTool_GetEquipSlotType_m33794 (Object_t * __this/* static, unused */, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.ItemTool::GetEquipSlotByUIIndex(System.Int32)
 int32_t ItemTool_GetEquipSlotByUIIndex_m33795 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.ItemTool::GetUIIndexByEquipSlot(System.Int32)
 int32_t ItemTool_GetUIIndexByEquipSlot_m33796 (Object_t * __this/* static, unused */, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Item.GameItem> Games.Item.ItemTool::EnchanceMaterialFilter(System.Collections.Generic.List`1<Games.Item.GameItem>,System.Boolean)
 List_1_t1244 * ItemTool_EnchanceMaterialFilter_m33797 (Object_t * __this/* static, unused */, List_1_t1244 * ___list, bool ___valuable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.ItemTool::GetEquipIdByTransferSetId(System.Int32)
 int32_t ItemTool_GetEquipIdByTransferSetId_m33798 (Object_t * __this/* static, unused */, int32_t ___transferId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.ItemTool::<EnchanceMaterialFilter>m__26(Games.Item.GameItem)
 bool ItemTool_U3CEnchanceMaterialFilterU3Em__26_m33799 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.ItemTool::<EnchanceMaterialFilter>m__27(Games.Item.GameItem)
 bool ItemTool_U3CEnchanceMaterialFilterU3Em__27_m33800 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.ItemTool::<EnchanceMaterialFilter>m__2A(Games.Item.GameItem)
 bool ItemTool_U3CEnchanceMaterialFilterU3Em__2A_m33801 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.ItemTool::<EnchanceMaterialFilter>m__2B(Games.Item.GameItem)
 bool ItemTool_U3CEnchanceMaterialFilterU3Em__2B_m33802 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
