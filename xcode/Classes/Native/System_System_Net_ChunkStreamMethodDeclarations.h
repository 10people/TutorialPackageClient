#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ChunkStream
struct ChunkStream_t7158;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.String
struct String_t;
// System.Net.ChunkStream/State
#include "System_System_Net_ChunkStream_State.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
 void ChunkStream__ctor_m49728 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, WebHeaderCollection_t7157 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
 void ChunkStream__ctor_m49729 (ChunkStream_t7158 * __this, WebHeaderCollection_t7157 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
 void ChunkStream_ResetBuffer_m49730 (ChunkStream_t7158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
 void ChunkStream_WriteAndReadBack_m49731 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___read, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t ChunkStream_Read_m49732 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
 int32_t ChunkStream_ReadFromChunks_m49733 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
 void ChunkStream_Write_m49734 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
 void ChunkStream_InternalWrite_m49735 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
 bool ChunkStream_get_WantMore_m49736 (ChunkStream_t7158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
 int32_t ChunkStream_get_ChunkLeft_m49737 (ChunkStream_t7158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_ReadBody_m49738 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_GetChunkSize_m49739 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
 String_t* ChunkStream_RemoveChunkExtension_m49740 (Object_t * __this/* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_ReadCRLF_m49741 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
 int32_t ChunkStream_ReadTrailer_m49742 (ChunkStream_t7158 * __this, ByteU5BU5D_t1033* ___buffer, int32_t* ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
 void ChunkStream_ThrowProtocolViolation_m49743 (Object_t * __this/* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
