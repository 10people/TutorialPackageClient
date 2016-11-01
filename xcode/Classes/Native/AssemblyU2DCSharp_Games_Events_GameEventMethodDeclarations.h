#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Events.GameEvent
struct GameEvent_t2137;
// System.String
struct String_t;
// Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_EVENT_D.h"

// System.Void Games.Events.GameEvent::.ctor()
 void GameEvent__ctor_m14433 (GameEvent_t2137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::.ctor(Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE)
 void GameEvent__ctor_m14434 (GameEvent_t2137 * __this, int32_t ___nEventID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE Games.Events.GameEvent::get_EventID()
 int32_t GameEvent_get_EventID_m14435 (GameEvent_t2137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::set_EventID(Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE)
 void GameEvent_set_EventID_m14436 (GameEvent_t2137 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Events.GameEvent::get_IsDelay()
 bool GameEvent_get_IsDelay_m14437 (GameEvent_t2137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::set_IsDelay(System.Boolean)
 void GameEvent_set_IsDelay_m14438 (GameEvent_t2137 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.Events.GameEvent::get_DelayTime()
 float GameEvent_get_DelayTime_m14439 (GameEvent_t2137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::set_DelayTime(System.Single)
 void GameEvent_set_DelayTime_m14440 (GameEvent_t2137 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.Events.GameEvent::get_ElapsedTime()
 float GameEvent_get_ElapsedTime_m14441 (GameEvent_t2137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Events.GameEvent::IsDelayFinish()
 bool GameEvent_IsDelayFinish_m14442 (GameEvent_t2137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::Reset()
 void GameEvent_Reset_m14443 (GameEvent_t2137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::AddIntParam(System.Int32)
 void GameEvent_AddIntParam_m14444 (GameEvent_t2137 * __this, int32_t ___nParam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Events.GameEvent::GetIntParam(System.Int32)
 int32_t GameEvent_GetIntParam_m14445 (GameEvent_t2137 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::AddFloatParam(System.Single)
 void GameEvent_AddFloatParam_m14446 (GameEvent_t2137 * __this, float ___fParam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.Events.GameEvent::GetFloatParam(System.Int32)
 float GameEvent_GetFloatParam_m14447 (GameEvent_t2137 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.GameEvent::AddStringParam(System.String)
 void GameEvent_AddStringParam_m14448 (GameEvent_t2137 * __this, String_t* ___szParam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Events.GameEvent::GetStringParam(System.Int32)
 String_t* GameEvent_GetStringParam_m14449 (GameEvent_t2137 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
