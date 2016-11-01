#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t6689;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t6688;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
 void XmlSchemaType__ctor_m47035 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaType::get_Name()
 String_t* XmlSchemaType_get_Name_m47036 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Name(System.String)
 void XmlSchemaType_set_Name_m47037 (XmlSchemaType_t6687 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_Final()
 int32_t XmlSchemaType_get_Final_m47038 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
 void XmlSchemaType_set_Final_m47039 (XmlSchemaType_t6687 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
 XmlQualifiedName_t6656 * XmlSchemaType_get_QualifiedName_m47040 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_FinalResolved()
 int32_t XmlSchemaType_get_FinalResolved_m47041 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaType::get_BaseSchemaType()
 Object_t * XmlSchemaType_get_BaseSchemaType_m47042 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::get_BaseXmlSchemaType()
 XmlSchemaType_t6687 * XmlSchemaType_get_BaseXmlSchemaType_m47043 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_DerivedBy()
 int32_t XmlSchemaType_get_DerivedBy_m47044 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::get_Datatype()
 XmlSchemaDatatype_t6689 * XmlSchemaType_get_Datatype_m47045 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::get_IsMixed()
 bool XmlSchemaType_get_IsMixed_m47046 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
 XmlSchemaSimpleType_t6688 * XmlSchemaType_GetBuiltInSimpleType_m47047 (Object_t * __this/* static, unused */, XmlQualifiedName_t6656 * ___qualifiedName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode)
 XmlSchemaSimpleType_t6688 * XmlSchemaType_GetBuiltInSimpleType_m47048 (Object_t * __this/* static, unused */, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::ValidateRecursionCheck()
 bool XmlSchemaType_ValidateRecursionCheck_m47049 (XmlSchemaType_t6687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
