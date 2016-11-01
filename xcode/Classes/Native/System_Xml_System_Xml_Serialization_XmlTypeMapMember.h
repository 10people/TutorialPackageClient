#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Reflection.MemberInfo
struct MemberInfo_t1069;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t6875  : public Object_t
{
	// System.String System.Xml.Serialization.XmlTypeMapMember::_name
	String_t* ____name;
	// System.Int32 System.Xml.Serialization.XmlTypeMapMember::_index
	int32_t ____index;
	// System.Int32 System.Xml.Serialization.XmlTypeMapMember::_globalIndex
	int32_t ____globalIndex;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapMember::_typeData
	TypeData_t6841 * ____typeData;
	// System.Reflection.MemberInfo System.Xml.Serialization.XmlTypeMapMember::_member
	MemberInfo_t1069 * ____member;
	// System.Reflection.MemberInfo System.Xml.Serialization.XmlTypeMapMember::_specifiedMember
	MemberInfo_t1069 * ____specifiedMember;
	// System.Object System.Xml.Serialization.XmlTypeMapMember::_defaultValue
	Object_t * ____defaultValue;
	// System.Int32 System.Xml.Serialization.XmlTypeMapMember::_flags
	int32_t ____flags;
};
