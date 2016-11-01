#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TableException
struct TableException_t140;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t142;

// System.Void TableException::.ctor(System.String)
 void TableException__ctor_m446 (TableException_t140 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TableException TableException::ErrorReader(System.String,System.Object[])
 TableException_t140 * TableException_ErrorReader_m447 (Object_t * __this/* static, unused */, String_t* ___fort, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
