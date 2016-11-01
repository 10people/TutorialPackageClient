#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IO.Stream
struct Stream_t1038;
// System.String
struct String_t;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;

// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
 void CodedInputStream__ctor_m30836 (CodedInputStream_t2919 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
 void CodedInputStream__ctor_m30837 (CodedInputStream_t2919 * __this, Stream_t1038 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.IO.Stream)
 CodedInputStream_t2919 * CodedInputStream_CreateInstance_m30838 (Object_t * __this/* static, unused */, Stream_t1038 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
 CodedInputStream_t2919 * CodedInputStream_CreateInstance_m30839 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___buf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
 CodedInputStream_t2919 * CodedInputStream_CreateInstance_m30840 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___buf, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
 void CodedInputStream_CheckLastTagWas_m30841 (CodedInputStream_t2919 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadTag()
 uint32_t CodedInputStream_ReadTag_m30842 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Google.ProtocolBuffers.CodedInputStream::ReadDouble()
 double CodedInputStream_ReadDouble_m30843 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Google.ProtocolBuffers.CodedInputStream::ReadFloat()
 float CodedInputStream_ReadFloat_m30844 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadUInt64()
 uint64_t CodedInputStream_ReadUInt64_m30845 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.ProtocolBuffers.CodedInputStream::ReadInt64()
 int64_t CodedInputStream_ReadInt64_m30846 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::ReadInt32()
 int32_t CodedInputStream_ReadInt32_m30847 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadFixed64()
 uint64_t CodedInputStream_ReadFixed64_m30848 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadFixed32()
 uint32_t CodedInputStream_ReadFixed32_m30849 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadBool()
 bool CodedInputStream_ReadBool_m30850 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.ProtocolBuffers.CodedInputStream::ReadString()
 String_t* CodedInputStream_ReadString_m30851 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadMessage(PacketDistributed)
 void CodedInputStream_ReadMessage_m30852 (CodedInputStream_t2919 * __this, PacketDistributed_t2209 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.CodedInputStream::ReadBytes()
 ByteString_t3022 * CodedInputStream_ReadBytes_m30853 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadUInt32()
 uint32_t CodedInputStream_ReadUInt32_m30854 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::ReadEnum()
 int32_t CodedInputStream_ReadEnum_m30855 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::ReadSFixed32()
 int32_t CodedInputStream_ReadSFixed32_m30856 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.ProtocolBuffers.CodedInputStream::ReadSFixed64()
 int64_t CodedInputStream_ReadSFixed64_m30857 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::ReadSInt32()
 int32_t CodedInputStream_ReadSInt32_m30858 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.ProtocolBuffers.CodedInputStream::ReadSInt64()
 int64_t CodedInputStream_ReadSInt64_m30859 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
 uint32_t CodedInputStream_SlowReadRawVarint32_m30860 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
 uint32_t CodedInputStream_ReadRawVarint32_m30861 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32(System.IO.Stream)
 uint32_t CodedInputStream_ReadRawVarint32_m30862 (Object_t * __this/* static, unused */, Stream_t1038 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
 uint64_t CodedInputStream_ReadRawVarint64_m30863 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
 uint32_t CodedInputStream_ReadRawLittleEndian32_m30864 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
 uint64_t CodedInputStream_ReadRawLittleEndian64_m30865 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::DecodeZigZag32(System.UInt32)
 int32_t CodedInputStream_DecodeZigZag32_m30866 (Object_t * __this/* static, unused */, uint32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.ProtocolBuffers.CodedInputStream::DecodeZigZag64(System.UInt64)
 int64_t CodedInputStream_DecodeZigZag64_m30867 (Object_t * __this/* static, unused */, uint64_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::SetRecursionLimit(System.Int32)
 int32_t CodedInputStream_SetRecursionLimit_m30868 (CodedInputStream_t2919 * __this, int32_t ___limit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::SetSizeLimit(System.Int32)
 int32_t CodedInputStream_SetSizeLimit_m30869 (CodedInputStream_t2919 * __this, int32_t ___limit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::ResetSizeCounter()
 void CodedInputStream_ResetSizeCounter_m30870 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
 int32_t CodedInputStream_PushLimit_m30871 (CodedInputStream_t2919 * __this, int32_t ___byteLimit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
 void CodedInputStream_RecomputeBufferSizeAfterLimit_m30872 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
 void CodedInputStream_PopLimit_m30873 (CodedInputStream_t2919 * __this, int32_t ___oldLimit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
 bool CodedInputStream_get_ReachedLimit_m30874 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
 bool CodedInputStream_get_IsAtEnd_m30875 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
 bool CodedInputStream_RefillBuffer_m30876 (CodedInputStream_t2919 * __this, bool ___mustSucceed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
 uint8_t CodedInputStream_ReadRawByte_m30877 (CodedInputStream_t2919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
 ByteU5BU5D_t1033* CodedInputStream_ReadRawBytes_m30878 (CodedInputStream_t2919 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
 void CodedInputStream_SkipRawBytes_m30879 (CodedInputStream_t2919 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
 void CodedInputStream_SkipImpl_m30880 (CodedInputStream_t2919 * __this, int32_t ___amountToSkip, MethodInfo* method) IL2CPP_METHOD_ATTR;
