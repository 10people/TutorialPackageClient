#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdUnsignedLong
struct XsdUnsignedLong_t6720;
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
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdUnsignedLong::.ctor()
 void XsdUnsignedLong__ctor_m46168 (XsdUnsignedLong_t6720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdUnsignedLong::get_TypeCode()
 int32_t XsdUnsignedLong_get_TypeCode_m46169 (XsdUnsignedLong_t6720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdUnsignedLong::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 Object_t * XsdUnsignedLong_ParseValue_m46170 (XsdUnsignedLong_t6720 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdUnsignedLong::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 ValueType_t987 * XsdUnsignedLong_ParseValueType_m46171 (XsdUnsignedLong_t6720 * __this, String_t* ___s, XmlNameTable_t6650 * ___nameTable, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdUnsignedLong::Compare(System.Object,System.Object)
 int32_t XsdUnsignedLong_Compare_m46172 (XsdUnsignedLong_t6720 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
