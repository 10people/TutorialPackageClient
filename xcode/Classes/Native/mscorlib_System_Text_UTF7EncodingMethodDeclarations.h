#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding
struct UTF7Encoding_t8194;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Text.Decoder
struct Decoder_t7005;
// System.String
struct String_t;

// System.Void System.Text.UTF7Encoding::.ctor()
 void UTF7Encoding__ctor_m56295 (UTF7Encoding_t8194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
 void UTF7Encoding__ctor_m56296 (UTF7Encoding_t8194 * __this, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
 void UTF7Encoding__cctor_m56297 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
 int32_t UTF7Encoding_GetHashCode_m56298 (UTF7Encoding_t8194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
 bool UTF7Encoding_Equals_m56299 (UTF7Encoding_t8194 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
 int32_t UTF7Encoding_InternalGetByteCount_m56300 (Object_t * __this/* static, unused */, CharU5BU5D_t1016* ___chars, int32_t ___index, int32_t ___count, bool ___flush, int32_t ___leftOver, bool ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m56301 (UTF7Encoding_t8194 * __this, CharU5BU5D_t1016* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
 int32_t UTF7Encoding_InternalGetBytes_m56302 (Object_t * __this/* static, unused */, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, bool ___flush, int32_t* ___leftOver, bool* ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF7Encoding_GetBytes_m56303 (UTF7Encoding_t8194 * __this, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
 int32_t UTF7Encoding_InternalGetCharCount_m56304 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bytes, int32_t ___index, int32_t ___count, int32_t ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetCharCount_m56305 (UTF7Encoding_t8194 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
 int32_t UTF7Encoding_InternalGetChars_m56306 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, int32_t* ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF7Encoding_GetChars_m56307 (UTF7Encoding_t8194 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1016* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF7Encoding_GetMaxByteCount_m56308 (UTF7Encoding_t8194 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF7Encoding_GetMaxCharCount_m56309 (UTF7Encoding_t8194 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
 Decoder_t7005 * UTF7Encoding_GetDecoder_m56310 (UTF7Encoding_t8194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m56311 (UTF7Encoding_t8194 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
 int32_t UTF7Encoding_GetByteCount_m56312 (UTF7Encoding_t8194 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF7Encoding_GetBytes_m56313 (UTF7Encoding_t8194 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF7Encoding_GetBytes_m56314 (UTF7Encoding_t8194 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1033* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF7Encoding_GetString_m56315 (UTF7Encoding_t8194 * __this, ByteU5BU5D_t1033* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
