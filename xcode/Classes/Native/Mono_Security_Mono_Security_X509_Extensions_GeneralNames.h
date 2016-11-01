#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t6509  : public Object_t
{
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::rfc822Name
	ArrayList_t5157 * ___rfc822Name;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::dnsName
	ArrayList_t5157 * ___dnsName;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::directoryNames
	ArrayList_t5157 * ___directoryNames;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::uris
	ArrayList_t5157 * ___uris;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::ipAddr
	ArrayList_t5157 * ___ipAddr;
};
