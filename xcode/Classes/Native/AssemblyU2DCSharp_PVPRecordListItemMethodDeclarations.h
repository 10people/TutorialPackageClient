#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPRecordListItem
struct PVPRecordListItem_t1911;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// PVPRecordWindow
struct PVPRecordWindow_t1912;

// System.Void PVPRecordListItem::.ctor()
 void PVPRecordListItem__ctor_m12516 (PVPRecordListItem_t1911 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PVPRecordListItem PVPRecordListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,PVPRecordWindow,System.String,System.String,System.String,System.Boolean)
 PVPRecordListItem_t1911 * PVPRecordListItem_CreateItem_m12517 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, PVPRecordWindow_t1912 * ___parent, String_t* ___timeText, String_t* ___nameText, String_t* ___rankText, bool ___isSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPRecordListItem::SetData(PVPRecordWindow,System.String,System.String,System.String)
 void PVPRecordListItem_SetData_m12518 (PVPRecordListItem_t1911 * __this, PVPRecordWindow_t1912 * ___parent, String_t* ___timeText, String_t* ___nameText, String_t* ___rankText, MethodInfo* method) IL2CPP_METHOD_ATTR;
