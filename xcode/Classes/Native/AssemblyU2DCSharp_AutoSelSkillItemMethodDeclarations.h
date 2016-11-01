#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoSelSkillItem
struct AutoSelSkillItem_t1861;
// UnityEngine.GameObject
struct GameObject_t9;
// AutoFightLogic
struct AutoFightLogic_t1218;

// System.Void AutoSelSkillItem::.ctor()
 void AutoSelSkillItem__ctor_m12311 (AutoSelSkillItem_t1861 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSelSkillItem::Start()
 void AutoSelSkillItem_Start_m12312 (AutoSelSkillItem_t1861 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSelSkillItem::OnSkilltoggle()
 void AutoSelSkillItem_OnSkilltoggle_m12313 (AutoSelSkillItem_t1861 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoSelSkillItem AutoSelSkillItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,AutoFightLogic,System.Int32,System.Int32,System.Boolean)
 AutoSelSkillItem_t1861 * AutoSelSkillItem_CreateItem_m12314 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, AutoFightLogic_t1218 * ___parent, int32_t ___OwnIndex, int32_t ___nSkillId, bool ___IsToggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
