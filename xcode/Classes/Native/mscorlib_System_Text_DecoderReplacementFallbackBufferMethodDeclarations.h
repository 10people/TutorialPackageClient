#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t8181;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8180;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
 void DecoderReplacementFallbackBuffer__ctor_m56182 (DecoderReplacementFallbackBuffer_t8181 * __this, DecoderReplacementFallback_t8180 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
 int32_t DecoderReplacementFallbackBuffer_get_Remaining_m56183 (DecoderReplacementFallbackBuffer_t8181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
 bool DecoderReplacementFallbackBuffer_Fallback_m56184 (DecoderReplacementFallbackBuffer_t8181 * __this, ByteU5BU5D_t1033* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
 uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m56185 (DecoderReplacementFallbackBuffer_t8181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
 void DecoderReplacementFallbackBuffer_Reset_m56186 (DecoderReplacementFallbackBuffer_t8181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
