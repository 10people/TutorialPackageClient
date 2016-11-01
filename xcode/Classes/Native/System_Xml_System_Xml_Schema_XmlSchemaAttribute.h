#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t6688;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t6676;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t6676  : public XmlSchemaAnnotated_t6764
{
	// System.Object System.Xml.Schema.XmlSchemaAttribute::attributeType
	Object_t * ___attributeType;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::attributeSchemaType
	XmlSchemaSimpleType_t6688 * ___attributeSchemaType;
	// System.String System.Xml.Schema.XmlSchemaAttribute::defaultValue
	String_t* ___defaultValue;
	// System.String System.Xml.Schema.XmlSchemaAttribute::fixedValue
	String_t* ___fixedValue;
	// System.String System.Xml.Schema.XmlSchemaAttribute::validatedDefaultValue
	String_t* ___validatedDefaultValue;
	// System.String System.Xml.Schema.XmlSchemaAttribute::validatedFixedValue
	String_t* ___validatedFixedValue;
	// System.Object System.Xml.Schema.XmlSchemaAttribute::validatedFixedTypedValue
	Object_t * ___validatedFixedTypedValue;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::form
	int32_t ___form;
	// System.String System.Xml.Schema.XmlSchemaAttribute::name
	String_t* ___name;
	// System.String System.Xml.Schema.XmlSchemaAttribute::targetNamespace
	String_t* ___targetNamespace;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::qualifiedName
	XmlQualifiedName_t6656 * ___qualifiedName;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::refName
	XmlQualifiedName_t6656 * ___refName;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::schemaType
	XmlSchemaSimpleType_t6688 * ___schemaType;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::schemaTypeName
	XmlQualifiedName_t6656 * ___schemaTypeName;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::use
	int32_t ___use;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::validatedUse
	int32_t ___validatedUse;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaAttribute::referencedAttribute
	XmlSchemaAttribute_t6676 * ___referencedAttribute;
};
