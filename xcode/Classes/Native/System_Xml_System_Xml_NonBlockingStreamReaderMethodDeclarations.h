#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_t7004;
// System.Text.Encoding
struct Encoding_t1037;
// System.IO.Stream
struct Stream_t1038;
// System.Char[]
struct CharU5BU5D_t1016;
// System.String
struct String_t;

// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void NonBlockingStreamReader__ctor_m48311 (NonBlockingStreamReader_t7004 * __this, Stream_t1038 * ___stream, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.NonBlockingStreamReader::get_Encoding()
 Encoding_t1037 * NonBlockingStreamReader_get_Encoding_m48312 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Close()
 void NonBlockingStreamReader_Close_m48313 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
 void NonBlockingStreamReader_Dispose_m48314 (NonBlockingStreamReader_t7004 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::ReadBuffer()
 int32_t NonBlockingStreamReader_ReadBuffer_m48315 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Peek()
 int32_t NonBlockingStreamReader_Peek_m48316 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read()
 int32_t NonBlockingStreamReader_Read_m48317 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t NonBlockingStreamReader_Read_m48318 (NonBlockingStreamReader_t7004 * __this, CharU5BU5D_t1016* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::FindNextEOL()
 int32_t NonBlockingStreamReader_FindNextEOL_m48319 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadLine()
 String_t* NonBlockingStreamReader_ReadLine_m48320 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadToEnd()
 String_t* NonBlockingStreamReader_ReadToEnd_m48321 (NonBlockingStreamReader_t7004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
