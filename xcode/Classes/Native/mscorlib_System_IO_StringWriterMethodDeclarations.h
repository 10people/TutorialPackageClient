#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringWriter
struct StringWriter_t5471;
// System.Text.Encoding
struct Encoding_t1037;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.IFormatProvider
struct IFormatProvider_t1076;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.IO.StringWriter::.ctor()
 void StringWriter__ctor_m38758 (StringWriter_t5471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
 void StringWriter__ctor_m38895 (StringWriter_t5471 * __this, StringBuilder_t1097 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
 void StringWriter__ctor_m54735 (StringWriter_t5471 * __this, StringBuilder_t1097 * ___sb, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
 Encoding_t1037 * StringWriter_get_Encoding_m54736 (StringWriter_t5471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
 void StringWriter_Close_m54737 (StringWriter_t5471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
 void StringWriter_Dispose_m54738 (StringWriter_t5471 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder()
 StringBuilder_t1097 * StringWriter_GetStringBuilder_m49292 (StringWriter_t5471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
 String_t* StringWriter_ToString_m38759 (StringWriter_t5471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
 void StringWriter_Write_m54739 (StringWriter_t5471 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
 void StringWriter_Write_m54740 (StringWriter_t5471 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
 void StringWriter_Write_m54741 (StringWriter_t5471 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
