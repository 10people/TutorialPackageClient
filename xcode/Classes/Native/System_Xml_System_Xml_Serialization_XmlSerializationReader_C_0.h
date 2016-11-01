#pragma once
#include <stdint.h>
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t6887  : public Object_t
{
	// System.Array System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup::list
	Array_t * ___list;
	// System.Int32 System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup::index
	int32_t ___index;
	// System.String System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup::id
	String_t* ___id;
};
