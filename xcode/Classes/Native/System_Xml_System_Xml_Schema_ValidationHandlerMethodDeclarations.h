#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.ValidationHandler
struct ValidationHandler_t6753;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Exception
struct Exception_t972;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void System.Xml.Schema.ValidationHandler::RaiseValidationEvent(System.Xml.Schema.ValidationEventHandler,System.Exception,System.String,System.Xml.Schema.XmlSchemaObject,System.Object,System.String,System.Xml.Schema.XmlSeverityType)
 void ValidationHandler_RaiseValidationEvent_m46341 (Object_t * __this/* static, unused */, ValidationEventHandler_t6682 * ___handle, Exception_t972 * ___innerException, String_t* ___message, XmlSchemaObject_t6662 * ___xsobj, Object_t * ___sender, String_t* ___sourceUri, int32_t ___severity, MethodInfo* method) IL2CPP_METHOD_ATTR;
