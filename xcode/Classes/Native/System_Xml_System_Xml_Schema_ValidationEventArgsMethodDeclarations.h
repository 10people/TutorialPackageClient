#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t6752;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t6751;
// System.String
struct String_t;
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.String,System.Xml.Schema.XmlSeverityType)
 void ValidationEventArgs__ctor_m46338 (ValidationEventArgs_t6752 * __this, XmlSchemaException_t6751 * ___ex, String_t* ___message, int32_t ___severity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
 XmlSchemaException_t6751 * ValidationEventArgs_get_Exception_m46339 (ValidationEventArgs_t6752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
 int32_t ValidationEventArgs_get_Severity_m46340 (ValidationEventArgs_t6752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
