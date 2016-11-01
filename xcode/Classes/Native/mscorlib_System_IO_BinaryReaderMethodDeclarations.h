#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryReader
struct BinaryReader_t7900;
// System.IO.Stream
struct Stream_t1038;
// System.Text.Encoding
struct Encoding_t1037;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Char[]
struct CharU5BU5D_t1016;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
 void BinaryReader__ctor_m54518 (BinaryReader_t7900 * __this, Stream_t1038 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void BinaryReader__ctor_m54519 (BinaryReader_t7900 * __this, Stream_t1038 * ___input, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
 void BinaryReader_System_IDisposable_Dispose_m54520 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
 void BinaryReader_Dispose_m54521 (BinaryReader_t7900 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
 void BinaryReader_FillBuffer_m54522 (BinaryReader_t7900 * __this, int32_t ___numBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
 int32_t BinaryReader_Read_m54523 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m54524 (BinaryReader_t7900 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t BinaryReader_Read_m54525 (BinaryReader_t7900 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
 int32_t BinaryReader_ReadCharBytes_m54526 (BinaryReader_t7900 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
 int32_t BinaryReader_Read7BitEncodedInt_m54527 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
 bool BinaryReader_ReadBoolean_m54528 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
 uint8_t BinaryReader_ReadByte_m54529 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
 uint16_t BinaryReader_ReadChar_m54530 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
 Decimal_t1099  BinaryReader_ReadDecimal_m54531 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
 double BinaryReader_ReadDouble_m54532 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
 int16_t BinaryReader_ReadInt16_m54533 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
 int32_t BinaryReader_ReadInt32_m54534 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
 int64_t BinaryReader_ReadInt64_m54535 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
 int8_t BinaryReader_ReadSByte_m54536 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
 String_t* BinaryReader_ReadString_m54537 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
 float BinaryReader_ReadSingle_m54538 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
 uint16_t BinaryReader_ReadUInt16_m54539 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
 uint32_t BinaryReader_ReadUInt32_m54540 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
 uint64_t BinaryReader_ReadUInt64_m54541 (BinaryReader_t7900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
 void BinaryReader_CheckBuffer_m54542 (BinaryReader_t7900 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
