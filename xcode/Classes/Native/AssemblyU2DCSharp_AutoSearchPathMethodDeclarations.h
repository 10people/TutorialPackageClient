#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoSearchPath
struct AutoSearchPath_t4536;
// System.Collections.Generic.List`1<AutoSearchPoint>
struct List_1_t4539;
// System.String
struct String_t;
// Games.Events.GameEvent
struct GameEvent_t2137;
// AutoSearchPoint
struct AutoSearchPoint_t4537;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void AutoSearchPath::.ctor()
 void AutoSearchPath__ctor_m32579 (AutoSearchPath_t4536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<AutoSearchPoint> AutoSearchPath::get_AutoSearchPosCache()
 List_1_t4539 * AutoSearchPath_get_AutoSearchPosCache_m32580 (AutoSearchPath_t4536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AutoSearchPath::get_AutoSearchTargetName()
 String_t* AutoSearchPath_get_AutoSearchTargetName_m32581 (AutoSearchPath_t4536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPath::set_AutoSearchTargetName(System.String)
 void AutoSearchPath_set_AutoSearchTargetName_m32582 (AutoSearchPath_t4536 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Events.GameEvent AutoSearchPath::get_FinishCallBackEvent()
 GameEvent_t2137 * AutoSearchPath_get_FinishCallBackEvent_m32583 (AutoSearchPath_t4536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPath::set_FinishCallBackEvent(Games.Events.GameEvent)
 void AutoSearchPath_set_FinishCallBackEvent_m32584 (AutoSearchPath_t4536 * __this, GameEvent_t2137 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPath::AddPathPoint(AutoSearchPoint)
 void AutoSearchPath_AddPathPoint_m32585 (AutoSearchPath_t4536 * __this, AutoSearchPoint_t4537 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPath::ResetPath()
 void AutoSearchPath_ResetPath_m32586 (AutoSearchPath_t4536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoSearchPoint AutoSearchPath::GetPathPosition(System.Int32)
 AutoSearchPoint_t4537 * AutoSearchPath_GetPathPosition_m32587 (AutoSearchPath_t4536 * __this, int32_t ___sceneId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoSearchPath::IsFinish(UnityEngine.Vector3)
 bool AutoSearchPath_IsFinish_m32588 (AutoSearchPath_t4536 * __this, Vector3_t121  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoSearchPath::IsReachPoint(UnityEngine.Vector3)
 bool AutoSearchPath_IsReachPoint_m32589 (AutoSearchPath_t4536 * __this, Vector3_t121  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoSearchPoint AutoSearchPath::GetNext()
 AutoSearchPoint_t4537 * AutoSearchPath_GetNext_m32590 (AutoSearchPath_t4536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
