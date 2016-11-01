#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PvPRankListItem
struct PvPRankListItem_t1916;
// UnityEngine.GameObject
struct GameObject_t9;
// PvPRankWindow
struct PvPRankWindow_t1915;
// System.String
struct String_t;
// PVPData/PvPRankListItemInfo
#include "AssemblyU2DCSharp_PVPData_PvPRankListItemInfo.h"

// System.Void PvPRankListItem::.ctor()
 void PvPRankListItem__ctor_m12526 (PvPRankListItem_t1916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PvPRankListItem PvPRankListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,PvPRankWindow,System.String,PVPData/PvPRankListItemInfo)
 PvPRankListItem_t1916 * PvPRankListItem_CreateItem_m12527 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, PvPRankWindow_t1915 * ___parent, String_t* ___name, PvPRankListItemInfo_t1917  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PVPData/PvPRankListItemInfo PvPRankListItem::GetData()
 PvPRankListItemInfo_t1917  PvPRankListItem_GetData_m12528 (PvPRankListItem_t1916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PvPRankListItem::SendData(PvPRankWindow,PVPData/PvPRankListItemInfo)
 void PvPRankListItem_SendData_m12529 (PvPRankListItem_t1916 * __this, PvPRankWindow_t1915 * ___parent, PvPRankListItemInfo_t1917  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PvPRankListItem::Cleanup()
 void PvPRankListItem_Cleanup_m12530 (PvPRankListItem_t1916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PvPRankListItem::SetHilight(System.Boolean)
 void PvPRankListItem_SetHilight_m12531 (PvPRankListItem_t1916 * __this, bool ___set, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PvPRankListItem::OnItemClick()
 void PvPRankListItem_OnItemClick_m12532 (PvPRankListItem_t1916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
