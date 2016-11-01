#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RestaurantController
struct RestaurantController_t1827;
// RestaurantData/RestaurantInfo
struct RestaurantInfo_t1825;
// System.Object
struct Object_t;
// System.String
struct String_t;
// RestaurantDesk
struct RestaurantDesk_t1826;

// System.Void RestaurantController::.ctor()
 void RestaurantController__ctor_m12064 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RestaurantData/RestaurantInfo RestaurantController::CurRestaurant()
 RestaurantInfo_t1825 * RestaurantController_CurRestaurant_m12065 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RestaurantController::get_NewPlayerGuide_Step()
 int32_t RestaurantController_get_NewPlayerGuide_Step_m12066 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::set_NewPlayerGuide_Step(System.Int32)
 void RestaurantController_set_NewPlayerGuide_Step_m12067 (RestaurantController_t1827 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantController::get_SelfData()
 bool RestaurantController_get_SelfData_m12068 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OpenWindow(System.Boolean)
 void RestaurantController_OpenWindow_m12069 (Object_t * __this/* static, unused */, bool ___bSelfData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnOpenWindow(System.Boolean,System.Object)
 void RestaurantController_OnOpenWindow_m12070 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::Awake()
 void RestaurantController_Awake_m12071 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::Start()
 void RestaurantController_Start_m12072 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::UpdateMoneyInfo()
 void RestaurantController_UpdateMoneyInfo_m12073 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnDestroy()
 void RestaurantController_OnDestroy_m12074 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnCloseClick()
 void RestaurantController_OnCloseClick_m12075 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnFriendRestaurantClick()
 void RestaurantController_OnFriendRestaurantClick_m12076 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnShowRelationNamePopWindow(System.Boolean,System.Object)
 void RestaurantController_OnShowRelationNamePopWindow_m12077 (RestaurantController_t1827 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnBillingAllClick()
 void RestaurantController_OnBillingAllClick_m12078 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnServingAllClick()
 void RestaurantController_OnServingAllClick_m12079 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnFinishServingAllClick()
 void RestaurantController_OnFinishServingAllClick_m12080 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnFinishServingAll()
 void RestaurantController_OnFinishServingAll_m12081 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnPlayerDataUpdate()
 void RestaurantController_OnPlayerDataUpdate_m12082 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnFriendDataUpdate()
 void RestaurantController_OnFriendDataUpdate_m12083 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnPlayerDeskDataUpdate()
 void RestaurantController_OnPlayerDeskDataUpdate_m12084 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnFriendDeskDataUpdate()
 void RestaurantController_OnFriendDeskDataUpdate_m12085 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnChooseFriend(System.UInt64,System.String)
 void RestaurantController_OnChooseFriend_m12086 (RestaurantController_t1827 * __this, uint64_t ___friendID, String_t* ___friendName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnBackClick()
 void RestaurantController_OnBackClick_m12087 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::UpdateRestaurantInfo(System.Boolean)
 void RestaurantController_UpdateRestaurantInfo_m12088 (RestaurantController_t1827 * __this, bool ___bSelfData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::UpdateVisitFriendInfo()
 void RestaurantController_UpdateVisitFriendInfo_m12089 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OpenFoodWindow(RestaurantDesk)
 void RestaurantController_OpenFoodWindow_m12090 (RestaurantController_t1827 * __this, RestaurantDesk_t1826 * ___curDesk, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::CloseFoodWindow()
 void RestaurantController_CloseFoodWindow_m12091 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnChooseFoodFinish(System.Int32)
 void RestaurantController_OnChooseFoodFinish_m12092 (RestaurantController_t1827 * __this, int32_t ___foodID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::BillingDesk(RestaurantDesk)
 void RestaurantController_BillingDesk_m12093 (RestaurantController_t1827 * __this, RestaurantDesk_t1826 * ___curDesk, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::FinishPrepareDesk(RestaurantDesk)
 void RestaurantController_FinishPrepareDesk_m12094 (RestaurantController_t1827 * __this, RestaurantDesk_t1826 * ___curDesk, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::Check_NewPlayerGuide()
 void RestaurantController_Check_NewPlayerGuide_m12095 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::NewPlayerGuide(System.Int32)
 void RestaurantController_NewPlayerGuide_m12096 (RestaurantController_t1827 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OnIsPush()
 void RestaurantController_OnIsPush_m12097 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::SetVisitFriendButtom(System.Boolean)
 void RestaurantController_SetVisitFriendButtom_m12098 (RestaurantController_t1827 * __this, bool ___isEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantController::OpenGiftWindow()
 void RestaurantController_OpenGiftWindow_m12099 (RestaurantController_t1827 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
