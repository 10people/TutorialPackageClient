#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Object
struct Object_t;
// System.Net.ICredentialPolicy
struct ICredentialPolicy_t7150;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.AuthenticationManager
struct AuthenticationManager_t7151  : public Object_t
{
};
struct AuthenticationManager_t7151_StaticFields{
	// System.Collections.ArrayList System.Net.AuthenticationManager::modules
	ArrayList_t5157 * ___modules;
	// System.Object System.Net.AuthenticationManager::locker
	Object_t * ___locker;
	// System.Net.ICredentialPolicy System.Net.AuthenticationManager::credential_policy
	Object_t * ___credential_policy;
};
