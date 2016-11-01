#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t7924;
// System.Text.Encoding
struct Encoding_t1037;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
 void NullTextWriter__ctor_m54755 (NullTextWriter_t7924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.TextWriter/NullTextWriter::get_Encoding()
 Encoding_t1037 * NullTextWriter_get_Encoding_m54756 (NullTextWriter_t7924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
 void NullTextWriter_Write_m54757 (NullTextWriter_t7924 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
 void NullTextWriter_Write_m54758 (NullTextWriter_t7924 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
 void NullTextWriter_Write_m54759 (NullTextWriter_t7924 * __this, CharU5BU5D_t1016* ___value, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
