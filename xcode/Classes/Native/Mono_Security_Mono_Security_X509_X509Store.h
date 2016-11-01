#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t6490;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.X509Store
struct X509Store_t6503  : public Object_t
{
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t6490 * ____certificates;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t5157 * ____crls;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl;
};
