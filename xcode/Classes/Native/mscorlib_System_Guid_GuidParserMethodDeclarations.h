#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid/GuidParser
struct GuidParser_t8248;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid/GuidParser::.ctor(System.String)
 void GuidParser__ctor_m56826 (GuidParser_t8248 * __this, String_t* ___src, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::Reset()
 void GuidParser_Reset_m56827 (GuidParser_t8248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::AtEnd()
 bool GuidParser_AtEnd_m56828 (GuidParser_t8248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ThrowFormatException()
 void GuidParser_ThrowFormatException_m56829 (GuidParser_t8248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
 uint64_t GuidParser_ParseHex_m56830 (GuidParser_t8248 * __this, int32_t ___length, bool ___strictLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
 bool GuidParser_ParseOptChar_m56831 (GuidParser_t8248 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
 void GuidParser_ParseChar_m56832 (GuidParser_t8248 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid1()
 Guid_t6777  GuidParser_ParseGuid1_m56833 (GuidParser_t8248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseHexPrefix()
 void GuidParser_ParseHexPrefix_m56834 (GuidParser_t8248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid2()
 Guid_t6777  GuidParser_ParseGuid2_m56835 (GuidParser_t8248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::Parse()
 Guid_t6777  GuidParser_Parse_m56836 (GuidParser_t8248 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
