#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcTimerTool
struct NcTimerTool_t5025;

// System.Void NcTimerTool::.ctor()
 void NcTimerTool__ctor_m35991 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetEngineTime()
 float NcTimerTool_GetEngineTime_m35992 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetEngineDeltaTime()
 float NcTimerTool_GetEngineDeltaTime_m35993 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::InitSmoothTime()
 void NcTimerTool_InitSmoothTime_m35994 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::UpdateSmoothTime(System.Single)
 float NcTimerTool_UpdateSmoothTime_m35995 (NcTimerTool_t5025 * __this, float ___fDeltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTimerTool::IsUpdateTimer()
 bool NcTimerTool_IsUpdateTimer_m35996 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::UpdateTimer()
 float NcTimerTool_UpdateTimer_m35997 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetTime()
 float NcTimerTool_GetTime_m35998 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetDeltaTime()
 float NcTimerTool_GetDeltaTime_m35999 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetSmoothDeltaTime()
 float NcTimerTool_GetSmoothDeltaTime_m36000 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTimerTool::IsEnable()
 bool NcTimerTool_IsEnable_m36001 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Start()
 void NcTimerTool_Start_m36002 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Reset(System.Single)
 void NcTimerTool_Reset_m36003 (NcTimerTool_t5025 * __this, float ___fElapsedTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Pause()
 void NcTimerTool_Pause_m36004 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Resume()
 void NcTimerTool_Resume_m36005 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::SetTimeScale(System.Single)
 void NcTimerTool_SetTimeScale_m36006 (NcTimerTool_t5025 * __this, float ___fTimeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetTimeScale()
 float NcTimerTool_GetTimeScale_m36007 (NcTimerTool_t5025 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
