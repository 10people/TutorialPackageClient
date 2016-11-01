#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MUIBezierValue
struct MUIBezierValue_t5192;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MUIBezierValue::.ctor()
 void MUIBezierValue__ctor_m37096 (MUIBezierValue_t5192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezierValue::Awake()
 void MUIBezierValue_Awake_m37097 (MUIBezierValue_t5192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezierValue::Start()
 void MUIBezierValue_Start_m37098 (MUIBezierValue_t5192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezierValue::Update()
 void MUIBezierValue_Update_m37099 (MUIBezierValue_t5192 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MUIBezierValue::GetBezierValue(System.Single)
 Vector2_t12  MUIBezierValue_GetBezierValue_m37100 (MUIBezierValue_t5192 * __this, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MUIBezierValue::CalculateBezierPoint(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t12  MUIBezierValue_CalculateBezierPoint_m37101 (MUIBezierValue_t5192 * __this, float ___t, Vector2_t12  ___p0, Vector2_t12  ___p1, Vector2_t12  ___p2, Vector2_t12  ___p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MUIBezierValue::SymmetryPoint(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t12  MUIBezierValue_SymmetryPoint_m37102 (MUIBezierValue_t5192 * __this, Vector2_t12  ___curPoint, Vector2_t12  ___centerPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MUIBezierValue::RootScale(UnityEngine.Transform)
 Vector3_t121  MUIBezierValue_RootScale_m37103 (MUIBezierValue_t5192 * __this, Transform_t78 * ___trans, MethodInfo* method) IL2CPP_METHOD_ATTR;
