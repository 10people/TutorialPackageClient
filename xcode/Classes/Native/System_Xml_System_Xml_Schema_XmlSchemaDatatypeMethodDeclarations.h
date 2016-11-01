#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t6689;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t6651;
// System.ValueType
struct ValueType_t987;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// Mono.Xml.Schema.XsdWhitespaceFacet
#include "System_Xml_Mono_Xml_Schema_XsdWhitespaceFacet.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
 void XmlSchemaDatatype__ctor_m46584 (XmlSchemaDatatype_t6689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
 void XmlSchemaDatatype__cctor_m46585 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdWhitespaceFacet System.Xml.Schema.XmlSchemaDatatype::get_Whitespace()
 int32_t XmlSchemaDatatype_get_Whitespace_m46586 (XmlSchemaDatatype_t6689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode()
 int32_t XmlSchemaDatatype_get_TypeCode_m46587 (XmlSchemaDatatype_t6689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType System.Xml.Schema.XmlSchemaDatatype::get_TokenizedType()
// System.Object System.Xml.Schema.XmlSchemaDatatype::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
// System.ValueType System.Xml.Schema.XmlSchemaDatatype::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 ValueType_t987 * XmlSchemaDatatype_ParseValueType_m46588 (XmlSchemaDatatype_t6689 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String)
 String_t* XmlSchemaDatatype_Normalize_m46589 (XmlSchemaDatatype_t6689 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String,Mono.Xml.Schema.XsdWhitespaceFacet)
 String_t* XmlSchemaDatatype_Normalize_m46590 (XmlSchemaDatatype_t6689 * __this, String_t* ___s, int32_t ___whitespaceFacet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
 XmlSchemaDatatype_t6689 * XmlSchemaDatatype_FromName_m46591 (Object_t * __this/* static, unused */, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
 XmlSchemaDatatype_t6689 * XmlSchemaDatatype_FromName_m46592 (Object_t * __this/* static, unused */, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
