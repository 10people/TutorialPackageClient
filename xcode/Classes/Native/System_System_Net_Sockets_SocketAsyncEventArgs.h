#pragma once
#include <stdint.h>
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t7139;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5220;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Net.EndPoint
struct EndPoint_t5222;
// System.Object
struct Object_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Net.Sockets.SocketAsyncOperation
#include "System_System_Net_Sockets_SocketAsyncOperation.h"
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t5223  : public EventArgs_t5207
{
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferList
	Object_t* ____bufferList;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::curSocket
	Socket_t4375 * ___curSocket;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t5220 * ___Completed;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t4375 * ___U3CAcceptSocketU3Ek__BackingField;
	// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::<Buffer>k__BackingField
	ByteU5BU5D_t1033* ___U3CBufferU3Ek__BackingField;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::<DisconnectReuseSocket>k__BackingField
	bool ___U3CDisconnectReuseSocketU3Ek__BackingField;
	// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::<LastOperation>k__BackingField
	int32_t ___U3CLastOperationU3Ek__BackingField;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::<RemoteEndPoint>k__BackingField
	EndPoint_t5222 * ___U3CRemoteEndPointU3Ek__BackingField;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsSendSize>k__BackingField
	int32_t ___U3CSendPacketsSendSizeU3Ek__BackingField;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::<SocketFlags>k__BackingField
	int32_t ___U3CSocketFlagsU3Ek__BackingField;
	// System.Object System.Net.Sockets.SocketAsyncEventArgs::<UserToken>k__BackingField
	Object_t * ___U3CUserTokenU3Ek__BackingField;
};
