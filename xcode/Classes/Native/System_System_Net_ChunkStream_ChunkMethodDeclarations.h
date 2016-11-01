#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ChunkStream/Chunk
struct Chunk_t7156;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Net.ChunkStream/Chunk::.ctor(System.Byte[])
 void Chunk__ctor_m49726 (Chunk_t7156 * __this, ByteU5BU5D_t1033* ___chunk, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
 int32_t Chunk_Read_m49727 (Chunk_t7156 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
