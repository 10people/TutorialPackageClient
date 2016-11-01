#pragma once
#include <stdint.h>
// Cutscene.CutsceneActionBase
struct CutsceneActionBase_t4589;
// System.Collections.Generic.List`1<Cutscene.Cutscene/EventHandler>
struct List_1_t4590;
// System.Object
#include "mscorlib_System_Object.h"
// Cutscene.Cutscene/ActionContainer
struct ActionContainer_t4591  : public Object_t
{
	// System.Int32 Cutscene.Cutscene/ActionContainer::ID
	int32_t ___ID;
	// System.Boolean Cutscene.Cutscene/ActionContainer::IsMainAction
	bool ___IsMainAction;
	// Cutscene.CutsceneActionBase Cutscene.Cutscene/ActionContainer::Action
	CutsceneActionBase_t4589 * ___Action;
	// System.Collections.Generic.List`1<Cutscene.Cutscene/EventHandler> Cutscene.Cutscene/ActionContainer::StartEventHandler
	List_1_t4590 * ___StartEventHandler;
	// System.Collections.Generic.List`1<Cutscene.Cutscene/EventHandler> Cutscene.Cutscene/ActionContainer::FinishEventHandler
	List_1_t4590 * ___FinishEventHandler;
	// System.Collections.Generic.List`1<Cutscene.Cutscene/EventHandler> Cutscene.Cutscene/ActionContainer::CustomEventHandler
	List_1_t4590 * ___CustomEventHandler;
};
