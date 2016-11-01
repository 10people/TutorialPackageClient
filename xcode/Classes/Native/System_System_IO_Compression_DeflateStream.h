#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t1038;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t7120;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.CompressionMode
#include "System_System_IO_Compression_CompressionMode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
// System.IO.Compression.DeflateStream
struct DeflateStream_t7123  : public Stream_t1038
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t1038 * ___base_stream;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t7120 * ___feeder;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t24 ___z_stream;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t1033* ___io_buffer;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t7124  ___data;
};
