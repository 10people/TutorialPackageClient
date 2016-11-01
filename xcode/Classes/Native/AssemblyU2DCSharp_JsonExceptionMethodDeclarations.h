#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// JsonException
struct JsonException_t1067;
// System.Exception
struct Exception_t972;
// System.String
struct String_t;
// ParserToken
#include "AssemblyU2DCSharp_ParserToken.h"

// System.Void JsonException::.ctor()
 void JsonException__ctor_m6741 (JsonException_t1067 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonException::.ctor(ParserToken)
 void JsonException__ctor_m6742 (JsonException_t1067 * __this, int32_t ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonException::.ctor(ParserToken,System.Exception)
 void JsonException__ctor_m6743 (JsonException_t1067 * __this, int32_t ___token, Exception_t972 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonException::.ctor(System.Int32)
 void JsonException__ctor_m6744 (JsonException_t1067 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonException::.ctor(System.Int32,System.Exception)
 void JsonException__ctor_m6745 (JsonException_t1067 * __this, int32_t ___c, Exception_t972 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonException::.ctor(System.String)
 void JsonException__ctor_m6746 (JsonException_t1067 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonException::.ctor(System.String,System.Exception)
 void JsonException__ctor_m6747 (JsonException_t1067 * __this, String_t* ___message, Exception_t972 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
