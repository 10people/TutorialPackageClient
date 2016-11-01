#pragma once
#include <stdint.h>
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// SPacket.SocketInstance.SocketInstance
struct SocketInstance_t2204  : public Object_t
{
	// System.Net.Sockets.Socket SPacket.SocketInstance.SocketInstance::m_SocketID
	Socket_t4375 * ___m_SocketID;
	// System.String SPacket.SocketInstance.SocketInstance::m_host
	String_t* ___m_host;
	// System.Int32 SPacket.SocketInstance.SocketInstance::m_port
	int32_t ___m_port;
};
