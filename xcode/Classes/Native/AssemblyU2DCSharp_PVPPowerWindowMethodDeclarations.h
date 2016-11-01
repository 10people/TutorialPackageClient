#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPPowerWindow
struct PVPPowerWindow_t1913;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// PVPSkillListItem
struct PVPSkillListItem_t1914;

// System.Void PVPPowerWindow::.ctor()
 void PVPPowerWindow__ctor_m13582 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::.cctor()
 void PVPPowerWindow__cctor_m13583 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::Start()
 void PVPPowerWindow_Start_m13584 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::OnEnable()
 void PVPPowerWindow_OnEnable_m13585 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PVPPowerWindow PVPPowerWindow::Instance()
 PVPPowerWindow_t1913 * PVPPowerWindow_Instance_m13586 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::Awake()
 void PVPPowerWindow_Awake_m13587 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::UpdateSkillList()
 void PVPPowerWindow_UpdateSkillList_m13588 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::OnLoadPVPSkillItem(UnityEngine.GameObject,System.Object)
 void PVPPowerWindow_OnLoadPVPSkillItem_m13589 (PVPPowerWindow_t1913 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::UpdateCombatValue()
 void PVPPowerWindow_UpdateCombatValue_m13590 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::ShowCurSkill(PVPSkillListItem)
 void PVPPowerWindow_ShowCurSkill_m13591 (PVPPowerWindow_t1913 * __this, PVPSkillListItem_t1914 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PVPPowerWindow::IsCanLevelUpSkill(System.Int32)
 bool PVPPowerWindow_IsCanLevelUpSkill_m13592 (PVPPowerWindow_t1913 * __this, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::OnLevelupClick()
 void PVPPowerWindow_OnLevelupClick_m13593 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPPowerWindow::DoLevelUp()
 void PVPPowerWindow_DoLevelUp_m13594 (PVPPowerWindow_t1913 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
