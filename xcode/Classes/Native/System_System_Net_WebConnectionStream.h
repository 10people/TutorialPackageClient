#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Net.WebConnection
struct WebConnection_t7201;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t5219;
// System.IO.MemoryStream
struct MemoryStream_t5911;
// System.Object
struct Object_t;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.WebConnectionStream
struct WebConnectionStream_t7197  : public Stream_t1038
{
	// System.Boolean System.Net.WebConnectionStream::isRead
	bool ___isRead;
	// System.Net.WebConnection System.Net.WebConnectionStream::cnc
	WebConnection_t7201 * ___cnc;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::request
	HttpWebRequest_t6544 * ___request;
	// System.Byte[] System.Net.WebConnectionStream::readBuffer
	ByteU5BU5D_t1033* ___readBuffer;
	// System.Int32 System.Net.WebConnectionStream::readBufferOffset
	int32_t ___readBufferOffset;
	// System.Int32 System.Net.WebConnectionStream::readBufferSize
	int32_t ___readBufferSize;
	// System.Int32 System.Net.WebConnectionStream::contentLength
	int32_t ___contentLength;
	// System.Int32 System.Net.WebConnectionStream::totalRead
	int32_t ___totalRead;
	// System.Int64 System.Net.WebConnectionStream::totalWritten
	int64_t ___totalWritten;
	// System.Boolean System.Net.WebConnectionStream::nextReadCalled
	bool ___nextReadCalled;
	// System.Int32 System.Net.WebConnectionStream::pendingReads
	int32_t ___pendingReads;
	// System.Int32 System.Net.WebConnectionStream::pendingWrites
	int32_t ___pendingWrites;
	// System.Threading.ManualResetEvent System.Net.WebConnectionStream::pending
	ManualResetEvent_t5219 * ___pending;
	// System.Boolean System.Net.WebConnectionStream::allowBuffering
	bool ___allowBuffering;
	// System.Boolean System.Net.WebConnectionStream::sendChunked
	bool ___sendChunked;
	// System.IO.MemoryStream System.Net.WebConnectionStream::writeBuffer
	MemoryStream_t5911 * ___writeBuffer;
	// System.Boolean System.Net.WebConnectionStream::requestWritten
	bool ___requestWritten;
	// System.Byte[] System.Net.WebConnectionStream::headers
	ByteU5BU5D_t1033* ___headers;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed;
	// System.Boolean System.Net.WebConnectionStream::headersSent
	bool ___headersSent;
	// System.Object System.Net.WebConnectionStream::locker
	Object_t * ___locker;
	// System.Boolean System.Net.WebConnectionStream::initRead
	bool ___initRead;
	// System.Boolean System.Net.WebConnectionStream::read_eof
	bool ___read_eof;
	// System.Boolean System.Net.WebConnectionStream::complete_request_written
	bool ___complete_request_written;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout;
};
struct WebConnectionStream_t7197_StaticFields{
	// System.Byte[] System.Net.WebConnectionStream::crlf
	ByteU5BU5D_t1033* ___crlf;
};
