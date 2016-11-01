#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cutscene.CutsceneActionPlayEffect
struct CutsceneActionPlayEffect_t4610;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Cutscene.CutsceneActionPlayEffect::.ctor(System.Int32,UnityEngine.Vector3,System.Single)
 void CutsceneActionPlayEffect__ctor_m33026 (CutsceneActionPlayEffect_t4610 * __this, int32_t ___nEffectID, Vector3_t121  ___effectPos, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionPlayEffect::Start()
 void CutsceneActionPlayEffect_Start_m33027 (CutsceneActionPlayEffect_t4610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionPlayEffect::Update(System.Single)
 void CutsceneActionPlayEffect_Update_m33028 (CutsceneActionPlayEffect_t4610 * __this, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionPlayEffect::Finish()
 void CutsceneActionPlayEffect_Finish_m33029 (CutsceneActionPlayEffect_t4610 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cutscene.CutsceneActionPlayEffect::EffectStartPlayCallback(UnityEngine.GameObject,System.Object)
 void CutsceneActionPlayEffect_EffectStartPlayCallback_m33030 (CutsceneActionPlayEffect_t4610 * __this, GameObject_t9 * ___effectObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
