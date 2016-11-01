#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IO.Stream
struct Stream_t1038;
// System.Object
#include "mscorlib_System_Object.h"
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918  : public Object_t
{
	// System.Byte[] Google.ProtocolBuffers.CodedOutputStream::buffer
	ByteU5BU5D_t1033* ___buffer;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::limit
	int32_t ___limit;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::position
	int32_t ___position;
	// System.IO.Stream Google.ProtocolBuffers.CodedOutputStream::output
	Stream_t1038 * ___output;
};
struct CodedOutputStream_t2918_StaticFields{
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::LittleEndian64Size
	int32_t ___LittleEndian64Size;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::LittleEndian32Size
	int32_t ___LittleEndian32Size;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize;
};
