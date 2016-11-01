#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Uri
struct Uri_t6735;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t6958  : public DTDNode_t6942
{
	// System.String Mono.Xml.DTDEntityBase::name
	String_t* ___name;
	// System.String Mono.Xml.DTDEntityBase::publicId
	String_t* ___publicId;
	// System.String Mono.Xml.DTDEntityBase::systemId
	String_t* ___systemId;
	// System.String Mono.Xml.DTDEntityBase::literalValue
	String_t* ___literalValue;
	// System.String Mono.Xml.DTDEntityBase::replacementText
	String_t* ___replacementText;
	// System.String Mono.Xml.DTDEntityBase::uriString
	String_t* ___uriString;
	// System.Uri Mono.Xml.DTDEntityBase::absUri
	Uri_t6735 * ___absUri;
	// System.Boolean Mono.Xml.DTDEntityBase::isInvalid
	bool ___isInvalid;
	// System.Boolean Mono.Xml.DTDEntityBase::loadFailed
	bool ___loadFailed;
	// System.Xml.XmlResolver Mono.Xml.DTDEntityBase::resolver
	XmlResolver_t6678 * ___resolver;
};
