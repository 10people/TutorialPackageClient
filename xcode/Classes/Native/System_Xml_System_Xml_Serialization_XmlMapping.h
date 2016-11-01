#pragma once
#include <stdint.h>
// System.Xml.Serialization.ObjectMap
struct ObjectMap_t6866;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Serialization.SerializationSource
struct SerializationSource_t6837;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.SerializationFormat
#include "System_Xml_System_Xml_Serialization_SerializationFormat.h"
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t6867  : public Object_t
{
	// System.Xml.Serialization.ObjectMap System.Xml.Serialization.XmlMapping::map
	ObjectMap_t6866 * ___map;
	// System.Collections.ArrayList System.Xml.Serialization.XmlMapping::relatedMaps
	ArrayList_t5157 * ___relatedMaps;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlMapping::format
	int32_t ___format;
	// System.Xml.Serialization.SerializationSource System.Xml.Serialization.XmlMapping::source
	SerializationSource_t6837 * ___source;
	// System.String System.Xml.Serialization.XmlMapping::_elementName
	String_t* ____elementName;
	// System.String System.Xml.Serialization.XmlMapping::_namespace
	String_t* ____namespace;
	// System.String System.Xml.Serialization.XmlMapping::key
	String_t* ___key;
};
