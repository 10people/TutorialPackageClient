#pragma once
#include <stdint.h>
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t5907;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Serialization.XmlSerializationGeneratedCode
#include "System_Xml_System_Xml_Serialization_XmlSerializationGenerate.h"
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t6888  : public XmlSerializationGeneratedCode_t6880
{
	// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::document
	XmlDocument_t5524 * ___document;
	// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::reader
	XmlReader_t6677 * ___reader;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::fixups
	ArrayList_t5157 * ___fixups;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::collFixups
	Hashtable_t4372 * ___collFixups;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::collItemFixups
	ArrayList_t5157 * ___collItemFixups;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::typesCallbacks
	Hashtable_t4372 * ___typesCallbacks;
	// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::noIDTargets
	ArrayList_t5157 * ___noIDTargets;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::targets
	Hashtable_t4372 * ___targets;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::delayedListFixups
	Hashtable_t4372 * ___delayedListFixups;
	// System.Xml.Serialization.XmlSerializer System.Xml.Serialization.XmlSerializationReader::eventSource
	XmlSerializer_t5907 * ___eventSource;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::delayedFixupId
	int32_t ___delayedFixupId;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::referencedObjects
	Hashtable_t4372 * ___referencedObjects;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::readCount
	int32_t ___readCount;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader::whileIterationCount
	int32_t ___whileIterationCount;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3SchemaNS
	String_t* ___w3SchemaNS;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS
	String_t* ___w3InstanceNS;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS2000
	String_t* ___w3InstanceNS2000;
	// System.String System.Xml.Serialization.XmlSerializationReader::w3InstanceNS1999
	String_t* ___w3InstanceNS1999;
	// System.String System.Xml.Serialization.XmlSerializationReader::soapNS
	String_t* ___soapNS;
	// System.String System.Xml.Serialization.XmlSerializationReader::wsdlNS
	String_t* ___wsdlNS;
	// System.String System.Xml.Serialization.XmlSerializationReader::nullX
	String_t* ___nullX;
	// System.String System.Xml.Serialization.XmlSerializationReader::nil
	String_t* ___nil;
	// System.String System.Xml.Serialization.XmlSerializationReader::typeX
	String_t* ___typeX;
	// System.String System.Xml.Serialization.XmlSerializationReader::arrayType
	String_t* ___arrayType;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::arrayQName
	XmlQualifiedName_t6656 * ___arrayQName;
};
