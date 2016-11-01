#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Xml.XmlException
struct XmlException_t6940  : public SystemException_t6783
{
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri;
	// System.String System.Xml.XmlException::res
	String_t* ___res;
	// System.String[] System.Xml.XmlException::messages
	StringU5BU5D_t333* ___messages;
};
