#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t5909;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Exception
struct Exception_t972;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t6760;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Xml.Schema.XmlSchemaObject::.ctor()
 void XmlSchemaObject__ctor_m46757 (XmlSchemaObject_t6662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LineNumber()
 int32_t XmlSchemaObject_get_LineNumber_m46758 (XmlSchemaObject_t6662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LineNumber(System.Int32)
 void XmlSchemaObject_set_LineNumber_m46759 (XmlSchemaObject_t6662 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LinePosition()
 int32_t XmlSchemaObject_get_LinePosition_m46760 (XmlSchemaObject_t6662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LinePosition(System.Int32)
 void XmlSchemaObject_set_LinePosition_m46761 (XmlSchemaObject_t6662 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaObject::get_SourceUri()
 String_t* XmlSchemaObject_get_SourceUri_m46762 (XmlSchemaObject_t6662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_SourceUri(System.String)
 void XmlSchemaObject_set_SourceUri_m46763 (XmlSchemaObject_t6662 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::get_Parent()
 XmlSchemaObject_t6662 * XmlSchemaObject_get_Parent_m46764 (XmlSchemaObject_t6662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_Parent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaObject_set_Parent_m46765 (XmlSchemaObject_t6662 * __this, XmlSchemaObject_t6662 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaObject::get_AncestorSchema()
 XmlSchema_t6691 * XmlSchemaObject_get_AncestorSchema_m46766 (XmlSchemaObject_t6662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaObject_SetParent_m46767 (XmlSchemaObject_t6662 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::get_Namespaces()
 XmlSerializerNamespaces_t5909 * XmlSchemaObject_get_Namespaces_m46768 (XmlSchemaObject_t6662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String)
 void XmlSchemaObject_error_m46769 (XmlSchemaObject_t6662 * __this, ValidationEventHandler_t6682 * ___handle, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String)
 void XmlSchemaObject_warn_m46770 (XmlSchemaObject_t6662 * __this, ValidationEventHandler_t6682 * ___handle, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception)
 void XmlSchemaObject_error_m46771 (Object_t * __this/* static, unused */, ValidationEventHandler_t6682 * ___handle, String_t* ___message, Exception_t972 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
 void XmlSchemaObject_error_m46772 (Object_t * __this/* static, unused */, ValidationEventHandler_t6682 * ___handle, String_t* ___message, Exception_t972 * ___innerException, XmlSchemaObject_t6662 * ___xsobj, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
 void XmlSchemaObject_warn_m46773 (Object_t * __this/* static, unused */, ValidationEventHandler_t6682 * ___handle, String_t* ___message, Exception_t972 * ___innerException, XmlSchemaObject_t6662 * ___xsobj, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaObject_Compile_m46774 (XmlSchemaObject_t6662 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaObject_Validate_m46775 (XmlSchemaObject_t6662 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObject::IsValidated(System.Guid)
 bool XmlSchemaObject_IsValidated_m46776 (XmlSchemaObject_t6662 * __this, Guid_t6777  ___validationId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
 void XmlSchemaObject_CopyInfo_m46777 (XmlSchemaObject_t6662 * __this, XmlSchemaParticle_t6760 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
