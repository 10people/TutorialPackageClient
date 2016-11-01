#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector4
struct Vector4_t942;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Vector4__ctor_m6569 (Vector4_t942 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
 float Vector4_get_Item_m6586 (Vector4_t942 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
 void Vector4_set_Item_m41504 (Vector4_t942 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::Set(System.Single,System.Single,System.Single,System.Single)
 void Vector4_Set_m39314 (Vector4_t942 * __this, float ___new_x, float ___new_y, float ___new_z, float ___new_w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
 Vector4_t942  Vector4_Lerp_m41832 (Object_t * __this/* static, unused */, Vector4_t942  ___from, Vector4_t942  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
 int32_t Vector4_GetHashCode_m52467 (Vector4_t942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
 bool Vector4_Equals_m52468 (Vector4_t942 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::Normalize(UnityEngine.Vector4)
 Vector4_t942  Vector4_Normalize_m52469 (Object_t * __this/* static, unused */, Vector4_t942  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
 Vector4_t942  Vector4_get_normalized_m41833 (Vector4_t942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
 String_t* Vector4_ToString_m52470 (Vector4_t942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
 float Vector4_Dot_m6582 (Object_t * __this/* static, unused */, Vector4_t942  ___a, Vector4_t942  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
 float Vector4_Magnitude_m52471 (Object_t * __this/* static, unused */, Vector4_t942  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
 float Vector4_SqrMagnitude_m52472 (Object_t * __this/* static, unused */, Vector4_t942  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
 float Vector4_get_sqrMagnitude_m43843 (Vector4_t942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
 Vector4_t942  Vector4_get_zero_m41496 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
 Vector4_t942  Vector4_op_Subtraction_m41501 (Object_t * __this/* static, unused */, Vector4_t942  ___a, Vector4_t942  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_UnaryNegation(UnityEngine.Vector4)
 Vector4_t942  Vector4_op_UnaryNegation_m41834 (Object_t * __this/* static, unused */, Vector4_t942  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
 Vector4_t942  Vector4_op_Multiply_m6583 (Object_t * __this/* static, unused */, Vector4_t942  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
 Vector4_t942  Vector4_op_Division_m43856 (Object_t * __this/* static, unused */, Vector4_t942  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
 bool Vector4_op_Equality_m52473 (Object_t * __this/* static, unused */, Vector4_t942  ___lhs, Vector4_t942  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
 bool Vector4_op_Inequality_m42252 (Object_t * __this/* static, unused */, Vector4_t942  ___lhs, Vector4_t942  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
 Vector4_t942  Vector4_op_Implicit_m41497 (Object_t * __this/* static, unused */, Vector3_t121  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
 Vector3_t121  Vector4_op_Implicit_m42088 (Object_t * __this/* static, unused */, Vector4_t942  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
 Vector4_t942  Vector4_op_Implicit_m42138 (Object_t * __this/* static, unused */, Vector2_t12  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
