#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonWriter
struct JsonWriter_t6286;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Char[]
struct CharU5BU5D_t1016;
// System.String
struct String_t;
// LitJson.Condition
#include "LitJson_LitJson_Condition.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void LitJson.JsonWriter::.ctor()
 void JsonWriter__ctor_m44380 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
 void JsonWriter__ctor_m44381 (JsonWriter_t6286 * __this, StringBuilder_t1097 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
 void JsonWriter__ctor_m44382 (JsonWriter_t6286 * __this, TextWriter_t1098 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.cctor()
 void JsonWriter__cctor_m44383 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonWriter::get_IndentValue()
 int32_t JsonWriter_get_IndentValue_m44384 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
 void JsonWriter_set_IndentValue_m44385 (JsonWriter_t6286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
 bool JsonWriter_get_PrettyPrint_m44386 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
 void JsonWriter_set_PrettyPrint_m44387 (JsonWriter_t6286 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
 TextWriter_t1098 * JsonWriter_get_TextWriter_m44388 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_Validate()
 bool JsonWriter_get_Validate_m44389 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
 void JsonWriter_set_Validate_m44390 (JsonWriter_t6286 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
 void JsonWriter_DoValidation_m44391 (JsonWriter_t6286 * __this, int32_t ___cond, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
 void JsonWriter_Init_m44392 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
 void JsonWriter_IntToHex_m44393 (Object_t * __this/* static, unused */, int32_t ___n, CharU5BU5D_t1016* ___hex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Indent()
 void JsonWriter_Indent_m44394 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
 void JsonWriter_Put_m44395 (JsonWriter_t6286 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
 void JsonWriter_PutNewline_m44396 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
 void JsonWriter_PutNewline_m44397 (JsonWriter_t6286 * __this, bool ___add_comma, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
 void JsonWriter_PutString_m44398 (JsonWriter_t6286 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Unindent()
 void JsonWriter_Unindent_m44399 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
 String_t* JsonWriter_ToString_m44400 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Reset()
 void JsonWriter_Reset_m44401 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
 void JsonWriter_Write_m44402 (JsonWriter_t6286 * __this, bool ___boolean, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
 void JsonWriter_Write_m44403 (JsonWriter_t6286 * __this, Decimal_t1099  ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Double)
 void JsonWriter_Write_m44404 (JsonWriter_t6286 * __this, double ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
 void JsonWriter_Write_m44405 (JsonWriter_t6286 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int64)
 void JsonWriter_Write_m44406 (JsonWriter_t6286 * __this, int64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
 void JsonWriter_Write_m44407 (JsonWriter_t6286 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
 void JsonWriter_Write_m44408 (JsonWriter_t6286 * __this, uint64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
 void JsonWriter_WriteArrayEnd_m44409 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayStart()
 void JsonWriter_WriteArrayStart_m44410 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
 void JsonWriter_WriteObjectEnd_m44411 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectStart()
 void JsonWriter_WriteObjectStart_m44412 (JsonWriter_t6286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
 void JsonWriter_WritePropertyName_m44413 (JsonWriter_t6286 * __this, String_t* ___property_name, MethodInfo* method) IL2CPP_METHOD_ATTR;
