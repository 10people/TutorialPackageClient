#pragma once
#include <stdint.h>
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t5219;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5220;
// System.Object
#include "mscorlib_System_Object.h"
// UnityPortSocket.Socket
struct Socket_t5221  : public Object_t
{
	// System.Net.Sockets.Socket UnityPortSocket.Socket::mSocket
	Socket_t4375 * ___mSocket;
	// System.Threading.ManualResetEvent UnityPortSocket.Socket::mReadDone
	ManualResetEvent_t5219 * ___mReadDone;
	// System.Threading.ManualResetEvent UnityPortSocket.Socket::mWriteDone
	ManualResetEvent_t5219 * ___mWriteDone;
	// System.Threading.ManualResetEvent UnityPortSocket.Socket::mConnectDone
	ManualResetEvent_t5219 * ___mConnectDone;
	// System.UInt32 UnityPortSocket.Socket::mReadAmount
	uint32_t ___mReadAmount;
	// System.UInt32 UnityPortSocket.Socket::mWriteAmount
	uint32_t ___mWriteAmount;
	// System.Byte[] UnityPortSocket.Socket::mReadBuffer
	ByteU5BU5D_t1033* ___mReadBuffer;
	// System.UInt32 UnityPortSocket.Socket::mAvailable
	uint32_t ___mAvailable;
	// System.UInt32 UnityPortSocket.Socket::mOffset
	uint32_t ___mOffset;
	// System.Boolean UnityPortSocket.Socket::mForceReconnect
	bool ___mForceReconnect;
};
struct Socket_t5221_StaticFields{
	// System.Int32 UnityPortSocket.Socket::MAX_BUFFER_SIZE
	int32_t ___MAX_BUFFER_SIZE;
	// System.UInt32 UnityPortSocket.Socket::SOCKET_ERROR
	uint32_t ___SOCKET_ERROR;
	// System.Int32 UnityPortSocket.Socket::TIMEOUT_MILLISECONDS
	int32_t ___TIMEOUT_MILLISECONDS;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> UnityPortSocket.Socket::<>f__am$cacheA
	EventHandler_1_t5220 * ___U3CU3Ef__am$cacheA;
};
