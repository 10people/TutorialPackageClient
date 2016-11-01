#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IO.Stream
struct Stream_t1038;
// System.String
struct String_t;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;
// Google.ProtocolBuffers.WireFormat/WireType
#include "AssemblyU2DCSharp_Google_ProtocolBuffers_WireFormat_WireType.h"

// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
 void CodedOutputStream__ctor_m30882 (CodedOutputStream_t2918 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.IO.Stream,System.Byte[])
 void CodedOutputStream__ctor_m30883 (CodedOutputStream_t2918 * __this, Stream_t1038 * ___output, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::.cctor()
 void CodedOutputStream__cctor_m30884 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.IO.Stream)
 CodedOutputStream_t2918 * CodedOutputStream_CreateInstance_m30885 (Object_t * __this/* static, unused */, Stream_t1038 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.IO.Stream,System.Int32)
 CodedOutputStream_t2918 * CodedOutputStream_CreateInstance_m30886 (Object_t * __this/* static, unused */, Stream_t1038 * ___output, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[])
 CodedOutputStream_t2918 * CodedOutputStream_CreateInstance_m30887 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___flatArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
 CodedOutputStream_t2918 * CodedOutputStream_CreateInstance_m30888 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___flatArray, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteDouble(System.Int32,System.Double)
 void CodedOutputStream_WriteDouble_m30889 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloat(System.Int32,System.Single)
 void CodedOutputStream_WriteFloat_m30890 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteUInt64(System.Int32,System.UInt64)
 void CodedOutputStream_WriteUInt64_m30891 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt64(System.Int32,System.Int64)
 void CodedOutputStream_WriteInt64_m30892 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32(System.Int32,System.Int32)
 void CodedOutputStream_WriteInt32_m30893 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFixed64(System.Int32,System.UInt64)
 void CodedOutputStream_WriteFixed64_m30894 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFixed32(System.Int32,System.UInt32)
 void CodedOutputStream_WriteFixed32_m30895 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteBool(System.Int32,System.Boolean)
 void CodedOutputStream_WriteBool_m30896 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteString(System.Int32,System.String)
 void CodedOutputStream_WriteString_m30897 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteBytes(System.Int32,Google.ProtocolBuffers.ByteString)
 void CodedOutputStream_WriteBytes_m30898 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteUInt32(System.Int32,System.UInt32)
 void CodedOutputStream_WriteUInt32_m30899 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteEnum(System.Int32,System.Int32)
 void CodedOutputStream_WriteEnum_m30900 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSFixed32(System.Int32,System.Int32)
 void CodedOutputStream_WriteSFixed32_m30901 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSFixed64(System.Int32,System.Int64)
 void CodedOutputStream_WriteSFixed64_m30902 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSInt32(System.Int32,System.Int32)
 void CodedOutputStream_WriteSInt32_m30903 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSInt64(System.Int32,System.Int64)
 void CodedOutputStream_WriteSInt64_m30904 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteDoubleNoTag(System.Double)
 void CodedOutputStream_WriteDoubleNoTag_m30905 (CodedOutputStream_t2918 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
 void CodedOutputStream_WriteFloatNoTag_m30906 (CodedOutputStream_t2918 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteUInt64NoTag(System.UInt64)
 void CodedOutputStream_WriteUInt64NoTag_m30907 (CodedOutputStream_t2918 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt64NoTag(System.Int64)
 void CodedOutputStream_WriteInt64NoTag_m30908 (CodedOutputStream_t2918 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
 void CodedOutputStream_WriteInt32NoTag_m30909 (CodedOutputStream_t2918 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFixed64NoTag(System.UInt64)
 void CodedOutputStream_WriteFixed64NoTag_m30910 (CodedOutputStream_t2918 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFixed32NoTag(System.UInt32)
 void CodedOutputStream_WriteFixed32NoTag_m30911 (CodedOutputStream_t2918 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteBoolNoTag(System.Boolean)
 void CodedOutputStream_WriteBoolNoTag_m30912 (CodedOutputStream_t2918 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteStringNoTag(System.String)
 void CodedOutputStream_WriteStringNoTag_m30913 (CodedOutputStream_t2918 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteBytesNoTag(Google.ProtocolBuffers.ByteString)
 void CodedOutputStream_WriteBytesNoTag_m30914 (CodedOutputStream_t2918 * __this, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteUInt32NoTag(System.UInt32)
 void CodedOutputStream_WriteUInt32NoTag_m30915 (CodedOutputStream_t2918 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteEnumNoTag(System.Int32)
 void CodedOutputStream_WriteEnumNoTag_m30916 (CodedOutputStream_t2918 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSFixed32NoTag(System.Int32)
 void CodedOutputStream_WriteSFixed32NoTag_m30917 (CodedOutputStream_t2918 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSFixed64NoTag(System.Int64)
 void CodedOutputStream_WriteSFixed64NoTag_m30918 (CodedOutputStream_t2918 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSInt32NoTag(System.Int32)
 void CodedOutputStream_WriteSInt32NoTag_m30919 (CodedOutputStream_t2918 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteSInt64NoTag(System.Int64)
 void CodedOutputStream_WriteSInt64NoTag_m30920 (CodedOutputStream_t2918 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
 void CodedOutputStream_WriteTag_m30921 (CodedOutputStream_t2918 * __this, int32_t ___fieldNumber, uint32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::SlowWriteRawVarint32(System.UInt32)
 void CodedOutputStream_SlowWriteRawVarint32_m30922 (CodedOutputStream_t2918 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
 void CodedOutputStream_WriteRawVarint32_m30923 (CodedOutputStream_t2918 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
 void CodedOutputStream_WriteRawVarint64_m30924 (CodedOutputStream_t2918 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawLittleEndian32(System.UInt32)
 void CodedOutputStream_WriteRawLittleEndian32_m30925 (CodedOutputStream_t2918 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawLittleEndian64(System.UInt64)
 void CodedOutputStream_WriteRawLittleEndian64_m30926 (CodedOutputStream_t2918 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
 void CodedOutputStream_WriteRawByte_m30927 (CodedOutputStream_t2918 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.UInt32)
 void CodedOutputStream_WriteRawByte_m30928 (CodedOutputStream_t2918 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[])
 void CodedOutputStream_WriteRawBytes_m30929 (CodedOutputStream_t2918 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
 void CodedOutputStream_WriteRawBytes_m30930 (CodedOutputStream_t2918 * __this, ByteU5BU5D_t1033* ___value, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeDoubleSize(System.Int32,System.Double)
 int32_t CodedOutputStream_ComputeDoubleSize_m30931 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
 int32_t CodedOutputStream_ComputeFloatSize_m30932 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeUInt64Size(System.Int32,System.UInt64)
 int32_t CodedOutputStream_ComputeUInt64Size_m30933 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt64Size(System.Int32,System.Int64)
 int32_t CodedOutputStream_ComputeInt64Size_m30934 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
 int32_t CodedOutputStream_ComputeInt32Size_m30935 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFixed64Size(System.Int32,System.UInt64)
 int32_t CodedOutputStream_ComputeFixed64Size_m30936 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFixed32Size(System.Int32,System.UInt32)
 int32_t CodedOutputStream_ComputeFixed32Size_m30937 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeBoolSize(System.Int32,System.Boolean)
 int32_t CodedOutputStream_ComputeBoolSize_m30938 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeStringSize(System.Int32,System.String)
 int32_t CodedOutputStream_ComputeStringSize_m30939 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeBytesSize(System.Int32,Google.ProtocolBuffers.ByteString)
 int32_t CodedOutputStream_ComputeBytesSize_m30940 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeUInt32Size(System.Int32,System.UInt32)
 int32_t CodedOutputStream_ComputeUInt32Size_m30941 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSize(System.Int32,System.Int32)
 int32_t CodedOutputStream_ComputeEnumSize_m30942 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSFixed32Size(System.Int32,System.Int32)
 int32_t CodedOutputStream_ComputeSFixed32Size_m30943 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSFixed64Size(System.Int32,System.Int64)
 int32_t CodedOutputStream_ComputeSFixed64Size_m30944 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSInt32Size(System.Int32,System.Int32)
 int32_t CodedOutputStream_ComputeSInt32Size_m30945 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSInt64Size(System.Int32,System.Int64)
 int32_t CodedOutputStream_ComputeSInt64Size_m30946 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeDoubleSizeNoTag(System.Double)
 int32_t CodedOutputStream_ComputeDoubleSizeNoTag_m30947 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSizeNoTag(System.Single)
 int32_t CodedOutputStream_ComputeFloatSizeNoTag_m30948 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeUInt64SizeNoTag(System.UInt64)
 int32_t CodedOutputStream_ComputeUInt64SizeNoTag_m30949 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt64SizeNoTag(System.Int64)
 int32_t CodedOutputStream_ComputeInt64SizeNoTag_m30950 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
 int32_t CodedOutputStream_ComputeInt32SizeNoTag_m30951 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFixed64SizeNoTag(System.UInt64)
 int32_t CodedOutputStream_ComputeFixed64SizeNoTag_m30952 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFixed32SizeNoTag(System.UInt32)
 int32_t CodedOutputStream_ComputeFixed32SizeNoTag_m30953 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeBoolSizeNoTag(System.Boolean)
 int32_t CodedOutputStream_ComputeBoolSizeNoTag_m30954 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeStringSizeNoTag(System.String)
 int32_t CodedOutputStream_ComputeStringSizeNoTag_m30955 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeBytesSizeNoTag(Google.ProtocolBuffers.ByteString)
 int32_t CodedOutputStream_ComputeBytesSizeNoTag_m30956 (Object_t * __this/* static, unused */, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeUInt32SizeNoTag(System.UInt32)
 int32_t CodedOutputStream_ComputeUInt32SizeNoTag_m30957 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
 int32_t CodedOutputStream_ComputeEnumSizeNoTag_m30958 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSFixed32SizeNoTag(System.Int32)
 int32_t CodedOutputStream_ComputeSFixed32SizeNoTag_m30959 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSFixed64SizeNoTag(System.Int64)
 int32_t CodedOutputStream_ComputeSFixed64SizeNoTag_m30960 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSInt32SizeNoTag(System.Int32)
 int32_t CodedOutputStream_ComputeSInt32SizeNoTag_m30961 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeSInt64SizeNoTag(System.Int64)
 int32_t CodedOutputStream_ComputeSInt64SizeNoTag_m30962 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawMessageSetExtensionSize(System.Int32,Google.ProtocolBuffers.ByteString)
 int32_t CodedOutputStream_ComputeRawMessageSetExtensionSize_m30963 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, ByteString_t3022 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
 int32_t CodedOutputStream_ComputeRawVarint32Size_m30964 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
 int32_t CodedOutputStream_ComputeRawVarint64Size_m30965 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
 int32_t CodedOutputStream_ComputeTagSize_m30966 (Object_t * __this/* static, unused */, int32_t ___fieldNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedOutputStream::EncodeZigZag32(System.Int32)
 uint32_t CodedOutputStream_EncodeZigZag32_m30967 (Object_t * __this/* static, unused */, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedOutputStream::EncodeZigZag64(System.Int64)
 uint64_t CodedOutputStream_EncodeZigZag64_m30968 (Object_t * __this/* static, unused */, int64_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
 void CodedOutputStream_RefreshBuffer_m30969 (CodedOutputStream_t2918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::Flush()
 void CodedOutputStream_Flush_m30970 (CodedOutputStream_t2918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::CheckNoSpaceLeft()
 void CodedOutputStream_CheckNoSpaceLeft_m30971 (CodedOutputStream_t2918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
 int32_t CodedOutputStream_get_SpaceLeft_m30972 (CodedOutputStream_t2918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
