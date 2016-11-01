#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleMatrixWindow
struct BelleMatrixWindow_t1878;
// BelleMatrixItem
struct BelleMatrixItem_t1879;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// BelleMatrixWindow/SelectFromType
#include "AssemblyU2DCSharp_BelleMatrixWindow_SelectFromType.h"

// System.Void BelleMatrixWindow::.ctor()
 void BelleMatrixWindow__ctor_m12872 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::.cctor()
 void BelleMatrixWindow__cctor_m12873 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BelleMatrixItem BelleMatrixWindow::get_CurSelectMatrix()
 BelleMatrixItem_t1879 * BelleMatrixWindow_get_CurSelectMatrix_m12874 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::set_CurSelectMatrix(BelleMatrixItem)
 void BelleMatrixWindow_set_CurSelectMatrix_m12875 (BelleMatrixWindow_t1878 * __this, BelleMatrixItem_t1879 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BelleMatrixWindow BelleMatrixWindow::Instance()
 BelleMatrixWindow_t1878 * BelleMatrixWindow_Instance_m12876 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BelleMatrixWindow::get_NewPlayerGuide_Step()
 int32_t BelleMatrixWindow_get_NewPlayerGuide_Step_m12877 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::set_NewPlayerGuide_Step(System.Int32)
 void BelleMatrixWindow_set_NewPlayerGuide_Step_m12878 (BelleMatrixWindow_t1878 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::OnEnable()
 void BelleMatrixWindow_OnEnable_m12879 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::OnDisable()
 void BelleMatrixWindow_OnDisable_m12880 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::Start()
 void BelleMatrixWindow_Start_m12881 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::UpdateBelleMatrixItems()
 void BelleMatrixWindow_UpdateBelleMatrixItems_m12882 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::EnableSelectMode(System.Boolean,System.String,BelleMatrixWindow/SelectFromType)
 void BelleMatrixWindow_EnableSelectMode_m12883 (BelleMatrixWindow_t1878 * __this, bool ___bEnable, String_t* ___belleID, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::ShowMatrixByItem()
 void BelleMatrixWindow_ShowMatrixByItem_m12884 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::UpdateMatrixItems()
 void BelleMatrixWindow_UpdateMatrixItems_m12885 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::OnMatrixListItemClick(UnityEngine.GameObject)
 void BelleMatrixWindow_OnMatrixListItemClick_m12886 (BelleMatrixWindow_t1878 * __this, GameObject_t9 * ___objItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::OnActiveMatrixClick()
 void BelleMatrixWindow_OnActiveMatrixClick_m12887 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::Ret_ActiveMatrix()
 void BelleMatrixWindow_Ret_ActiveMatrix_m12888 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::Ret_BelleRest()
 void BelleMatrixWindow_Ret_BelleRest_m12889 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixWindow::Ret_Battle()
 void BelleMatrixWindow_Ret_Battle_m12890 (BelleMatrixWindow_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
