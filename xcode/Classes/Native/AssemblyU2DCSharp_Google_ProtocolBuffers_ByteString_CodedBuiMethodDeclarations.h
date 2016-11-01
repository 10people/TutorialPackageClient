#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Google.ProtocolBuffers.ByteString/CodedBuilder
struct CodedBuilder_t4356;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3022;

// System.Void Google.ProtocolBuffers.ByteString/CodedBuilder::.ctor(System.Int32)
 void CodedBuilder__ctor_m30813 (CodedBuilder_t4356 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString/CodedBuilder::Build()
 ByteString_t3022 * CodedBuilder_Build_m30814 (CodedBuilder_t4356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.ByteString/CodedBuilder::get_CodedOutput()
 CodedOutputStream_t2918 * CodedBuilder_get_CodedOutput_m30815 (CodedBuilder_t4356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
