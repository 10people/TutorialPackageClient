#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t6885;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t6886  : public Object_t
{
	// System.Object System.Xml.Serialization.XmlSerializationReader/Fixup::source
	Object_t * ___source;
	// System.String[] System.Xml.Serialization.XmlSerializationReader/Fixup::ids
	StringU5BU5D_t333* ___ids;
	// System.Xml.Serialization.XmlSerializationFixupCallback System.Xml.Serialization.XmlSerializationReader/Fixup::callback
	XmlSerializationFixupCallback_t6885 * ___callback;
};
