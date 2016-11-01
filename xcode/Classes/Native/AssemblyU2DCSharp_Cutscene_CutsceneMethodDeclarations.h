#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cutscene.Cutscene
struct Cutscene_t4598;
// Cutscene.Cutscene/ActionContainer
struct ActionContainer_t4591;
// Cutscene.Cutscene/EventHandler
#include "AssemblyU2DCSharp_Cutscene_Cutscene_EventHandler.h"

// System.Void Cutscene.Cutscene::.ctor()
 void Cutscene__ctor_m32973 (Cutscene_t4598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::.cctor()
 void Cutscene__cctor_m32974 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::Play()
 void Cutscene_Play_m32975 (Cutscene_t4598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::Stop()
 void Cutscene_Stop_m32976 (Cutscene_t4598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::CleanUp()
 void Cutscene_CleanUp_m32977 (Cutscene_t4598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::Update(System.Single)
 void Cutscene_Update_m32978 (Cutscene_t4598 * __this, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::HandleEvent(Cutscene.Cutscene/EventHandler)
 void Cutscene_HandleEvent_m32979 (Cutscene_t4598 * __this, EventHandler_t4593  ___eventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::TriggerEvent(Cutscene.Cutscene/EventHandler)
 void Cutscene_TriggerEvent_m32980 (Cutscene_t4598 * __this, EventHandler_t4593  ___eventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::StartAction(Cutscene.Cutscene/ActionContainer)
 void Cutscene_StartAction_m32981 (Cutscene_t4598 * __this, ActionContainer_t4591 * ___actionContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::FinishAction(Cutscene.Cutscene/ActionContainer)
 void Cutscene_FinishAction_m32982 (Cutscene_t4598 * __this, ActionContainer_t4591 * ___actionContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.Cutscene::SetRootActionContainer(Cutscene.Cutscene/ActionContainer)
 void Cutscene_SetRootActionContainer_m32983 (Cutscene_t4598 * __this, ActionContainer_t4591 * ___rootContainer, MethodInfo* method) IL2CPP_METHOD_ATTR;
