#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RoleChooseLogic
struct RoleChooseLogic_t1688;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// GC_SELECTROLE_RET/SELECTROLE_RESULT
#include "AssemblyU2DCSharp_GC_SELECTROLE_RET_SELECTROLE_RESULT.h"

// System.Void RoleChooseLogic::.ctor()
 void RoleChooseLogic__ctor_m10925 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::Awake()
 void RoleChooseLogic_Awake_m10926 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::Start()
 void RoleChooseLogic_Start_m10927 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::Update()
 void RoleChooseLogic_Update_m10928 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RoleChooseLogic::Init()
 Object_t * RoleChooseLogic_Init_m10929 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::InitRoleInfo()
 void RoleChooseLogic_InitRoleInfo_m10930 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::OnChoose01()
 void RoleChooseLogic_OnChoose01_m10931 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::OnChoose02()
 void RoleChooseLogic_OnChoose02_m10932 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::OnChoose03()
 void RoleChooseLogic_OnChoose03_m10933 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoleChooseLogic::getTargetRoleIndex(System.Int32)
 int32_t RoleChooseLogic_getTargetRoleIndex_m10934 (RoleChooseLogic_t1688 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::OnChoose(System.Int32)
 void RoleChooseLogic_OnChoose_m10935 (RoleChooseLogic_t1688 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::roleIntoGame()
 void RoleChooseLogic_roleIntoGame_m10936 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::backToServer()
 void RoleChooseLogic_backToServer_m10937 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::GotoCreateRole()
 void RoleChooseLogic_GotoCreateRole_m10938 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::GotoGame(System.Int32)
 void RoleChooseLogic_GotoGame_m10939 (RoleChooseLogic_t1688 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::RetSelectRoleFail(GC_SELECTROLE_RET/SELECTROLE_RESULT)
 void RoleChooseLogic_RetSelectRoleFail_m10940 (RoleChooseLogic_t1688 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::OnEnterServerMain()
 void RoleChooseLogic_OnEnterServerMain_m10941 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::ShowRoleMode(System.Int32)
 void RoleChooseLogic_ShowRoleMode_m10942 (RoleChooseLogic_t1688 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::OnDestroy()
 void RoleChooseLogic_OnDestroy_m10943 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::DestroyPartnerFakeObj()
 void RoleChooseLogic_DestroyPartnerFakeObj_m10944 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::CreatePartnerFakeObj(System.Int32,System.Int32)
 void RoleChooseLogic_CreatePartnerFakeObj_m10945 (RoleChooseLogic_t1688 * __this, int32_t ___pro, int32_t ___modelVisualID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::chooseLastRole()
 void RoleChooseLogic_chooseLastRole_m10946 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::hideLastLoginBac()
 void RoleChooseLogic_hideLastLoginBac_m10947 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoleChooseLogic::GetRoleWeaponId()
 int32_t RoleChooseLogic_GetRoleWeaponId_m10948 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::setRoleWeaponId(System.Int32)
 void RoleChooseLogic_setRoleWeaponId_m10949 (RoleChooseLogic_t1688 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoleChooseLogic::GetRoleProfess()
 int32_t RoleChooseLogic_GetRoleProfess_m10950 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::setRoleProfess(System.Int32)
 void RoleChooseLogic_setRoleProfess_m10951 (RoleChooseLogic_t1688 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoleChooseLogic::GetPlayerLoginFlyWingId()
 int32_t RoleChooseLogic_GetPlayerLoginFlyWingId_m10952 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::set_PlayerCurEquipFlyWingId(System.Int32)
 void RoleChooseLogic_set_PlayerCurEquipFlyWingId_m10953 (RoleChooseLogic_t1688 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::set_PlayerCurDreamFlyWingId(System.Int32)
 void RoleChooseLogic_set_PlayerCurDreamFlyWingId_m10954 (RoleChooseLogic_t1688 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::set_PlayerIsShowHideFlyWing(System.Boolean)
 void RoleChooseLogic_set_PlayerIsShowHideFlyWing_m10955 (RoleChooseLogic_t1688 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RoleChooseLogic::LoadAllPlayerNew()
 Object_t * RoleChooseLogic_LoadAllPlayerNew_m10956 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoleChooseLogic::SetChoosePlace(System.Int32)
 void RoleChooseLogic_SetChoosePlace_m10957 (RoleChooseLogic_t1688 * __this, int32_t ___choosePlace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoleChooseLogic::GetChoosePlace()
 int32_t RoleChooseLogic_GetChoosePlace_m10958 (RoleChooseLogic_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
