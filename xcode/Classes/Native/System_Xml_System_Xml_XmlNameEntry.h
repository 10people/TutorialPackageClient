#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNameEntry
struct XmlNameEntry_t6982  : public Object_t
{
	// System.String System.Xml.XmlNameEntry::Prefix
	String_t* ___Prefix;
	// System.String System.Xml.XmlNameEntry::LocalName
	String_t* ___LocalName;
	// System.String System.Xml.XmlNameEntry::NS
	String_t* ___NS;
	// System.Int32 System.Xml.XmlNameEntry::Hash
	int32_t ___Hash;
	// System.String System.Xml.XmlNameEntry::prefixed_name_cache
	String_t* ___prefixed_name_cache;
};
