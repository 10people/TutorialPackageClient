#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoMove
struct AutoMove_t4468;
// GC_MOVE
struct GC_MOVE_t2952;
// GC_STOP
struct GC_STOP_t2953;
// AutoMovePos
#include "AssemblyU2DCSharp_AutoMovePos.h"

// System.Void AutoMove::.ctor()
 void AutoMove__ctor_m32540 (AutoMove_t4468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoMove::Awake()
 void AutoMove_Awake_m32541 (AutoMove_t4468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoMove::ResetAutoMove()
 void AutoMove_ResetAutoMove_m32542 (AutoMove_t4468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoMove::InsertAutoMovePoint(GC_MOVE)
 void AutoMove_InsertAutoMovePoint_m32543 (AutoMove_t4468 * __this, GC_MOVE_t2952 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoMove::IsRightPosSerial(System.Int32)
 bool AutoMove_IsRightPosSerial_m32544 (AutoMove_t4468 * __this, int32_t ___iPosSerial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoMove::BeginMove(AutoMovePos)
 void AutoMove_BeginMove_m32545 (AutoMove_t4468 * __this, AutoMovePos_t4533  ___dstPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoMove::StopMove()
 void AutoMove_StopMove_m32546 (AutoMove_t4468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoMove::InterruptMove(GC_STOP)
 void AutoMove_InterruptMove_m32547 (AutoMove_t4468 * __this, GC_STOP_t2953 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoMove::ForceStopMove()
 void AutoMove_ForceStopMove_m32548 (AutoMove_t4468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
