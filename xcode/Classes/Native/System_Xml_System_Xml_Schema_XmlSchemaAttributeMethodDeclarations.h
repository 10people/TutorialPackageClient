#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t6676;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t6688;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"

// System.Void System.Xml.Schema.XmlSchemaAttribute::.ctor()
 void XmlSchemaAttribute__ctor_m46445 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAttribute::get_ParentIsSchema()
 bool XmlSchemaAttribute_get_ParentIsSchema_m46446 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_DefaultValue()
 String_t* XmlSchemaAttribute_get_DefaultValue_m46447 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_FixedValue()
 String_t* XmlSchemaAttribute_get_FixedValue_m46448 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::get_Form()
 int32_t XmlSchemaAttribute_get_Form_m46449 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_Name()
 String_t* XmlSchemaAttribute_get_Name_m46450 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_RefName()
 XmlQualifiedName_t6656 * XmlSchemaAttribute_get_RefName_m46451 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_SchemaTypeName()
 XmlQualifiedName_t6656 * XmlSchemaAttribute_get_SchemaTypeName_m46452 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::get_SchemaType()
 XmlSchemaSimpleType_t6688 * XmlSchemaAttribute_get_SchemaType_m46453 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::get_Use()
 int32_t XmlSchemaAttribute_get_Use_m46454 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_QualifiedName()
 XmlQualifiedName_t6656 * XmlSchemaAttribute_get_QualifiedName_m46455 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaAttribute::get_AttributeType()
 Object_t * XmlSchemaAttribute_get_AttributeType_m46456 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_ValidatedDefaultValue()
 String_t* XmlSchemaAttribute_get_ValidatedDefaultValue_m46457 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_ValidatedFixedValue()
 String_t* XmlSchemaAttribute_get_ValidatedFixedValue_m46458 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::get_ValidatedUse()
 int32_t XmlSchemaAttribute_get_ValidatedUse_m46459 (XmlSchemaAttribute_t6676 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaAttribute_SetParent_m46460 (XmlSchemaAttribute_t6676 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaAttribute_Compile_m46461 (XmlSchemaAttribute_t6676 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::CompileCommon(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 void XmlSchemaAttribute_CompileCommon_m46462 (XmlSchemaAttribute_t6676 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___refIsNotPresent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaAttribute_Validate_m46463 (XmlSchemaAttribute_t6676 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaAttribute_t6676 * XmlSchemaAttribute_Read_m46464 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
