#pragma once
#include <stdint.h>
// Cutscene.Cutscene/ActionContainer
struct ActionContainer_t4591;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Cutscene.CutsceneEvent
#include "AssemblyU2DCSharp_Cutscene_CutsceneEvent.h"
// Cutscene.Cutscene/EventHandler/EEventHandlerType
#include "AssemblyU2DCSharp_Cutscene_Cutscene_EventHandler_EEventHandl.h"
// Cutscene.Cutscene/EventHandler
struct EventHandler_t4593 
{
	// Cutscene.Cutscene/ActionContainer Cutscene.Cutscene/EventHandler::TargetActionContainer
	ActionContainer_t4591 * ___TargetActionContainer;
	// System.Single Cutscene.Cutscene/EventHandler::Delay
	float ___Delay;
	// Cutscene.CutsceneEvent Cutscene.Cutscene/EventHandler::CEvent
	CutsceneEvent_t4594  ___CEvent;
	// Cutscene.Cutscene/EventHandler/EEventHandlerType Cutscene.Cutscene/EventHandler::HandlerType
	int32_t ___HandlerType;
};
