#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t6735;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Net.CookieCollection
struct CookieCollection_t7162;
// System.String
struct String_t;
// System.Version
struct Version_t7194;
// System.Net.CookieContainer
struct CookieContainer_t7164;
// System.IO.Stream
struct Stream_t1038;
// System.String[]
struct StringU5BU5D_t333;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Net.HttpWebResponse
struct HttpWebResponse_t7198  : public WebResponse_t7078
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t6735 * ___uri;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_t7157 * ___webHeaders;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t7162 * ___cookieCollection;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method;
	// System.Version System.Net.HttpWebResponse::version
	Version_t7194 * ___version;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t7164 * ___cookie_container;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_t1038 * ___stream;
	// System.String[] System.Net.HttpWebResponse::cookieExpiresFormats
	StringU5BU5D_t333* ___cookieExpiresFormats;
};
struct HttpWebResponse_t7198_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpWebResponse::<>f__switch$map8
	Dictionary_2_t944 * ___U3CU3Ef__switch$map8;
};
