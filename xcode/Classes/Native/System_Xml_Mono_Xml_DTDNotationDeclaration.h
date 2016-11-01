#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t6954  : public DTDNode_t6942
{
	// System.String Mono.Xml.DTDNotationDeclaration::name
	String_t* ___name;
	// System.String Mono.Xml.DTDNotationDeclaration::localName
	String_t* ___localName;
	// System.String Mono.Xml.DTDNotationDeclaration::prefix
	String_t* ___prefix;
	// System.String Mono.Xml.DTDNotationDeclaration::publicId
	String_t* ___publicId;
	// System.String Mono.Xml.DTDNotationDeclaration::systemId
	String_t* ___systemId;
};
