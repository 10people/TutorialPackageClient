#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t1037;
// System.IO.Stream
struct Stream_t1038;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Xml.XmlException
struct XmlException_t6940;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlInputStream
struct XmlInputStream_t7002  : public Stream_t1038
{
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t1037 * ___enc;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t1038 * ___stream;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t1033* ___buffer;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos;
};
struct XmlInputStream_t7002_StaticFields{
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t1037 * ___StrictUTF8;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t6940 * ___encodingException;
};
