#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t6819;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Xml.Schema.XmlSchemaSimpleType[]
struct XmlSchemaSimpleTypeU5BU5D_t6820;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleTypeContent.h"
// System.Xml.Schema.XmlSchemaSimpleTypeUnion
struct XmlSchemaSimpleTypeUnion_t6821  : public XmlSchemaSimpleTypeContent_t6814
{
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeUnion::baseTypes
	XmlSchemaObjectCollection_t6755 * ___baseTypes;
	// System.Xml.XmlQualifiedName[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::memberTypes
	XmlQualifiedNameU5BU5D_t6819* ___memberTypes;
	// System.Object[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::validatedTypes
	ObjectU5BU5D_t142* ___validatedTypes;
	// System.Xml.Schema.XmlSchemaSimpleType[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::validatedSchemaTypes
	XmlSchemaSimpleTypeU5BU5D_t6820* ___validatedSchemaTypes;
};
