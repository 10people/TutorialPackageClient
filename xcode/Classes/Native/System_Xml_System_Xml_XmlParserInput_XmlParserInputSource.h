#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1019;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t7020  : public Object_t
{
	// System.String System.Xml.XmlParserInput/XmlParserInputSource::BaseURI
	String_t* ___BaseURI;
	// System.IO.TextReader System.Xml.XmlParserInput/XmlParserInputSource::reader
	TextReader_t1019 * ___reader;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::state
	int32_t ___state;
	// System.Boolean System.Xml.XmlParserInput/XmlParserInputSource::isPE
	bool ___isPE;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::line
	int32_t ___line;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::column
	int32_t ___column;
};
