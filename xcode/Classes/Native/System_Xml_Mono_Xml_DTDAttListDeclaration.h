#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t6952  : public DTDNode_t6942
{
	// System.String Mono.Xml.DTDAttListDeclaration::name
	String_t* ___name;
	// System.Collections.Hashtable Mono.Xml.DTDAttListDeclaration::attributeOrders
	Hashtable_t4372 * ___attributeOrders;
	// System.Collections.ArrayList Mono.Xml.DTDAttListDeclaration::attributes
	ArrayList_t5157 * ___attributes;
};
