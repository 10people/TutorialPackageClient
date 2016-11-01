#pragma once
#include <stdint.h>
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Threading.WaitHandle
struct WaitHandle_t5906;
// System.Exception
struct Exception_t972;
// System.Net.EndPoint
struct EndPoint_t5222;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t7138;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t7139;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"
// System.Net.Sockets.Socket/SocketOperation
#include "System_System_Net_Sockets_Socket_SocketOperation.h"
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t7140  : public Object_t
{
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::Sock
	Socket_t4375 * ___Sock;
	// System.IntPtr System.Net.Sockets.Socket/SocketAsyncResult::handle
	IntPtr_t24 ___handle;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::state
	Object_t * ___state;
	// System.AsyncCallback System.Net.Sockets.Socket/SocketAsyncResult::callback
	AsyncCallback_t15 * ___callback;
	// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::waithandle
	WaitHandle_t5906 * ___waithandle;
	// System.Exception System.Net.Sockets.Socket/SocketAsyncResult::delayedException
	Exception_t972 * ___delayedException;
	// System.Net.EndPoint System.Net.Sockets.Socket/SocketAsyncResult::EndPoint
	EndPoint_t5222 * ___EndPoint;
	// System.Byte[] System.Net.Sockets.Socket/SocketAsyncResult::Buffer
	ByteU5BU5D_t1033* ___Buffer;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Offset
	int32_t ___Offset;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Size
	int32_t ___Size;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.Socket/SocketAsyncResult::SockFlags
	int32_t ___SockFlags;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::AcceptSocket
	Socket_t4375 * ___AcceptSocket;
	// System.Net.IPAddress[] System.Net.Sockets.Socket/SocketAsyncResult::Addresses
	IPAddressU5BU5D_t7138* ___Addresses;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Port
	int32_t ___Port;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.Socket/SocketAsyncResult::Buffers
	Object_t* ___Buffers;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::acc_socket
	Socket_t4375 * ___acc_socket;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::total
	int32_t ___total;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed_sync
	bool ___completed_sync;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed
	bool ___completed;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::blocking
	bool ___blocking;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::error
	int32_t ___error;
	// System.Net.Sockets.Socket/SocketOperation System.Net.Sockets.Socket/SocketAsyncResult::operation
	int32_t ___operation;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::ares
	Object_t * ___ares;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::EndCalled
	int32_t ___EndCalled;
};
