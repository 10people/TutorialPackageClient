#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t6883;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t6884  : public Object_t
{
	// System.Xml.Serialization.XmlSerializationCollectionFixupCallback System.Xml.Serialization.XmlSerializationReader/CollectionFixup::callback
	XmlSerializationCollectionFixupCallback_t6883 * ___callback;
	// System.Object System.Xml.Serialization.XmlSerializationReader/CollectionFixup::collection
	Object_t * ___collection;
	// System.Object System.Xml.Serialization.XmlSerializationReader/CollectionFixup::collectionItems
	Object_t * ___collectionItems;
	// System.String System.Xml.Serialization.XmlSerializationReader/CollectionFixup::id
	String_t* ___id;
};
