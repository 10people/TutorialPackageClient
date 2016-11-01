#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcRandomTimerTool
struct NcRandomTimerTool_t5028;
// System.Object
struct Object_t;

// System.Void NcRandomTimerTool::.ctor()
 void NcRandomTimerTool__ctor_m35954 (NcRandomTimerTool_t5028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcRandomTimerTool::UpdateRandomTimer(System.Boolean)
 bool NcRandomTimerTool_UpdateRandomTimer_m35955 (NcRandomTimerTool_t5028 * __this, bool ___bReset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcRandomTimerTool::UpdateRandomTimer()
 bool NcRandomTimerTool_UpdateRandomTimer_m35956 (NcRandomTimerTool_t5028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::ResetUpdateTime()
 void NcRandomTimerTool_ResetUpdateTime_m35957 (NcRandomTimerTool_t5028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcRandomTimerTool::GetCallCount()
 int32_t NcRandomTimerTool_GetCallCount_m35958 (NcRandomTimerTool_t5028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NcRandomTimerTool::GetArgObject()
 Object_t * NcRandomTimerTool_GetArgObject_m35959 (NcRandomTimerTool_t5028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcRandomTimerTool::GetElapsedRate()
 float NcRandomTimerTool_GetElapsedRate_m35960 (NcRandomTimerTool_t5028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single)
 void NcRandomTimerTool_SetTimer_m35961 (NcRandomTimerTool_t5028 * __this, float ___fStartTime, float ___fRandomTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single)
 void NcRandomTimerTool_SetTimer_m35962 (NcRandomTimerTool_t5028 * __this, float ___fStartTime, float ___fRandomTime, float ___fMinIntervalTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single,System.Int32)
 void NcRandomTimerTool_SetTimer_m35963 (NcRandomTimerTool_t5028 * __this, float ___fStartTime, float ___fRandomTime, float ___fMinIntervalTime, int32_t ___nRepeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Object)
 void NcRandomTimerTool_SetTimer_m35964 (NcRandomTimerTool_t5028 * __this, float ___fStartTime, float ___fRandomTime, Object_t * ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single,System.Object)
 void NcRandomTimerTool_SetTimer_m35965 (NcRandomTimerTool_t5028 * __this, float ___fStartTime, float ___fRandomTime, float ___fMinIntervalTime, Object_t * ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single,System.Int32,System.Object)
 void NcRandomTimerTool_SetTimer_m35966 (NcRandomTimerTool_t5028 * __this, float ___fStartTime, float ___fRandomTime, float ___fMinIntervalTime, int32_t ___nRepeatCount, Object_t * ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single)
 void NcRandomTimerTool_SetRelTimer_m35967 (NcRandomTimerTool_t5028 * __this, float ___fStartRelTime, float ___fRandomTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single)
 void NcRandomTimerTool_SetRelTimer_m35968 (NcRandomTimerTool_t5028 * __this, float ___fStartRelTime, float ___fRandomTime, float ___fMinIntervalTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single,System.Int32)
 void NcRandomTimerTool_SetRelTimer_m35969 (NcRandomTimerTool_t5028 * __this, float ___fStartRelTime, float ___fRandomTime, float ___fMinIntervalTime, int32_t ___nRepeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Object)
 void NcRandomTimerTool_SetRelTimer_m35970 (NcRandomTimerTool_t5028 * __this, float ___fStartRelTime, float ___fRandomTime, Object_t * ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single,System.Object)
 void NcRandomTimerTool_SetRelTimer_m35971 (NcRandomTimerTool_t5028 * __this, float ___fStartRelTime, float ___fRandomTime, float ___fMinIntervalTime, Object_t * ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single,System.Int32,System.Object)
 void NcRandomTimerTool_SetRelTimer_m35972 (NcRandomTimerTool_t5028 * __this, float ___fStartRelTime, float ___fRandomTime, float ___fMinIntervalTime, int32_t ___nRepeatCount, Object_t * ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
