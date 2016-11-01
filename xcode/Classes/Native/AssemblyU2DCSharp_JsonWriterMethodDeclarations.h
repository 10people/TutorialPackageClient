#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// JsonWriter
struct JsonWriter_t1060;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Char[]
struct CharU5BU5D_t1016;
// System.String
struct String_t;
// Condition
#include "AssemblyU2DCSharp_Condition.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void JsonWriter::.ctor()
 void JsonWriter__ctor_m6826 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::.ctor(System.Text.StringBuilder)
 void JsonWriter__ctor_m6827 (JsonWriter_t1060 * __this, StringBuilder_t1097 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::.ctor(System.IO.TextWriter)
 void JsonWriter__ctor_m6828 (JsonWriter_t1060 * __this, TextWriter_t1098 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::.cctor()
 void JsonWriter__cctor_m6829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonWriter::get_IndentValue()
 int32_t JsonWriter_get_IndentValue_m6830 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::set_IndentValue(System.Int32)
 void JsonWriter_set_IndentValue_m6831 (JsonWriter_t1060 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonWriter::get_PrettyPrint()
 bool JsonWriter_get_PrettyPrint_m6832 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::set_PrettyPrint(System.Boolean)
 void JsonWriter_set_PrettyPrint_m6833 (JsonWriter_t1060 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter JsonWriter::get_TextWriter()
 TextWriter_t1098 * JsonWriter_get_TextWriter_m6834 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonWriter::get_Validate()
 bool JsonWriter_get_Validate_m6835 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::set_Validate(System.Boolean)
 void JsonWriter_set_Validate_m6836 (JsonWriter_t1060 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::DoValidation(Condition)
 void JsonWriter_DoValidation_m6837 (JsonWriter_t1060 * __this, int32_t ___cond, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Init()
 void JsonWriter_Init_m6838 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::IntToHex(System.Int32,System.Char[])
 void JsonWriter_IntToHex_m6839 (Object_t * __this/* static, unused */, int32_t ___n, CharU5BU5D_t1016* ___hex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Indent()
 void JsonWriter_Indent_m6840 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Put(System.String)
 void JsonWriter_Put_m6841 (JsonWriter_t1060 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::PutNewline()
 void JsonWriter_PutNewline_m6842 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::PutNewline(System.Boolean)
 void JsonWriter_PutNewline_m6843 (JsonWriter_t1060 * __this, bool ___add_comma, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::PutString(System.String)
 void JsonWriter_PutString_m6844 (JsonWriter_t1060 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Unindent()
 void JsonWriter_Unindent_m6845 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JsonWriter::ToString()
 String_t* JsonWriter_ToString_m6846 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Reset()
 void JsonWriter_Reset_m6847 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Write(System.Boolean)
 void JsonWriter_Write_m6848 (JsonWriter_t1060 * __this, bool ___boolean, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Write(System.Decimal)
 void JsonWriter_Write_m6849 (JsonWriter_t1060 * __this, Decimal_t1099  ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Write(System.Double)
 void JsonWriter_Write_m6850 (JsonWriter_t1060 * __this, double ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Write(System.Int32)
 void JsonWriter_Write_m6851 (JsonWriter_t1060 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Write(System.Int64)
 void JsonWriter_Write_m6852 (JsonWriter_t1060 * __this, int64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Write(System.String)
 void JsonWriter_Write_m6853 (JsonWriter_t1060 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::Write(System.UInt64)
 void JsonWriter_Write_m6854 (JsonWriter_t1060 * __this, uint64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::WriteArrayEnd()
 void JsonWriter_WriteArrayEnd_m6855 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::WriteArrayStart()
 void JsonWriter_WriteArrayStart_m6856 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::WriteObjectEnd()
 void JsonWriter_WriteObjectEnd_m6857 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::WriteObjectStart()
 void JsonWriter_WriteObjectStart_m6858 (JsonWriter_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonWriter::WritePropertyName(System.String)
 void JsonWriter_WritePropertyName_m6859 (JsonWriter_t1060 * __this, String_t* ___property_name, MethodInfo* method) IL2CPP_METHOD_ATTR;
