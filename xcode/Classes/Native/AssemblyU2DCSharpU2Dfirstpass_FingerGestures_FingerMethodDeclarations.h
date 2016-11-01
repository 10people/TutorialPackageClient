#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerGestures/Finger
struct Finger_t8;
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t63;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t64;
// System.String
struct String_t;
// FingerGestures/FingerPhase
#include "AssemblyU2DCSharpU2Dfirstpass_FingerGestures_FingerPhase.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FingerGestures/Finger::.ctor(System.Int32)
 void Finger__ctor_m122 (Finger_t8 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FingerGestures/Finger::get_Index()
 int32_t Finger_get_Index_m123 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsDown()
 bool Finger_get_IsDown_m124 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/FingerPhase FingerGestures/Finger::get_Phase()
 int32_t Finger_get_Phase_m125 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/FingerPhase FingerGestures/Finger::get_PreviousPhase()
 int32_t Finger_get_PreviousPhase_m126 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_WasDown()
 bool Finger_get_WasDown_m127 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsMoving()
 bool Finger_get_IsMoving_m128 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_WasMoving()
 bool Finger_get_WasMoving_m129 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsStationary()
 bool Finger_get_IsStationary_m130 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_WasStationary()
 bool Finger_get_WasStationary_m131 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_Moved()
 bool Finger_get_Moved_m132 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/Finger::get_StarTime()
 float Finger_get_StarTime_m133 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_StartPosition()
 Vector2_t12  Finger_get_StartPosition_m134 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_Position()
 Vector2_t12  Finger_get_Position_m135 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_PreviousPosition()
 Vector2_t12  Finger_get_PreviousPosition_m136 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/Finger::get_DeltaPosition()
 Vector2_t12  Finger_get_DeltaPosition_m137 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/Finger::get_DistanceFromStart()
 float Finger_get_DistanceFromStart_m138 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/Finger::get_IsFiltered()
 bool Finger_get_IsFiltered_m139 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/Finger::get_TimeStationary()
 float Finger_get_TimeStationary_m140 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures/Finger::get_GestureRecognizers()
 List_1_t63 * Finger_get_GestureRecognizers_m141 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> FingerGestures/Finger::get_ExtendedProperties()
 Dictionary_2_t64 * Finger_get_ExtendedProperties_m142 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FingerGestures/Finger::ToString()
 String_t* Finger_ToString_m143 (Finger_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/Finger::Update(System.Boolean,UnityEngine.Vector2)
 void Finger_Update_m144 (Finger_t8 * __this, bool ___newDownState, Vector2_t12  ___newPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
