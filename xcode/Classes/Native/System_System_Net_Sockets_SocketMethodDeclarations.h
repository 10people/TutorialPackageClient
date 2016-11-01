#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket
struct Socket_t4375;
// System.Net.EndPoint
struct EndPoint_t5222;
// System.Net.SocketAddress
struct SocketAddress_t7143;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t5223;
// System.Exception
struct Exception_t972;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Net.Sockets.SocketType
#include "System_System_Net_Sockets_SocketType.h"
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"
// System.Net.Sockets.ProtocolType
#include "System_System_Net_Sockets_ProtocolType.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.SelectMode
#include "System_System_Net_Sockets_SelectMode.h"
// System.Net.Sockets.SocketOptionLevel
#include "System_System_Net_Sockets_SocketOptionLevel.h"
// System.Net.Sockets.SocketOptionName
#include "System_System_Net_Sockets_SocketOptionName.h"
// System.Net.Sockets.SocketShutdown
#include "System_System_Net_Sockets_SocketShutdown.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.IntPtr)
 void Socket__ctor_m49613 (Socket_t4375 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, IntPtr_t24 ___sock, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
 void Socket__ctor_m40463 (Socket_t4375 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
 void Socket__cctor_m49614 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Available_internal(System.IntPtr,System.Int32&)
 int32_t Socket_Available_internal_m49615 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_Available()
 int32_t Socket_get_Available_m40472 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
 SocketAddress_t7143 * Socket_LocalEndPoint_internal_m49616 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
 EndPoint_t5222 * Socket_get_LocalEndPoint_m49617 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
 int32_t Socket_get_SocketType_m49618 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendTimeout()
 int32_t Socket_get_SendTimeout_m49619 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveTimeout()
 int32_t Socket_get_ReceiveTimeout_m49620 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
 IntPtr_t24 Socket_Accept_internal_m49621 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, int32_t* ___error, bool ___blocking, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
 Socket_t4375 * Socket_Accept_m49622 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
 Object_t * Socket_BeginReceive_m49623 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
 Object_t * Socket_BeginSend_m49624 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
 void Socket_Bind_internal_m49625 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, SocketAddress_t7143 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
 void Socket_Bind_m49626 (Socket_t4375 * __this, EndPoint_t5222 * ___local_end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ConnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
 bool Socket_ConnectAsync_m41883 (Socket_t4375 * __this, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
 int32_t Socket_EndReceive_m49627 (Socket_t4375 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
 int32_t Socket_EndReceive_m49628 (Socket_t4375 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
 int32_t Socket_EndSend_m49629 (Socket_t4375 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
 int32_t Socket_EndSend_m49630 (Socket_t4375 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
 Exception_t972 * Socket_InvalidAsyncOp_m49631 (Socket_t4375 * __this, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
 void Socket_Listen_internal_m49632 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, int32_t ___backlog, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
 void Socket_Listen_m49633 (Socket_t4375 * __this, int32_t ___backlog, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
 bool Socket_Poll_m40462 (Socket_t4375 * __this, int32_t ___time_us, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
 int32_t Socket_Receive_m40471 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___size, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
 int32_t Socket_Receive_m49634 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
 int32_t Socket_RecvFrom_internal_m49635 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t7143 ** ___sockaddr, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
 int32_t Socket_ReceiveFrom_nochecks_m49636 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t5222 ** ___remote_end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
 int32_t Socket_ReceiveFrom_nochecks_exc_m49637 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t5222 ** ___remote_end, bool ___throwOnError, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
 int32_t Socket_Send_m40468 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___size, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
 int32_t Socket_Send_m49638 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
 int32_t Socket_SendTo_internal_real_m49639 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t7143 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
 int32_t Socket_SendTo_internal_m49640 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t7143 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
 int32_t Socket_SendTo_nochecks_m49641 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t5222 * ___remote_end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
 void Socket_CheckProtocolSupport_m49642 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
 bool Socket_get_SupportsIPv4_m49643 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
 bool Socket_get_SupportsIPv6_m49644 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
 IntPtr_t24 Socket_Socket_internal_m49645 (Socket_t4375 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
 void Socket_Finalize_m49646 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
 int32_t Socket_get_AddressFamily_m49647 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
 void Socket_Blocking_internal_m49648 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, bool ___block, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
 bool Socket_get_Blocking_m49649 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
 void Socket_set_Blocking_m49650 (Socket_t4375 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
 bool Socket_get_Connected_m40461 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Connected(System.Boolean)
 void Socket_set_Connected_m49651 (Socket_t4375 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
 int32_t Socket_get_ProtocolType_m49652 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
 void Socket_set_NoDelay_m49653 (Socket_t4375 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::RemoteEndPoint_internal(System.IntPtr,System.Int32&)
 SocketAddress_t7143 * Socket_RemoteEndPoint_internal_m49654 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
 EndPoint_t5222 * Socket_get_RemoteEndPoint_m41887 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
 void Socket_Linger_m49655 (Socket_t4375 * __this, IntPtr_t24 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
 void Socket_Dispose_m49656 (Socket_t4375 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
 void Socket_Dispose_m49657 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
 void Socket_Close_internal_m49658 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
 void Socket_Close_m40470 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
 void Socket_Connect_internal_real_m49659 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, SocketAddress_t7143 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
 void Socket_Connect_internal_m49660 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, SocketAddress_t7143 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
 bool Socket_CheckEndPoint_m49661 (Object_t * __this/* static, unused */, SocketAddress_t7143 * ___sa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
 MethodInfo_t1087 * Socket_GetUnityCrossDomainHelperMethod_m49662 (Object_t * __this/* static, unused */, String_t* ___methodname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
 void Socket_Connect_m40466 (Socket_t4375 * __this, EndPoint_t5222 * ___remoteEP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
 void Socket_Connect_m49663 (Socket_t4375 * __this, EndPoint_t5222 * ___remoteEP, bool ___requireSocketPolicy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveAsync(System.Net.Sockets.SocketAsyncEventArgs)
 bool Socket_ReceiveAsync_m41890 (Socket_t4375 * __this, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendAsync(System.Net.Sockets.SocketAsyncEventArgs)
 bool Socket_SendAsync_m41891 (Socket_t4375 * __this, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
 bool Socket_Poll_internal_m49664 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
 int32_t Socket_Receive_internal_m49665 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
 int32_t Socket_Receive_nochecks_m49666 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
 void Socket_GetSocketOption_obj_internal_m49667 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t ___level, int32_t ___name, Object_t ** ___obj_val, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
 int32_t Socket_Send_internal_m49668 (Object_t * __this/* static, unused */, IntPtr_t24 ___sock, ByteU5BU5D_t1033* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
 int32_t Socket_Send_nochecks_m49669 (Socket_t4375 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
 Object_t * Socket_GetSocketOption_m49670 (Socket_t4375 * __this, int32_t ___optionLevel, int32_t ___optionName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
 void Socket_Shutdown_internal_m49671 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t ___how, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
 void Socket_Shutdown_m40469 (Socket_t4375 * __this, int32_t ___how, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
 void Socket_SetSocketOption_internal_m49672 (Object_t * __this/* static, unused */, IntPtr_t24 ___socket, int32_t ___level, int32_t ___name, Object_t * ___obj_val, ByteU5BU5D_t1033* ___byte_val, int32_t ___int_val, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
 void Socket_SetSocketOption_m49673 (Socket_t4375 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___optionValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
 void Socket_ThrowIfUpd_m49674 (Socket_t4375 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
