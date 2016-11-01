#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcAutoDestruct
struct NcAutoDestruct_t5057;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void NcAutoDestruct::.ctor()
 void NcAutoDestruct__ctor_m36137 (NcAutoDestruct_t5057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcAutoDestruct NcAutoDestruct::CreateAutoDestruct(UnityEngine.GameObject,System.Single,System.Single,System.Boolean,System.Boolean)
 NcAutoDestruct_t5057 * NcAutoDestruct_CreateAutoDestruct_m36138 (Object_t * __this/* static, unused */, GameObject_t9 * ___baseGameObject, float ___fLifeTime, float ___fDestroyTime, bool ___bSmoothHide, bool ___bMeshFilterOnlySmoothHide, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::Awake()
 void NcAutoDestruct_Awake_m36139 (NcAutoDestruct_t5057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::Start()
 void NcAutoDestruct_Start_m36140 (NcAutoDestruct_t5057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::Update()
 void NcAutoDestruct_Update_m36141 (NcAutoDestruct_t5057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::FixedUpdate()
 void NcAutoDestruct_FixedUpdate_m36142 (NcAutoDestruct_t5057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::StartDestroy()
 void NcAutoDestruct_StartDestroy_m36143 (NcAutoDestruct_t5057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcAutoDestruct_OnUpdateEffectSpeed_m36144 (NcAutoDestruct_t5057 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::AutoDestruct()
 void NcAutoDestruct_AutoDestruct_m36145 (NcAutoDestruct_t5057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
