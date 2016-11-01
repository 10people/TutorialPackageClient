#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t929;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t5084;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t5176;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t7613;

// System.Single UnityEngine.ParticleSystem::get_startDelay()
 float ParticleSystem_get_startDelay_m41788 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_time(System.Single)
 void ParticleSystem_set_time_m41812 (ParticleSystem_t929 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::get_particleCount()
 int32_t ParticleSystem_get_particleCount_m41534 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
 void ParticleSystem_set_enableEmission_m41373 (ParticleSystem_t929 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_emissionRate()
 float ParticleSystem_get_emissionRate_m41581 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_emissionRate(System.Single)
 void ParticleSystem_set_emissionRate_m41582 (ParticleSystem_t929 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSpeed()
 float ParticleSystem_get_startSpeed_m41583 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
 void ParticleSystem_set_startSpeed_m6538 (ParticleSystem_t929 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSize()
 float ParticleSystem_get_startSize_m41578 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
 void ParticleSystem_set_startSize_m6537 (ParticleSystem_t929 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
 float ParticleSystem_get_startLifetime_m41579 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
 void ParticleSystem_set_startLifetime_m41580 (ParticleSystem_t929 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
 void ParticleSystem_SetParticles_m41539 (ParticleSystem_t929 * __this, ParticleU5BU5D_t5084* ___particles, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
 int32_t ParticleSystem_GetParticles_m41533 (ParticleSystem_t929 * __this, ParticleU5BU5D_t5084* ___particles, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
 void ParticleSystem_Internal_Play_m52480 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
 void ParticleSystem_Play_m41825 (ParticleSystem_t929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
 void ParticleSystem_Play_m52481 (ParticleSystem_t929 * __this, bool ___withChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
 void ParticleSystem_Emit_m41442 (ParticleSystem_t929 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
 void ParticleSystem_INTERNAL_CALL_Emit_m52482 (Object_t * __this/* static, unused */, ParticleSystem_t929 * ___self, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
 ParticleSystemU5BU5D_t5176* ParticleSystem_GetParticleSystems_m52483 (Object_t * __this/* static, unused */, ParticleSystem_t929 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
 void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m52484 (Object_t * __this/* static, unused */, Transform_t78 * ___transform, List_1_t7613 * ___particleSystems, MethodInfo* method) IL2CPP_METHOD_ATTR;
