#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t7925;
// System.Text.Encoding
struct Encoding_t1037;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Object
struct Object_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
 void SynchronizedWriter__ctor_m54766 (SynchronizedWriter_t7925 * __this, TextWriter_t1098 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
 void SynchronizedWriter_Close_m54767 (SynchronizedWriter_t7925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
 void SynchronizedWriter_Flush_m54768 (SynchronizedWriter_t7925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
 void SynchronizedWriter_Write_m54769 (SynchronizedWriter_t7925 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
 void SynchronizedWriter_Write_m54770 (SynchronizedWriter_t7925 * __this, CharU5BU5D_t1016* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
 void SynchronizedWriter_Write_m54771 (SynchronizedWriter_t7925 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
 void SynchronizedWriter_Write_m54772 (SynchronizedWriter_t7925 * __this, String_t* ___format, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
 void SynchronizedWriter_Write_m54773 (SynchronizedWriter_t7925 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
 void SynchronizedWriter_WriteLine_m54774 (SynchronizedWriter_t7925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
 void SynchronizedWriter_WriteLine_m54775 (SynchronizedWriter_t7925 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
 void SynchronizedWriter_WriteLine_m54776 (SynchronizedWriter_t7925 * __this, String_t* ___format, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.SynchronizedWriter::get_Encoding()
 Encoding_t1037 * SynchronizedWriter_get_Encoding_m54777 (SynchronizedWriter_t7925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedWriter::get_NewLine()
 String_t* SynchronizedWriter_get_NewLine_m54778 (SynchronizedWriter_t7925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
