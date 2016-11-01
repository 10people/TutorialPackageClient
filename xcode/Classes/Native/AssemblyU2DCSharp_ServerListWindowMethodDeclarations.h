#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ServerListWindow
struct ServerListWindow_t2058;
// System.String
struct String_t;
// LoginData/ServerListData
struct ServerListData_t1518;

// System.Void ServerListWindow::.ctor()
 void ServerListWindow__ctor_m13913 (ServerListWindow_t2058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::Awake()
 void ServerListWindow_Awake_m13914 (ServerListWindow_t2058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::Start()
 void ServerListWindow_Start_m13915 (ServerListWindow_t2058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::OnEnable()
 void ServerListWindow_OnEnable_m13916 (ServerListWindow_t2058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::UpdateItems()
 void ServerListWindow_UpdateItems_m13917 (ServerListWindow_t2058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::UpdateServerListItemByData(System.Int32)
 void ServerListWindow_UpdateServerListItemByData_m13918 (ServerListWindow_t2058 * __this, int32_t ___page, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::OnBtnBackClick()
 void ServerListWindow_OnBtnBackClick_m13919 (ServerListWindow_t2058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::OnBtnNextClick()
 void ServerListWindow_OnBtnNextClick_m13920 (ServerListWindow_t2058 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::ServerSelected(System.String)
 void ServerListWindow_ServerSelected_m13921 (ServerListWindow_t2058 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::ServerPageSelected(System.String)
 void ServerListWindow_ServerPageSelected_m13922 (ServerListWindow_t2058 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListWindow::SetCurServerInfo(LoginData/ServerListData)
 void ServerListWindow_SetCurServerInfo_m13923 (ServerListWindow_t2058 * __this, ServerListData_t1518 * ___serverListData, MethodInfo* method) IL2CPP_METHOD_ATTR;
