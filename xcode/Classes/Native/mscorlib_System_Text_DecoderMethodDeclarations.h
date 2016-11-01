#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t7005;
// System.Text.DecoderFallback
struct DecoderFallback_t8176;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t8175;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.Text.Decoder::.ctor()
 void Decoder__ctor_m56155 (Decoder_t7005 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
 void Decoder_set_Fallback_m56156 (Decoder_t7005 * __this, DecoderFallback_t8176 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
 DecoderFallbackBuffer_t8175 * Decoder_get_FallbackBuffer_m56157 (Decoder_t7005 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
