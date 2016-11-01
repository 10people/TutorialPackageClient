#pragma once
#include <stdint.h>
// System.Net.CookieCollection
struct CookieCollection_t7162;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.CookieContainer
struct CookieContainer_t7164  : public Object_t
{
	// System.Int32 System.Net.CookieContainer::capacity
	int32_t ___capacity;
	// System.Int32 System.Net.CookieContainer::perDomainCapacity
	int32_t ___perDomainCapacity;
	// System.Int32 System.Net.CookieContainer::maxCookieSize
	int32_t ___maxCookieSize;
	// System.Net.CookieCollection System.Net.CookieContainer::cookies
	CookieCollection_t7162 * ___cookies;
};
