#pragma once
#include <stdint.h>
// SPacket.SocketInstance.SocketInstance
struct SocketInstance_t2204;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Object
#include "mscorlib_System_Object.h"
// SPacket.SocketInstance.SocketInputStream
struct SocketInputStream_t2206  : public Object_t
{
	// SPacket.SocketInstance.SocketInstance SPacket.SocketInstance.SocketInputStream::m_pSocket
	SocketInstance_t2204 * ___m_pSocket;
	// System.Byte[] SPacket.SocketInstance.SocketInputStream::m_Buffer
	ByteU5BU5D_t1033* ___m_Buffer;
	// System.Byte[] SPacket.SocketInstance.SocketInputStream::m_BufferTemp
	ByteU5BU5D_t1033* ___m_BufferTemp;
	// System.UInt32 SPacket.SocketInstance.SocketInputStream::m_BufferLen
	uint32_t ___m_BufferLen;
	// System.UInt32 SPacket.SocketInstance.SocketInputStream::m_MaxBufferLen
	uint32_t ___m_MaxBufferLen;
	// System.UInt32 SPacket.SocketInstance.SocketInputStream::m_Head
	uint32_t ___m_Head;
	// System.UInt32 SPacket.SocketInstance.SocketInputStream::m_Tail
	uint32_t ___m_Tail;
};
