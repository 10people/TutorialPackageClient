#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RechargeItem
struct RechargeItem_t1925;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// System.String
struct String_t;

// System.Void RechargeItem::.ctor()
 void RechargeItem__ctor_m12579 (RechargeItem_t1925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RechargeItem RechargeItem::CreateItem(UnityEngine.GameObject,UnityEngine.Transform,System.String,System.String,System.String,System.String,System.String,System.Boolean)
 RechargeItem_t1925 * RechargeItem_CreateItem_m12580 (Object_t * __this/* static, unused */, GameObject_t9 * ___resItem, Transform_t78 * ___grid, String_t* ___registerID, String_t* ___strIconName, String_t* ___price, String_t* ___goodName, String_t* ___strHotLabelText, bool ___bEnableTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeItem::OnBuyClick()
 void RechargeItem_OnBuyClick_m12581 (RechargeItem_t1925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeItem::InitData(System.String,System.String,System.String,System.String,System.Boolean)
 void RechargeItem_InitData_m12582 (RechargeItem_t1925 * __this, String_t* ___strIconName, String_t* ___price, String_t* ___goodName, String_t* ___strHotLabelText, bool ___bEnableTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeItem::UpdateData(System.Boolean)
 void RechargeItem_UpdateData_m12583 (RechargeItem_t1925 * __this, bool ___bShowOnce, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeItem::OnChooseBuyCountOk(System.Int32)
 void RechargeItem_OnChooseBuyCountOk_m12584 (RechargeItem_t1925 * __this, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
