#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ServerTopWindow
struct ServerTopWindow_t1831;
// LoginData/ServerListData
struct ServerListData_t1518;
// System.String
struct String_t;
// ServerListItem/State
#include "AssemblyU2DCSharp_ServerListItem_State.h"

// System.Void ServerTopWindow::.ctor()
 void ServerTopWindow__ctor_m13924 (ServerTopWindow_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerTopWindow::Awake()
 void ServerTopWindow_Awake_m13925 (ServerTopWindow_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerTopWindow::Start()
 void ServerTopWindow_Start_m13926 (ServerTopWindow_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerTopWindow::OnBtnServerOther()
 void ServerTopWindow_OnBtnServerOther_m13927 (ServerTopWindow_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerTopWindow::OnBtnOkClick()
 void ServerTopWindow_OnBtnOkClick_m13928 (ServerTopWindow_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerTopWindow::OnBtnHelpClick()
 void ServerTopWindow_OnBtnHelpClick_m13929 (ServerTopWindow_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerTopWindow::SetCurServerInfo(LoginData/ServerListData)
 void ServerTopWindow_SetCurServerInfo_m13930 (ServerTopWindow_t1831 * __this, ServerListData_t1518 * ___curListData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ServerTopWindow::GetServerStateSprite(ServerListItem/State)
 String_t* ServerTopWindow_GetServerStateSprite_m13931 (ServerTopWindow_t1831 * __this, int32_t ___serverState, MethodInfo* method) IL2CPP_METHOD_ATTR;
