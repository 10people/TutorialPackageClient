#pragma once
#include <stdint.h>
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t6655;
// System.Xml.Schema.XmlSchemaIdentityConstraint
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityConstraint.h"
// System.Xml.Schema.XmlSchemaKeyref
struct XmlSchemaKeyref_t6795  : public XmlSchemaIdentityConstraint_t6655
{
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaKeyref::refer
	XmlQualifiedName_t6656 * ___refer;
	// System.Xml.Schema.XmlSchemaIdentityConstraint System.Xml.Schema.XmlSchemaKeyref::target
	XmlSchemaIdentityConstraint_t6655 * ___target;
};
