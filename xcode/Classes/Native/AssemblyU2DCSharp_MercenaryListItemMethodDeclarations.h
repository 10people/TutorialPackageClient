#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MercenaryListItem
struct MercenaryListItem_t1903;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// MercenaryWindow
struct MercenaryWindow_t1902;
// HuaShanPVPData/MercenaryInfo
#include "AssemblyU2DCSharp_HuaShanPVPData_MercenaryInfo.h"

// System.Void MercenaryListItem::.ctor()
 void MercenaryListItem__ctor_m12497 (MercenaryListItem_t1903 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MercenaryListItem MercenaryListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,MercenaryWindow,HuaShanPVPData/MercenaryInfo)
 MercenaryListItem_t1903 * MercenaryListItem_CreateItem_m12498 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, MercenaryWindow_t1902 * ___parent, MercenaryInfo_t1904  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MercenaryListItem::SetData(MercenaryWindow,HuaShanPVPData/MercenaryInfo)
 void MercenaryListItem_SetData_m12499 (MercenaryListItem_t1903 * __this, MercenaryWindow_t1902 * ___parent, MercenaryInfo_t1904  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// HuaShanPVPData/MercenaryInfo MercenaryListItem::GetData()
 MercenaryInfo_t1904  MercenaryListItem_GetData_m12500 (MercenaryListItem_t1903 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MercenaryListItem::OnItemClick()
 void MercenaryListItem_OnItemClick_m12501 (MercenaryListItem_t1903 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
