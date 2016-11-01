#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t6648;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t6646;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t6641;
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t6647;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t6649;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t6639;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t6651;

// System.Void Mono.Xml.Schema.XsdKeyEntryField::.ctor(Mono.Xml.Schema.XsdKeyEntry,Mono.Xml.Schema.XsdIdentityField)
 void XsdKeyEntryField__ctor_m45870 (XsdKeyEntryField_t6648 * __this, XsdKeyEntry_t6646 * ___entry, XsdIdentityField_t6641 * ___field, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::SetIdentityField(System.Object,System.Boolean,Mono.Xml.Schema.XsdAnySimpleType,System.Int32,System.Xml.IXmlLineInfo)
 bool XsdKeyEntryField_SetIdentityField_m45871 (XsdKeyEntryField_t6648 * __this, Object_t * ___identity, bool ___isXsiNil, XsdAnySimpleType_t6647 * ___type, int32_t ___depth, Object_t * ___li, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::Matches(System.Boolean,System.Object,System.Xml.XmlNameTable,System.Collections.ArrayList,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object)
 XsdIdentityPath_t6639 * XsdKeyEntryField_Matches_m45872 (XsdKeyEntryField_t6648 * __this, bool ___matchesAttr, Object_t * ___sender, XmlNameTable_t6650 * ___nameTable, ArrayList_t5157 * ___qnameStack, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___lineInfo, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Object_t * ___attrValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntryField::FillAttributeFieldValue(System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Object,System.Xml.IXmlLineInfo,System.Int32)
 void XsdKeyEntryField_FillAttributeFieldValue_m45873 (XsdKeyEntryField_t6648 * __this, Object_t * ___sender, XmlNameTable_t6650 * ___nameTable, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___identity, Object_t * ___lineInfo, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
