#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t6765;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t6760;
// System.Xml.Schema.XmlSchemaContent
#include "System_Xml_System_Xml_Schema_XmlSchemaContent.h"
// System.Xml.Schema.XmlSchemaComplexContentExtension
struct XmlSchemaComplexContentExtension_t6775  : public XmlSchemaContent_t6772
{
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentExtension::any
	XmlSchemaAnyAttribute_t6765 * ___any;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentExtension::attributes
	XmlSchemaObjectCollection_t6755 * ___attributes;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::baseTypeName
	XmlQualifiedName_t6656 * ___baseTypeName;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentExtension::particle
	XmlSchemaParticle_t6760 * ___particle;
};
