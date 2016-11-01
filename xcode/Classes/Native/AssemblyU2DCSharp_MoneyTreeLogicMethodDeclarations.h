#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MoneyTreeLogic
struct MoneyTreeLogic_t1583;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void MoneyTreeLogic::.ctor()
 void MoneyTreeLogic__ctor_m9811 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::get_CDTime()
 int32_t MoneyTreeLogic_get_CDTime_m9812 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::set_CDTime(System.Int32)
 void MoneyTreeLogic_set_CDTime_m9813 (MoneyTreeLogic_t1583 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::get_CurMoneyTreeID()
 int32_t MoneyTreeLogic_get_CurMoneyTreeID_m9814 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::set_CurMoneyTreeID(System.Int32)
 void MoneyTreeLogic_set_CurMoneyTreeID_m9815 (MoneyTreeLogic_t1583 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::get_YuanBaoAwardCount()
 int32_t MoneyTreeLogic_get_YuanBaoAwardCount_m9816 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::set_YuanBaoAwardCount(System.Int32)
 void MoneyTreeLogic_set_YuanBaoAwardCount_m9817 (MoneyTreeLogic_t1583 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MoneyTreeLogic::get_YuanbaoFactor()
 float MoneyTreeLogic_get_YuanbaoFactor_m9818 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::set_YuanbaoFactor(System.Single)
 void MoneyTreeLogic_set_YuanbaoFactor_m9819 (MoneyTreeLogic_t1583 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::OnAwake()
 void MoneyTreeLogic_OnAwake_m9820 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::Start()
 void MoneyTreeLogic_Start_m9821 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::OnEnable()
 void MoneyTreeLogic_OnEnable_m9822 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::OnDisable()
 void MoneyTreeLogic_OnDisable_m9823 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::initWindow()
 void MoneyTreeLogic_initWindow_m9824 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::CleanUp()
 void MoneyTreeLogic_CleanUp_m9825 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::CloseWindow()
 void MoneyTreeLogic_CloseWindow_m9826 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::ButtonOKClick(UnityEngine.GameObject)
 void MoneyTreeLogic_ButtonOKClick_m9827 (MoneyTreeLogic_t1583 * __this, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::ButtonCancelClick()
 void MoneyTreeLogic_ButtonCancelClick_m9828 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::OnOKClick()
 void MoneyTreeLogic_OnOKClick_m9829 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::OnCancelClick()
 void MoneyTreeLogic_OnCancelClick_m9830 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::ButtonUpClick()
 void MoneyTreeLogic_ButtonUpClick_m9831 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::ButtonDownClick()
 void MoneyTreeLogic_ButtonDownClick_m9832 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::UpdateTimerText()
 void MoneyTreeLogic_UpdateTimerText_m9833 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::GetNeedYuanBaoByAwardCount(System.Int32)
 int32_t MoneyTreeLogic_GetNeedYuanBaoByAwardCount_m9834 (MoneyTreeLogic_t1583 * __this, int32_t ___nAwardCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::GetAwardMoneyByYuanBaoAwardCount(System.Int32)
 int32_t MoneyTreeLogic_GetAwardMoneyByYuanBaoAwardCount_m9835 (MoneyTreeLogic_t1583 * __this, int32_t ___nAwardCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::UpdateCountTip(System.Int32)
 void MoneyTreeLogic_UpdateCountTip_m9836 (MoneyTreeLogic_t1583 * __this, int32_t ___nMoneyTreeID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::UpdateYuanBaoCountTip(System.Int32)
 void MoneyTreeLogic_UpdateYuanBaoCountTip_m9837 (MoneyTreeLogic_t1583 * __this, int32_t ___nCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::AskYuanbaoFactor()
 void MoneyTreeLogic_AskYuanbaoFactor_m9838 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::GetCurMTVipID()
 int32_t MoneyTreeLogic_GetCurMTVipID_m9839 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::GetNeedYuanBaoByVipAward()
 int32_t MoneyTreeLogic_GetNeedYuanBaoByVipAward_m9840 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MoneyTreeLogic::GetAwardMoneyByVipAward()
 int32_t MoneyTreeLogic_GetAwardMoneyByVipAward_m9841 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoneyTreeLogic::UpdateVipTip()
 void MoneyTreeLogic_UpdateVipTip_m9842 (MoneyTreeLogic_t1583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
