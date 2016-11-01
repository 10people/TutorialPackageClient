#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t1037;
// System.IO.Stream
struct Stream_t1038;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Char[]
struct CharU5BU5D_t1016;
// System.IO.StreamWriter
struct StreamWriter_t5523;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StreamWriter
struct StreamWriter_t5523  : public TextWriter_t1098
{
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1037 * ___internalEncoding;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1038 * ___internalStream;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t1033* ___byte_buf;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t1016* ___decode_buf;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done;
};
struct StreamWriter_t5523_StaticFields{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t5523 * ___Null;
};
