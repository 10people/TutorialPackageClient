#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Events.EventSystem
struct EventSystem_t2139;
// Games.Events.GameEvent
struct GameEvent_t2137;

// System.Void Games.Events.EventSystem::.ctor()
 void EventSystem__ctor_m14450 (EventSystem_t2139 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Events.EventSystem::Init()
 bool EventSystem_Init_m14451 (EventSystem_t2139 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.EventSystem::PushEvent(Games.Events.GameEvent)
 void EventSystem_PushEvent_m14452 (EventSystem_t2139 * __this, GameEvent_t2137 * ____event, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.EventSystem::UpdateDelayEventQueue()
 void EventSystem_UpdateDelayEventQueue_m14453 (EventSystem_t2139 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Events.EventSystem::_ProcessEvent(Games.Events.GameEvent)
 void EventSystem__ProcessEvent_m14454 (EventSystem_t2139 * __this, GameEvent_t2137 * ____event, MethodInfo* method) IL2CPP_METHOD_ATTR;
