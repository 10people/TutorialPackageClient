#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.TypeInfo
struct TypeInfo_t8078  : public Object_t
{
	// System.String System.Runtime.Remoting.TypeInfo::serverType
	String_t* ___serverType;
	// System.String[] System.Runtime.Remoting.TypeInfo::serverHierarchy
	StringU5BU5D_t333* ___serverHierarchy;
	// System.String[] System.Runtime.Remoting.TypeInfo::interfacesImplemented
	StringU5BU5D_t333* ___interfacesImplemented;
};
