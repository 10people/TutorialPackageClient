#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t8152;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.SecurityManager
struct SecurityManager_t8172  : public Object_t
{
};
struct SecurityManager_t8172_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t4372 * ____declsecCache;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t8152 * ____execution;
};
