#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t5909;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Object
#include "mscorlib_System_Object.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662  : public Object_t
{
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNumber
	int32_t ___lineNumber;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePosition
	int32_t ___linePosition;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t5909 * ___namespaces;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t5157 * ___unhandledAttributeList;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isCompiled
	bool ___isCompiled;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::errorCount
	int32_t ___errorCount;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t6777  ___CompilationId;
	// System.Guid System.Xml.Schema.XmlSchemaObject::ValidationId
	Guid_t6777  ___ValidationId;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefineChild
	bool ___isRedefineChild;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefinedComponent
	bool ___isRedefinedComponent;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::redefinedObject
	XmlSchemaObject_t6662 * ___redefinedObject;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_t6662 * ___parent;
};
