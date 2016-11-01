#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PartnerFrameLogic
struct PartnerFrameLogic_t1626;
// TabButton
struct TabButton_t1210;
// System.Predicate`1<Games.Fellow.Fellow>
struct Predicate_1_t1629;
// Games.Fellow.Fellow
struct Fellow_t1174;
// PartnerFrameLogic_Develop/DEVELOPCONTENT
#include "AssemblyU2DCSharp_PartnerFrameLogic_Develop_DEVELOPCONTENT.h"

// System.Void PartnerFrameLogic::.ctor()
 void PartnerFrameLogic__ctor_m10274 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::.cctor()
 void PartnerFrameLogic__cctor_m10275 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PartnerFrameLogic PartnerFrameLogic::Instance()
 PartnerFrameLogic_t1626 * PartnerFrameLogic_Instance_m10276 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnEnable()
 void PartnerFrameLogic_OnEnable_m10277 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnDisable()
 void PartnerFrameLogic_OnDisable_m10278 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::TabOnClick(TabButton)
 void PartnerFrameLogic_TabOnClick_m10279 (PartnerFrameLogic_t1626 * __this, TabButton_t1210 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::InitPartnerList(System.UInt64,System.Predicate`1<Games.Fellow.Fellow>)
 void PartnerFrameLogic_InitPartnerList_m10280 (PartnerFrameLogic_t1626 * __this, uint64_t ___defaultGuid, Predicate_1_t1629 * ___filter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::RefreshPartnerList(System.Predicate`1<Games.Fellow.Fellow>)
 void PartnerFrameLogic_RefreshPartnerList_m10281 (PartnerFrameLogic_t1626 * __this, Predicate_1_t1629 * ___filter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::HidePartnerList()
 void PartnerFrameLogic_HidePartnerList_m10282 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnCloseClick()
 void PartnerFrameLogic_OnCloseClick_m10283 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnFellowClick(Games.Fellow.Fellow)
 void PartnerFrameLogic_OnFellowClick_m10284 (PartnerFrameLogic_t1626 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::UpdateFellowInfo_Refresh()
 void PartnerFrameLogic_UpdateFellowInfo_Refresh_m10285 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnChangeNameClick(Games.Fellow.Fellow)
 void PartnerFrameLogic_OnChangeNameClick_m10286 (PartnerFrameLogic_t1626 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnClickSaveName()
 void PartnerFrameLogic_OnClickSaveName_m10287 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnClickCloseChangeName()
 void PartnerFrameLogic_OnClickCloseChangeName_m10288 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnRebirthClick(Games.Fellow.Fellow)
 void PartnerFrameLogic_OnRebirthClick_m10289 (PartnerFrameLogic_t1626 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnRebirthOKClick()
 void PartnerFrameLogic_OnRebirthOKClick_m10290 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::OnRebirthCancelClick()
 void PartnerFrameLogic_OnRebirthCancelClick_m10291 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::ChangeToDevelop(PartnerFrameLogic_Develop/DEVELOPCONTENT,System.UInt64)
 void PartnerFrameLogic_ChangeToDevelop_m10292 (PartnerFrameLogic_t1626 * __this, int32_t ___tab, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PartnerFrameLogic::get_NewPlayerGuideFlag_Step()
 int32_t PartnerFrameLogic_get_NewPlayerGuideFlag_Step_m10293 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::set_NewPlayerGuideFlag_Step(System.Int32)
 void PartnerFrameLogic_set_NewPlayerGuideFlag_Step_m10294 (PartnerFrameLogic_t1626 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::Check_NewPlayerGuide()
 void PartnerFrameLogic_Check_NewPlayerGuide_m10295 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::NewPlayerGuide(System.Int32)
 void PartnerFrameLogic_NewPlayerGuide_m10296 (PartnerFrameLogic_t1626 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic::UpdateDevelopRemindPoint()
 void PartnerFrameLogic_UpdateDevelopRemindPoint_m10297 (PartnerFrameLogic_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
