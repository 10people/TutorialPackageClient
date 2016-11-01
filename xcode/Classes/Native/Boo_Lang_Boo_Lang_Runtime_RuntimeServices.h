#pragma once
#include <stdint.h>
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Type
struct Type_t;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t6365;
// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t6371;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// Boo.Lang.Runtime.RuntimeServices
struct RuntimeServices_t5971  : public Object_t
{
};
struct RuntimeServices_t5971_StaticFields{
	// System.Object[] Boo.Lang.Runtime.RuntimeServices::NoArguments
	ObjectU5BU5D_t142* ___NoArguments;
	// System.Type Boo.Lang.Runtime.RuntimeServices::RuntimeServicesType
	Type_t * ___RuntimeServicesType;
	// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache Boo.Lang.Runtime.RuntimeServices::_cache
	DispatcherCache_t6365 * ____cache;
	// Boo.Lang.Runtime.ExtensionRegistry Boo.Lang.Runtime.RuntimeServices::_extensions
	ExtensionRegistry_t6371 * ____extensions;
	// System.Object Boo.Lang.Runtime.RuntimeServices::True
	Object_t * ___True;
};
