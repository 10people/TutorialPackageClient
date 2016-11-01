#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TessarSDK4iOS
struct TessarSDK4iOS_t905;
// System.String
struct String_t;

// System.Void TessarSDK4iOS::.ctor()
 void TessarSDK4iOS__ctor_m3799 (TessarSDK4iOS_t905 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::_Init(System.String,System.String,System.String)
 void TessarSDK4iOS__Init_m3800 (Object_t * __this/* static, unused */, String_t* ___proj, String_t* ___channel, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::_Initproj(System.String,System.String,System.String,System.String,System.Boolean)
 void TessarSDK4iOS__Initproj_m3801 (Object_t * __this/* static, unused */, String_t* ___proj, String_t* ___channel, String_t* ___version, String_t* ___reportpolicy, bool ___isdebug, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::onLogInfo(System.String,System.String,System.UInt32,System.UInt32,System.String)
 void TessarSDK4iOS_onLogInfo_m3802 (Object_t * __this/* static, unused */, String_t* ___userName, String_t* ___role, uint32_t ___level, uint32_t ___coin, String_t* ___gamestate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::onNewMission(System.UInt32,System.UInt32,System.String)
 void TessarSDK4iOS_onNewMission_m3803 (Object_t * __this/* static, unused */, uint32_t ___level, uint32_t ___coin, String_t* ___costtime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::onMission(System.String,System.UInt32,System.UInt32)
 void TessarSDK4iOS_onMission_m3804 (Object_t * __this/* static, unused */, String_t* ___mission, uint32_t ___level, uint32_t ___coin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::pay(System.Double,System.UInt32,System.UInt32)
 void TessarSDK4iOS_pay_m3805 (Object_t * __this/* static, unused */, double ___money, uint32_t ___coin, uint32_t ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::buy(System.String,System.UInt32,System.Double)
 void TessarSDK4iOS_buy_m3806 (Object_t * __this/* static, unused */, String_t* ___item, uint32_t ___number, double ___price, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::bonus(System.Double,System.UInt32)
 void TessarSDK4iOS_bonus_m3807 (Object_t * __this/* static, unused */, double ___coin, uint32_t ___trigger_t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::bonusextra(System.String,System.UInt32,System.Double,System.UInt32)
 void TessarSDK4iOS_bonusextra_m3808 (Object_t * __this/* static, unused */, String_t* ___item, uint32_t ___num_t, double ___price_t, uint32_t ___trigger_t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::onKeyValue(System.UInt32,System.Int32,System.Int32)
 void TessarSDK4iOS_onKeyValue_m3809 (Object_t * __this/* static, unused */, uint32_t ___value, int32_t ___keyType, int32_t ___trigger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::recordusingsendbyte(System.UInt32)
 void TessarSDK4iOS_recordusingsendbyte_m3810 (Object_t * __this/* static, unused */, uint32_t ___bytesize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::sendusingrecivebyte(System.UInt32)
 void TessarSDK4iOS_sendusingrecivebyte_m3811 (Object_t * __this/* static, unused */, uint32_t ___bytesize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::reportErrorFile(System.String)
 void TessarSDK4iOS_reportErrorFile_m3812 (Object_t * __this/* static, unused */, String_t* ___logfilename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::exceptionExtra(System.String,System.String,System.String)
 void TessarSDK4iOS_exceptionExtra_m3813 (Object_t * __this/* static, unused */, String_t* ___crashName, String_t* ___crashReson, String_t* ___creashStack, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::startUIClick(System.String)
 void TessarSDK4iOS_startUIClick_m3814 (Object_t * __this/* static, unused */, String_t* ___UIevent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::doUIClick(System.Int32,System.Int32)
 void TessarSDK4iOS_doUIClick_m3815 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::finishUIclick(System.String)
 void TessarSDK4iOS_finishUIclick_m3816 (Object_t * __this/* static, unused */, String_t* ___UIevent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::registerException(System.String)
 void TessarSDK4iOS_registerException_m3817 (Object_t * __this/* static, unused */, String_t* ___errorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TessarSDK4iOS::getNetstatus()
 int32_t TessarSDK4iOS_getNetstatus_m3818 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TessarSDK4iOS::getDeviceFreeMemory()
 int32_t TessarSDK4iOS_getDeviceFreeMemory_m3819 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TessarSDK4iOS::getDeviceTotalMemory()
 int32_t TessarSDK4iOS_getDeviceTotalMemory_m3820 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::controlScreenState(System.Boolean)
 void TessarSDK4iOS_controlScreenState_m3821 (Object_t * __this/* static, unused */, bool ___scrstate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::setSendInfoInterval(System.Double)
 void TessarSDK4iOS_setSendInfoInterval_m3822 (Object_t * __this/* static, unused */, double ___second, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TessarSDK4iOS::getDeviceUUID()
 String_t* TessarSDK4iOS_getDeviceUUID_m3823 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::SavePhoto(System.String)
 void TessarSDK4iOS_SavePhoto_m3824 (Object_t * __this/* static, unused */, String_t* ___readAddr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::CatchScreenshot()
 void TessarSDK4iOS_CatchScreenshot_m3825 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::CSavePhoto(System.String)
 void TessarSDK4iOS_CSavePhoto_m3826 (Object_t * __this/* static, unused */, String_t* ___readAddr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TessarSDK4iOS::GetDeviceUUID()
 String_t* TessarSDK4iOS_GetDeviceUUID_m3827 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TessarSDK4iOS::GetDeviceFreeMemory()
 int32_t TessarSDK4iOS_GetDeviceFreeMemory_m3828 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TessarSDK4iOS::GetDeviceTotalMemory()
 int32_t TessarSDK4iOS_GetDeviceTotalMemory_m3829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::ControlScreenState(System.Boolean)
 void TessarSDK4iOS_ControlScreenState_m3830 (Object_t * __this/* static, unused */, bool ___scrstate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TessarSDK4iOS::GetNetStatus()
 int32_t TessarSDK4iOS_GetNetStatus_m3831 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::SetSendInfoInterval(System.Double)
 void TessarSDK4iOS_SetSendInfoInterval_m3832 (Object_t * __this/* static, unused */, double ___second, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::UregisterException(System.String)
 void TessarSDK4iOS_UregisterException_m3833 (Object_t * __this/* static, unused */, String_t* ___errorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::Init(System.String,System.String,System.String)
 void TessarSDK4iOS_Init_m3834 (Object_t * __this/* static, unused */, String_t* ___proj, String_t* ___channel, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::Initproj(System.String,System.String,System.String,System.String,System.Boolean)
 void TessarSDK4iOS_Initproj_m3835 (Object_t * __this/* static, unused */, String_t* ___proj, String_t* ___channel, String_t* ___version, String_t* ___reportpolicy, bool ___isdebug, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnlogInfo(System.String,System.String,System.UInt32,System.UInt32,System.String)
 void TessarSDK4iOS_OnlogInfo_m3836 (Object_t * __this/* static, unused */, String_t* ___userName, String_t* ___role, uint32_t ___level, uint32_t ___coin, String_t* ___gamestate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnNewMission(System.UInt32,System.UInt32,System.String)
 void TessarSDK4iOS_OnNewMission_m3837 (Object_t * __this/* static, unused */, uint32_t ___level, uint32_t ___coin, String_t* ___costtime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnMission(System.String,System.UInt32,System.UInt32)
 void TessarSDK4iOS_OnMission_m3838 (Object_t * __this/* static, unused */, String_t* ___mission, uint32_t ___level, uint32_t ___coin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnPay(System.Double,System.UInt32,System.UInt32)
 void TessarSDK4iOS_OnPay_m3839 (Object_t * __this/* static, unused */, double ___money, uint32_t ___coin, uint32_t ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::Onbuy(System.String,System.UInt32,System.Double)
 void TessarSDK4iOS_Onbuy_m3840 (Object_t * __this/* static, unused */, String_t* ___item, uint32_t ___number, double ___price, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::Onbonus(System.String,System.UInt32,System.Double,System.UInt32)
 void TessarSDK4iOS_Onbonus_m3841 (Object_t * __this/* static, unused */, String_t* ___item, uint32_t ___number, double ___price, uint32_t ___trigger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::Onbonus(System.Double,System.UInt32)
 void TessarSDK4iOS_Onbonus_m3842 (Object_t * __this/* static, unused */, double ___coin, uint32_t ___trigger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnKeyValue(System.UInt32,System.Int32,System.Int32)
 void TessarSDK4iOS_OnKeyValue_m3843 (Object_t * __this/* static, unused */, uint32_t ___value, int32_t ___keyType, int32_t ___trigger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::Onusingsendbyte(System.UInt32)
 void TessarSDK4iOS_Onusingsendbyte_m3844 (Object_t * __this/* static, unused */, uint32_t ___bytesize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::Onusingrecivebyte(System.UInt32)
 void TessarSDK4iOS_Onusingrecivebyte_m3845 (Object_t * __this/* static, unused */, uint32_t ___bytesize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnReportErrorFile(System.String)
 void TessarSDK4iOS_OnReportErrorFile_m3846 (Object_t * __this/* static, unused */, String_t* ___logfilename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnexceptionExtra(System.String,System.String,System.String)
 void TessarSDK4iOS_OnexceptionExtra_m3847 (Object_t * __this/* static, unused */, String_t* ___crashName, String_t* ___crashReson, String_t* ___creashStack, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnstartUIClick(System.String)
 void TessarSDK4iOS_OnstartUIClick_m3848 (Object_t * __this/* static, unused */, String_t* ___UIevent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OnfinishUIclick(System.String)
 void TessarSDK4iOS_OnfinishUIclick_m3849 (Object_t * __this/* static, unused */, String_t* ___UIevent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TessarSDK4iOS::OndoUIClick(System.Int32,System.Int32)
 void TessarSDK4iOS_OndoUIClick_m3850 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
