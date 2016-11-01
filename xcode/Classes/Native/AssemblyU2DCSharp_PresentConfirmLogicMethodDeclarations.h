#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PresentConfirmLogic
struct PresentConfirmLogic_t1667;
// System.String
struct String_t;
// PresentConfirmLogic/SHOW_TYPE
#include "AssemblyU2DCSharp_PresentConfirmLogic_SHOW_TYPE.h"

// System.Void PresentConfirmLogic::.ctor()
 void PresentConfirmLogic__ctor_m10715 (PresentConfirmLogic_t1667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::Start()
 void PresentConfirmLogic_Start_m10716 (PresentConfirmLogic_t1667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::Confirm_ShoppingCart(PresentConfirmLogic/SHOW_TYPE,System.UInt64,System.String)
 void PresentConfirmLogic_Confirm_ShoppingCart_m10717 (PresentConfirmLogic_t1667 * __this, int32_t ___type, uint64_t ___friendguid, String_t* ___friendname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::Confirm_PayWaitPay(PresentConfirmLogic/SHOW_TYPE,System.String,System.UInt64)
 void PresentConfirmLogic_Confirm_PayWaitPay_m10718 (PresentConfirmLogic_t1667 * __this, int32_t ___type, String_t* ___friendname, uint64_t ___shoppinglistguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::ConfirmOK()
 void PresentConfirmLogic_ConfirmOK_m10719 (PresentConfirmLogic_t1667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::ConfirmCancel()
 void PresentConfirmLogic_ConfirmCancel_m10720 (PresentConfirmLogic_t1667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::BuyChargeOK()
 void PresentConfirmLogic_BuyChargeOK_m10721 (PresentConfirmLogic_t1667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::DoPay()
 void PresentConfirmLogic_DoPay_m10722 (PresentConfirmLogic_t1667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentConfirmLogic::CleanUp()
 void PresentConfirmLogic_CleanUp_m10723 (PresentConfirmLogic_t1667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
