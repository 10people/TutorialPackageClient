#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.DecoderFallbackBuffer
#include "mscorlib_System_Text_DecoderFallbackBuffer.h"
// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t8181  : public DecoderFallbackBuffer_t8175
{
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement;
};
