﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.SecurityElement
struct SecurityElement_t7730  : public Object_t
{
	// System.String System.Security.SecurityElement::text
	String_t* ___text;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t5157 * ___attributes;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t5157 * ___children;
};
struct SecurityElement_t7730_StaticFields{
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t1016* ___invalid_tag_chars;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t1016* ___invalid_text_chars;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t1016* ___invalid_attr_name_chars;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t1016* ___invalid_attr_value_chars;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t1016* ___invalid_chars;
};
