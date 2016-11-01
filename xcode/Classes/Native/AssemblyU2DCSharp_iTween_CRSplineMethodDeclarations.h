#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween/CRSpline
struct CRSpline_t5150;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
 void CRSpline__ctor_m36611 (CRSpline_t5150 * __this, Vector3U5BU5D_t1262* ___pts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
 Vector3_t121  CRSpline_Interp_m36612 (CRSpline_t5150 * __this, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
