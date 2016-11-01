#pragma once
#include <stdint.h>
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t8190  : public Decoder_t7005
{
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength;
};
