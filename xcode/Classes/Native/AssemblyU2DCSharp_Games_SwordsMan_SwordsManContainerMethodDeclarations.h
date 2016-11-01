#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.SwordsMan.SwordsManContainer
struct SwordsManContainer_t4829;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;
// System.Collections.Generic.List`1<Games.SwordsMan.SwordsMan>
struct List_1_t4828;
// Games.SwordsMan.SwordsManContainer/PACK_TYPE
#include "AssemblyU2DCSharp_Games_SwordsMan_SwordsManContainer_PACK_TY.h"

// System.Void Games.SwordsMan.SwordsManContainer::.ctor(System.Int32,Games.SwordsMan.SwordsManContainer/PACK_TYPE)
 void SwordsManContainer__ctor_m34330 (SwordsManContainer_t4829 * __this, int32_t ___nSize, int32_t ___nType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.SwordsMan.SwordsManContainer::get_ContainerSize()
 int32_t SwordsManContainer_get_ContainerSize_m34331 (SwordsManContainer_t4829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SwordsMan.SwordsManContainer::AddContainerSize(System.Int32)
 void SwordsManContainer_AddContainerSize_m34332 (SwordsManContainer_t4829 * __this, int32_t ___nAdd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.SwordsMan.SwordsManContainer::GetEmptyContainerSize()
 int32_t SwordsManContainer_GetEmptyContainerSize_m34333 (SwordsManContainer_t4829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SwordsMan.SwordsManContainer/PACK_TYPE Games.SwordsMan.SwordsManContainer::get_ContainerType()
 int32_t SwordsManContainer_get_ContainerType_m34334 (SwordsManContainer_t4829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SwordsMan.SwordsMan Games.SwordsMan.SwordsManContainer::GetSwordsMan(System.Int32)
 SwordsMan_t1175 * SwordsManContainer_GetSwordsMan_m34335 (SwordsManContainer_t4829 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SwordsMan.SwordsMan Games.SwordsMan.SwordsManContainer::GetSwordsManByGuid(System.UInt64)
 SwordsMan_t1175 * SwordsManContainer_GetSwordsManByGuid_m34336 (SwordsManContainer_t4829 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.SwordsMan.SwordsManContainer::UpdateSwordsMan(System.Int32,Games.SwordsMan.SwordsMan)
 bool SwordsManContainer_UpdateSwordsMan_m34337 (SwordsManContainer_t4829 * __this, int32_t ___slot, SwordsMan_t1175 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.SwordsMan.SwordsManContainer::GetSwordsManCount()
 int32_t SwordsManContainer_GetSwordsManCount_m34338 (SwordsManContainer_t4829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.SwordsMan.SwordsMan> Games.SwordsMan.SwordsManContainer::GetList()
 List_1_t4828 * SwordsManContainer_GetList_m34339 (SwordsManContainer_t4829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.SwordsMan.SwordsManContainer::GetAllSwordsManCombatValue()
 int32_t SwordsManContainer_GetAllSwordsManCombatValue_m34340 (SwordsManContainer_t4829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
