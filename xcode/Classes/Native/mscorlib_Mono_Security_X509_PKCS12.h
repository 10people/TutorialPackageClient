#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t7816;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.PKCS12
struct PKCS12_t7817  : public Object_t
{
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t1033* ____password;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t5157 * ____keyBags;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t5157 * ____secretBags;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t7816 * ____certs;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t5157 * ____safeBags;
};
struct PKCS12_t7817_StaticFields{
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t944 * ___U3CU3Ef__switch$map8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t944 * ___U3CU3Ef__switch$map9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapA;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapB;
};
