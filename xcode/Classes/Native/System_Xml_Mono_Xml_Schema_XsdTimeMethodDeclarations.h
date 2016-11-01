#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdTime
struct XsdTime_t6741;
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
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdTime::.ctor()
 void XsdTime__ctor_m46279 (XsdTime_t6741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdTime::.cctor()
 void XsdTime__cctor_m46280 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdTime::get_AllowedFacets()
 int32_t XsdTime_get_AllowedFacets_m46281 (XsdTime_t6741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdTime::get_TokenizedType()
 int32_t XsdTime_get_TokenizedType_m46282 (XsdTime_t6741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdTime::get_TypeCode()
 int32_t XsdTime_get_TypeCode_m46283 (XsdTime_t6741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdTime::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 Object_t * XsdTime_ParseValue_m46284 (XsdTime_t6741 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdTime::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 ValueType_t987 * XsdTime_ParseValueType_m46285 (XsdTime_t6741 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdTime::Compare(System.Object,System.Object)
 int32_t XsdTime_Compare_m46286 (XsdTime_t6741 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
