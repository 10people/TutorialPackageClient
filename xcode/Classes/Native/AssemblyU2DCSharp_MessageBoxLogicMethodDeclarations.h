#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MessageBoxLogic
struct MessageBoxLogic_t1552;
// System.String
struct String_t;
// MessageBoxLogic/OnOKClick
struct OnOKClick_t1546;
// MessageBoxLogic/OnCancelClick
struct OnCancelClick_t1547;
// System.Object
struct Object_t;
// MessageBoxLogic/OnWaitTimeOut
struct OnWaitTimeOut_t1549;
// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"
// Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_MESSAGE.h"

// System.Void MessageBoxLogic::.ctor()
 void MessageBoxLogic__ctor_m9613 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::.cctor()
 void MessageBoxLogic__cctor_m9614 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MessageBoxLogic::get_CountDown()
 float MessageBoxLogic_get_CountDown_m9615 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::set_CountDown(System.Single)
 void MessageBoxLogic_set_CountDown_m9616 (MessageBoxLogic_t1552 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MessageBoxLogic/PASSWORD MessageBoxLogic::get_EPassword()
 int32_t MessageBoxLogic_get_EPassword_m9617 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::set_EPassword(MessageBoxLogic/PASSWORD)
 void MessageBoxLogic_set_EPassword_m9618 (MessageBoxLogic_t1552 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::Awake()
 void MessageBoxLogic_Awake_m9619 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OnEnable()
 void MessageBoxLogic_OnEnable_m9620 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::Update()
 void MessageBoxLogic_Update_m9621 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::MessageBoxOK()
 void MessageBoxLogic_MessageBoxOK_m9622 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::MessageBoxCancel()
 void MessageBoxLogic_MessageBoxCancel_m9623 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::CleanData()
 void MessageBoxLogic_CleanData_m9624 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::HideBox()
 void MessageBoxLogic_HideBox_m9625 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::ShowBox()
 void MessageBoxLogic_ShowBox_m9626 (MessageBoxLogic_t1552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::ShowMessageBox(System.String,System.String,Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE)
 void MessageBoxLogic_ShowMessageBox_m9627 (MessageBoxLogic_t1552 * __this, String_t* ___title, String_t* ___text, int32_t ___eType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::SetTextAnalyseSymbol(System.String)
 void MessageBoxLogic_SetTextAnalyseSymbol_m9628 (MessageBoxLogic_t1552 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::CloseBox()
 void MessageBoxLogic_CloseBox_m9629 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenCancelBox(System.String,System.String,MessageBoxLogic/OnOKClick,MessageBoxLogic/OnCancelClick,System.Int32,MessageBoxLogic/PASSWORD,System.Int32)
 void MessageBoxLogic_OpenCancelBox_m9630 (Object_t * __this/* static, unused */, String_t* ___text, String_t* ___title, OnOKClick_t1546 * ___funcOKClicked, OnCancelClick_t1547 * ___funcCancelClicked, int32_t ___nCountDown, int32_t ___password, int32_t ___nCountDownDicID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OnOpenCancelBox(System.Boolean,System.Object)
 void MessageBoxLogic_OnOpenCancelBox_m9631 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenOKBox(System.String,System.String,MessageBoxLogic/OnOKClick,MessageBoxLogic/PASSWORD)
 void MessageBoxLogic_OpenOKBox_m9632 (Object_t * __this/* static, unused */, String_t* ___text, String_t* ___title, OnOKClick_t1546 * ___funcOKClicked, int32_t ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OnOpenOkBox(System.Boolean,System.Object)
 void MessageBoxLogic_OnOpenOkBox_m9633 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenOKCancelBox(System.String,System.String,MessageBoxLogic/OnOKClick,MessageBoxLogic/OnCancelClick,System.Int32,MessageBoxLogic/PASSWORD,System.Int32)
 void MessageBoxLogic_OpenOKCancelBox_m9634 (Object_t * __this/* static, unused */, String_t* ___text, String_t* ___title, OnOKClick_t1546 * ___funcOKClicked, OnCancelClick_t1547 * ___funcCancelClicked, int32_t ___nCountDown, int32_t ___password, int32_t ___nCountDownDicID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OnOpenOkCancelBox(System.Boolean,System.Object)
 void MessageBoxLogic_OnOpenOkCancelBox_m9635 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenWaitBox(System.String,System.Single,System.Single,MessageBoxLogic/OnWaitTimeOut,MessageBoxLogic/PASSWORD)
 void MessageBoxLogic_OpenWaitBox_m9636 (Object_t * __this/* static, unused */, String_t* ___text, float ___duration, float ___delay, OnWaitTimeOut_t1549 * ___delWaitTimeOutFun, int32_t ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OnOpenWaitBox(System.Boolean,System.Object)
 void MessageBoxLogic_OnOpenWaitBox_m9637 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenCostBox(System.String,System.String,System.String,System.String,System.String,System.String,MessageBoxLogic/OnOKClick,MessageBoxLogic/OnCancelClick)
 void MessageBoxLogic_OpenCostBox_m9638 (Object_t * __this/* static, unused */, String_t* ___text, String_t* ___textSupplement, String_t* ___title, String_t* ___costDesc, String_t* ___costIcon, String_t* ___costCount, OnOKClick_t1546 * ___funcOKClicked, OnCancelClick_t1547 * ___funcCancelClicked, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OnOpenCostBox(System.Boolean,System.Object)
 void MessageBoxLogic_OnOpenCostBox_m9639 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenOKBox(System.Int32,System.Int32,MessageBoxLogic/OnOKClick,MessageBoxLogic/PASSWORD)
 void MessageBoxLogic_OpenOKBox_m9640 (Object_t * __this/* static, unused */, int32_t ___textDicID, int32_t ___titleDicID, OnOKClick_t1546 * ___funcOKClicked, int32_t ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenOKCancelBox(System.Int32,System.Int32,MessageBoxLogic/OnOKClick,MessageBoxLogic/OnCancelClick,MessageBoxLogic/PASSWORD)
 void MessageBoxLogic_OpenOKCancelBox_m9641 (Object_t * __this/* static, unused */, int32_t ___textDicID, int32_t ___titleDicID, OnOKClick_t1546 * ___funcOKClicked, OnCancelClick_t1547 * ___funcCancelClicked, int32_t ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenWaitBox(System.Int32,System.Single,System.Single,MessageBoxLogic/OnWaitTimeOut,MessageBoxLogic/PASSWORD)
 void MessageBoxLogic_OpenWaitBox_m9642 (Object_t * __this/* static, unused */, int32_t ___textDicID, float ___duration, float ___delay, OnWaitTimeOut_t1549 * ___delWaitTimeOutFun, int32_t ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic::OpenOKCancelCountDownBox(System.String,System.String,MessageBoxLogic/OnOKClick,MessageBoxLogic/OnCancelClick,System.Int32,System.Int32)
 void MessageBoxLogic_OpenOKCancelCountDownBox_m9643 (Object_t * __this/* static, unused */, String_t* ___text, String_t* ___title, OnOKClick_t1546 * ___funcOKClicked, OnCancelClick_t1547 * ___funcCancelClicked, int32_t ___nCountDown, int32_t ___nCountDownDicID, MethodInfo* method) IL2CPP_METHOD_ATTR;
