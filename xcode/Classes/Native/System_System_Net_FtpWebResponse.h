#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t1038;
// System.Uri
struct Uri_t6735;
// System.String
struct String_t;
// System.Net.FtpWebRequest
struct FtpWebRequest_t7184;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.FtpWebResponse
struct FtpWebResponse_t7180  : public WebResponse_t7078
{
	// System.IO.Stream System.Net.FtpWebResponse::stream
	Stream_t1038 * ___stream;
	// System.Uri System.Net.FtpWebResponse::uri
	Uri_t6735 * ___uri;
	// System.Net.FtpStatusCode System.Net.FtpWebResponse::statusCode
	int32_t ___statusCode;
	// System.DateTime System.Net.FtpWebResponse::lastModified
	DateTime_t1171  ___lastModified;
	// System.String System.Net.FtpWebResponse::bannerMessage
	String_t* ___bannerMessage;
	// System.String System.Net.FtpWebResponse::welcomeMessage
	String_t* ___welcomeMessage;
	// System.String System.Net.FtpWebResponse::exitMessage
	String_t* ___exitMessage;
	// System.String System.Net.FtpWebResponse::statusDescription
	String_t* ___statusDescription;
	// System.String System.Net.FtpWebResponse::method
	String_t* ___method;
	// System.Boolean System.Net.FtpWebResponse::disposed
	bool ___disposed;
	// System.Net.FtpWebRequest System.Net.FtpWebResponse::request
	FtpWebRequest_t7184 * ___request;
	// System.Int64 System.Net.FtpWebResponse::contentLength
	int64_t ___contentLength;
};
