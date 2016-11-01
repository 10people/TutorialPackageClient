#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonReader
struct JsonReader_t6310;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1019;
// System.Int32[]
struct Int32U5BU5D_t116;
// LitJson.JsonToken
#include "LitJson_LitJson_JsonToken.h"
// LitJson.ParserToken
#include "LitJson_LitJson_ParserToken.h"

// System.Void LitJson.JsonReader::.ctor(System.String)
 void JsonReader__ctor_m44357 (JsonReader_t6310 * __this, String_t* ___json_text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
 void JsonReader__ctor_m44358 (JsonReader_t6310 * __this, TextReader_t1019 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
 void JsonReader__ctor_m44359 (JsonReader_t6310 * __this, TextReader_t1019 * ___reader, bool ___owned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
 void JsonReader__cctor_m44360 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowComments()
 bool JsonReader_get_AllowComments_m44361 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
 void JsonReader_set_AllowComments_m44362 (JsonReader_t6310 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
 bool JsonReader_get_AllowSingleQuotedStrings_m44363 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
 void JsonReader_set_AllowSingleQuotedStrings_m44364 (JsonReader_t6310 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
 bool JsonReader_get_SkipNonMembers_m44365 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_SkipNonMembers(System.Boolean)
 void JsonReader_set_SkipNonMembers_m44366 (JsonReader_t6310 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfInput()
 bool JsonReader_get_EndOfInput_m44367 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfJson()
 bool JsonReader_get_EndOfJson_m44368 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
 int32_t JsonReader_get_Token_m44369 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
 Object_t * JsonReader_get_Value_m44370 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
 void JsonReader_PopulateParseTable_m44371 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
 void JsonReader_TableAddCol_m44372 (Object_t * __this/* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t116* ___symbols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
 void JsonReader_TableAddRow_m44373 (Object_t * __this/* static, unused */, int32_t ___rule, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
 void JsonReader_ProcessNumber_m44374 (JsonReader_t6310 * __this, String_t* ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
 void JsonReader_ProcessSymbol_m44375 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
 bool JsonReader_ReadToken_m44376 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
 void JsonReader_Close_m44377 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
 bool JsonReader_Read_m44378 (JsonReader_t6310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
