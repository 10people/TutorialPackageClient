#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t6862;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"

// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String)
 void XmlElementAttribute__ctor_m47215 (XmlElementAttribute_t6862 * __this, String_t* ___elementName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String,System.Type)
 void XmlElementAttribute__ctor_m47216 (XmlElementAttribute_t6862 * __this, String_t* ___elementName, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_DataType()
 String_t* XmlElementAttribute_get_DataType_m47217 (XmlElementAttribute_t6862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_ElementName()
 String_t* XmlElementAttribute_get_ElementName_m47218 (XmlElementAttribute_t6862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlElementAttribute::get_Form()
 int32_t XmlElementAttribute_get_Form_m47219 (XmlElementAttribute_t6862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_Namespace()
 String_t* XmlElementAttribute_get_Namespace_m47220 (XmlElementAttribute_t6862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlElementAttribute::get_IsNullable()
 bool XmlElementAttribute_get_IsNullable_m47221 (XmlElementAttribute_t6862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.XmlElementAttribute::get_Type()
 Type_t * XmlElementAttribute_get_Type_m47222 (XmlElementAttribute_t6862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::set_Type(System.Type)
 void XmlElementAttribute_set_Type_m47223 (XmlElementAttribute_t6862 * __this, Type_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::AddKeyHash(System.Text.StringBuilder)
 void XmlElementAttribute_AddKeyHash_m47224 (XmlElementAttribute_t6862 * __this, StringBuilder_t1097 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
