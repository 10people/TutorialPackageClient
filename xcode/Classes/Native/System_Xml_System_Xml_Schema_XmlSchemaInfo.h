#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t6688;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t6676;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaValidity
#include "System_Xml_System_Xml_Schema_XmlSchemaValidity.h"
// System.Xml.Schema.XmlSchemaInfo
struct XmlSchemaInfo_t6792  : public Object_t
{
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isDefault
	bool ___isDefault;
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isNil
	bool ___isNil;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaInfo::memberType
	XmlSchemaSimpleType_t6688 * ___memberType;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaInfo::attr
	XmlSchemaAttribute_t6676 * ___attr;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaInfo::elem
	XmlSchemaElement_t6657 * ___elem;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaInfo::type
	XmlSchemaType_t6687 * ___type;
	// System.Xml.Schema.XmlSchemaValidity System.Xml.Schema.XmlSchemaInfo::validity
	int32_t ___validity;
};
