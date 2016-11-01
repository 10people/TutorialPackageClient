#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.TypeMember
struct TypeMember_t6842  : public Object_t
{
	// System.Type System.Xml.Serialization.TypeMember::type
	Type_t * ___type;
	// System.String System.Xml.Serialization.TypeMember::member
	String_t* ___member;
};
