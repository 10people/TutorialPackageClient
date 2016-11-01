#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t6735;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t7176;
// System.Net.FileWebResponse
struct FileWebResponse_t7177;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7178;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Net.FileWebRequest
struct FileWebRequest_t7173  : public WebRequest_t6621
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t6735 * ___uri;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t7157 * ___webHeaders;
	// System.Net.ICredentials System.Net.FileWebRequest::credentials
	Object_t * ___credentials;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout;
	// System.Net.FileWebResponse System.Net.FileWebRequest::webResponse
	FileWebResponse_t7177 * ___webResponse;
	// System.Threading.AutoResetEvent System.Net.FileWebRequest::requestEndEvent
	AutoResetEvent_t7178 * ___requestEndEvent;
	// System.Boolean System.Net.FileWebRequest::requesting
	bool ___requesting;
	// System.Boolean System.Net.FileWebRequest::asyncResponding
	bool ___asyncResponding;
};
