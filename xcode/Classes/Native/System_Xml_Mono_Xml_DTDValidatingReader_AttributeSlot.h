#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t6965  : public Object_t
{
	// System.String Mono.Xml.DTDValidatingReader/AttributeSlot::Name
	String_t* ___Name;
	// System.String Mono.Xml.DTDValidatingReader/AttributeSlot::LocalName
	String_t* ___LocalName;
	// System.String Mono.Xml.DTDValidatingReader/AttributeSlot::NS
	String_t* ___NS;
	// System.String Mono.Xml.DTDValidatingReader/AttributeSlot::Prefix
	String_t* ___Prefix;
	// System.String Mono.Xml.DTDValidatingReader/AttributeSlot::Value
	String_t* ___Value;
	// System.Boolean Mono.Xml.DTDValidatingReader/AttributeSlot::IsDefault
	bool ___IsDefault;
};
