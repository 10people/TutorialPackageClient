#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.StringArrayValueType
struct StringArrayValueType_t6750;
struct StringArrayValueType_t6750_marshaled;
// System.String[]
struct StringU5BU5D_t333;
// System.Object
struct Object_t;
// System.Xml.Schema.StringArrayValueType
#include "System_Xml_System_Xml_Schema_StringArrayValueType.h"

// System.Void System.Xml.Schema.StringArrayValueType::.ctor(System.String[])
 void StringArrayValueType__ctor_m46333 (StringArrayValueType_t6750 * __this, StringU5BU5D_t333* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.StringArrayValueType::get_Value()
 StringU5BU5D_t333* StringArrayValueType_get_Value_m46334 (StringArrayValueType_t6750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::Equals(System.Object)
 bool StringArrayValueType_Equals_m46335 (StringArrayValueType_t6750 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringArrayValueType::GetHashCode()
 int32_t StringArrayValueType_GetHashCode_m46336 (StringArrayValueType_t6750 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::op_Equality(System.Xml.Schema.StringArrayValueType,System.Xml.Schema.StringArrayValueType)
 bool StringArrayValueType_op_Equality_m46337 (Object_t * __this/* static, unused */, StringArrayValueType_t6750  ___v1, StringArrayValueType_t6750  ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
void StringArrayValueType_t6750_marshal(const StringArrayValueType_t6750& unmarshaled, StringArrayValueType_t6750_marshaled& marshaled);
void StringArrayValueType_t6750_marshal_back(const StringArrayValueType_t6750_marshaled& marshaled, StringArrayValueType_t6750& unmarshaled);
void StringArrayValueType_t6750_marshal_cleanup(StringArrayValueType_t6750_marshaled& marshaled);
