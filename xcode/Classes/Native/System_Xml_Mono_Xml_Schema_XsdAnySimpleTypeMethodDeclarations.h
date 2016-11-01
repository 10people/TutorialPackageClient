#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t6647;
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
// System.String[]
struct StringU5BU5D_t333;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t6696;
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdAnySimpleType::.ctor()
 void XsdAnySimpleType__ctor_m46055 (XsdAnySimpleType_t6647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdAnySimpleType::.cctor()
 void XsdAnySimpleType__cctor_m46056 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdAnySimpleType::get_Instance()
 XsdAnySimpleType_t6647 * XsdAnySimpleType_get_Instance_m46057 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnySimpleType::get_TypeCode()
 int32_t XsdAnySimpleType_get_TypeCode_m46058 (XsdAnySimpleType_t6647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnySimpleType::get_TokenizedType()
 int32_t XsdAnySimpleType_get_TokenizedType_m46059 (XsdAnySimpleType_t6647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnySimpleType::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 Object_t * XsdAnySimpleType_ParseValue_m46060 (XsdAnySimpleType_t6647 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnySimpleType::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 ValueType_t987 * XsdAnySimpleType_ParseValueType_m46061 (XsdAnySimpleType_t6647 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdAnySimpleType::ParseListValue(System.String,System.Xml.XmlNameTable)
 StringU5BU5D_t333* XsdAnySimpleType_ParseListValue_m46062 (XsdAnySimpleType_t6647 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnySimpleType::AllowsFacet(System.Xml.Schema.XmlSchemaFacet)
 bool XsdAnySimpleType_AllowsFacet_m46063 (XsdAnySimpleType_t6647 * __this, XmlSchemaFacet_t6696 * ___xsf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdAnySimpleType::Compare(System.Object,System.Object)
 int32_t XsdAnySimpleType_Compare_m46064 (XsdAnySimpleType_t6647 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdAnySimpleType::Length(System.String)
 int32_t XsdAnySimpleType_Length_m46065 (XsdAnySimpleType_t6647 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdAnySimpleType::get_AllowedFacets()
 int32_t XsdAnySimpleType_get_AllowedFacets_m46066 (XsdAnySimpleType_t6647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
