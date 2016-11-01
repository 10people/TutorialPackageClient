#pragma once
#include <stdint.h>
// Cutscene.Cutscene/ActionContainer
struct ActionContainer_t4591;
// System.Collections.Generic.List`1<Cutscene.Cutscene/ActionContainer>
struct List_1_t4596;
// System.Collections.Generic.Queue`1<Cutscene.Cutscene/ActionContainer>
struct Queue_1_t4597;
// System.Collections.Generic.List`1<Cutscene.Cutscene/EventHandler>
struct List_1_t4590;
// System.Object
#include "mscorlib_System_Object.h"
// Cutscene.Cutscene/ECutsceneState
#include "AssemblyU2DCSharp_Cutscene_Cutscene_ECutsceneState.h"
// Cutscene.Cutscene
struct Cutscene_t4598  : public Object_t
{
	// Cutscene.Cutscene/ActionContainer Cutscene.Cutscene::m_RootActionContainer
	ActionContainer_t4591 * ___m_RootActionContainer;
	// Cutscene.Cutscene/ECutsceneState Cutscene.Cutscene::m_State
	int32_t ___m_State;
	// System.Collections.Generic.List`1<Cutscene.Cutscene/ActionContainer> Cutscene.Cutscene::m_CurrentRunningAction
	List_1_t4596 * ___m_CurrentRunningAction;
	// System.Collections.Generic.Queue`1<Cutscene.Cutscene/ActionContainer> Cutscene.Cutscene::m_WaitToStartActionQueue
	Queue_1_t4597 * ___m_WaitToStartActionQueue;
	// System.Collections.Generic.List`1<Cutscene.Cutscene/EventHandler> Cutscene.Cutscene::m_TimedEvent
	List_1_t4590 * ___m_TimedEvent;
};
struct Cutscene_t4598_StaticFields{
	// System.Int32 Cutscene.Cutscene::m_nStartActionPerFrameNum
	int32_t ___m_nStartActionPerFrameNum;
};
