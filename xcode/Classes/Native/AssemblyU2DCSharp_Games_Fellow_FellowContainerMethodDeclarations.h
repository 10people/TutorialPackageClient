#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Fellow.FellowContainer
struct FellowContainer_t4724;
// System.Collections.Generic.List`1<Games.Fellow.Fellow>
struct List_1_t1633;
// Games.Fellow.Fellow
struct Fellow_t1174;

// System.Void Games.Fellow.FellowContainer::.ctor()
 void FellowContainer__ctor_m33394 (FellowContainer_t4724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Fellow.Fellow> Games.Fellow.FellowContainer::get_Fellows()
 List_1_t1633 * FellowContainer_get_Fellows_m33395 (FellowContainer_t4724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Fellow.FellowContainer::CleanUp()
 void FellowContainer_CleanUp_m33396 (FellowContainer_t4724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Fellow.FellowContainer::get_ContainerSize()
 int32_t FellowContainer_get_ContainerSize_m33397 (FellowContainer_t4724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Fellow.FellowContainer::AddContainerSize(System.Int32)
 void FellowContainer_AddContainerSize_m33398 (FellowContainer_t4724 * __this, int32_t ___nAdd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Fellow.Fellow Games.Fellow.FellowContainer::GetFellowByIndex(System.Int32)
 Fellow_t1174 * FellowContainer_GetFellowByIndex_m33399 (FellowContainer_t4724 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Fellow.Fellow Games.Fellow.FellowContainer::GetFellowByGuid(System.UInt64)
 Fellow_t1174 * FellowContainer_GetFellowByGuid_m33400 (FellowContainer_t4724 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Fellow.FellowContainer::UpdateFellow(System.Int32,Games.Fellow.Fellow)
 bool FellowContainer_UpdateFellow_m33401 (FellowContainer_t4724 * __this, int32_t ___slot, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Fellow.FellowContainer::GetFellowCount()
 int32_t FellowContainer_GetFellowCount_m33402 (FellowContainer_t4724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Fellow.FellowContainer::GetEmptySlotCount()
 int32_t FellowContainer_GetEmptySlotCount_m33403 (FellowContainer_t4724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Fellow.FellowContainer::IsHaveBabyFellow()
 bool FellowContainer_IsHaveBabyFellow_m33404 (FellowContainer_t4724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
