#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonException
struct JsonException_t6293;
// System.Exception
struct Exception_t972;
// System.String
struct String_t;
// LitJson.ParserToken
#include "LitJson_LitJson_ParserToken.h"

// System.Void LitJson.JsonException::.ctor()
 void JsonException__ctor_m44280 (JsonException_t6293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken)
 void JsonException__ctor_m44281 (JsonException_t6293 * __this, int32_t ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
 void JsonException__ctor_m44282 (JsonException_t6293 * __this, int32_t ___token, Exception_t972 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
 void JsonException__ctor_m44283 (JsonException_t6293 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32,System.Exception)
 void JsonException__ctor_m44284 (JsonException_t6293 * __this, int32_t ___c, Exception_t972 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
 void JsonException__ctor_m44285 (JsonException_t6293 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String,System.Exception)
 void JsonException__ctor_m44286 (JsonException_t6293 * __this, String_t* ___message, Exception_t972 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
