#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Schema.XmlSchemaParticle
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657  : public XmlSchemaParticle_t6760
{
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::block
	int32_t ___block;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::constraints
	XmlSchemaObjectCollection_t6755 * ___constraints;
	// System.String System.Xml.Schema.XmlSchemaElement::defaultValue
	String_t* ___defaultValue;
	// System.Object System.Xml.Schema.XmlSchemaElement::elementType
	Object_t * ___elementType;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::elementSchemaType
	XmlSchemaType_t6687 * ___elementSchemaType;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::final
	int32_t ___final;
	// System.String System.Xml.Schema.XmlSchemaElement::fixedValue
	String_t* ___fixedValue;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaElement::form
	int32_t ___form;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isAbstract
	bool ___isAbstract;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isNillable
	bool ___isNillable;
	// System.String System.Xml.Schema.XmlSchemaElement::name
	String_t* ___name;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::refName
	XmlQualifiedName_t6656 * ___refName;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::schemaType
	XmlSchemaType_t6687 * ___schemaType;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::schemaTypeName
	XmlQualifiedName_t6656 * ___schemaTypeName;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::substitutionGroup
	XmlQualifiedName_t6656 * ___substitutionGroup;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaElement::schema
	XmlSchema_t6691 * ___schema;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::parentIsSchema
	bool ___parentIsSchema;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::qName
	XmlQualifiedName_t6656 * ___qName;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::blockResolved
	int32_t ___blockResolved;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::finalResolved
	int32_t ___finalResolved;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::referencedElement
	XmlSchemaElement_t6657 * ___referencedElement;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaElement::substitutingElements
	ArrayList_t5157 * ___substitutingElements;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::substitutionGroupElement
	XmlSchemaElement_t6657 * ___substitutionGroupElement;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::actualIsAbstract
	bool ___actualIsAbstract;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::actualIsNillable
	bool ___actualIsNillable;
	// System.String System.Xml.Schema.XmlSchemaElement::validatedDefaultValue
	String_t* ___validatedDefaultValue;
	// System.String System.Xml.Schema.XmlSchemaElement::validatedFixedValue
	String_t* ___validatedFixedValue;
};
