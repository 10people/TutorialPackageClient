#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RestaurantFoodWindow
struct RestaurantFoodWindow_t1928;
// RestaurantFoodItem
struct RestaurantFoodItem_t1929;
// RestaurantFoodWindow/FOOD_REWARD_TYPE
#include "AssemblyU2DCSharp_RestaurantFoodWindow_FOOD_REWARD_TYPE.h"

// System.Void RestaurantFoodWindow::.ctor()
 void RestaurantFoodWindow__ctor_m13847 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RestaurantFoodWindow::get_NewPlayerGuide_Step()
 int32_t RestaurantFoodWindow_get_NewPlayerGuide_Step_m13848 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::set_NewPlayerGuide_Step(System.Int32)
 void RestaurantFoodWindow_set_NewPlayerGuide_Step_m13849 (RestaurantFoodWindow_t1928 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnEnable()
 void RestaurantFoodWindow_OnEnable_m13850 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnDisable()
 void RestaurantFoodWindow_OnDisable_m13851 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RestaurantFoodWindow::FilterFood()
 int32_t RestaurantFoodWindow_FilterFood_m13852 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::LoadFoodItem()
 void RestaurantFoodWindow_LoadFoodItem_m13853 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::FirstRefreshInfo()
 void RestaurantFoodWindow_FirstRefreshInfo_m13854 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnCloseClick()
 void RestaurantFoodWindow_OnCloseClick_m13855 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnFoodItemClick(RestaurantFoodItem)
 void RestaurantFoodWindow_OnFoodItemClick_m13856 (RestaurantFoodWindow_t1928 * __this, RestaurantFoodItem_t1929 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnChooseSelectFood()
 void RestaurantFoodWindow_OnChooseSelectFood_m13857 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnClickFilter()
 void RestaurantFoodWindow_OnClickFilter_m13858 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::SetFilterLevel(System.Int32)
 void RestaurantFoodWindow_SetFilterLevel_m13859 (RestaurantFoodWindow_t1928 * __this, int32_t ___nFilterLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantFoodWindow::IsLastLevelFilter(System.Int32)
 bool RestaurantFoodWindow_IsLastLevelFilter_m13860 (RestaurantFoodWindow_t1928 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantFoodWindow::IsLevelFilter(System.Int32)
 bool RestaurantFoodWindow_IsLevelFilter_m13861 (RestaurantFoodWindow_t1928 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::SetFilterRewardType(RestaurantFoodWindow/FOOD_REWARD_TYPE)
 void RestaurantFoodWindow_SetFilterRewardType_m13862 (RestaurantFoodWindow_t1928 * __this, int32_t ___rewardType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantFoodWindow::IsLastRewardTypeFilter(RestaurantFoodWindow/FOOD_REWARD_TYPE)
 bool RestaurantFoodWindow_IsLastRewardTypeFilter_m13863 (RestaurantFoodWindow_t1928 * __this, int32_t ___rewardtype, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantFoodWindow::IsRewardTypeFilter(RestaurantFoodWindow/FOOD_REWARD_TYPE)
 bool RestaurantFoodWindow_IsRewardTypeFilter_m13864 (RestaurantFoodWindow_t1928 * __this, int32_t ___rewardtype, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::SaveRestaurantConfig()
 void RestaurantFoodWindow_SaveRestaurantConfig_m13865 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnCloseFliterWindow()
 void RestaurantFoodWindow_OnCloseFliterWindow_m13866 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnClickNextPage()
 void RestaurantFoodWindow_OnClickNextPage_m13867 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OnClickPrePage()
 void RestaurantFoodWindow_OnClickPrePage_m13868 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::BindFoodItem()
 void RestaurantFoodWindow_BindFoodItem_m13869 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::RepositionOver()
 void RestaurantFoodWindow_RepositionOver_m13870 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::RefreshFoodItemInfo()
 void RestaurantFoodWindow_RefreshFoodItemInfo_m13871 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::OpenTarget()
 void RestaurantFoodWindow_OpenTarget_m13872 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::UpdateFood()
 void RestaurantFoodWindow_UpdateFood_m13873 (RestaurantFoodWindow_t1928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantFoodWindow::NewPlayerGuide(System.Int32)
 void RestaurantFoodWindow_NewPlayerGuide_m13874 (RestaurantFoodWindow_t1928 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
