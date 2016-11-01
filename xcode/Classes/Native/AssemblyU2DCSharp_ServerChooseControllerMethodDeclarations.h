#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ServerChooseController
struct ServerChooseController_t1832;
// System.String
struct String_t;
// LoginData/ServerListData
struct ServerListData_t1518;
// System.Collections.IEnumerator
struct IEnumerator_t67;

// System.Void ServerChooseController::.ctor()
 void ServerChooseController__ctor_m12106 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::Awake()
 void ServerChooseController_Awake_m12107 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::hideGroundPic()
 void ServerChooseController_hideGroundPic_m12108 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::showGroundPic()
 void ServerChooseController_showGroundPic_m12109 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::Start()
 void ServerChooseController_Start_m12110 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::OnEnable()
 void ServerChooseController_OnEnable_m12111 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::Update()
 void ServerChooseController_Update_m12112 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::ConnectToServer(System.String,System.Int32)
 void ServerChooseController_ConnectToServer_m12113 (ServerChooseController_t1832 * __this, String_t* ___szIp, int32_t ___nPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::OnConnectResult(System.Boolean,System.String)
 void ServerChooseController_OnConnectResult_m12114 (ServerChooseController_t1832 * __this, bool ___bSuccess, String_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::OnConnectTimeOut()
 void ServerChooseController_OnConnectTimeOut_m12115 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::OnEnterAccount()
 void ServerChooseController_OnEnterAccount_m12116 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::SelectServerListItem(LoginData/ServerListData)
 void ServerChooseController_SelectServerListItem_m12117 (ServerChooseController_t1832 * __this, ServerListData_t1518 * ___curListData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::ShowForceEnterTip(System.Boolean)
 void ServerChooseController_ShowForceEnterTip_m12118 (ServerChooseController_t1832 * __this, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::OnForceLogin()
 void ServerChooseController_OnForceLogin_m12119 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::OnUpdateApp()
 void ServerChooseController_OnUpdateApp_m12120 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerChooseController::OnDoUpdateApp()
 void ServerChooseController_OnDoUpdateApp_m12121 (ServerChooseController_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ServerChooseController::RequestServerState(System.Int32)
 Object_t * ServerChooseController_RequestServerState_m12122 (ServerChooseController_t1832 * __this, int32_t ___serverID, MethodInfo* method) IL2CPP_METHOD_ATTR;
