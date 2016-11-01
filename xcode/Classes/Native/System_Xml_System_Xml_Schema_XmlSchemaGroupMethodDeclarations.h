#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t6788;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t6759;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;

// System.Void System.Xml.Schema.XmlSchemaGroup::.ctor()
 void XmlSchemaGroup__ctor_m46664 (XmlSchemaGroup_t6788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaGroup::get_Name()
 String_t* XmlSchemaGroup_get_Name_m46665 (XmlSchemaGroup_t6788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::get_Particle()
 XmlSchemaGroupBase_t6759 * XmlSchemaGroup_get_Particle_m46666 (XmlSchemaGroup_t6788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::set_Particle(System.Xml.Schema.XmlSchemaGroupBase)
 void XmlSchemaGroup_set_Particle_m46667 (XmlSchemaGroup_t6788 * __this, XmlSchemaGroupBase_t6759 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::get_QualifiedName()
 XmlQualifiedName_t6656 * XmlSchemaGroup_get_QualifiedName_m46668 (XmlSchemaGroup_t6788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroup::get_IsCircularDefinition()
 bool XmlSchemaGroup_get_IsCircularDefinition_m46669 (XmlSchemaGroup_t6788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaGroup_SetParent_m46670 (XmlSchemaGroup_t6788 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaGroup_Compile_m46671 (XmlSchemaGroup_t6788 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaGroup_Validate_m46672 (XmlSchemaGroup_t6788 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaGroup_t6788 * XmlSchemaGroup_Read_m46673 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
