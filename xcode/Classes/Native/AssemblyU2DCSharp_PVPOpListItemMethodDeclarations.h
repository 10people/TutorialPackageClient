#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPOpListItem
struct PVPOpListItem_t1909;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// PVPFindOpWindow
struct PVPFindOpWindow_t1908;
// PVPData/OpponentInfo
#include "AssemblyU2DCSharp_PVPData_OpponentInfo.h"

// System.Void PVPOpListItem::.ctor()
 void PVPOpListItem__ctor_m12508 (PVPOpListItem_t1909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PVPOpListItem PVPOpListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,PVPFindOpWindow,PVPData/OpponentInfo)
 PVPOpListItem_t1909 * PVPOpListItem_CreateItem_m12509 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resObj, String_t* ___name, PVPFindOpWindow_t1908 * ___parent, OpponentInfo_t1910  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPOpListItem::SetData(PVPFindOpWindow,PVPData/OpponentInfo)
 void PVPOpListItem_SetData_m12510 (PVPOpListItem_t1909 * __this, PVPFindOpWindow_t1908 * ___parent, OpponentInfo_t1910  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PVPData/OpponentInfo PVPOpListItem::GetData()
 OpponentInfo_t1910  PVPOpListItem_GetData_m12511 (PVPOpListItem_t1909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPOpListItem::OnItemClick()
 void PVPOpListItem_OnItemClick_m12512 (PVPOpListItem_t1909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPOpListItem::EnableHighlight(System.Boolean)
 void PVPOpListItem_EnableHighlight_m12513 (PVPOpListItem_t1909 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPOpListItem::OnClickChallenge()
 void PVPOpListItem_OnClickChallenge_m12514 (PVPOpListItem_t1909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPOpListItem::NewGuildPvp()
 void PVPOpListItem_NewGuildPvp_m12515 (PVPOpListItem_t1909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
