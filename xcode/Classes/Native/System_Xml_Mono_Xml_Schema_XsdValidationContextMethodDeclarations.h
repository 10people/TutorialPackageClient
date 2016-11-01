#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t6659;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdValidationContext::.ctor()
 void XsdValidationContext__ctor_m46031 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_XsiType()
 Object_t * XsdValidationContext_get_XsiType_m46032 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::set_XsiType(System.Object)
 void XsdValidationContext_set_XsiType_m46033 (XsdValidationContext_t6659 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidationContext::get_Element()
 XmlSchemaElement_t6657 * XsdValidationContext_get_Element_m46034 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PushCurrentElement(System.Xml.Schema.XmlSchemaElement)
 void XsdValidationContext_PushCurrentElement_m46035 (XsdValidationContext_t6659 * __this, XmlSchemaElement_t6657 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PopCurrentElement()
 void XsdValidationContext_PopCurrentElement_m46036 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_ActualType()
 Object_t * XsdValidationContext_get_ActualType_m46037 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::get_IsInvalid()
 bool XsdValidationContext_get_IsInvalid_m46038 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::Clone()
 Object_t * XsdValidationContext_Clone_m46039 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::EvaluateStartElement(System.String,System.String)
 void XsdValidationContext_EvaluateStartElement_m46040 (XsdValidationContext_t6659 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::EvaluateEndElement()
 bool XsdValidationContext_EvaluateEndElement_m46041 (XsdValidationContext_t6659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
