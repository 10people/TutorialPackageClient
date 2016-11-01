#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RoleCreateLogic
struct RoleCreateLogic_t1697;
// TabButton
struct TabButton_t1210;
// System.String
struct String_t;
// RoleCreateLogic/ROLE_PROFESSION
#include "AssemblyU2DCSharp_RoleCreateLogic_ROLE_PROFESSION.h"
// GC_CREATEROLE_RET/CREATEROLE_RESULT
#include "AssemblyU2DCSharp_GC_CREATEROLE_RET_CREATEROLE_RESULT.h"

// System.Void RoleCreateLogic::.ctor()
 void RoleCreateLogic__ctor_m10959 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoleCreateLogic::GetRealProfessionID(RoleCreateLogic/ROLE_PROFESSION)
 int32_t RoleCreateLogic_GetRealProfessionID_m10960 (RoleCreateLogic_t1697 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::Start()
 void RoleCreateLogic_Start_m10961 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::RequestNewName()
 void RoleCreateLogic_RequestNewName_m10962 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::FreshNewName()
 void RoleCreateLogic_FreshNewName_m10963 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::FixedUpdate()
 void RoleCreateLogic_FixedUpdate_m10964 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::SubmitName()
 void RoleCreateLogic_SubmitName_m10965 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::SendCreateRole()
 void RoleCreateLogic_SendCreateRole_m10966 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::RetCreateRoleFail(GC_CREATEROLE_RET/CREATEROLE_RESULT)
 void RoleCreateLogic_RetCreateRoleFail_m10967 (RoleCreateLogic_t1697 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::OnEnterLogin()
 void RoleCreateLogic_OnEnterLogin_m10968 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::OnClickOK()
 void RoleCreateLogic_OnClickOK_m10969 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::OnCreate01()
 void RoleCreateLogic_OnCreate01_m10970 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::OnCreate02()
 void RoleCreateLogic_OnCreate02_m10971 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::OnCreate03()
 void RoleCreateLogic_OnCreate03_m10972 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::OnTabChange(TabButton)
 void RoleCreateLogic_OnTabChange_m10973 (RoleCreateLogic_t1697 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::RefreshCreateRolePanelInfo(System.Int32)
 void RoleCreateLogic_RefreshCreateRolePanelInfo_m10974 (RoleCreateLogic_t1697 * __this, int32_t ___chooseIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::Awake()
 void RoleCreateLogic_Awake_m10975 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoleCreateLogic::GetRandomChar()
 String_t* RoleCreateLogic_GetRandomChar_m10976 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoleCreateLogic::GetRandomNameFromClient()
 String_t* RoleCreateLogic_GetRandomNameFromClient_m10977 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::OnCloseClick()
 void RoleCreateLogic_OnCloseClick_m10978 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::onSelectOneRoleItem(System.Int32)
 void RoleCreateLogic_onSelectOneRoleItem_m10979 (RoleCreateLogic_t1697 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::ShowNextStep()
 void RoleCreateLogic_ShowNextStep_m10980 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::SetBGDepth(System.Int32)
 void RoleCreateLogic_SetBGDepth_m10981 (RoleCreateLogic_t1697 * __this, int32_t ___curindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::BackFirstStep()
 void RoleCreateLogic_BackFirstStep_m10982 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::ShowFirstStep()
 void RoleCreateLogic_ShowFirstStep_m10983 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::PreRoleButton()
 void RoleCreateLogic_PreRoleButton_m10984 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::NextRoleButton()
 void RoleCreateLogic_NextRoleButton_m10985 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::BeginChangePerson(System.Int32,System.Int32)
 void RoleCreateLogic_BeginChangePerson_m10986 (RoleCreateLogic_t1697 * __this, int32_t ___oriIndex, int32_t ___targetIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::SetBg()
 void RoleCreateLogic_SetBg_m10987 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::SetRoleProfessional(System.Int32)
 void RoleCreateLogic_SetRoleProfessional_m10988 (RoleCreateLogic_t1697 * __this, int32_t ___curRoleIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::onSelectPanelFinishRotation()
 void RoleCreateLogic_onSelectPanelFinishRotation_m10989 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::onSelectPanelBeginRotation()
 void RoleCreateLogic_onSelectPanelBeginRotation_m10990 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleCreateLogic::ResetTween()
 void RoleCreateLogic_ResetTween_m10991 (RoleCreateLogic_t1697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
