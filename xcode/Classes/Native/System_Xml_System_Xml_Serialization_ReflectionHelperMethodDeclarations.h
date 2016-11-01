#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ReflectionHelper
struct ReflectionHelper_t6834;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.Serialization.ReflectionHelper::.ctor()
 void ReflectionHelper__ctor_m47104 (ReflectionHelper_t6834 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::.cctor()
 void ReflectionHelper__cctor_m47105 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterSchemaType(System.Xml.Serialization.XmlTypeMapping,System.String,System.String)
 void ReflectionHelper_RegisterSchemaType_m47106 (ReflectionHelper_t6834 * __this, XmlTypeMapping_t6835 * ___map, String_t* ___xmlType, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredSchemaType(System.String,System.String)
 XmlTypeMapping_t6835 * ReflectionHelper_GetRegisteredSchemaType_m47107 (ReflectionHelper_t6834 * __this, String_t* ___xmlType, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterClrType(System.Xml.Serialization.XmlTypeMapping,System.Type,System.String)
 void ReflectionHelper_RegisterClrType_m47108 (ReflectionHelper_t6834 * __this, XmlTypeMapping_t6835 * ___map, Type_t * ___type, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredClrType(System.Type,System.String)
 XmlTypeMapping_t6835 * ReflectionHelper_GetRegisteredClrType_m47109 (ReflectionHelper_t6834 * __this, Type_t * ___type, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::CheckSerializableType(System.Type,System.Boolean)
 void ReflectionHelper_CheckSerializableType_m47110 (Object_t * __this/* static, unused */, Type_t * ___type, bool ___allowPrivateConstructors, MethodInfo* method) IL2CPP_METHOD_ATTR;
