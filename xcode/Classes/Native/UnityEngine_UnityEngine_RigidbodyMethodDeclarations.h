#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t1004;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"

// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_set_velocity_m51718 (Rigidbody_t1004 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
 void Rigidbody_set_velocity_m4514 (Rigidbody_t1004 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
 bool Rigidbody_get_useGravity_m4510 (Rigidbody_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
 void Rigidbody_set_useGravity_m4512 (Rigidbody_t1004 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
 bool Rigidbody_get_isKinematic_m4511 (Rigidbody_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
 void Rigidbody_set_isKinematic_m4513 (Rigidbody_t1004 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
 void Rigidbody_set_freezeRotation_m4484 (Rigidbody_t1004 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
 void Rigidbody_AddForce_m41457 (Rigidbody_t1004 * __this, Vector3_t121  ___force, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
 void Rigidbody_INTERNAL_CALL_AddForce_m51719 (Object_t * __this/* static, unused */, Rigidbody_t1004 * ___self, Vector3_t121 * ___force, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_get_position_m51720 (Rigidbody_t1004 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
 Vector3_t121  Rigidbody_get_position_m4521 (Rigidbody_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
 void Rigidbody_INTERNAL_get_rotation_m51721 (Rigidbody_t1004 * __this, Quaternion_t120 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
 Quaternion_t120  Rigidbody_get_rotation_m41957 (Rigidbody_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
 void Rigidbody_MovePosition_m4522 (Rigidbody_t1004 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_CALL_MovePosition_m51722 (Object_t * __this/* static, unused */, Rigidbody_t1004 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
 void Rigidbody_MoveRotation_m41763 (Rigidbody_t1004 * __this, Quaternion_t120  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
 void Rigidbody_INTERNAL_CALL_MoveRotation_m51723 (Object_t * __this/* static, unused */, Rigidbody_t1004 * ___self, Quaternion_t120 * ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
