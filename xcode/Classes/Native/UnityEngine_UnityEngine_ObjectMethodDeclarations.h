#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t2160;
// System.Type
struct Type_t;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Object::.ctor()
 void Object__ctor_m52591 (Object_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
 bool Object_Equals_m4096 (Object_t982 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
 int32_t Object_GetHashCode_m4097 (Object_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
 bool Object_CompareBaseObjects_m52592 (Object_t * __this/* static, unused */, Object_t982 * ___lhs, Object_t982 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjectsInternal(UnityEngine.Object,UnityEngine.Object)
 bool Object_CompareBaseObjectsInternal_m52593 (Object_t * __this/* static, unused */, Object_t982 * ___lhs, Object_t982 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
 int32_t Object_GetInstanceID_m41729 (Object_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
 Object_t982 * Object_Internal_CloneSingle_m52594 (Object_t * __this/* static, unused */, Object_t982 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t982 * Object_Internal_InstantiateSingle_m52595 (Object_t * __this/* static, unused */, Object_t982 * ___data, Vector3_t121  ___pos, Quaternion_t120  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
 Object_t982 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m52596 (Object_t * __this/* static, unused */, Object_t982 * ___data, Vector3_t121 * ___pos, Quaternion_t120 * ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
 Object_t982 * Object_Instantiate_m41376 (Object_t * __this/* static, unused */, Object_t982 * ___original, Vector3_t121  ___position, Quaternion_t120  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
 Object_t982 * Object_Instantiate_m4257 (Object_t * __this/* static, unused */, Object_t982 * ___original, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
 void Object_CheckNullArgument_m52597 (Object_t * __this/* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
 void Object_Destroy_m42009 (Object_t * __this/* static, unused */, Object_t982 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
 void Object_Destroy_m4256 (Object_t * __this/* static, unused */, Object_t982 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
 void Object_DestroyImmediate_m52598 (Object_t * __this/* static, unused */, Object_t982 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
 void Object_DestroyImmediate_m38651 (Object_t * __this/* static, unused */, Object_t982 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
 ObjectU5BU5D_t2160* Object_FindObjectsOfType_m42116 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
 Object_t982 * Object_FindObjectOfType_m6589 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
 String_t* Object_get_name_m4187 (Object_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
 void Object_set_name_m4258 (Object_t982 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
 void Object_DontDestroyOnLoad_m4262 (Object_t * __this/* static, unused */, Object_t982 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
 int32_t Object_get_hideFlags_m52599 (Object_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
 void Object_set_hideFlags_m6556 (Object_t982 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
 void Object_DestroyObject_m52600 (Object_t * __this/* static, unused */, Object_t982 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
 void Object_DestroyObject_m41470 (Object_t * __this/* static, unused */, Object_t982 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
 String_t* Object_ToString_m4098 (Object_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
 bool Object_op_Implicit_m4087 (Object_t * __this/* static, unused */, Object_t982 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Equality_m4263 (Object_t * __this/* static, unused */, Object_t982 * ___x, Object_t982 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Inequality_m4092 (Object_t * __this/* static, unused */, Object_t982 * ___x, Object_t982 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t982_marshal(const Object_t982& unmarshaled, Object_t982_marshaled& marshaled);
void Object_t982_marshal_back(const Object_t982_marshaled& marshaled, Object_t982& unmarshaled);
void Object_t982_marshal_cleanup(Object_t982_marshaled& marshaled);
