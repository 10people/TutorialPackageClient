#pragma once
#include <stdint.h>
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t7140;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.Sockets.Socket/Worker
struct Worker_t7142  : public Object_t
{
	// System.Net.Sockets.Socket/SocketAsyncResult System.Net.Sockets.Socket/Worker::result
	SocketAsyncResult_t7140 * ___result;
	// System.Boolean System.Net.Sockets.Socket/Worker::requireSocketSecurity
	bool ___requireSocketSecurity;
	// System.Int32 System.Net.Sockets.Socket/Worker::send_so_far
	int32_t ___send_so_far;
};
