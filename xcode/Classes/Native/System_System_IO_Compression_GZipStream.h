#pragma once
#include <stdint.h>
// System.IO.Compression.DeflateStream
struct DeflateStream_t7123;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.GZipStream
struct GZipStream_t7125  : public Stream_t1038
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t7123 * ___deflateStream;
};
