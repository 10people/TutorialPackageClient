#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t6867;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Xml.Serialization.XmlSerializationReader
#include "System_Xml_System_Xml_Serialization_XmlSerializationReader.h"
// System.Xml.Serialization.SerializationFormat
#include "System_Xml_System_Xml_Serialization_SerializationFormat.h"
// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t6890  : public XmlSerializationReader_t6888
{
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializationReaderInterpreter::_typeMap
	XmlMapping_t6867 * ____typeMap;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlSerializationReaderInterpreter::_format
	int32_t ____format;
};
struct XmlSerializationReaderInterpreter_t6890_StaticFields{
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReaderInterpreter::AnyType
	XmlQualifiedName_t6656 * ___AnyType;
	// System.Object[] System.Xml.Serialization.XmlSerializationReaderInterpreter::empty_array
	ObjectU5BU5D_t142* ___empty_array;
};
