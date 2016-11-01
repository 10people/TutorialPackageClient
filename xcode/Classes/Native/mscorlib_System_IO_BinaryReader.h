#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t1038;
// System.Text.Encoding
struct Encoding_t1037;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Text.Decoder
struct Decoder_t7005;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct BinaryReader_t7900  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1038 * ___m_stream;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t1037 * ___m_encoding;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t1033* ___m_buffer;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t7005 * ___decoder;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t1016* ___charBuffer;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed;
};
