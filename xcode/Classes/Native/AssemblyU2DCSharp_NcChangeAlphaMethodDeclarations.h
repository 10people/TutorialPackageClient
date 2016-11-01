#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcChangeAlpha
struct NcChangeAlpha_t5064;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void NcChangeAlpha::.ctor()
 void NcChangeAlpha__ctor_m36152 (NcChangeAlpha_t5064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcChangeAlpha NcChangeAlpha::SetChangeTime(UnityEngine.GameObject,System.Single,System.Single,System.Single,System.Single)
 NcChangeAlpha_t5064 * NcChangeAlpha_SetChangeTime_m36153 (Object_t * __this/* static, unused */, GameObject_t9 * ___baseGameObject, float ___fLifeTime, float ___fChangeTime, float ___fFromMeshAlphaValue, float ___fToMeshAlphaValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::SetChangeTime(System.Single,System.Single,System.Single,System.Single)
 void NcChangeAlpha_SetChangeTime_m36154 (NcChangeAlpha_t5064 * __this, float ___fDelayTime, float ___fChangeTime, float ___fFromAlphaValue, float ___fToAlphaValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Restart()
 void NcChangeAlpha_Restart_m36155 (NcChangeAlpha_t5064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Awake()
 void NcChangeAlpha_Awake_m36156 (NcChangeAlpha_t5064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Start()
 void NcChangeAlpha_Start_m36157 (NcChangeAlpha_t5064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Update()
 void NcChangeAlpha_Update_m36158 (NcChangeAlpha_t5064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::StartChange()
 void NcChangeAlpha_StartChange_m36159 (NcChangeAlpha_t5064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::ChangeToAlpha(System.Single)
 void NcChangeAlpha_ChangeToAlpha_m36160 (NcChangeAlpha_t5064 * __this, float ___fElapsedRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcChangeAlpha_OnUpdateEffectSpeed_m36161 (NcChangeAlpha_t5064 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
