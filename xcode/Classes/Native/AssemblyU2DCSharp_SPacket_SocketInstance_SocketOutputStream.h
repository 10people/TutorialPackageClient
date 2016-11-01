#pragma once
#include <stdint.h>
// SPacket.SocketInstance.SocketInstance
struct SocketInstance_t2204;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Object
#include "mscorlib_System_Object.h"
// SPacket.SocketInstance.SocketOutputStream
struct SocketOutputStream_t2207  : public Object_t
{
	// SPacket.SocketInstance.SocketInstance SPacket.SocketInstance.SocketOutputStream::m_pSocket
	SocketInstance_t2204 * ___m_pSocket;
	// System.Byte[] SPacket.SocketInstance.SocketOutputStream::m_Buffer
	ByteU5BU5D_t1033* ___m_Buffer;
	// System.Byte[] SPacket.SocketInstance.SocketOutputStream::m_BufferTemp
	ByteU5BU5D_t1033* ___m_BufferTemp;
	// System.UInt32 SPacket.SocketInstance.SocketOutputStream::m_BufferLen
	uint32_t ___m_BufferLen;
	// System.UInt32 SPacket.SocketInstance.SocketOutputStream::m_MaxBufferLen
	uint32_t ___m_MaxBufferLen;
	// System.UInt32 SPacket.SocketInstance.SocketOutputStream::m_Head
	uint32_t ___m_Head;
	// System.UInt32 SPacket.SocketInstance.SocketOutputStream::m_Tail
	uint32_t ___m_Tail;
};
