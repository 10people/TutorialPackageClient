#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t6643;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t6642;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t6655  : public XmlSchemaAnnotated_t6764
{
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaIdentityConstraint::fields
	XmlSchemaObjectCollection_t6755 * ___fields;
	// System.String System.Xml.Schema.XmlSchemaIdentityConstraint::name
	String_t* ___name;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaIdentityConstraint::qName
	XmlQualifiedName_t6656 * ___qName;
	// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaIdentityConstraint::selector
	XmlSchemaXPath_t6643 * ___selector;
	// Mono.Xml.Schema.XsdIdentitySelector System.Xml.Schema.XmlSchemaIdentityConstraint::compiledSelector
	XsdIdentitySelector_t6642 * ___compiledSelector;
};
