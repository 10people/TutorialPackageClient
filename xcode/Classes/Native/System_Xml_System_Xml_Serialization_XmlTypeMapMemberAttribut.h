#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.Xml.Serialization.XmlTypeMapMember
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMember.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t6911  : public XmlTypeMapMember_t6875
{
	// System.String System.Xml.Serialization.XmlTypeMapMemberAttribute::_attributeName
	String_t* ____attributeName;
	// System.String System.Xml.Serialization.XmlTypeMapMemberAttribute::_namespace
	String_t* ____namespace;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlTypeMapMemberAttribute::_form
	int32_t ____form;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapMemberAttribute::_mappedType
	XmlTypeMapping_t6835 * ____mappedType;
};
