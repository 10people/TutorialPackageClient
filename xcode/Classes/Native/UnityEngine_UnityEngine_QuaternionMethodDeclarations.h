#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t120;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Quaternion__ctor_m52406 (Quaternion_t120 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
 Quaternion_t120  Quaternion_get_identity_m4530 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Dot_m52407 (Object_t * __this/* static, unused */, Quaternion_t120  ___a, Quaternion_t120  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
 Quaternion_t120  Quaternion_AngleAxis_m4557 (Object_t * __this/* static, unused */, float ___angle, Vector3_t121  ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
 Quaternion_t120  Quaternion_INTERNAL_CALL_AngleAxis_m52408 (Object_t * __this/* static, unused */, float ___angle, Vector3_t121 * ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
 Quaternion_t120  Quaternion_LookRotation_m39223 (Object_t * __this/* static, unused */, Vector3_t121  ___forward, Vector3_t121  ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
 Quaternion_t120  Quaternion_LookRotation_m4469 (Object_t * __this/* static, unused */, Vector3_t121  ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
 Quaternion_t120  Quaternion_INTERNAL_CALL_LookRotation_m52409 (Object_t * __this/* static, unused */, Vector3_t121 * ___forward, Vector3_t121 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 Quaternion_t120  Quaternion_Slerp_m4465 (Object_t * __this/* static, unused */, Quaternion_t120  ___from, Quaternion_t120  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
 Quaternion_t120  Quaternion_INTERNAL_CALL_Slerp_m52410 (Object_t * __this/* static, unused */, Quaternion_t120 * ___from, Quaternion_t120 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
 Quaternion_t120  Quaternion_Inverse_m43982 (Object_t * __this/* static, unused */, Quaternion_t120  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
 Quaternion_t120  Quaternion_INTERNAL_CALL_Inverse_m52411 (Object_t * __this/* static, unused */, Quaternion_t120 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
 String_t* Quaternion_ToString_m52412 (Quaternion_t120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
 Vector3_t121  Quaternion_get_eulerAngles_m38973 (Quaternion_t120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
 Quaternion_t120  Quaternion_Euler_m4493 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
 Quaternion_t120  Quaternion_Euler_m39466 (Object_t * __this/* static, unused */, Vector3_t121  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
 Vector3_t121  Quaternion_Internal_ToEulerRad_m52413 (Object_t * __this/* static, unused */, Quaternion_t120  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
 Vector3_t121  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m52414 (Object_t * __this/* static, unused */, Quaternion_t120 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
 Quaternion_t120  Quaternion_Internal_FromEulerRad_m52415 (Object_t * __this/* static, unused */, Vector3_t121  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
 Quaternion_t120  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m52416 (Object_t * __this/* static, unused */, Vector3_t121 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
 int32_t Quaternion_GetHashCode_m52417 (Quaternion_t120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
 bool Quaternion_Equals_m52418 (Quaternion_t120 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
 Quaternion_t120  Quaternion_op_Multiply_m4558 (Object_t * __this/* static, unused */, Quaternion_t120  ___lhs, Quaternion_t120  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
 Vector3_t121  Quaternion_op_Multiply_m39224 (Object_t * __this/* static, unused */, Quaternion_t120  ___rotation, Vector3_t121  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
 bool Quaternion_op_Inequality_m41387 (Object_t * __this/* static, unused */, Quaternion_t120  ___lhs, Quaternion_t120  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
