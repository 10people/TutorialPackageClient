#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Uri
struct Uri_t6735;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.Cookie
struct Cookie_t7159  : public Object_t
{
	// System.String System.Net.Cookie::comment
	String_t* ___comment;
	// System.Uri System.Net.Cookie::commentUri
	Uri_t6735 * ___commentUri;
	// System.Boolean System.Net.Cookie::discard
	bool ___discard;
	// System.String System.Net.Cookie::domain
	String_t* ___domain;
	// System.DateTime System.Net.Cookie::expires
	DateTime_t1171  ___expires;
	// System.Boolean System.Net.Cookie::httpOnly
	bool ___httpOnly;
	// System.String System.Net.Cookie::name
	String_t* ___name;
	// System.String System.Net.Cookie::path
	String_t* ___path;
	// System.String System.Net.Cookie::port
	String_t* ___port;
	// System.Int32[] System.Net.Cookie::ports
	Int32U5BU5D_t116* ___ports;
	// System.Boolean System.Net.Cookie::secure
	bool ___secure;
	// System.DateTime System.Net.Cookie::timestamp
	DateTime_t1171  ___timestamp;
	// System.String System.Net.Cookie::val
	String_t* ___val;
	// System.Int32 System.Net.Cookie::version
	int32_t ___version;
	// System.Boolean System.Net.Cookie::exact_domain
	bool ___exact_domain;
};
struct Cookie_t7159_StaticFields{
	// System.Char[] System.Net.Cookie::reservedCharsName
	CharU5BU5D_t1016* ___reservedCharsName;
	// System.Char[] System.Net.Cookie::portSeparators
	CharU5BU5D_t1016* ___portSeparators;
	// System.String System.Net.Cookie::tspecials
	String_t* ___tspecials;
};
