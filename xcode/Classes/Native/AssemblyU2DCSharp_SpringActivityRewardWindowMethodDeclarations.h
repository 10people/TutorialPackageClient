#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringActivityRewardWindow
struct SpringActivityRewardWindow_t2065;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Games.AwardActivity.ActivityRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_ActivityRewardData.h"
// AcitivityRewardState
#include "AssemblyU2DCSharp_AcitivityRewardState.h"

// System.Void SpringActivityRewardWindow::.ctor()
 void SpringActivityRewardWindow__ctor_m13945 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::.cctor()
 void SpringActivityRewardWindow__cctor_m13946 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringActivityRewardWindow SpringActivityRewardWindow::Instance()
 SpringActivityRewardWindow_t2065 * SpringActivityRewardWindow_Instance_m13947 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::OnEnable()
 void SpringActivityRewardWindow_OnEnable_m13948 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::OnDisable()
 void SpringActivityRewardWindow_OnDisable_m13949 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::Start()
 void SpringActivityRewardWindow_Start_m13950 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime SpringActivityRewardWindow::GetCurrentTime()
 DateTime_t1171  SpringActivityRewardWindow_GetCurrentTime_m13951 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::OnRewardRoot()
 void SpringActivityRewardWindow_OnRewardRoot_m13952 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime SpringActivityRewardWindow::get_CurrentDateTime()
 DateTime_t1171  SpringActivityRewardWindow_get_CurrentDateTime_m13953 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::SetShowBar()
 void SpringActivityRewardWindow_SetShowBar_m13954 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::ShowDateInfo()
 void SpringActivityRewardWindow_ShowDateInfo_m13955 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::ShowJoinNumInfo()
 void SpringActivityRewardWindow_ShowJoinNumInfo_m13956 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::ShowActivityRewardList()
 void SpringActivityRewardWindow_ShowActivityRewardList_m13957 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::ShowActivityReward(Games.AwardActivity.ActivityRewardData,System.Int32,System.Int32)
 void SpringActivityRewardWindow_ShowActivityReward_m13958 (SpringActivityRewardWindow_t2065 * __this, ActivityRewardData_t2067  ___reward, int32_t ___posX, int32_t ___posY, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::OnReceiveClick()
 void SpringActivityRewardWindow_OnReceiveClick_m13959 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::OnJoinNumReceiveResult(System.Int32,System.Int32)
 void SpringActivityRewardWindow_OnJoinNumReceiveResult_m13960 (SpringActivityRewardWindow_t2065 * __this, int32_t ___index, int32_t ___reusltTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::OnReceiveResult(System.Int32,System.Int32)
 void SpringActivityRewardWindow_OnReceiveResult_m13961 (SpringActivityRewardWindow_t2065 * __this, int32_t ___index, int32_t ___resultTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::IsShowRedInfo()
 void SpringActivityRewardWindow_IsShowRedInfo_m13962 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::Update()
 void SpringActivityRewardWindow_Update_m13963 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::UpdatePerMinute()
 void SpringActivityRewardWindow_UpdatePerMinute_m13964 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::SetRewardState(System.Int32,AcitivityRewardState)
 void SpringActivityRewardWindow_SetRewardState_m13965 (SpringActivityRewardWindow_t2065 * __this, int32_t ___index, int32_t ___tagData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::SetSelectedState(System.Int32)
 void SpringActivityRewardWindow_SetSelectedState_m13966 (SpringActivityRewardWindow_t2065 * __this, int32_t ___rewardIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::SetRewardItemChooseState(System.Int32,System.Boolean)
 void SpringActivityRewardWindow_SetRewardItemChooseState_m13967 (SpringActivityRewardWindow_t2065 * __this, int32_t ___index, bool ___isChoose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::SendRewardClick()
 void SpringActivityRewardWindow_SendRewardClick_m13968 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::DoPay()
 void SpringActivityRewardWindow_DoPay_m13969 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringActivityRewardWindow::SetJoinNumState()
 void SpringActivityRewardWindow_SetJoinNumState_m13970 (SpringActivityRewardWindow_t2065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
