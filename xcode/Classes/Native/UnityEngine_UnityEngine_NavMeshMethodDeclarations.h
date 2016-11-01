#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.NavMesh
struct NavMesh_t7530;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.NavMeshHit
#include "UnityEngine_UnityEngine_NavMeshHit.h"

// System.Boolean UnityEngine.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.NavMeshHit&,System.Single,System.Int32)
 bool NavMesh_SamplePosition_m40672 (Object_t * __this/* static, unused */, Vector3_t121  ___sourcePosition, NavMeshHit_t5737 * ___hit, float ___maxDistance, int32_t ___allowedMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMesh::INTERNAL_CALL_SamplePosition(UnityEngine.Vector3&,UnityEngine.NavMeshHit&,System.Single,System.Int32)
 bool NavMesh_INTERNAL_CALL_SamplePosition_m51748 (Object_t * __this/* static, unused */, Vector3_t121 * ___sourcePosition, NavMeshHit_t5737 * ___hit, float ___maxDistance, int32_t ___allowedMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
