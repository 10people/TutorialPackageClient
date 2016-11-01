#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaImport
struct XmlSchemaImport_t6790;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t6761;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;

// System.Void System.Xml.Schema.XmlSchemaImport::.ctor()
 void XmlSchemaImport__ctor_m46704 (XmlSchemaImport_t6790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaImport::get_Namespace()
 String_t* XmlSchemaImport_get_Namespace_m46705 (XmlSchemaImport_t6790 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaImport::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
 void XmlSchemaImport_set_Annotation_m46706 (XmlSchemaImport_t6790 * __this, XmlSchemaAnnotation_t6761 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaImport System.Xml.Schema.XmlSchemaImport::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaImport_t6790 * XmlSchemaImport_Read_m46707 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
