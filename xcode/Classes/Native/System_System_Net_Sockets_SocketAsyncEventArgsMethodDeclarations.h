#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t5223;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t7139;
// System.Net.EndPoint
struct EndPoint_t5222;
// System.Object
struct Object_t;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5220;
// System.Net.Sockets.SocketAsyncOperation
#include "System_System_Net_Sockets_SocketAsyncOperation.h"
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"

// System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor()
 void SocketAsyncEventArgs__ctor_m41878 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
 void SocketAsyncEventArgs_add_Completed_m41881 (SocketAsyncEventArgs_t5223 * __this, EventHandler_1_t5220 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
 void SocketAsyncEventArgs_remove_Completed_m49675 (SocketAsyncEventArgs_t5223 * __this, EventHandler_1_t5220 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
 Socket_t4375 * SocketAsyncEventArgs_get_AcceptSocket_m49676 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
 void SocketAsyncEventArgs_set_AcceptSocket_m49677 (SocketAsyncEventArgs_t5223 * __this, Socket_t4375 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::get_Buffer()
 ByteU5BU5D_t1033* SocketAsyncEventArgs_get_Buffer_m49678 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Buffer(System.Byte[])
 void SocketAsyncEventArgs_set_Buffer_m49679 (SocketAsyncEventArgs_t5223 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::get_BufferList()
 Object_t* SocketAsyncEventArgs_get_BufferList_m49680 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BufferList(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
 void SocketAsyncEventArgs_set_BufferList_m49681 (SocketAsyncEventArgs_t5223 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_BytesTransferred()
 int32_t SocketAsyncEventArgs_get_BytesTransferred_m41894 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
 void SocketAsyncEventArgs_set_BytesTransferred_m49682 (SocketAsyncEventArgs_t5223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Count()
 int32_t SocketAsyncEventArgs_get_Count_m49683 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Count(System.Int32)
 void SocketAsyncEventArgs_set_Count_m49684 (SocketAsyncEventArgs_t5223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_DisconnectReuseSocket(System.Boolean)
 void SocketAsyncEventArgs_set_DisconnectReuseSocket_m49685 (SocketAsyncEventArgs_t5223 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_LastOperation(System.Net.Sockets.SocketAsyncOperation)
 void SocketAsyncEventArgs_set_LastOperation_m49686 (SocketAsyncEventArgs_t5223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Offset()
 int32_t SocketAsyncEventArgs_get_Offset_m49687 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Offset(System.Int32)
 void SocketAsyncEventArgs_set_Offset_m49688 (SocketAsyncEventArgs_t5223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::get_RemoteEndPoint()
 EndPoint_t5222 * SocketAsyncEventArgs_get_RemoteEndPoint_m49689 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_RemoteEndPoint(System.Net.EndPoint)
 void SocketAsyncEventArgs_set_RemoteEndPoint_m41879 (SocketAsyncEventArgs_t5223 * __this, EndPoint_t5222 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SendPacketsSendSize(System.Int32)
 void SocketAsyncEventArgs_set_SendPacketsSendSize_m49690 (SocketAsyncEventArgs_t5223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
 int32_t SocketAsyncEventArgs_get_SocketError_m41892 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
 void SocketAsyncEventArgs_set_SocketError_m49691 (SocketAsyncEventArgs_t5223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::get_SocketFlags()
 int32_t SocketAsyncEventArgs_get_SocketFlags_m49692 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketFlags(System.Net.Sockets.SocketFlags)
 void SocketAsyncEventArgs_set_SocketFlags_m49693 (SocketAsyncEventArgs_t5223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.SocketAsyncEventArgs::get_UserToken()
 Object_t * SocketAsyncEventArgs_get_UserToken_m41893 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_UserToken(System.Object)
 void SocketAsyncEventArgs_set_UserToken_m41888 (SocketAsyncEventArgs_t5223 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Finalize()
 void SocketAsyncEventArgs_Finalize_m49694 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
 void SocketAsyncEventArgs_Dispose_m49695 (SocketAsyncEventArgs_t5223 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
 void SocketAsyncEventArgs_Dispose_m49696 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
 void SocketAsyncEventArgs_OnCompleted_m49697 (SocketAsyncEventArgs_t5223 * __this, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBuffer(System.Byte[],System.Int32,System.Int32)
 void SocketAsyncEventArgs_SetBuffer_m41889 (SocketAsyncEventArgs_t5223 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBufferInternal(System.Byte[],System.Int32,System.Int32)
 void SocketAsyncEventArgs_SetBufferInternal_m49698 (SocketAsyncEventArgs_t5223 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::ReceiveCallback()
 void SocketAsyncEventArgs_ReceiveCallback_m49699 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::ConnectCallback()
 void SocketAsyncEventArgs_ConnectCallback_m49700 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::TryConnect(System.Net.EndPoint)
 int32_t SocketAsyncEventArgs_TryConnect_m49701 (SocketAsyncEventArgs_t5223 * __this, EndPoint_t5222 * ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SendCallback()
 void SocketAsyncEventArgs_SendCallback_m49702 (SocketAsyncEventArgs_t5223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::DoOperation(System.Net.Sockets.SocketAsyncOperation,System.Net.Sockets.Socket)
 void SocketAsyncEventArgs_DoOperation_m49703 (SocketAsyncEventArgs_t5223 * __this, int32_t ___operation, Socket_t4375 * ___socket, MethodInfo* method) IL2CPP_METHOD_ATTR;
