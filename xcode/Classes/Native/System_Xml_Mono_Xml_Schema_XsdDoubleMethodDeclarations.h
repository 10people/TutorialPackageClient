#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdDouble
struct XsdDouble_t6728;
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
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdDouble::.ctor()
 void XsdDouble__ctor_m46206 (XsdDouble_t6728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDouble::get_AllowedFacets()
 int32_t XsdDouble_get_AllowedFacets_m46207 (XsdDouble_t6728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDouble::get_TypeCode()
 int32_t XsdDouble_get_TypeCode_m46208 (XsdDouble_t6728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDouble::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 Object_t * XsdDouble_ParseValue_m46209 (XsdDouble_t6728 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDouble::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 ValueType_t987 * XsdDouble_ParseValueType_m46210 (XsdDouble_t6728 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDouble::Compare(System.Object,System.Object)
 int32_t XsdDouble_Compare_m46211 (XsdDouble_t6728 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
