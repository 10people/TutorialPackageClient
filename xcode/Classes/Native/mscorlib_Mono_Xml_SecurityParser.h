#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t7730;
// System.Collections.Stack
struct Stack_t6658;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct SecurityParser_t7829  : public SmallXmlParser_t7830
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t7730 * ___root;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t7730 * ___current;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t6658 * ___stack;
};
