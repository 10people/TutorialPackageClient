#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t7525;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t5947;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Internal_Raycast_m51711 (Object_t * __this/* static, unused */, Vector3_t121  ___origin, Vector3_t121  ___direction, RaycastHit_t11 * ___hitInfo, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_INTERNAL_CALL_Internal_Raycast_m51712 (Object_t * __this/* static, unused */, Vector3_t121 * ___origin, Vector3_t121 * ___direction, RaycastHit_t11 * ___hitInfo, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Internal_CapsuleCast_m51713 (Object_t * __this/* static, unused */, Vector3_t121  ___point1, Vector3_t121  ___point2, float ___radius, Vector3_t121  ___direction, RaycastHit_t11 * ___hitInfo, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m51714 (Object_t * __this/* static, unused */, Vector3_t121 * ___point1, Vector3_t121 * ___point2, float ___radius, Vector3_t121 * ___direction, RaycastHit_t11 * ___hitInfo, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m40858 (Object_t * __this/* static, unused */, Vector3_t121  ___origin, Vector3_t121  ___direction, RaycastHit_t11 * ___hitInfo, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
 bool Physics_Raycast_m4473 (Object_t * __this/* static, unused */, Ray_t974  ___ray, RaycastHit_t11 * ___hitInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m4177 (Object_t * __this/* static, unused */, Ray_t974  ___ray, RaycastHit_t11 * ___hitInfo, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
 RaycastHitU5BU5D_t5947* Physics_RaycastAll_m42206 (Object_t * __this/* static, unused */, Ray_t974  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
 RaycastHitU5BU5D_t5947* Physics_RaycastAll_m51715 (Object_t * __this/* static, unused */, Vector3_t121  ___origin, Vector3_t121  ___direction, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
 RaycastHitU5BU5D_t5947* Physics_INTERNAL_CALL_RaycastAll_m51716 (Object_t * __this/* static, unused */, Vector3_t121 * ___origin, Vector3_t121 * ___direction, float ___distance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_SphereCast_m4176 (Object_t * __this/* static, unused */, Ray_t974  ___ray, float ___radius, RaycastHit_t11 * ___hitInfo, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
 bool Physics_CheckSphere_m41469 (Object_t * __this/* static, unused */, Vector3_t121  ___position, float ___radius, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckSphere(UnityEngine.Vector3&,System.Single,System.Int32)
 bool Physics_INTERNAL_CALL_CheckSphere_m51717 (Object_t * __this/* static, unused */, Vector3_t121 * ___position, float ___radius, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
