#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t7020;
// System.IO.TextReader
struct TextReader_t1019;
// System.String
struct String_t;

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
 void XmlParserInputSource__ctor_m48469 (XmlParserInputSource_t7020 * __this, TextReader_t1019 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
 int32_t XmlParserInputSource_get_LineNumber_m48470 (XmlParserInputSource_t7020 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
 int32_t XmlParserInputSource_get_LinePosition_m48471 (XmlParserInputSource_t7020 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
 void XmlParserInputSource_Close_m48472 (XmlParserInputSource_t7020 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
 int32_t XmlParserInputSource_Read_m48473 (XmlParserInputSource_t7020 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
