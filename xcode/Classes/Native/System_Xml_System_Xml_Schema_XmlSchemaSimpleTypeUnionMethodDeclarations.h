#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeUnion
struct XmlSchemaSimpleTypeUnion_t6821;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t6819;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::.ctor()
 void XmlSchemaSimpleTypeUnion__ctor_m47024 (XmlSchemaSimpleTypeUnion_t6821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_BaseTypes()
 XmlSchemaObjectCollection_t6755 * XmlSchemaSimpleTypeUnion_get_BaseTypes_m47025 (XmlSchemaSimpleTypeUnion_t6821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_MemberTypes()
 XmlQualifiedNameU5BU5D_t6819* XmlSchemaSimpleTypeUnion_get_MemberTypes_m47026 (XmlSchemaSimpleTypeUnion_t6821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_ValidatedTypes()
 ObjectU5BU5D_t142* XmlSchemaSimpleTypeUnion_get_ValidatedTypes_m47027 (XmlSchemaSimpleTypeUnion_t6821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaSimpleTypeUnion_SetParent_m47028 (XmlSchemaSimpleTypeUnion_t6821 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaSimpleTypeUnion_Compile_m47029 (XmlSchemaSimpleTypeUnion_t6821 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaSimpleTypeUnion_Validate_m47030 (XmlSchemaSimpleTypeUnion_t6821 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeUnion System.Xml.Schema.XmlSchemaSimpleTypeUnion::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaSimpleTypeUnion_t6821 * XmlSchemaSimpleTypeUnion_Read_m47031 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
