#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TabController
struct TabController_t1209;
// TabButton
struct TabButton_t1210;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;

// System.Void TabController::.ctor()
 void TabController__ctor_m12208 (TabController_t1209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController::Awake()
 void TabController_Awake_m12209 (TabController_t1209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController::InitData()
 void TabController_InitData_m12210 (TabController_t1209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController::OnTabClicked(TabButton)
 void TabController_OnTabClicked_m12211 (TabController_t1209 * __this, TabButton_t1210 * ___curTab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TabController::ChangeTab(System.String)
 GameObject_t9 * TabController_ChangeTab_m12212 (TabController_t1209 * __this, String_t* ___tabName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController::ClearTabChoose()
 void TabController_ClearTabChoose_m12213 (TabController_t1209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController::EnableClick(System.Boolean)
 void TabController_EnableClick_m12214 (TabController_t1209 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TabButton TabController::GetTabButton(System.String)
 TabButton_t1210 * TabController_GetTabButton_m12215 (TabController_t1209 * __this, String_t* ___tabName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TabButton TabController::GetHighlightTab()
 TabButton_t1210 * TabController_GetHighlightTab_m12216 (TabController_t1209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TabController::DoChangeTab(TabButton)
 GameObject_t9 * TabController_DoChangeTab_m12217 (TabController_t1209 * __this, TabButton_t1210 * ___curTab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TabController::SortTabGrid()
 void TabController_SortTabGrid_m12218 (TabController_t1209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TabController::GetTabButtonObj(System.String)
 GameObject_t9 * TabController_GetTabButtonObj_m12219 (TabController_t1209 * __this, String_t* ___tabName, MethodInfo* method) IL2CPP_METHOD_ATTR;
