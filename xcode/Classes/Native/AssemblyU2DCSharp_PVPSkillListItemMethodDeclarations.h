#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPSkillListItem
struct PVPSkillListItem_t1914;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// PVPPowerWindow
struct PVPPowerWindow_t1913;

// System.Void PVPSkillListItem::.ctor()
 void PVPSkillListItem__ctor_m12519 (PVPSkillListItem_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPSkillListItem::get_SkillId()
 int32_t PVPSkillListItem_get_SkillId_m12520 (PVPSkillListItem_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPSkillListItem::set_SkillId(System.Int32)
 void PVPSkillListItem_set_SkillId_m12521 (PVPSkillListItem_t1914 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PVPSkillListItem PVPSkillListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,PVPPowerWindow,System.String,System.String,System.Int32)
 PVPSkillListItem_t1914 * PVPSkillListItem_CreateItem_m12522 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, PVPPowerWindow_t1913 * ___parent, String_t* ___SkillName, String_t* ___SkillLev, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPSkillListItem::SetData(PVPPowerWindow,System.String,System.String,System.Int32)
 void PVPSkillListItem_SetData_m12523 (PVPSkillListItem_t1914 * __this, PVPPowerWindow_t1913 * ___parent, String_t* ___skillName, String_t* ___SkillLev, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPSkillListItem::OnItemClick()
 void PVPSkillListItem_OnItemClick_m12524 (PVPSkillListItem_t1914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPSkillListItem::EnableHighlight(System.Boolean)
 void PVPSkillListItem_EnableHighlight_m12525 (PVPSkillListItem_t1914 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
