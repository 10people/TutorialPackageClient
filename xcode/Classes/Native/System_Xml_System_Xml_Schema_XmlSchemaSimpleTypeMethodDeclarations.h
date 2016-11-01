#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t6688;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t6647;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
struct XmlSchemaSimpleTypeContent_t6814;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleType::.ctor()
 void XmlSchemaSimpleType__ctor_m46972 (XmlSchemaSimpleType_t6688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::.cctor()
 void XmlSchemaSimpleType__cctor_m46973 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String)
 XmlSchemaSimpleType_t6688 * XmlSchemaSimpleType_BuildSchemaType_m46974 (Object_t * __this/* static, unused */, String_t* ___name, String_t* ___baseName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String,System.Boolean,System.Boolean)
 XmlSchemaSimpleType_t6688 * XmlSchemaSimpleType_BuildSchemaType_m46975 (Object_t * __this/* static, unused */, String_t* ___name, String_t* ___baseName, bool ___xdt, bool ___baseXdt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleType::get_AnySimpleType()
 XsdAnySimpleType_t6647 * XmlSchemaSimpleType_get_AnySimpleType_m46976 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeContent System.Xml.Schema.XmlSchemaSimpleType::get_Content()
 XmlSchemaSimpleTypeContent_t6814 * XmlSchemaSimpleType_get_Content_m46977 (XmlSchemaSimpleType_t6688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::set_Content(System.Xml.Schema.XmlSchemaSimpleTypeContent)
 void XmlSchemaSimpleType_set_Content_m46978 (XmlSchemaSimpleType_t6688 * __this, XmlSchemaSimpleTypeContent_t6814 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaSimpleType::get_Variety()
 int32_t XmlSchemaSimpleType_get_Variety_m46979 (XmlSchemaSimpleType_t6688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaSimpleType_SetParent_m46980 (XmlSchemaSimpleType_t6688 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaSimpleType_Compile_m46981 (XmlSchemaSimpleType_t6688 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::CollectBaseType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaSimpleType_CollectBaseType_m46982 (XmlSchemaSimpleType_t6688 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaSimpleType_Validate_m46983 (XmlSchemaSimpleType_t6688 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::ValidateDerivationValid(System.Object,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaSimpleType_ValidateDerivationValid_m46984 (XmlSchemaSimpleType_t6688 * __this, Object_t * ___baseType, XmlSchemaObjectCollection_t6755 * ___facets, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleType::ValidateTypeDerivationOK(System.Object,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaSimpleType_ValidateTypeDerivationOK_m46985 (XmlSchemaSimpleType_t6688 * __this, Object_t * ___baseType, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaSimpleType_t6688 * XmlSchemaSimpleType_Read_m46986 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
