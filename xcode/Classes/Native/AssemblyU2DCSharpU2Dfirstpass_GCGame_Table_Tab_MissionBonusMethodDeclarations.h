#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_MissionBonus
struct Tab_MissionBonus_t533;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_MissionBonus::.ctor()
 void Tab_MissionBonus__ctor_m2582 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MissionBonus::GetInstanceFile()
 String_t* Tab_MissionBonus_GetInstanceFile_m2583 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::get_BindYuanBao()
 int32_t Tab_MissionBonus_get_BindYuanBao_m2584 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::get_ChoosedItemNum()
 int32_t Tab_MissionBonus_get_ChoosedItemNum_m2585 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::get_Exp()
 int32_t Tab_MissionBonus_get_Exp_m2586 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::get_FellowExp()
 int32_t Tab_MissionBonus_get_FellowExp_m2587 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::get_Id()
 int32_t Tab_MissionBonus_get_Id_m2588 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::getItemIDCount()
 int32_t Tab_MissionBonus_getItemIDCount_m2589 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::GetItemIDbyIndex(System.Int32)
 int32_t Tab_MissionBonus_GetItemIDbyIndex_m2590 (Tab_MissionBonus_t533 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::getItemNumCount()
 int32_t Tab_MissionBonus_getItemNumCount_m2591 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::GetItemNumbyIndex(System.Int32)
 int32_t Tab_MissionBonus_GetItemNumbyIndex_m2592 (Tab_MissionBonus_t533 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::get_Money()
 int32_t Tab_MissionBonus_get_Money_m2593 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::getProfessionItemIDCount()
 int32_t Tab_MissionBonus_getProfessionItemIDCount_m2594 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::GetProfessionItemIDbyIndex(System.Int32)
 int32_t Tab_MissionBonus_GetProfessionItemIDbyIndex_m2595 (Tab_MissionBonus_t533 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::getProfessionNumCount()
 int32_t Tab_MissionBonus_getProfessionNumCount_m2596 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::GetProfessionNumbyIndex(System.Int32)
 int32_t Tab_MissionBonus_GetProfessionNumbyIndex_m2597 (Tab_MissionBonus_t533 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::getToolIDCount()
 int32_t Tab_MissionBonus_getToolIDCount_m2598 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::GetToolIDbyIndex(System.Int32)
 int32_t Tab_MissionBonus_GetToolIDbyIndex_m2599 (Tab_MissionBonus_t533 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::getToolNumCount()
 int32_t Tab_MissionBonus_getToolNumCount_m2600 (Tab_MissionBonus_t533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionBonus::GetToolNumbyIndex(System.Int32)
 int32_t Tab_MissionBonus_GetToolNumbyIndex_m2601 (Tab_MissionBonus_t533 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_MissionBonus::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_MissionBonus_LoadTable_m2602 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_MissionBonus::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_MissionBonus_SerializableTable_m2603 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
