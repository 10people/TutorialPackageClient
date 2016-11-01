#pragma once
#include <stdint.h>
// System.Xml.XmlElement
struct XmlElement_t5531;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t6863  : public EventArgs_t5207
{
	// System.Xml.XmlElement System.Xml.Serialization.XmlElementEventArgs::attr
	XmlElement_t5531 * ___attr;
	// System.Int32 System.Xml.Serialization.XmlElementEventArgs::lineNumber
	int32_t ___lineNumber;
	// System.Int32 System.Xml.Serialization.XmlElementEventArgs::linePosition
	int32_t ___linePosition;
	// System.Object System.Xml.Serialization.XmlElementEventArgs::obj
	Object_t * ___obj;
	// System.String System.Xml.Serialization.XmlElementEventArgs::expectedElements
	String_t* ___expectedElements;
};
