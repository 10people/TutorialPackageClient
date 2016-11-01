#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MUIBezier
struct MUIBezier_t5190;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void MUIBezier::.ctor()
 void MUIBezier__ctor_m37083 (MUIBezier_t5190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezier::Start()
 void MUIBezier_Start_m37084 (MUIBezier_t5190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezier::Update()
 void MUIBezier_Update_m37085 (MUIBezier_t5190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezier::ResetToBeginning()
 void MUIBezier_ResetToBeginning_m37086 (MUIBezier_t5190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezier::PlayForward()
 void MUIBezier_PlayForward_m37087 (MUIBezier_t5190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUIBezier::PlayReverse()
 void MUIBezier_PlayReverse_m37088 (MUIBezier_t5190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MUIBezier::CalculateBezierPoint(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t12  MUIBezier_CalculateBezierPoint_m37089 (MUIBezier_t5190 * __this, float ___t, Vector2_t12  ___p0, Vector2_t12  ___p1, Vector2_t12  ___p2, Vector2_t12  ___p3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MUIBezier::SymmetryPoint(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t12  MUIBezier_SymmetryPoint_m37090 (MUIBezier_t5190 * __this, Vector2_t12  ___curPoint, Vector2_t12  ___centerPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
