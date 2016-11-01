#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t5749;
struct TrackedReference_t5749_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
 bool TrackedReference_Equals_m51636 (TrackedReference_t5749 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
 int32_t TrackedReference_GetHashCode_m51637 (TrackedReference_t5749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m40751 (Object_t * __this/* static, unused */, TrackedReference_t5749 * ___x, TrackedReference_t5749 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Inequality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Inequality_m40753 (Object_t * __this/* static, unused */, TrackedReference_t5749 * ___x, TrackedReference_t5749 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Implicit(UnityEngine.TrackedReference)
 bool TrackedReference_op_Implicit_m51638 (Object_t * __this/* static, unused */, TrackedReference_t5749 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t5749_marshal(const TrackedReference_t5749& unmarshaled, TrackedReference_t5749_marshaled& marshaled);
void TrackedReference_t5749_marshal_back(const TrackedReference_t5749_marshaled& marshaled, TrackedReference_t5749& unmarshaled);
void TrackedReference_t5749_marshal_cleanup(TrackedReference_t5749_marshaled& marshaled);
