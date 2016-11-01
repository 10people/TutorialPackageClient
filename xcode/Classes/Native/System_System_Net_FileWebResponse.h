#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t6735;
// System.IO.FileStream
struct FileStream_t927;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Net.WebResponse
#include "System_System_Net_WebResponse.h"
// System.Net.FileWebResponse
struct FileWebResponse_t7177  : public WebResponse_t7078
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t6735 * ___responseUri;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t927 * ___fileStream;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t7157 * ___webHeaders;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed;
};
