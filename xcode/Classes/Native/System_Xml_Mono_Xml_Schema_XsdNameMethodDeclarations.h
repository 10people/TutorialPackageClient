#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdName
struct XsdName_t6705;
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
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdName::.ctor()
 void XsdName__ctor_m46095 (XsdName_t6705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdName::get_TokenizedType()
 int32_t XsdName_get_TokenizedType_m46096 (XsdName_t6705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdName::get_TypeCode()
 int32_t XsdName_get_TypeCode_m46097 (XsdName_t6705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdName::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 Object_t * XsdName_ParseValue_m46098 (XsdName_t6705 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdName::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 ValueType_t987 * XsdName_ParseValueType_m46099 (XsdName_t6705 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
