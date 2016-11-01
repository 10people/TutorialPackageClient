#pragma once
#include <stdint.h>
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t6754;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t6771;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Object
#include "mscorlib_System_Object.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t6680  : public Object_t
{
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t6650 * ___nameTable;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t6678 * ___xmlResolver;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t5157 * ___schemas;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::attributes
	XmlSchemaObjectTable_t6754 * ___attributes;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::elements
	XmlSchemaObjectTable_t6754 * ___elements;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::types
	XmlSchemaObjectTable_t6754 * ___types;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::idCollection
	Hashtable_t4372 * ___idCollection;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::namedIdentities
	XmlSchemaObjectTable_t6754 * ___namedIdentities;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t6771 * ___settings;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::isCompiled
	bool ___isCompiled;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t6777  ___CompilationId;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::ValidationEventHandler
	ValidationEventHandler_t6682 * ___ValidationEventHandler;
};
