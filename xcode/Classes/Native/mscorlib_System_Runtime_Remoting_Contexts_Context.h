#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.Context
struct Context_t8019  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t5157 * ___context_properties;
};
struct Context_t8019_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t4372 * ___namedSlots;
};
