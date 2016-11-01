#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t62;
// UnityEngine.Rigidbody
struct Rigidbody_t1004;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Boolean UnityEngine.Collider::get_enabled()
 bool Collider_get_enabled_m41972 (Collider_t62 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
 void Collider_set_enabled_m39081 (Collider_t62 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
 Rigidbody_t1004 * Collider_get_attachedRigidbody_m51724 (Collider_t62 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
 void Collider_set_isTrigger_m42103 (Collider_t62 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
 void Collider_INTERNAL_get_bounds_m51725 (Collider_t62 * __this, Bounds_t1005 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
 Bounds_t1005  Collider_get_bounds_m4500 (Collider_t62 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
 bool Collider_Internal_Raycast_m51726 (Object_t * __this/* static, unused */, Collider_t62 * ___col, Ray_t974  ___ray, RaycastHit_t11 * ___hitInfo, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
 bool Collider_INTERNAL_CALL_Internal_Raycast_m51727 (Object_t * __this/* static, unused */, Collider_t62 * ___col, Ray_t974 * ___ray, RaycastHit_t11 * ___hitInfo, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
 bool Collider_Raycast_m4515 (Collider_t62 * __this, Ray_t974  ___ray, RaycastHit_t11 * ___hitInfo, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
