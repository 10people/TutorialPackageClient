#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t6867;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t6905;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t6906;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t6907;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t6908;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t6909;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t5907  : public Object_t
{
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t6867 * ___typeMapping;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t6905 * ___serializerData;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_t6906 * ___onUnknownAttribute;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_t6907 * ___onUnknownElement;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t6908 * ___onUnknownNode;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t6909 * ___onUnreferencedObject;
};
struct XmlSerializer_t5907_StaticFields{
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_t4372 * ___serializerTypes;
};
