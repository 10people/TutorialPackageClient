#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LoginUILogic
struct LoginUILogic_t1515;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void LoginUILogic::.ctor()
 void LoginUILogic__ctor_m9362 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::.cctor()
 void LoginUILogic__cctor_m9363 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LoginUILogic LoginUILogic::Instance()
 LoginUILogic_t1515 * LoginUILogic_Instance_m9364 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::Awake()
 void LoginUILogic_Awake_m9365 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::Start()
 void LoginUILogic_Start_m9366 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::OnDestroy()
 void LoginUILogic_OnDestroy_m9367 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoginUILogic::BeginInitGame()
 Object_t * LoginUILogic_BeginInitGame_m9368 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoginUILogic::RequestServerList()
 Object_t * LoginUILogic_RequestServerList_m9369 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoginUILogic::BeignLoadRes()
 Object_t * LoginUILogic_BeignLoadRes_m9370 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::InitUI()
 void LoginUILogic_InitUI_m9371 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::Update()
 void LoginUILogic_Update_m9372 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::BeginCheckRes()
 void LoginUILogic_BeginCheckRes_m9373 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::LoginSuccess()
 void LoginUILogic_LoginSuccess_m9374 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::FinishCheckRes(System.Boolean)
 void LoginUILogic_FinishCheckRes_m9375 (LoginUILogic_t1515 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::EnterServerChoose()
 void LoginUILogic_EnterServerChoose_m9376 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::OnShowServerChoose(System.Boolean,System.Object)
 void LoginUILogic_OnShowServerChoose_m9377 (LoginUILogic_t1515 * __this, bool ___bSucces, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::EnterAccount()
 void LoginUILogic_EnterAccount_m9378 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::EnterChooseRole()
 void LoginUILogic_EnterChooseRole_m9379 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::EnterCreateRole()
 void LoginUILogic_EnterCreateRole_m9380 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::CreateRoleClick(System.String)
 void LoginUILogic_CreateRoleClick_m9381 (LoginUILogic_t1515 * __this, String_t* ___strChooseRole, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::PlayRoleCreateOtherAni(System.String)
 void LoginUILogic_PlayRoleCreateOtherAni_m9382 (LoginUILogic_t1515 * __this, String_t* ___strChooseRole, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::CreateRoleReChoose(System.Boolean)
 void LoginUILogic_CreateRoleReChoose_m9383 (LoginUILogic_t1515 * __this, bool ___isstart, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::ShowChooseRoleCamera()
 void LoginUILogic_ShowChooseRoleCamera_m9384 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::ShowCreateRoleCamera()
 void LoginUILogic_ShowCreateRoleCamera_m9385 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::ShowFirstUI()
 void LoginUILogic_ShowFirstUI_m9386 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::CloseBackGroundTexUI()
 void LoginUILogic_CloseBackGroundTexUI_m9387 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::ShowModel(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void LoginUILogic_ShowModel_m9388 (LoginUILogic_t1515 * __this, int32_t ___nType, int32_t ___nModelVisualID, int32_t ___nWeaponID, int32_t ___nWeaponEffectGem, int32_t ___nRoleindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::OnLoadModel(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void LoginUILogic_OnLoadModel_m9389 (LoginUILogic_t1515 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::ShowWeapon()
 void LoginUILogic_ShowWeapon_m9390 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::OnLoadWeapon(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void LoginUILogic_OnLoadWeapon_m9391 (LoginUILogic_t1515 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::SetLoadModelMark(System.Boolean)
 void LoginUILogic_SetLoadModelMark_m9392 (LoginUILogic_t1515 * __this, bool ___bFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoginUILogic::GetLoadModelMark()
 bool LoginUILogic_GetLoadModelMark_m9393 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::RequestRandomName(System.Int32)
 void LoginUILogic_RequestRandomName_m9394 (Object_t * __this/* static, unused */, int32_t ___nSex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::DestroyRoleModeObj()
 void LoginUILogic_DestroyRoleModeObj_m9395 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::InitLoginUserShader()
 void LoginUILogic_InitLoginUserShader_m9396 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::OnClickChangeShader()
 void LoginUILogic_OnClickChangeShader_m9397 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::OnClickChangeEffect()
 void LoginUILogic_OnClickChangeEffect_m9398 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoginUILogic::RequestGengxinInfo()
 Object_t * LoginUILogic_RequestGengxinInfo_m9399 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoginUILogic::RequestCommonGengxinInfo()
 Object_t * LoginUILogic_RequestCommonGengxinInfo_m9400 (LoginUILogic_t1515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginUILogic::DoUpdateApp()
 void LoginUILogic_DoUpdateApp_m9401 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
