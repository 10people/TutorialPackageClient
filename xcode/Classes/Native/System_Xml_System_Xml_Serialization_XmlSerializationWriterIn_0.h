#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t6867;
// System.Xml.Serialization.XmlSerializationWriter
#include "System_Xml_System_Xml_Serialization_XmlSerializationWriter.h"
// System.Xml.Serialization.SerializationFormat
#include "System_Xml_System_Xml_Serialization_SerializationFormat.h"
// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t6900  : public XmlSerializationWriter_t6899
{
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializationWriterInterpreter::_typeMap
	XmlMapping_t6867 * ____typeMap;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlSerializationWriterInterpreter::_format
	int32_t ____format;
};
