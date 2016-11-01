#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer
struct GestureRecognizer_t25;
// System.String
struct String_t;
// System.Type
struct Type_t;
// FingerGestures/Finger
struct Finger_t8;
// FingerGestures/IFingerList
struct IFingerList_t30;
// GestureResetMode
#include "AssemblyU2DCSharpU2Dfirstpass_GestureResetMode.h"

// System.Void GestureRecognizer::.ctor()
 void GestureRecognizer__ctor_m55 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::.cctor()
 void GestureRecognizer__cctor_m56 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GestureRecognizer::get_RequiredFingerCount()
 int32_t GestureRecognizer_get_RequiredFingerCount_m57 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::set_RequiredFingerCount(System.Int32)
 void GestureRecognizer_set_RequiredFingerCount_m58 (GestureRecognizer_t25 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer::get_SupportFingerClustering()
 bool GestureRecognizer_get_SupportFingerClustering_m59 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureResetMode GestureRecognizer::GetDefaultResetMode()
 int32_t GestureRecognizer_GetDefaultResetMode_m60 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GestureRecognizer::GetDefaultEventMessageName()
// System.Type GestureRecognizer::GetGestureType()
// System.Void GestureRecognizer::Awake()
 void GestureRecognizer_Awake_m61 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::OnEnable()
 void GestureRecognizer_OnEnable_m62 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::OnDisable()
 void GestureRecognizer_OnDisable_m63 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::Acquire(FingerGestures/Finger)
 void GestureRecognizer_Acquire_m64 (GestureRecognizer_t25 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer::Release(FingerGestures/Finger)
 bool GestureRecognizer_Release_m65 (GestureRecognizer_t25 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer::Start()
 void GestureRecognizer_Start_m66 (GestureRecognizer_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer::Young(FingerGestures/IFingerList)
 bool GestureRecognizer_Young_m67 (GestureRecognizer_t25 * __this, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
