#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t6693;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t6671;

// System.Void Mono.Xml.Schema.XsdWildcard::.ctor(System.Xml.Schema.XmlSchemaObject)
 void XsdWildcard__ctor_m46048 (XsdWildcard_t6693 * __this, XmlSchemaObject_t6662 * ___wildcard, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Reset()
 void XsdWildcard_Reset_m46049 (XsdWildcard_t6693 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Compile(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XsdWildcard_Compile_m46050 (XsdWildcard_t6693 * __this, String_t* ___nss, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 bool XsdWildcard_ExamineAttributeWildcardIntersection_m46051 (XsdWildcard_t6693 * __this, XmlSchemaAny_t6671 * ___other, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XsdWildcard_ValidateWildcardAllowsNamespaceName_m46052 (XsdWildcard_t6693 * __this, String_t* ___ns, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XsdWildcard_ValidateWildcardSubset_m46053 (XsdWildcard_t6693 * __this, XsdWildcard_t6693 * ___other, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XsdWildcard_ValidateWildcardSubset_m46054 (XsdWildcard_t6693 * __this, XsdWildcard_t6693 * ___other, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
