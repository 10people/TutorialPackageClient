#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlCustomFormatter
struct XmlCustomFormatter_t6860;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Int64[]
struct Int64U5BU5D_t6861;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Object
struct Object_t;

// System.String System.Xml.Serialization.XmlCustomFormatter::FromEnum(System.Int64,System.String[],System.Int64[],System.String)
 String_t* XmlCustomFormatter_FromEnum_m47210 (Object_t * __this/* static, unused */, int64_t ___value, StringU5BU5D_t333* ___values, Int64U5BU5D_t6861* ___ids, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlName(System.String)
 String_t* XmlCustomFormatter_FromXmlName_m47211 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlNCName(System.String)
 String_t* XmlCustomFormatter_FromXmlNCName_m47212 (Object_t * __this/* static, unused */, String_t* ___ncName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::ToXmlString(System.Xml.Serialization.TypeData,System.Object)
 String_t* XmlCustomFormatter_ToXmlString_m47213 (Object_t * __this/* static, unused */, TypeData_t6841 * ___type, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlCustomFormatter::FromXmlString(System.Xml.Serialization.TypeData,System.String)
 Object_t * XmlCustomFormatter_FromXmlString_m47214 (Object_t * __this/* static, unused */, TypeData_t6841 * ___type, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
