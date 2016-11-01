#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t6853;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t6876  : public Object_t
{
	// System.Boolean System.Xml.Serialization.XmlReflectionMember::isReturnValue
	bool ___isReturnValue;
	// System.String System.Xml.Serialization.XmlReflectionMember::memberName
	String_t* ___memberName;
	// System.Type System.Xml.Serialization.XmlReflectionMember::memberType
	Type_t * ___memberType;
	// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlReflectionMember::xmlAttributes
	XmlAttributes_t6853 * ___xmlAttributes;
	// System.Type System.Xml.Serialization.XmlReflectionMember::declaringType
	Type_t * ___declaringType;
};
