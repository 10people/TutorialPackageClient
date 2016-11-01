#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t4794;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t8138  : public Object_t
{
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t4794* ____H;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t1033* ____ProcessingBuffer;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t4794* ___buff;
};
