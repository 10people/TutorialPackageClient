#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t6897;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
 void ObjectIDGenerator__ctor_m49133 (ObjectIDGenerator_t6897 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
 void ObjectIDGenerator__cctor_m55657 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
 int64_t ObjectIDGenerator_GetId_m49134 (ObjectIDGenerator_t6897 * __this, Object_t * ___obj, bool* ___firstTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::HasId(System.Object,System.Boolean&)
 int64_t ObjectIDGenerator_HasId_m49135 (ObjectIDGenerator_t6897 * __this, Object_t * ___obj, bool* ___firstTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
