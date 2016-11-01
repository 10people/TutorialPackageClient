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
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_t7004  : public TextReader_t1019
{
	// System.Byte[] System.Xml.NonBlockingStreamReader::input_buffer
	ByteU5BU5D_t1033* ___input_buffer;
	// System.Char[] System.Xml.NonBlockingStreamReader::decoded_buffer
	CharU5BU5D_t1016* ___decoded_buffer;
	// System.Int32 System.Xml.NonBlockingStreamReader::decoded_count
	int32_t ___decoded_count;
	// System.Int32 System.Xml.NonBlockingStreamReader::pos
	int32_t ___pos;
	// System.Int32 System.Xml.NonBlockingStreamReader::buffer_size
	int32_t ___buffer_size;
	// System.Text.Encoding System.Xml.NonBlockingStreamReader::encoding
	Encoding_t1037 * ___encoding;
	// System.Text.Decoder System.Xml.NonBlockingStreamReader::decoder
	Decoder_t7005 * ___decoder;
	// System.IO.Stream System.Xml.NonBlockingStreamReader::base_stream
	Stream_t1038 * ___base_stream;
	// System.Boolean System.Xml.NonBlockingStreamReader::mayBlock
	bool ___mayBlock;
	// System.Text.StringBuilder System.Xml.NonBlockingStreamReader::line_builder
	StringBuilder_t1097 * ___line_builder;
	// System.Boolean System.Xml.NonBlockingStreamReader::foundCR
	bool ___foundCR;
};
