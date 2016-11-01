#pragma once
#include <stdint.h>
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDNode
struct DTDNode_t6942  : public Object_t
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::root
	DTDObjectModel_t6924 * ___root;
	// System.Boolean Mono.Xml.DTDNode::isInternalSubset
	bool ___isInternalSubset;
	// System.String Mono.Xml.DTDNode::baseURI
	String_t* ___baseURI;
	// System.Int32 Mono.Xml.DTDNode::lineNumber
	int32_t ___lineNumber;
	// System.Int32 Mono.Xml.DTDNode::linePosition
	int32_t ___linePosition;
};
