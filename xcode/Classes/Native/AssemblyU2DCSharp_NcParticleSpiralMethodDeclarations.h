#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcParticleSpiral
struct NcParticleSpiral_t5079;
// NcParticleSpiral/SpiralSettings
#include "AssemblyU2DCSharp_NcParticleSpiral_SpiralSettings.h"

// System.Void NcParticleSpiral::.ctor()
 void NcParticleSpiral__ctor_m36241 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcParticleSpiral::GetAnimationState()
 int32_t NcParticleSpiral_GetAnimationState_m36242 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::RandomizeEditor()
 void NcParticleSpiral_RandomizeEditor_m36243 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::Start()
 void NcParticleSpiral_Start_m36244 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::SpawnEffect()
 void NcParticleSpiral_SpawnEffect_m36245 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::Update()
 void NcParticleSpiral_Update_m36246 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::LateUpdate()
 void NcParticleSpiral_LateUpdate_m36247 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::getSettings()
 SpiralSettings_t5078  NcParticleSpiral_getSettings_m36248 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::resetEffect(System.Boolean,NcParticleSpiral/SpiralSettings)
 SpiralSettings_t5078  NcParticleSpiral_resetEffect_m36249 (NcParticleSpiral_t5079 * __this, bool ___killCurrent, SpiralSettings_t5078  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::resetEffectToDefaults(System.Boolean)
 SpiralSettings_t5078  NcParticleSpiral_resetEffectToDefaults_m36250 (NcParticleSpiral_t5079 * __this, bool ___killCurrent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::randomizeEffect(System.Boolean)
 SpiralSettings_t5078  NcParticleSpiral_randomizeEffect_m36251 (NcParticleSpiral_t5079 * __this, bool ___killCurrent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::killCurrentEffects()
 void NcParticleSpiral_killCurrentEffects_m36252 (NcParticleSpiral_t5079 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcParticleSpiral_OnUpdateEffectSpeed_m36253 (NcParticleSpiral_t5079 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
