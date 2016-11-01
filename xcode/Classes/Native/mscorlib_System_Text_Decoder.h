#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t8176;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t8175;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct Decoder_t7005  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t8176 * ___fallback;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t8175 * ___fallback_buffer;
};
