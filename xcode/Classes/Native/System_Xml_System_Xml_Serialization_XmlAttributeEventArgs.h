#pragma once
#include <stdint.h>
// System.Xml.XmlAttribute
struct XmlAttribute_t6763;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t6852  : public EventArgs_t5207
{
	// System.Xml.XmlAttribute System.Xml.Serialization.XmlAttributeEventArgs::attr
	XmlAttribute_t6763 * ___attr;
	// System.Int32 System.Xml.Serialization.XmlAttributeEventArgs::lineNumber
	int32_t ___lineNumber;
	// System.Int32 System.Xml.Serialization.XmlAttributeEventArgs::linePosition
	int32_t ___linePosition;
	// System.Object System.Xml.Serialization.XmlAttributeEventArgs::obj
	Object_t * ___obj;
	// System.String System.Xml.Serialization.XmlAttributeEventArgs::expectedAttributes
	String_t* ___expectedAttributes;
};
