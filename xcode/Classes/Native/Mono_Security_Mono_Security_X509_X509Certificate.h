#pragma once
#include <stdint.h>
// Mono.Security.ASN1
struct ASN1_t6461;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Security.Cryptography.DSA
struct DSA_t6478;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t6493;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Mono.Security.X509.X509Certificate
struct X509Certificate_t6494  : public Object_t
{
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t6461 * ___decoder;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t1033* ___m_encodedcert;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t1171  ___m_from;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t1171  ___m_until;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t6461 * ___issuer;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t1033* ___m_keyalgoparams;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t6461 * ___subject;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t1033* ___m_publickey;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t1033* ___signature;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t1033* ___m_signaturealgoparams;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t1033* ___certhash;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t6476 * ____rsa;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t6478 * ____dsa;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t1033* ___serialnumber;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t1033* ___issuerUniqueID;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t1033* ___subjectUniqueID;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t6493 * ___extensions;
};
struct X509Certificate_t6494_StaticFields{
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapF;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t944 * ___U3CU3Ef__switch$map10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t944 * ___U3CU3Ef__switch$map11;
};
