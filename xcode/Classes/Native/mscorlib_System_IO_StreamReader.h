#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Text.Encoding
struct Encoding_t1037;
// System.Text.Decoder
struct Decoder_t7005;
// System.IO.Stream
struct Stream_t1038;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.IO.StreamReader
struct StreamReader_t1018;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.StreamReader
struct StreamReader_t1018  : public TextReader_t1019
{
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t1033* ___input_buffer;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t1016* ___decoded_buffer;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1037 * ___encoding;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t7005 * ___decoder;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1038 * ___base_stream;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t1097 * ___line_builder;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR;
};
struct StreamReader_t1018_StaticFields{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t1018 * ___Null;
};
