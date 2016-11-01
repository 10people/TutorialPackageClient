#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Item.GameItemContainer
struct GameItemContainer_t1340;
// Games.Item.GameItem
struct GameItem_t1172;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkillBook>
struct List_1_t374;
// Games.Item.GameItemContainer/Type
#include "AssemblyU2DCSharp_Games_Item_GameItemContainer_Type.h"

// System.Void Games.Item.GameItemContainer::.ctor(System.Int32,Games.Item.GameItemContainer/Type)
 void GameItemContainer__ctor_m33765 (GameItemContainer_t1340 * __this, int32_t ___nSize, int32_t ___nType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItemContainer::get_ContainerSize()
 int32_t GameItemContainer_get_ContainerSize_m33766 (GameItemContainer_t1340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GameItemContainer::AddContainerSize(System.Int32)
 void GameItemContainer_AddContainerSize_m33767 (GameItemContainer_t1340 * __this, int32_t ___nAdd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItemContainer::GetCanContainerSize()
 int32_t GameItemContainer_GetCanContainerSize_m33768 (GameItemContainer_t1340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItemContainer/Type Games.Item.GameItemContainer::get_ContainerType()
 int32_t GameItemContainer_get_ContainerType_m33769 (GameItemContainer_t1340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItem Games.Item.GameItemContainer::GetItem(System.Int32)
 GameItem_t1172 * GameItemContainer_GetItem_m33770 (GameItemContainer_t1340 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItem Games.Item.GameItemContainer::GetItemByGuid(System.UInt64)
 GameItem_t1172 * GameItemContainer_GetItemByGuid_m33771 (GameItemContainer_t1340 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GameItemContainer::UpdateItem(System.Int32,Games.Item.GameItem)
 bool GameItemContainer_UpdateItem_m33772 (GameItemContainer_t1340 * __this, int32_t ___slot, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItemContainer::GetItemCount()
 int32_t GameItemContainer_GetItemCount_m33773 (GameItemContainer_t1340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItemContainer::GetItemCountByDataId(System.Int32)
 int32_t GameItemContainer_GetItemCountByDataId_m33774 (GameItemContainer_t1340 * __this, int32_t ___dataid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItemContainer::GetBindItemCountByDataId(System.Int32)
 int32_t GameItemContainer_GetBindItemCountByDataId_m33775 (GameItemContainer_t1340 * __this, int32_t ___dataid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GameItemContainer::GetEquipCountBySetId(System.Int32)
 int32_t GameItemContainer_GetEquipCountBySetId_m33776 (GameItemContainer_t1340 * __this, int32_t ___setId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Games.Item.GameItemContainer::GetItemGuidByDataID(System.Int32)
 uint64_t GameItemContainer_GetItemGuidByDataID_m33777 (GameItemContainer_t1340 * __this, int32_t ___dataID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Item.GameItem> Games.Item.GameItemContainer::GetList()
 List_1_t1244 * GameItemContainer_GetList_m33778 (GameItemContainer_t1340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkillBook> Games.Item.GameItemContainer::GetSkillLearnBooksByElementType(System.Int32)
 List_1_t374 * GameItemContainer_GetSkillLearnBooksByElementType_m33779 (GameItemContainer_t1340 * __this, int32_t ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
