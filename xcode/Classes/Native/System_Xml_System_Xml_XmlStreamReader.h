#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t7002;
// System.Xml.XmlException
struct XmlException_t6940;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct XmlStreamReader_t7003  : public NonBlockingStreamReader_t7004
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t7002 * ___input;
};
struct XmlStreamReader_t7003_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t6940 * ___invalidDataException;
};
