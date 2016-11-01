#pragma once
#include <stdint.h>
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Net.Sockets.NetworkStream
struct NetworkStream_t7134  : public Stream_t1038
{
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t4375 * ___socket;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed;
};
