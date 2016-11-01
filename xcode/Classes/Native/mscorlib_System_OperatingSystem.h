#pragma once
#include <stdint.h>
// System.Version
struct Version_t7194;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.OperatingSystem
struct OperatingSystem_t8243  : public Object_t
{
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform;
	// System.Version System.OperatingSystem::_version
	Version_t7194 * ____version;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack;
};
