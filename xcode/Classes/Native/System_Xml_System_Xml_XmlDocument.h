#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t1042;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t6992;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t6993;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t6680;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t6793;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t6994;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlDocument
struct XmlDocument_t5524  : public XmlNode_t5526
{
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t6650 * ___nameTable;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t6992 * ___implementation;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t6678 * ___resolver;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t4372 * ___idTable;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t6993 * ___nameCache;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t6983 * ___lastLinkedChild;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t6680 * ___schemas;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Object_t * ___schemaInfo;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t6994 * ___NodeChanged;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t6994 * ___NodeChanging;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t6994 * ___NodeInserted;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t6994 * ___NodeInserting;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t6994 * ___NodeRemoved;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t6994 * ___NodeRemoving;
};
struct XmlDocument_t5524_StaticFields{
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t1042* ___optimal_create_types;
};
