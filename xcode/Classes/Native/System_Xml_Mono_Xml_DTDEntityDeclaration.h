#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Xml.DTDEntityBase
#include "System_Xml_Mono_Xml_DTDEntityBase.h"
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t6953  : public DTDEntityBase_t6958
{
	// System.String Mono.Xml.DTDEntityDeclaration::entityValue
	String_t* ___entityValue;
	// System.String Mono.Xml.DTDEntityDeclaration::notationName
	String_t* ___notationName;
	// System.Collections.ArrayList Mono.Xml.DTDEntityDeclaration::ReferencingEntities
	ArrayList_t5157 * ___ReferencingEntities;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::scanned
	bool ___scanned;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::recursed
	bool ___recursed;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::hasExternalReference
	bool ___hasExternalReference;
};
