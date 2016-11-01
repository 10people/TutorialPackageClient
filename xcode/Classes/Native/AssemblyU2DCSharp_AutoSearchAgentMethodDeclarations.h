#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoSearchAgent
struct AutoSearchAgent_t2181;
// AutoSearchPath
struct AutoSearchPath_t4536;
// AutoSearchPoint
struct AutoSearchPoint_t4537;
// System.String
struct String_t;
// TeleportPoint
struct TeleportPoint_t4526;

// System.Void AutoSearchAgent::.ctor()
 void AutoSearchAgent__ctor_m32558 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoSearchPath AutoSearchAgent::get_Path()
 AutoSearchPath_t4536 * AutoSearchAgent_get_Path_m32559 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::set_Path(AutoSearchPath)
 void AutoSearchAgent_set_Path_m32560 (AutoSearchAgent_t2181 * __this, AutoSearchPath_t4536 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoSearchAgent::get_IsAutoSearching()
 bool AutoSearchAgent_get_IsAutoSearching_m32561 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::set_IsAutoSearching(System.Boolean)
 void AutoSearchAgent_set_IsAutoSearching_m32562 (AutoSearchAgent_t2181 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::InitMapConnectPath()
 void AutoSearchAgent_InitMapConnectPath_m32563 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::Awake()
 void AutoSearchAgent_Awake_m32564 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::Update()
 void AutoSearchAgent_Update_m32565 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::FindEnamyTick()
 void AutoSearchAgent_FindEnamyTick_m32566 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::ProcessAutoSearch(AutoSearchPoint,System.String,System.Boolean)
 void AutoSearchAgent_ProcessAutoSearch_m32567 (AutoSearchAgent_t2181 * __this, AutoSearchPoint_t4537 * ___endPoint, String_t* ___sAutoSearchTargetName, bool ___bEnableTeleport, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::DoTeleport()
 void AutoSearchAgent_DoTeleport_m32568 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoSearchAgent::CheckTeleportToScene(System.Int32)
 bool AutoSearchAgent_CheckTeleportToScene_m32569 (AutoSearchAgent_t2181 * __this, int32_t ___nSceneClassID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoSearchAgent::CheckTeleportCondition(System.Int32)
 bool AutoSearchAgent_CheckTeleportCondition_m32570 (AutoSearchAgent_t2181 * __this, int32_t ___nSceneClassID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::BuildPath(AutoSearchPoint)
 void AutoSearchAgent_BuildPath_m32571 (AutoSearchAgent_t2181 * __this, AutoSearchPoint_t4537 * ___endPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AutoSearchAgent::GetDisBySceneID(System.Int32,System.Int32)
 int32_t AutoSearchAgent_GetDisBySceneID_m32572 (AutoSearchAgent_t2181 * __this, int32_t ___srcId, int32_t ___dstId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoSearchAgent::FindPath(AutoSearchPoint,AutoSearchPoint,AutoSearchPath&)
 bool AutoSearchAgent_FindPath_m32573 (AutoSearchAgent_t2181 * __this, AutoSearchPoint_t4537 * ___startPoint, AutoSearchPoint_t4537 * ___endPoint, AutoSearchPath_t4536 ** ___autoSearchPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::Stop()
 void AutoSearchAgent_Stop_m32574 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::BeginMove()
 void AutoSearchAgent_BeginMove_m32575 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::GotoNextPoint()
 void AutoSearchAgent_GotoNextPoint_m32576 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::Finish()
 void AutoSearchAgent_Finish_m32577 (AutoSearchAgent_t2181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchAgent::ProcessTelepoint(TeleportPoint)
 void AutoSearchAgent_ProcessTelepoint_m32578 (AutoSearchAgent_t2181 * __this, TeleportPoint_t4526 * ___telePoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
