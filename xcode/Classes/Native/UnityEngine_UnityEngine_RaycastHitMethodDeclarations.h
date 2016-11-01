#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t11;
// UnityEngine.Collider
struct Collider_t62;
// UnityEngine.Rigidbody
struct Rigidbody_t1004;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
 Vector3_t121  RaycastHit_get_point_m4474 (RaycastHit_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
 Vector3_t121  RaycastHit_get_normal_m4516 (RaycastHit_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
 float RaycastHit_get_distance_m43722 (RaycastHit_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
 Collider_t62 * RaycastHit_get_collider_m4094 (RaycastHit_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
 Rigidbody_t1004 * RaycastHit_get_rigidbody_m51732 (RaycastHit_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
