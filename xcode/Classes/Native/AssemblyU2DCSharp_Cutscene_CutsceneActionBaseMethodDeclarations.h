#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cutscene.CutsceneActionBase
struct CutsceneActionBase_t4589;
// Cutscene.CutsceneEvent
#include "AssemblyU2DCSharp_Cutscene_CutsceneEvent.h"

// System.Void Cutscene.CutsceneActionBase::.ctor()
 void CutsceneActionBase__ctor_m33052 (CutsceneActionBase_t4589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cutscene.CutsceneActionBase::get_Finished()
 bool CutsceneActionBase_get_Finished_m33053 (CutsceneActionBase_t4589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionBase::Start()
 void CutsceneActionBase_Start_m33054 (CutsceneActionBase_t4589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionBase::Update(System.Single)
 void CutsceneActionBase_Update_m33055 (CutsceneActionBase_t4589 * __this, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionBase::Finish()
 void CutsceneActionBase_Finish_m33056 (CutsceneActionBase_t4589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cutscene.CutsceneActionBase::HasEvent()
 bool CutsceneActionBase_HasEvent_m33057 (CutsceneActionBase_t4589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cutscene.CutsceneEvent Cutscene.CutsceneActionBase::GetEvent()
 CutsceneEvent_t4594  CutsceneActionBase_GetEvent_m33058 (CutsceneActionBase_t4589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionBase::ThrowCustomEvent(System.Int32)
 void CutsceneActionBase_ThrowCustomEvent_m33059 (CutsceneActionBase_t4589 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
