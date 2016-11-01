#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cutscene.Cutscene/EventHandler
struct EventHandler_t4593;
// Cutscene.Cutscene/ActionContainer
struct ActionContainer_t4591;
// Cutscene.CutsceneEvent
#include "AssemblyU2DCSharp_Cutscene_CutsceneEvent.h"
// Cutscene.Cutscene/EventHandler/EEventHandlerType
#include "AssemblyU2DCSharp_Cutscene_Cutscene_EventHandler_EEventHandl.h"

// System.Void Cutscene.Cutscene/EventHandler::.ctor(Cutscene.Cutscene/ActionContainer,System.Single,Cutscene.CutsceneEvent,Cutscene.Cutscene/EventHandler/EEventHandlerType)
 void EventHandler__ctor_m32971 (EventHandler_t4593 * __this, ActionContainer_t4591 * ___targetActionContainer, float ___delay, CutsceneEvent_t4594  ___cEvent, int32_t ___handlerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cutscene.Cutscene/EventHandler::IsTrigger(Cutscene.CutsceneEvent)
 bool EventHandler_IsTrigger_m32972 (EventHandler_t4593 * __this, CutsceneEvent_t4594  ___cEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
