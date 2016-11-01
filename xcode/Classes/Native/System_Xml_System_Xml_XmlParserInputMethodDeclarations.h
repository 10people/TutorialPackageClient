#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlParserInput
struct XmlParserInput_t6963;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1019;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t6959;

// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
 void XmlParserInput__ctor_m48474 (XmlParserInput_t6963 * __this, TextReader_t1019 * ___reader, String_t* ___baseURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
 void XmlParserInput__ctor_m48475 (XmlParserInput_t6963 * __this, TextReader_t1019 * ___reader, String_t* ___baseURI, int32_t ___line, int32_t ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::Close()
 void XmlParserInput_Close_m48476 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
 void XmlParserInput_PushPEBuffer_m48477 (XmlParserInput_t6963 * __this, DTDParameterEntityDeclaration_t6959 * ___pe, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
 int32_t XmlParserInput_ReadSourceChar_m48478 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::PeekChar()
 int32_t XmlParserInput_PeekChar_m48479 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadChar()
 int32_t XmlParserInput_ReadChar_m48480 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserInput::get_BaseURI()
 String_t* XmlParserInput_get_BaseURI_m48481 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
 bool XmlParserInput_get_HasPEBuffer_m48482 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
 int32_t XmlParserInput_get_LineNumber_m48483 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
 int32_t XmlParserInput_get_LinePosition_m48484 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
 bool XmlParserInput_get_AllowTextDecl_m48485 (XmlParserInput_t6963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
 void XmlParserInput_set_AllowTextDecl_m48486 (XmlParserInput_t6963 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
