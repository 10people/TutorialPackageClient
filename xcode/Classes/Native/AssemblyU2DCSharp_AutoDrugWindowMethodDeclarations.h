#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoDrugWindow
struct AutoDrugWindow_t1215;
// AutoFightLogic
struct AutoFightLogic_t1218;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// AutoDrugItem
struct AutoDrugItem_t1860;
// AutoitemLogicEx
struct AutoitemLogicEx_t1222;

// System.Void AutoDrugWindow::.ctor()
 void AutoDrugWindow__ctor_m12804 (AutoDrugWindow_t1215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoDrugWindow::Start()
 void AutoDrugWindow_Start_m12805 (AutoDrugWindow_t1215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoDrugWindow::UpdateData(System.Int32,AutoFightLogic)
 void AutoDrugWindow_UpdateData_m12806 (AutoDrugWindow_t1215 * __this, int32_t ___nType, AutoFightLogic_t1218 * ___fightlogic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoDrugWindow::OnLoadDrugItem(UnityEngine.GameObject,System.Object)
 void AutoDrugWindow_OnLoadDrugItem_m12807 (AutoDrugWindow_t1215 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoDrugWindow::OnOpItemClick(AutoDrugItem)
 void AutoDrugWindow_OnOpItemClick_m12808 (AutoDrugWindow_t1215 * __this, AutoDrugItem_t1860 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoDrugWindow::OnOpItemClickEx(AutoitemLogicEx)
 void AutoDrugWindow_OnOpItemClickEx_m12809 (AutoDrugWindow_t1215 * __this, AutoitemLogicEx_t1222 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
