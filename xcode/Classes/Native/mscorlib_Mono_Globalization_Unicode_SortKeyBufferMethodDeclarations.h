#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t7788;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Globalization.SortKey
struct SortKey_t7787;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void Mono.Globalization.Unicode.SortKeyBuffer::.ctor(System.Int32)
 void SortKeyBuffer__ctor_m53664 (SortKeyBuffer_t7788 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Reset()
 void SortKeyBuffer_Reset_m53665 (SortKeyBuffer_t7788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Initialize(System.Globalization.CompareOptions,System.Int32,System.String,System.Boolean)
 void SortKeyBuffer_Initialize_m53666 (SortKeyBuffer_t7788 * __this, int32_t ___options, int32_t ___lcid, String_t* ___s, bool ___frenchSort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendCJKExtension(System.Byte,System.Byte)
 void SortKeyBuffer_AppendCJKExtension_m53667 (SortKeyBuffer_t7788 * __this, uint8_t ___lv1msb, uint8_t ___lv1lsb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendKana(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean,System.Byte,System.Boolean,System.Boolean)
 void SortKeyBuffer_AppendKana_m53668 (SortKeyBuffer_t7788 * __this, uint8_t ___category, uint8_t ___lv1, uint8_t ___lv2, uint8_t ___lv3, bool ___isSmallKana, uint8_t ___markType, bool ___isKatakana, bool ___isHalfWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendNormal(System.Byte,System.Byte,System.Byte,System.Byte)
 void SortKeyBuffer_AppendNormal_m53669 (SortKeyBuffer_t7788 * __this, uint8_t ___category, uint8_t ___lv1, uint8_t ___lv2, uint8_t ___lv3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendLevel5(System.Byte,System.Byte)
 void SortKeyBuffer_AppendLevel5_m53670 (SortKeyBuffer_t7788 * __this, uint8_t ___category, uint8_t ___lv1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendBufferPrimitive(System.Byte,System.Byte[]&,System.Int32&)
 void SortKeyBuffer_AppendBufferPrimitive_m53671 (SortKeyBuffer_t7788 * __this, uint8_t ___value, ByteU5BU5D_t1033** ___buf, int32_t* ___bidx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResultAndReset()
 SortKey_t7787 * SortKeyBuffer_GetResultAndReset_m53672 (SortKeyBuffer_t7788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::GetOptimizedLength(System.Byte[],System.Int32,System.Byte)
 int32_t SortKeyBuffer_GetOptimizedLength_m53673 (SortKeyBuffer_t7788 * __this, ByteU5BU5D_t1033* ___data, int32_t ___len, uint8_t ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResult()
 SortKey_t7787 * SortKeyBuffer_GetResult_m53674 (SortKeyBuffer_t7788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
