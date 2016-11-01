#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcParticleSystem
struct NcParticleSystem_t5086;
// UnityEngine.Particle[]
struct ParticleU5BU5D_t5087;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t5084;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void NcParticleSystem::.ctor()
 void NcParticleSystem__ctor_m36254 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::SetDisableEmit()
 void NcParticleSystem_SetDisableEmit_m36255 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcParticleSystem::IsShuriken()
 bool NcParticleSystem_IsShuriken_m36256 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcParticleSystem::IsLegacy()
 bool NcParticleSystem_IsLegacy_m36257 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcParticleSystem::GetAnimationState()
 int32_t NcParticleSystem_GetAnimationState_m36258 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcParticleSystem::IsMeshParticleEmitter()
 bool NcParticleSystem_IsMeshParticleEmitter_m36259 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::Awake()
 void NcParticleSystem_Awake_m36260 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::OnEnable()
 void NcParticleSystem_OnEnable_m36261 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::OnDisable()
 void NcParticleSystem_OnDisable_m36262 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::Start()
 void NcParticleSystem_Start_m36263 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::Update()
 void NcParticleSystem_Update_m36264 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::FixedUpdate()
 void NcParticleSystem_FixedUpdate_m36265 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::OnPreRender()
 void NcParticleSystem_OnPreRender_m36266 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::OnPostRender()
 void NcParticleSystem_OnPostRender_m36267 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::CreateAttachPrefab(UnityEngine.Vector3,System.Single)
 void NcParticleSystem_CreateAttachPrefab_m36268 (NcParticleSystem_t5086 * __this, Vector3_t121  ___position, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::AddRenderEventCall()
 void NcParticleSystem_AddRenderEventCall_m36269 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::RemoveRenderEventCall()
 void NcParticleSystem_RemoveRenderEventCall_m36270 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::SetEnableParticle(System.Boolean)
 void NcParticleSystem_SetEnableParticle_m36271 (NcParticleSystem_t5086 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcParticleSystem::GetScaleMinMeshNormalVelocity()
 float NcParticleSystem_GetScaleMinMeshNormalVelocity_m36272 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcParticleSystem::GetScaleMaxMeshNormalVelocity()
 float NcParticleSystem_GetScaleMaxMeshNormalVelocity_m36273 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::LegacyInitParticle()
 void NcParticleSystem_LegacyInitParticle_m36274 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::LegacySetParticle()
 void NcParticleSystem_LegacySetParticle_m36275 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::LegacyParticleSpeed(System.Single)
 void NcParticleSystem_LegacyParticleSpeed_m36276 (NcParticleSystem_t5086 * __this, float ___fSpeed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::LegacySetRuntimeParticleScale(System.Boolean)
 void NcParticleSystem_LegacySetRuntimeParticleScale_m36277 (NcParticleSystem_t5086 * __this, bool ___bScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Particle[] NcParticleSystem::LegacyScaleParticle(UnityEngine.Particle[],System.Boolean,System.Boolean)
 ParticleU5BU5D_t5087* NcParticleSystem_LegacyScaleParticle_m36278 (NcParticleSystem_t5086 * __this, ParticleU5BU5D_t5087* ___parts, bool ___bScale, bool ___bPosUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::ShurikenInitParticle()
 void NcParticleSystem_ShurikenInitParticle_m36279 (NcParticleSystem_t5086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::AllocateParticleSystem(UnityEngine.ParticleSystem/Particle[]&)
 void NcParticleSystem_AllocateParticleSystem_m36280 (NcParticleSystem_t5086 * __this, ParticleU5BU5D_t5084** ___tmpPsParts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::ShurikenSetRuntimeParticleScale(System.Boolean)
 void NcParticleSystem_ShurikenSetRuntimeParticleScale_m36281 (NcParticleSystem_t5086 * __this, bool ___bScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/Particle[] NcParticleSystem::ShurikenScaleParticle(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Boolean,System.Boolean)
 ParticleU5BU5D_t5084* NcParticleSystem_ShurikenScaleParticle_m36282 (NcParticleSystem_t5086 * __this, ParticleU5BU5D_t5084* ___parts, int32_t ___nCount, bool ___bScale, bool ___bPosUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcParticleSystem_OnUpdateEffectSpeed_m36283 (NcParticleSystem_t5086 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSystem::Ng_SetProperty(System.Object,System.String,System.Object)
 void NcParticleSystem_Ng_SetProperty_m36284 (Object_t * __this/* static, unused */, Object_t * ___srcObj, String_t* ___fieldName, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NcParticleSystem::Ng_GetProperty(System.Object,System.String)
 Object_t * NcParticleSystem_Ng_GetProperty_m36285 (Object_t * __this/* static, unused */, Object_t * ___srcObj, String_t* ___fieldName, MethodInfo* method) IL2CPP_METHOD_ATTR;
