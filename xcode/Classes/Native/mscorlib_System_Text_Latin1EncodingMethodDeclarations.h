#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Latin1Encoding
struct Latin1Encoding_t8189;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t8174;

// System.Void System.Text.Latin1Encoding::.ctor()
 void Latin1Encoding__ctor_m56244 (Latin1Encoding_t8189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetByteCount_m56245 (Latin1Encoding_t8189 * __this, CharU5BU5D_t1016* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
 int32_t Latin1Encoding_GetByteCount_m56246 (Latin1Encoding_t8189 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m56247 (Latin1Encoding_t8189 * __this, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m56248 (Latin1Encoding_t8189 * __this, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t8174 ** ___buffer, CharU5BU5D_t1016** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m56249 (Latin1Encoding_t8189 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m56250 (Latin1Encoding_t8189 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t8174 ** ___buffer, CharU5BU5D_t1016** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetCharCount_m56251 (Latin1Encoding_t8189 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t Latin1Encoding_GetChars_m56252 (Latin1Encoding_t8189 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
 int32_t Latin1Encoding_GetMaxByteCount_m56253 (Latin1Encoding_t8189 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
 int32_t Latin1Encoding_GetMaxCharCount_m56254 (Latin1Encoding_t8189 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Latin1Encoding_GetString_m56255 (Latin1Encoding_t8189 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
 String_t* Latin1Encoding_GetString_m56256 (Latin1Encoding_t8189 * __this, ByteU5BU5D_t1033* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_HeaderName()
 String_t* Latin1Encoding_get_HeaderName_m56257 (Latin1Encoding_t8189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_WebName()
 String_t* Latin1Encoding_get_WebName_m56258 (Latin1Encoding_t8189 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
