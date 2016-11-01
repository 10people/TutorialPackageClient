#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BePowerListItem
struct BePowerListItem_t1862;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// BePowerWindow
struct BePowerWindow_t1864;
// System.Object
struct Object_t;
// BePowerData/BePowerListItemData
#include "AssemblyU2DCSharp_BePowerData_BePowerListItemData.h"

// System.Void BePowerListItem::.ctor()
 void BePowerListItem__ctor_m12324 (BePowerListItem_t1862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BePowerListItem BePowerListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,BePowerWindow,BePowerData/BePowerListItemData)
 BePowerListItem_t1862 * BePowerListItem_CreateItem_m12325 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, BePowerWindow_t1864 * ___parent, BePowerListItemData_t1863  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::SetFunctionBtn(System.Int32)
 void BePowerListItem_SetFunctionBtn_m12326 (BePowerListItem_t1862 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::SetData(BePowerWindow,BePowerData/BePowerListItemData)
 void BePowerListItem_SetData_m12327 (BePowerListItem_t1862 * __this, BePowerWindow_t1864 * ___parent, BePowerListItemData_t1863  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::OnFunctionButton1Click()
 void BePowerListItem_OnFunctionButton1Click_m12328 (BePowerListItem_t1862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::OnFunctionButton2Click()
 void BePowerListItem_OnFunctionButton2Click_m12329 (BePowerListItem_t1862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::OnFunctionButtonClick(System.Int32,System.Int32)
 void BePowerListItem_OnFunctionButtonClick_m12330 (BePowerListItem_t1862 * __this, int32_t ___type, int32_t ___function, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::ChangeToCopyScene(System.Boolean,System.Object)
 void BePowerListItem_ChangeToCopyScene_m12331 (BePowerListItem_t1862 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::LoadEquipStrength(System.Boolean,System.Object)
 void BePowerListItem_LoadEquipStrength_m12332 (BePowerListItem_t1862 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::LoadPartnerAndMountRoot(System.Boolean,System.Object)
 void BePowerListItem_LoadPartnerAndMountRoot_m12333 (BePowerListItem_t1862 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerListItem::LoadBelleUI(System.Boolean,System.Object)
 void BePowerListItem_LoadBelleUI_m12334 (BePowerListItem_t1862 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BePowerData/BePowerListItemData BePowerListItem::GetData()
 BePowerListItemData_t1863  BePowerListItem_GetData_m12335 (BePowerListItem_t1862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
