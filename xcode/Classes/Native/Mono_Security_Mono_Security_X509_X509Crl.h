#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t6493;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Mono.Security.X509.X509Crl
struct X509Crl_t6501  : public Object_t
{
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t1171  ___thisUpdate;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t1171  ___nextUpdate;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t5157 * ___entries;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t1033* ___signature;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t6493 * ___extensions;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t1033* ___encoded;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t1033* ___hash_value;
};
struct X509Crl_t6501_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t944 * ___U3CU3Ef__switch$map13;
};
