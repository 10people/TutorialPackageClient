#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ServerListItem
struct ServerListItem_t1935;
// System.String
struct String_t;
// System.Collections.Generic.List`1<LoginData/PlayerRoleData>
struct List_1_t1936;
// ServerListItem/State
#include "AssemblyU2DCSharp_ServerListItem_State.h"
// ServerListItem/Type
#include "AssemblyU2DCSharp_ServerListItem_Type.h"

// System.Void ServerListItem::.ctor()
 void ServerListItem__ctor_m12628 (ServerListItem_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListItem::Start()
 void ServerListItem_Start_m12629 (ServerListItem_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListItem::SetState(System.String,ServerListItem/State,ServerListItem/Type,System.Collections.Generic.List`1<LoginData/PlayerRoleData>)
 void ServerListItem_SetState_m12630 (ServerListItem_t1935 * __this, String_t* ___name, int32_t ___state, int32_t ___type, List_1_t1936 * ___serverRoleList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListItem::OnSelectServerClick()
 void ServerListItem_OnSelectServerClick_m12631 (ServerListItem_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerListItem::EnableHeightLight(System.Boolean)
 void ServerListItem_EnableHeightLight_m12632 (ServerListItem_t1935 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
