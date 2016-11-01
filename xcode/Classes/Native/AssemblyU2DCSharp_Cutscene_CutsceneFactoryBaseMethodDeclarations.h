#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cutscene.CutsceneFactoryBase
struct CutsceneFactoryBase_t4621;
// System.String
struct String_t;
// Cutscene.CutsceneActionBase
struct CutsceneActionBase_t4589;
// Cutscene.Cutscene
struct Cutscene_t4598;

// System.Void Cutscene.CutsceneFactoryBase::.ctor()
 void CutsceneFactoryBase__ctor_m33241 (CutsceneFactoryBase_t4621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::DefineAction(System.String,Cutscene.CutsceneActionBase,System.Boolean)
 void CutsceneFactoryBase_DefineAction_m33242 (CutsceneFactoryBase_t4621 * __this, String_t* ___actionName, CutsceneActionBase_t4589 * ___action, bool ___isMainAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::BeginBuild()
 void CutsceneFactoryBase_BeginBuild_m33243 (CutsceneFactoryBase_t4621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::EndBuild()
 void CutsceneFactoryBase_EndBuild_m33244 (CutsceneFactoryBase_t4621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::StartBWhenAStart(System.String,System.String,System.Single)
 void CutsceneFactoryBase_StartBWhenAStart_m33245 (CutsceneFactoryBase_t4621 * __this, String_t* ___actionAName, String_t* ___actionBName, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::StartBWhenAFinish(System.String,System.String,System.Single)
 void CutsceneFactoryBase_StartBWhenAFinish_m33246 (CutsceneFactoryBase_t4621 * __this, String_t* ___actionAName, String_t* ___actionBName, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::StartBWhenAEvent(System.String,System.String,System.Int32,System.Single)
 void CutsceneFactoryBase_StartBWhenAEvent_m33247 (CutsceneFactoryBase_t4621 * __this, String_t* ___actionAName, String_t* ___actionBName, int32_t ___customEventId, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::FinishBWhenAStart(System.String,System.String,System.Single)
 void CutsceneFactoryBase_FinishBWhenAStart_m33248 (CutsceneFactoryBase_t4621 * __this, String_t* ___actionAName, String_t* ___actionBName, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::FinishBWhenAFinish(System.String,System.String,System.Single)
 void CutsceneFactoryBase_FinishBWhenAFinish_m33249 (CutsceneFactoryBase_t4621 * __this, String_t* ___actionAName, String_t* ___actionBName, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneFactoryBase::FinishBWhenAEvent(System.String,System.String,System.Int32,System.Single)
 void CutsceneFactoryBase_FinishBWhenAEvent_m33250 (CutsceneFactoryBase_t4621 * __this, String_t* ___actionAName, String_t* ___actionBName, int32_t ___customEventId, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cutscene.Cutscene Cutscene.CutsceneFactoryBase::CreatCutscene()
 Cutscene_t4598 * CutsceneFactoryBase_CreatCutscene_m33251 (CutsceneFactoryBase_t4621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
