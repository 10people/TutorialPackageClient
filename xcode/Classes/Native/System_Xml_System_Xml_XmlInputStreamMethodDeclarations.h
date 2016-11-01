#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlInputStream
struct XmlInputStream_t7002;
// System.Text.Encoding
struct Encoding_t1037;
// System.IO.Stream
struct Stream_t1038;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
 void XmlInputStream__ctor_m48322 (XmlInputStream_t7002 * __this, Stream_t1038 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::.cctor()
 void XmlInputStream__cctor_m48323 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlInputStream::GetStringFromBytes(System.Byte[],System.Int32,System.Int32)
 String_t* XmlInputStream_GetStringFromBytes_m48324 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Initialize(System.IO.Stream)
 void XmlInputStream_Initialize_m48325 (XmlInputStream_t7002 * __this, Stream_t1038 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByteSpecial()
 int32_t XmlInputStream_ReadByteSpecial_m48326 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::SkipWhitespace()
 int32_t XmlInputStream_SkipWhitespace_m48327 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
 Encoding_t1037 * XmlInputStream_get_ActualEncoding_m48328 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanRead()
 bool XmlInputStream_get_CanRead_m48329 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanSeek()
 bool XmlInputStream_get_CanSeek_m48330 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanWrite()
 bool XmlInputStream_get_CanWrite_m48331 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Length()
 int64_t XmlInputStream_get_Length_m48332 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Position()
 int64_t XmlInputStream_get_Position_m48333 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::set_Position(System.Int64)
 void XmlInputStream_set_Position_m48334 (XmlInputStream_t7002 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Close()
 void XmlInputStream_Close_m48335 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Flush()
 void XmlInputStream_Flush_m48336 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t XmlInputStream_Read_m48337 (XmlInputStream_t7002 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByte()
 int32_t XmlInputStream_ReadByte_m48338 (XmlInputStream_t7002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t XmlInputStream_Seek_m48339 (XmlInputStream_t7002 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::SetLength(System.Int64)
 void XmlInputStream_SetLength_m48340 (XmlInputStream_t7002 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Write(System.Byte[],System.Int32,System.Int32)
 void XmlInputStream_Write_m48341 (XmlInputStream_t7002 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
