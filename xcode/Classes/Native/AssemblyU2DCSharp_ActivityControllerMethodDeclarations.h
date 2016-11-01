#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ActivityController
struct ActivityController_t1797;
// System.String
struct String_t;
// TabController
struct TabController_t1209;
// TabButton
struct TabButton_t1210;
// System.Object
struct Object_t;

// System.Void ActivityController::.ctor()
 void ActivityController__ctor_m11894 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::.cctor()
 void ActivityController__cctor_m11895 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ActivityController::get_NewPlayerGuide_Step()
 int32_t ActivityController_get_NewPlayerGuide_Step_m11896 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::set_NewPlayerGuide_Step(System.Int32)
 void ActivityController_set_NewPlayerGuide_Step_m11897 (ActivityController_t1797 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::SetStartTab(System.String)
 void ActivityController_SetStartTab_m11898 (Object_t * __this/* static, unused */, String_t* ___tabName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::TestStartTab(TabController,TabController)
 void ActivityController_TestStartTab_m11899 (Object_t * __this/* static, unused */, TabController_t1209 * ___activityControl, TabController_t1209 * ___curTabController, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::Awake()
 void ActivityController_Awake_m11900 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::OnEnable()
 void ActivityController_OnEnable_m11901 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::HideFeatureByLv()
 void ActivityController_HideFeatureByLv_m11902 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::OnDisable()
 void ActivityController_OnDisable_m11903 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::InitData()
 void ActivityController_InitData_m11904 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateTabTips(System.Boolean)
 void ActivityController_UpdateTabTips_m11905 (ActivityController_t1797 * __this, bool ___isRecenterTopNow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateAutoTeam()
 void ActivityController_UpdateAutoTeam_m11906 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::OnCloseClick()
 void ActivityController_OnCloseClick_m11907 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::Check_NewPlayerGuide()
 void ActivityController_Check_NewPlayerGuide_m11908 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::NewPlayerGuide(System.Int32)
 void ActivityController_NewPlayerGuide_m11909 (ActivityController_t1797 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToWuLinShowMemberList()
 void ActivityController_ChangeToWuLinShowMemberList_m11910 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToWuLinShowDefault()
 void ActivityController_ChangeToWuLinShowDefault_m11911 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToWuLinShowOppoentView()
 void ActivityController_ChangeToWuLinShowOppoentView_m11912 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToWuLinShowPKInfo()
 void ActivityController_ChangeToWuLinShowPKInfo_m11913 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToWuLinTab()
 void ActivityController_ChangeToWuLinTab_m11914 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActivityController::IsShowWuLinTab()
 bool ActivityController_IsShowWuLinTab_m11915 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToHSPvPShowMemberList()
 void ActivityController_ChangeToHSPvPShowMemberList_m11916 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToHSPvPShowDefault()
 void ActivityController_ChangeToHSPvPShowDefault_m11917 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToHSPvPShowOppoentView()
 void ActivityController_ChangeToHSPvPShowOppoentView_m11918 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToHSPvPShowPKInfo()
 void ActivityController_ChangeToHSPvPShowPKInfo_m11919 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToHuaShanTab()
 void ActivityController_ChangeToHuaShanTab_m11920 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActivityController::IsShowHuaShanTab()
 bool ActivityController_IsShowHuaShanTab_m11921 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToPvP()
 void ActivityController_ChangeToPvP_m11922 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::OnTabDungeonTableau(TabButton)
 void ActivityController_OnTabDungeonTableau_m11923 (ActivityController_t1797 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::OnTabHuoDong(TabButton)
 void ActivityController_OnTabHuoDong_m11924 (ActivityController_t1797 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateDailyMissionState(System.Int32)
 void ActivityController_UpdateDailyMissionState_m11925 (ActivityController_t1797 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpDateDoneCount(System.Int32)
 void ActivityController_UpDateDoneCount_m11926 (ActivityController_t1797 * __this, int32_t ___nDoneCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpDateActiveness(System.Int32)
 void ActivityController_UpDateActiveness_m11927 (ActivityController_t1797 * __this, int32_t ___nActiveness, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateDailyMissionList()
 void ActivityController_UpdateDailyMissionList_m11928 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateMissionItemByKind(System.Int32)
 void ActivityController_UpdateMissionItemByKind_m11929 (ActivityController_t1797 * __this, int32_t ___nKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateAwardItemState(System.Int32)
 void ActivityController_UpdateAwardItemState_m11930 (ActivityController_t1797 * __this, int32_t ___nTurnID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToDailyMissionTab()
 void ActivityController_ChangeToDailyMissionTab_m11931 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ActivityController::get_StrTabName()
 String_t* ActivityController_get_StrTabName_m11932 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::set_StrTabName(System.String)
 void ActivityController_set_StrTabName_m11933 (ActivityController_t1797 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::Check_OnChangeTab()
 void ActivityController_Check_OnChangeTab_m11934 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToYanziwuTab(System.Boolean,System.Object)
 void ActivityController_ChangeToYanziwuTab_m11935 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToYanWanggumuTab(System.Boolean,System.Object)
 void ActivityController_ChangeToYanWanggumuTab_m11936 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToZhenLongQiJuTab(System.Boolean,System.Object)
 void ActivityController_ChangeToZhenLongQiJuTab_m11937 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToJuXianZhuangTab(System.Boolean,System.Object)
 void ActivityController_ChangeToJuXianZhuangTab_m11938 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToShaoShiShanTab(System.Boolean,System.Object)
 void ActivityController_ChangeToShaoShiShanTab_m11939 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToCangJingGeTab(System.Boolean,System.Object)
 void ActivityController_ChangeToCangJingGeTab_m11940 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToMingRenLuTab(System.Boolean,System.Object)
 void ActivityController_ChangeToMingRenLuTab_m11941 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangeToShouWeiYMGTab(System.Boolean,System.Object)
 void ActivityController_ChangeToShouWeiYMGTab_m11942 (ActivityController_t1797 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateGuildActivityWindow()
 void ActivityController_UpdateGuildActivityWindow_m11943 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::UpdateVillainTime()
 void ActivityController_UpdateVillainTime_m11944 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::AskVillainTimeAndOpenFlag()
 void ActivityController_AskVillainTimeAndOpenFlag_m11945 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::_clearTabFunction()
 void ActivityController__clearTabFunction_m11946 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::setTabFunction()
 void ActivityController_setTabFunction_m11947 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::_showTabFunction()
 void ActivityController__showTabFunction_m11948 (ActivityController_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActivityController::ChangToCopyStory(System.Int32)
 void ActivityController_ChangToCopyStory_m11949 (ActivityController_t1797 * __this, int32_t ___missionId, MethodInfo* method) IL2CPP_METHOD_ATTR;
