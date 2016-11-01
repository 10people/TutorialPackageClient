#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RankWindow
struct RankWindow_t2037;
// System.Object
struct Object_t;
// System.String
struct String_t;
// TabButton
struct TabButton_t1210;
// RankItem
struct RankItem_t1919;
// PVPData/Rank_Class
#include "AssemblyU2DCSharp_PVPData_Rank_Class.h"
// Games.GlobeDefine.GameDefine_Globe/RANKTYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_RANKTYP.h"

// System.Void RankWindow::.ctor()
 void RankWindow__ctor_m13659 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::.cctor()
 void RankWindow__cctor_m13660 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::set_isRankDataReturn(System.Boolean)
 void RankWindow_set_isRankDataReturn_m13661 (RankWindow_t2037 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RankWindow::get_isRankDataReturn()
 bool RankWindow_get_isRankDataReturn_m13662 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RankWindow RankWindow::Instance()
 RankWindow_t2037 * RankWindow_Instance_m13663 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::ShowRankWindow(System.Int32)
 void RankWindow_ShowRankWindow_m13664 (Object_t * __this/* static, unused */, int32_t ___nRankType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnOpenRankWindow(System.Boolean,System.Object)
 void RankWindow_OnOpenRankWindow_m13665 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::Awake()
 void RankWindow_Awake_m13666 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::RankInfoDragFinished()
 void RankWindow_RankInfoDragFinished_m13667 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::Init(System.Int32)
 void RankWindow_Init_m13668 (RankWindow_t2037 * __this, int32_t ___nRankType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::UpdateRankSubClass()
 void RankWindow_UpdateRankSubClass_m13669 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::CreateRankClassItem()
 void RankWindow_CreateRankClassItem_m13670 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RankWindow::GetRankClassName(PVPData/Rank_Class)
 String_t* RankWindow_GetRankClassName_m13671 (Object_t * __this/* static, unused */, int32_t ___nClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::CreateRankSubClassItem(PVPData/Rank_Class)
 void RankWindow_CreateRankSubClassItem_m13672 (RankWindow_t2037 * __this, int32_t ___rankClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RankWindow::GetRankTypeName(Games.GlobeDefine.GameDefine_Globe/RANKTYPE)
 String_t* RankWindow_GetRankTypeName_m13673 (Object_t * __this/* static, unused */, int32_t ___nClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetPageText()
 void RankWindow_SetPageText_m13674 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnDestroy()
 void RankWindow_OnDestroy_m13675 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnRankRewardButtonClick()
 void RankWindow_OnRankRewardButtonClick_m13676 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnRankRewardHideButtonClick()
 void RankWindow_OnRankRewardHideButtonClick_m13677 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RankWindow::GetRankType()
 int32_t RankWindow_GetRankType_m13678 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnTabProfession(TabButton)
 void RankWindow_OnTabProfession_m13679 (RankWindow_t2037 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SelfReputationControl(System.Boolean)
 void RankWindow_SelfReputationControl_m13680 (RankWindow_t2037 * __this, bool ___show, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnTabTableau(TabButton)
 void RankWindow_OnTabTableau_m13681 (RankWindow_t2037 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetRewardBtnShow()
 void RankWindow_SetRewardBtnShow_m13682 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetTitleNum(System.Int32)
 void RankWindow_SetTitleNum_m13683 (RankWindow_t2037 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetRankItemTitleOnChangeTable(System.Int32)
 void RankWindow_SetRankItemTitleOnChangeTable_m13684 (RankWindow_t2037 * __this, int32_t ___nRankType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetItemTitleTxt(System.Int32,System.Int32)
 void RankWindow_SetItemTitleTxt_m13685 (RankWindow_t2037 * __this, int32_t ___idx, int32_t ___dict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::CleanTitle()
 void RankWindow_CleanTitle_m13686 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetItemLabelNum(System.Int32)
 void RankWindow_SetItemLabelNum_m13687 (RankWindow_t2037 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::ClearRankData()
 void RankWindow_ClearRankData_m13688 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnCloseClick()
 void RankWindow_OnCloseClick_m13689 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RankWindow::GetPage()
 int32_t RankWindow_GetPage_m13690 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetTotalPage(System.Int32,System.Int32)
 void RankWindow_SetTotalPage_m13691 (RankWindow_t2037 * __this, int32_t ___total, int32_t ___curPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RankWindow::get_TotalPage()
 int32_t RankWindow_get_TotalPage_m13692 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetIsPage(System.Boolean)
 void RankWindow_SetIsPage_m13693 (RankWindow_t2037 * __this, bool ___IsPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnUpClick()
 void RankWindow_OnUpClick_m13694 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnDownClick()
 void RankWindow_OnDownClick_m13695 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SendRankPack()
 void RankWindow_SendRankPack_m13696 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetChongZhiTime()
 void RankWindow_SetChongZhiTime_m13697 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::SetSpChongZhiTime()
 void RankWindow_SetSpChongZhiTime_m13698 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnClickItem(RankItem)
 void RankWindow_OnClickItem_m13699 (RankWindow_t2037 * __this, RankItem_t1919 * ___oItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnClickRankClassBt(System.Int32,System.Int32)
 void RankWindow_OnClickRankClassBt_m13700 (RankWindow_t2037 * __this, int32_t ___nClass, int32_t ___nRankType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::OnRankOpenFlagChange()
 void RankWindow_OnRankOpenFlagChange_m13701 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::_Init()
 void RankWindow__Init_m13702 (RankWindow_t2037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankWindow::onTypeTabClick(TabButton)
 void RankWindow_onTypeTabClick_m13703 (RankWindow_t2037 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
