#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding/UnicodeDecoder
struct UnicodeDecoder_t8196;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.Text.UnicodeEncoding/UnicodeDecoder::.ctor(System.Boolean)
 void UnicodeDecoder__ctor_m56345 (UnicodeDecoder_t8196 * __this, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UnicodeDecoder_GetChars_m56346 (UnicodeDecoder_t8196 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
