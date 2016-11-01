#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.StringValueType
struct StringValueType_t6748;
struct StringValueType_t6748_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.Schema.StringValueType
#include "System_Xml_System_Xml_Schema_StringValueType.h"

// System.Void System.Xml.Schema.StringValueType::.ctor(System.String)
 void StringValueType__ctor_m46322 (StringValueType_t6748 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.StringValueType::get_Value()
 String_t* StringValueType_get_Value_m46323 (StringValueType_t6748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::Equals(System.Object)
 bool StringValueType_Equals_m46324 (StringValueType_t6748 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringValueType::GetHashCode()
 int32_t StringValueType_GetHashCode_m46325 (StringValueType_t6748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::op_Equality(System.Xml.Schema.StringValueType,System.Xml.Schema.StringValueType)
 bool StringValueType_op_Equality_m46326 (Object_t * __this/* static, unused */, StringValueType_t6748  ___v1, StringValueType_t6748  ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
void StringValueType_t6748_marshal(const StringValueType_t6748& unmarshaled, StringValueType_t6748_marshaled& marshaled);
void StringValueType_t6748_marshal_back(const StringValueType_t6748_marshaled& marshaled, StringValueType_t6748& unmarshaled);
void StringValueType_t6748_marshal_cleanup(StringValueType_t6748_marshaled& marshaled);
