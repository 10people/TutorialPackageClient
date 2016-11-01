#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t7050;
// System.Char[]
struct CharU5BU5D_t1016;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t8174;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t8175;
// System.Text.Decoder
struct Decoder_t7005;

// System.Void System.Text.ASCIIEncoding::.ctor()
 void ASCIIEncoding__ctor_m49011 (ASCIIEncoding_t7050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m56140 (ASCIIEncoding_t7050 * __this, CharU5BU5D_t1016* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
 int32_t ASCIIEncoding_GetByteCount_m56141 (ASCIIEncoding_t7050 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m56142 (ASCIIEncoding_t7050 * __this, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m56143 (ASCIIEncoding_t7050 * __this, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t8174 ** ___buffer, CharU5BU5D_t1016** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m56144 (ASCIIEncoding_t7050 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m56145 (ASCIIEncoding_t7050 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t8174 ** ___buffer, CharU5BU5D_t1016** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetCharCount_m56146 (ASCIIEncoding_t7050 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ASCIIEncoding_GetChars_m56147 (ASCIIEncoding_t7050 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
 int32_t ASCIIEncoding_GetChars_m56148 (ASCIIEncoding_t7050 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t8175 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxByteCount_m56149 (ASCIIEncoding_t7050 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxCharCount_m56150 (ASCIIEncoding_t7050 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* ASCIIEncoding_GetString_m56151 (ASCIIEncoding_t7050 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t ASCIIEncoding_GetBytes_m56152 (ASCIIEncoding_t7050 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m56153 (ASCIIEncoding_t7050 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
 Decoder_t7005 * ASCIIEncoding_GetDecoder_m56154 (ASCIIEncoding_t7050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
