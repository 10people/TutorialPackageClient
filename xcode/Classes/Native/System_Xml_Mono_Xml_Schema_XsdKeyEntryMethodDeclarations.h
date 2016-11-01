#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t6646;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t6653;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t6649;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Object
struct Object_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t6651;

// System.Void Mono.Xml.Schema.XsdKeyEntry::.ctor(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
 void XsdKeyEntry__ctor_m45877 (XsdKeyEntry_t6646 * __this, XsdKeyTable_t6653 * ___keyseq, int32_t ___depth, Object_t * ___li, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::get_KeyFound()
 bool XsdKeyEntry_get_KeyFound_m45878 (XsdKeyEntry_t6646 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::Init(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
 void XsdKeyEntry_Init_m45879 (XsdKeyEntry_t6646 * __this, XsdKeyTable_t6653 * ___keyseq, int32_t ___depth, Object_t * ___li, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::CompareIdentity(Mono.Xml.Schema.XsdKeyEntry)
 bool XsdKeyEntry_CompareIdentity_m45880 (XsdKeyEntry_t6646 * __this, XsdKeyEntry_t6646 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::ProcessMatch(System.Boolean,System.Collections.ArrayList,System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object,System.Boolean,System.Collections.ArrayList)
 void XsdKeyEntry_ProcessMatch_m45881 (XsdKeyEntry_t6646 * __this, bool ___isAttribute, ArrayList_t5157 * ___qnameStack, Object_t * ___sender, XmlNameTable_t6650 * ___nameTable, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___li, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Object_t * ___attrValue, bool ___isXsiNil, ArrayList_t5157 * ___currentKeyFieldConsumers, MethodInfo* method) IL2CPP_METHOD_ATTR;
