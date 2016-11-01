#pragma once
#include <stdint.h>
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Version
struct Version_t7194;
// System.IO.Stream
struct Stream_t1038;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionData
struct WebConnectionData_t7202  : public Object_t
{
	// System.Net.HttpWebRequest System.Net.WebConnectionData::request
	HttpWebRequest_t6544 * ___request;
	// System.Int32 System.Net.WebConnectionData::StatusCode
	int32_t ___StatusCode;
	// System.String System.Net.WebConnectionData::StatusDescription
	String_t* ___StatusDescription;
	// System.Net.WebHeaderCollection System.Net.WebConnectionData::Headers
	WebHeaderCollection_t7157 * ___Headers;
	// System.Version System.Net.WebConnectionData::Version
	Version_t7194 * ___Version;
	// System.IO.Stream System.Net.WebConnectionData::stream
	Stream_t1038 * ___stream;
	// System.String System.Net.WebConnectionData::Challenge
	String_t* ___Challenge;
};
