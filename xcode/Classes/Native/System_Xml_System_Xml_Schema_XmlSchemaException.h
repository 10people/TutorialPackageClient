#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t6751  : public SystemException_t6783
{
	// System.Boolean System.Xml.Schema.XmlSchemaException::hasLineInfo
	bool ___hasLineInfo;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceObj
	XmlSchemaObject_t6662 * ___sourceObj;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri;
};
