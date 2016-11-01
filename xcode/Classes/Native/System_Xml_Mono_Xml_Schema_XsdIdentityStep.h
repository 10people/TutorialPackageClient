#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdIdentityStep
struct XsdIdentityStep_t6645  : public Object_t
{
	// System.Boolean Mono.Xml.Schema.XsdIdentityStep::IsCurrent
	bool ___IsCurrent;
	// System.Boolean Mono.Xml.Schema.XsdIdentityStep::IsAttribute
	bool ___IsAttribute;
	// System.Boolean Mono.Xml.Schema.XsdIdentityStep::IsAnyName
	bool ___IsAnyName;
	// System.String Mono.Xml.Schema.XsdIdentityStep::NsName
	String_t* ___NsName;
	// System.String Mono.Xml.Schema.XsdIdentityStep::Name
	String_t* ___Name;
	// System.String Mono.Xml.Schema.XsdIdentityStep::Namespace
	String_t* ___Namespace;
};
