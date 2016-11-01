#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// JsonReader
struct JsonReader_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1019;
// System.Int32[]
struct Int32U5BU5D_t116;
// JsonToken
#include "AssemblyU2DCSharp_JsonToken.h"
// ParserToken
#include "AssemblyU2DCSharp_ParserToken.h"

// System.Void JsonReader::.ctor(System.String)
 void JsonReader__ctor_m6805 (JsonReader_t1088 * __this, String_t* ___json_text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::.ctor(System.IO.TextReader)
 void JsonReader__ctor_m6806 (JsonReader_t1088 * __this, TextReader_t1019 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::.ctor(System.IO.TextReader,System.Boolean)
 void JsonReader__ctor_m6807 (JsonReader_t1088 * __this, TextReader_t1019 * ___reader, bool ___owned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::.cctor()
 void JsonReader__cctor_m6808 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonReader::get_AllowComments()
 bool JsonReader_get_AllowComments_m6809 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::set_AllowComments(System.Boolean)
 void JsonReader_set_AllowComments_m6810 (JsonReader_t1088 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonReader::get_AllowSingleQuotedStrings()
 bool JsonReader_get_AllowSingleQuotedStrings_m6811 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
 void JsonReader_set_AllowSingleQuotedStrings_m6812 (JsonReader_t1088 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonReader::get_EndOfInput()
 bool JsonReader_get_EndOfInput_m6813 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonReader::get_EndOfJson()
 bool JsonReader_get_EndOfJson_m6814 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonToken JsonReader::get_Token()
 int32_t JsonReader_get_Token_m6815 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonReader::get_Value()
 Object_t * JsonReader_get_Value_m6816 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::PopulateParseTable()
 void JsonReader_PopulateParseTable_m6817 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::TableAddCol(ParserToken,System.Int32,System.Int32[])
 void JsonReader_TableAddCol_m6818 (Object_t * __this/* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t116* ___symbols, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::TableAddRow(ParserToken)
 void JsonReader_TableAddRow_m6819 (Object_t * __this/* static, unused */, int32_t ___rule, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::ProcessNumber(System.String)
 void JsonReader_ProcessNumber_m6820 (JsonReader_t1088 * __this, String_t* ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::ProcessSymbol()
 void JsonReader_ProcessSymbol_m6821 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonReader::ReadToken()
 bool JsonReader_ReadToken_m6822 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonReader::Close()
 void JsonReader_Close_m6823 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonReader::Read()
 bool JsonReader_Read_m6824 (JsonReader_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
