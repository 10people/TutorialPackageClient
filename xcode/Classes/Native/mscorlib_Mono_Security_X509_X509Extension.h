#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t7813;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.X509Extension
struct X509Extension_t7823  : public Object_t
{
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t7813 * ___extnValue;
};
