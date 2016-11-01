#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ParticleEmitter
struct ParticleEmitter_t5081;
// UnityEngine.Particle[]
struct ParticleU5BU5D_t5087;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.ParticleEmitter::get_emit()
 bool ParticleEmitter_get_emit_m42390 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_emit(System.Boolean)
 void ParticleEmitter_set_emit_m41375 (ParticleEmitter_t5081 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_minSize()
 float ParticleEmitter_get_minSize_m41544 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_minSize(System.Single)
 void ParticleEmitter_set_minSize_m41545 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_maxSize()
 float ParticleEmitter_get_maxSize_m41546 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_maxSize(System.Single)
 void ParticleEmitter_set_maxSize_m41547 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_minEnergy()
 float ParticleEmitter_get_minEnergy_m41548 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_minEnergy(System.Single)
 void ParticleEmitter_set_minEnergy_m41549 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_maxEnergy()
 float ParticleEmitter_get_maxEnergy_m41550 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_maxEnergy(System.Single)
 void ParticleEmitter_set_maxEnergy_m41551 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_minEmission()
 float ParticleEmitter_get_minEmission_m41552 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_minEmission(System.Single)
 void ParticleEmitter_set_minEmission_m41553 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_maxEmission()
 float ParticleEmitter_get_maxEmission_m41554 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_maxEmission(System.Single)
 void ParticleEmitter_set_maxEmission_m41555 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_emitterVelocityScale()
 float ParticleEmitter_get_emitterVelocityScale_m41566 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_emitterVelocityScale(System.Single)
 void ParticleEmitter_set_emitterVelocityScale_m41567 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::INTERNAL_get_worldVelocity(UnityEngine.Vector3&)
 void ParticleEmitter_INTERNAL_get_worldVelocity_m52054 (ParticleEmitter_t5081 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::INTERNAL_set_worldVelocity(UnityEngine.Vector3&)
 void ParticleEmitter_INTERNAL_set_worldVelocity_m52055 (ParticleEmitter_t5081 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ParticleEmitter::get_worldVelocity()
 Vector3_t121  ParticleEmitter_get_worldVelocity_m41556 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_worldVelocity(UnityEngine.Vector3)
 void ParticleEmitter_set_worldVelocity_m41557 (ParticleEmitter_t5081 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::INTERNAL_get_localVelocity(UnityEngine.Vector3&)
 void ParticleEmitter_INTERNAL_get_localVelocity_m52056 (ParticleEmitter_t5081 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::INTERNAL_set_localVelocity(UnityEngine.Vector3&)
 void ParticleEmitter_INTERNAL_set_localVelocity_m52057 (ParticleEmitter_t5081 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ParticleEmitter::get_localVelocity()
 Vector3_t121  ParticleEmitter_get_localVelocity_m41558 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_localVelocity(UnityEngine.Vector3)
 void ParticleEmitter_set_localVelocity_m41559 (ParticleEmitter_t5081 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::INTERNAL_get_rndVelocity(UnityEngine.Vector3&)
 void ParticleEmitter_INTERNAL_get_rndVelocity_m52058 (ParticleEmitter_t5081 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::INTERNAL_set_rndVelocity(UnityEngine.Vector3&)
 void ParticleEmitter_INTERNAL_set_rndVelocity_m52059 (ParticleEmitter_t5081 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ParticleEmitter::get_rndVelocity()
 Vector3_t121  ParticleEmitter_get_rndVelocity_m41560 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_rndVelocity(UnityEngine.Vector3)
 void ParticleEmitter_set_rndVelocity_m41561 (ParticleEmitter_t5081 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleEmitter::get_useWorldSpace()
 bool ParticleEmitter_get_useWorldSpace_m41521 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_useWorldSpace(System.Boolean)
 void ParticleEmitter_set_useWorldSpace_m41437 (ParticleEmitter_t5081 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_angularVelocity()
 float ParticleEmitter_get_angularVelocity_m41562 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_angularVelocity(System.Single)
 void ParticleEmitter_set_angularVelocity_m41563 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleEmitter::get_rndAngularVelocity()
 float ParticleEmitter_get_rndAngularVelocity_m41564 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_rndAngularVelocity(System.Single)
 void ParticleEmitter_set_rndAngularVelocity_m41565 (ParticleEmitter_t5081 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Particle[] UnityEngine.ParticleEmitter::get_particles()
 ParticleU5BU5D_t5087* ParticleEmitter_get_particles_m41520 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_particles(UnityEngine.Particle[])
 void ParticleEmitter_set_particles_m41527 (ParticleEmitter_t5081 * __this, ParticleU5BU5D_t5087* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::Emit(System.Int32)
 void ParticleEmitter_Emit_m41441 (ParticleEmitter_t5081 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::Emit2(System.Int32)
 void ParticleEmitter_Emit2_m52060 (ParticleEmitter_t5081 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleEmitter::get_enabled()
 bool ParticleEmitter_get_enabled_m41530 (ParticleEmitter_t5081 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
