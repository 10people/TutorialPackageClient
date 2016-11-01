#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RechargeController
struct RechargeController_t1817;
// System.String
struct String_t;
// GCGame.Table.Tab_Recharge
struct Tab_Recharge_t603;

// System.Void RechargeController::.ctor()
 void RechargeController__ctor_m12033 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::Awake()
 void RechargeController_Awake_m12034 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::Start()
 void RechargeController_Start_m12035 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::OnDestroy()
 void RechargeController_OnDestroy_m12036 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::OnCancelClick()
 void RechargeController_OnCancelClick_m12037 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::OnRechargeRecord()
 void RechargeController_OnRechargeRecord_m12038 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::OnRechargeError()
 void RechargeController_OnRechargeError_m12039 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::UpdateMoney()
 void RechargeController_UpdateMoney_m12040 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::UpdateYBPrizeRate()
 void RechargeController_UpdateYBPrizeRate_m12041 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::UpdateRechargeList()
 void RechargeController_UpdateRechargeList_m12042 (RechargeController_t1817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeController::OnMakePay(System.String,System.Int32)
 void RechargeController_OnMakePay_m12043 (RechargeController_t1817 * __this, String_t* ___id, int32_t ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Recharge RechargeController::GetRechargeData(System.String)
 Tab_Recharge_t603 * RechargeController_GetRechargeData_m12044 (RechargeController_t1817 * __this, String_t* ___registerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
