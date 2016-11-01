#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ByteReader
struct ByteReader_t5348;
// System.Byte[]
struct ByteU5BU5D_t1033;
// UnityEngine.TextAsset
struct TextAsset_t1020;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;

// System.Void ByteReader::.ctor(System.Byte[])
 void ByteReader__ctor_m37815 (ByteReader_t5348 * __this, ByteU5BU5D_t1033* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.ctor(UnityEngine.TextAsset)
 void ByteReader__ctor_m37816 (ByteReader_t5348 * __this, TextAsset_t1020 * ___asset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ByteReader::get_canRead()
 bool ByteReader_get_canRead_m37817 (ByteReader_t5348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Byte[],System.Int32,System.Int32)
 String_t* ByteReader_ReadLine_m37818 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___buffer, int32_t ___start, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine()
 String_t* ByteReader_ReadLine_m37819 (ByteReader_t5348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> ByteReader::ReadDictionary()
 Dictionary_2_t908 * ByteReader_ReadDictionary_m37820 (ByteReader_t5348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
