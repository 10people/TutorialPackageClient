#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t78;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"

// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_position_m52613 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_position_m52614 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
 Vector3_t121  Transform_get_position_m4467 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
 void Transform_set_position_m4495 (Transform_t78 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localPosition_m52615 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localPosition_m52616 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
 Vector3_t121  Transform_get_localPosition_m39037 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
 void Transform_set_localPosition_m4529 (Transform_t78 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
 Vector3_t121  Transform_get_eulerAngles_m4482 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
 void Transform_set_eulerAngles_m6567 (Transform_t78 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localEulerAngles_m52617 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localEulerAngles_m52618 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
 Vector3_t121  Transform_get_localEulerAngles_m4461 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
 void Transform_set_localEulerAngles_m4464 (Transform_t78 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
 Vector3_t121  Transform_get_right_m4485 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
 Vector3_t121  Transform_get_up_m4487 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
 Vector3_t121  Transform_get_forward_m4494 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
 void Transform_set_forward_m40886 (Transform_t78 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_rotation_m52619 (Transform_t78 * __this, Quaternion_t120 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_rotation_m52620 (Transform_t78 * __this, Quaternion_t120 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
 Quaternion_t120  Transform_get_rotation_m4458 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
 void Transform_set_rotation_m4466 (Transform_t78 * __this, Quaternion_t120  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_localRotation_m52621 (Transform_t78 * __this, Quaternion_t120 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_localRotation_m52622 (Transform_t78 * __this, Quaternion_t120 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
 Quaternion_t120  Transform_get_localRotation_m39467 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
 void Transform_set_localRotation_m4531 (Transform_t78 * __this, Quaternion_t120  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localScale_m52623 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localScale_m52624 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
 Vector3_t121  Transform_get_localScale_m4527 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
 void Transform_set_localScale_m4528 (Transform_t78 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
 Transform_t78 * Transform_get_parent_m39078 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
 void Transform_set_parent_m4260 (Transform_t78 * __this, Transform_t78 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
 Transform_t78 * Transform_get_parentInternal_m52625 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
 void Transform_set_parentInternal_m52626 (Transform_t78 * __this, Transform_t78 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
 void Transform_SetParent_m43917 (Transform_t78 * __this, Transform_t78 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
 void Transform_SetParent_m52627 (Transform_t78 * __this, Transform_t78 * ___parent, bool ___worldPositionStays, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_worldToLocalMatrix_m52628 (Transform_t78 * __this, Matrix4x4_t941 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
 Matrix4x4_t941  Transform_get_worldToLocalMatrix_m42086 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_localToWorldMatrix_m52629 (Transform_t78 * __this, Matrix4x4_t941 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
 Matrix4x4_t941  Transform_get_localToWorldMatrix_m41799 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
 void Transform_Translate_m41758 (Transform_t78 * __this, Vector3_t121  ___translation, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
 void Transform_Rotate_m39227 (Transform_t78 * __this, Vector3_t121  ___eulerAngles, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
 void Transform_Rotate_m39513 (Transform_t78 * __this, Vector3_t121  ___eulerAngles, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
 void Transform_Rotate_m41473 (Transform_t78 * __this, float ___xAngle, float ___yAngle, float ___zAngle, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
 void Transform_RotateAroundInternal_m52630 (Transform_t78 * __this, Vector3_t121  ___axis, float ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
 void Transform_INTERNAL_CALL_RotateAroundInternal_m52631 (Object_t * __this/* static, unused */, Transform_t78 * ___self, Vector3_t121 * ___axis, float ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
 void Transform_Rotate_m41713 (Transform_t78 * __this, Vector3_t121  ___axis, float ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
 void Transform_Rotate_m41472 (Transform_t78 * __this, Vector3_t121  ___axis, float ___angle, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 void Transform_RotateAround_m39337 (Transform_t78 * __this, Vector3_t121  ___point, Vector3_t121  ___axis, float ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
 void Transform_LookAt_m41471 (Transform_t78 * __this, Transform_t78 * ___target, Vector3_t121  ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
 void Transform_LookAt_m39226 (Transform_t78 * __this, Vector3_t121  ___worldPosition, Vector3_t121  ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
 void Transform_LookAt_m4475 (Transform_t78 * __this, Vector3_t121  ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
 void Transform_INTERNAL_CALL_LookAt_m52632 (Object_t * __this/* static, unused */, Transform_t78 * ___self, Vector3_t121 * ___worldPosition, Vector3_t121 * ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
 Vector3_t121  Transform_TransformDirection_m40865 (Transform_t78 * __this, Vector3_t121  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t121  Transform_INTERNAL_CALL_TransformDirection_m52633 (Object_t * __this/* static, unused */, Transform_t78 * ___self, Vector3_t121 * ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
 Vector3_t121  Transform_InverseTransformDirection_m41986 (Transform_t78 * __this, Vector3_t121  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t121  Transform_INTERNAL_CALL_InverseTransformDirection_m52634 (Object_t * __this/* static, unused */, Transform_t78 * ___self, Vector3_t121 * ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
 Vector3_t121  Transform_TransformPoint_m4499 (Transform_t78 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t121  Transform_INTERNAL_CALL_TransformPoint_m52635 (Object_t * __this/* static, unused */, Transform_t78 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
 Vector3_t121  Transform_TransformPoint_m42146 (Transform_t78 * __this, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
 Vector3_t121  Transform_InverseTransformPoint_m4498 (Transform_t78 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t121  Transform_INTERNAL_CALL_InverseTransformPoint_m52636 (Object_t * __this/* static, unused */, Transform_t78 * ___self, Vector3_t121 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
 int32_t Transform_get_childCount_m38970 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::DetachChildren()
 void Transform_DetachChildren_m38972 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
 void Transform_SetAsFirstSibling_m43918 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
 Transform_t78 * Transform_Find_m39725 (Transform_t78 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_lossyScale_m52637 (Transform_t78 * __this, Vector3_t121 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
 Vector3_t121  Transform_get_lossyScale_m39029 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
 bool Transform_IsChildOf_m52638 (Transform_t78 * __this, Transform_t78 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::get_hasChanged()
 bool Transform_get_hasChanged_m42152 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
 void Transform_set_hasChanged_m42153 (Transform_t78 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
 Transform_t78 * Transform_FindChild_m39075 (Transform_t78 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
 Object_t * Transform_GetEnumerator_m38949 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
 Transform_t78 * Transform_GetChild_m38971 (Transform_t78 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::GetChildCount()
 int32_t Transform_GetChildCount_m41028 (Transform_t78 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
