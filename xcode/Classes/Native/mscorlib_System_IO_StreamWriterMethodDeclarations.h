#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamWriter
struct StreamWriter_t5523;
// System.IO.Stream
struct Stream_t1038;
// System.Text.Encoding
struct Encoding_t1037;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
 void StreamWriter__ctor_m38990 (StreamWriter_t5523 * __this, Stream_t1038 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamWriter__ctor_m41696 (StreamWriter_t5523 * __this, Stream_t1038 * ___stream, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
 void StreamWriter__ctor_m54711 (StreamWriter_t5523 * __this, Stream_t1038 * ___stream, Encoding_t1037 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding)
 void StreamWriter__ctor_m41334 (StreamWriter_t5523 * __this, String_t* ___path, bool ___append, Encoding_t1037 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding,System.Int32)
 void StreamWriter__ctor_m54712 (StreamWriter_t5523 * __this, String_t* ___path, bool ___append, Encoding_t1037 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
 void StreamWriter__cctor_m54713 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
 void StreamWriter_Initialize_m54714 (StreamWriter_t5523 * __this, Encoding_t1037 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
 void StreamWriter_set_AutoFlush_m54715 (StreamWriter_t5523 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.StreamWriter::get_BaseStream()
 Stream_t1038 * StreamWriter_get_BaseStream_m49287 (StreamWriter_t5523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StreamWriter::get_Encoding()
 Encoding_t1037 * StreamWriter_get_Encoding_m54716 (StreamWriter_t5523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
 void StreamWriter_Dispose_m54717 (StreamWriter_t5523 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
 void StreamWriter_Flush_m54718 (StreamWriter_t5523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
 void StreamWriter_FlushBytes_m54719 (StreamWriter_t5523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
 void StreamWriter_Decode_m54720 (StreamWriter_t5523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void StreamWriter_Write_m54721 (StreamWriter_t5523 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
 void StreamWriter_LowLevelWrite_m54722 (StreamWriter_t5523 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
 void StreamWriter_LowLevelWrite_m54723 (StreamWriter_t5523 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
 void StreamWriter_Write_m54724 (StreamWriter_t5523 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
 void StreamWriter_Write_m54725 (StreamWriter_t5523 * __this, CharU5BU5D_t1016* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
 void StreamWriter_Write_m54726 (StreamWriter_t5523 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
 void StreamWriter_Close_m38992 (StreamWriter_t5523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
 void StreamWriter_Finalize_m54727 (StreamWriter_t5523 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
