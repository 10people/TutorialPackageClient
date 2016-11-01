#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t6765;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t6692;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
 void XmlSchemaAnyAttribute__ctor_m46427 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
 String_t* XmlSchemaAnyAttribute_get_Namespace_m46428 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
 bool XmlSchemaAnyAttribute_get_HasValueAny_m46429 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
 bool XmlSchemaAnyAttribute_get_HasValueLocal_m46430 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
 bool XmlSchemaAnyAttribute_get_HasValueOther_m46431 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
 bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m46432 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
 StringCollection_t6692 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m46433 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
 int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m46434 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
 String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m46435 (XmlSchemaAnyAttribute_t6765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaAnyAttribute_Compile_m46436 (XmlSchemaAnyAttribute_t6765 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaAnyAttribute_Validate_m46437 (XmlSchemaAnyAttribute_t6765 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaAnyAttribute_ValidateWildcardSubset_m46438 (XmlSchemaAnyAttribute_t6765 * __this, XmlSchemaAnyAttribute_t6765 * ___other, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
 bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m46439 (XmlSchemaAnyAttribute_t6765 * __this, String_t* ___ns, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaAnyAttribute_t6765 * XmlSchemaAnyAttribute_Read_m46440 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
