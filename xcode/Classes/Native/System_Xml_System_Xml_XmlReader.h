#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t7021;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t7022;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlReader
struct XmlReader_t6677  : public Object_t
{
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t1097 * ___readStringBuffer;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t7021 * ___binary;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t7022 * ___settings;
};
