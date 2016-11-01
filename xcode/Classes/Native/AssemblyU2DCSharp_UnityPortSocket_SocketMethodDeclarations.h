#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityPortSocket.Socket
struct Socket_t5221;
// System.Net.EndPoint
struct EndPoint_t5222;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Object
struct Object_t;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t5223;
// UnityPortSocket.AddressFamily
#include "AssemblyU2DCSharp_UnityPortSocket_AddressFamily.h"
// UnityPortSocket.SocketType
#include "AssemblyU2DCSharp_UnityPortSocket_SocketType.h"
// UnityPortSocket.ProtocolType
#include "AssemblyU2DCSharp_UnityPortSocket_ProtocolType.h"
// UnityPortSocket.SocketShutdown
#include "AssemblyU2DCSharp_UnityPortSocket_SocketShutdown.h"
// UnityPortSocket.SelectMode
#include "AssemblyU2DCSharp_UnityPortSocket_SelectMode.h"
// UnityPortSocket.SocketFlags
#include "AssemblyU2DCSharp_UnityPortSocket_SocketFlags.h"

// System.Void UnityPortSocket.Socket::.ctor(UnityPortSocket.AddressFamily,UnityPortSocket.SocketType,UnityPortSocket.ProtocolType)
 void Socket__ctor_m37186 (Socket_t5221 * __this, int32_t ___af, int32_t ___st, int32_t ___pt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityPortSocket.Socket::get_Connected()
 bool Socket_get_Connected_m37187 (Socket_t5221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityPortSocket.Socket::get_Available()
 int32_t Socket_get_Available_m37188 (Socket_t5221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityPortSocket.Socket::get_ForceReconnect()
 bool Socket_get_ForceReconnect_m37189 (Socket_t5221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortSocket.Socket::Connect(System.Net.EndPoint)
 void Socket_Connect_m37190 (Socket_t5221 * __this, EndPoint_t5222 * ___ep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortSocket.Socket::Shutdown(UnityPortSocket.SocketShutdown)
 void Socket_Shutdown_m37191 (Socket_t5221 * __this, int32_t ___ssd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityPortSocket.Socket::Poll(System.UInt32,UnityPortSocket.SelectMode)
 bool Socket_Poll_m37192 (Socket_t5221 * __this, uint32_t ___id, int32_t ___sm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortSocket.Socket::Close()
 void Socket_Close_m37193 (Socket_t5221 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityPortSocket.Socket::Receive(System.Byte[],System.Int32,UnityPortSocket.SocketFlags)
 uint32_t Socket_Receive_m37194 (Socket_t5221 * __this, ByteU5BU5D_t1033* ___buff, int32_t ___len, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityPortSocket.Socket::Send(System.Byte[],System.Int32,UnityPortSocket.SocketFlags)
 uint32_t Socket_Send_m37195 (Socket_t5221 * __this, ByteU5BU5D_t1033* ___buff, int32_t ___len, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortSocket.Socket::<Connect>m__2F(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
 void Socket_U3CConnectU3Em__2F_m37196 (Socket_t5221 * __this, Object_t * ___o, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortSocket.Socket::<Receive>m__30(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
 void Socket_U3CReceiveU3Em__30_m37197 (Socket_t5221 * __this, Object_t * ___s, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortSocket.Socket::<Send>m__31(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
 void Socket_U3CSendU3Em__31_m37198 (Object_t * __this/* static, unused */, Object_t * ___s, SocketAsyncEventArgs_t5223 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
