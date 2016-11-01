#pragma once
#include <stdint.h>
// System.Net.FtpWebRequest
struct FtpWebRequest_t7184;
// System.IO.Stream
struct Stream_t1038;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.FtpDataStream
struct FtpDataStream_t7185  : public Stream_t1038
{
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t7184 * ___request;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t1038 * ___networkStream;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead;
};
